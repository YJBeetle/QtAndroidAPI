#pragma once

#include "../../../JObject.hpp"

class JObjectArray;
namespace android::icu::util
{
	class ULocale;
}
class JString;
namespace java::util
{
	class Locale;
}

namespace android::icu::text
{
	class ListFormatter : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ListFormatter(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ListFormatter(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static android::icu::text::ListFormatter getInstance();
		static android::icu::text::ListFormatter getInstance(android::icu::util::ULocale arg0);
		static android::icu::text::ListFormatter getInstance(java::util::Locale arg0);
		JString format(JObjectArray arg0) const;
		JString format(JObject arg0) const;
		JString getPatternForNumItems(jint arg0) const;
	};
} // namespace android::icu::text

