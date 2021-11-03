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

namespace android::icu::text
{
	class ScientificNumberFormatter : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ScientificNumberFormatter(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ScientificNumberFormatter(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::icu::text::ScientificNumberFormatter getMarkupInstance(android::icu::text::DecimalFormat arg0, jstring arg1, jstring arg2);
		static android::icu::text::ScientificNumberFormatter getMarkupInstance(android::icu::util::ULocale arg0, jstring arg1, jstring arg2);
		static android::icu::text::ScientificNumberFormatter getSuperscriptInstance(android::icu::text::DecimalFormat arg0);
		static android::icu::text::ScientificNumberFormatter getSuperscriptInstance(android::icu::util::ULocale arg0);
		jstring format(jobject arg0);
	};
} // namespace android::icu::text

