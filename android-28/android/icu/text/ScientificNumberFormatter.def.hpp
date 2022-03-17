#pragma once

#include "../../../JObject.hpp"

namespace android::icu::text
{
	class DecimalFormat;
}
namespace android::icu::util
{
	class ULocale;
}
class JObject;
class JString;

namespace android::icu::text
{
	class ScientificNumberFormatter : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ScientificNumberFormatter(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ScientificNumberFormatter(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static android::icu::text::ScientificNumberFormatter getMarkupInstance(android::icu::text::DecimalFormat arg0, JString arg1, JString arg2);
		static android::icu::text::ScientificNumberFormatter getMarkupInstance(android::icu::util::ULocale arg0, JString arg1, JString arg2);
		static android::icu::text::ScientificNumberFormatter getSuperscriptInstance(android::icu::text::DecimalFormat arg0);
		static android::icu::text::ScientificNumberFormatter getSuperscriptInstance(android::icu::util::ULocale arg0);
		JString format(JObject arg0) const;
	};
} // namespace android::icu::text

