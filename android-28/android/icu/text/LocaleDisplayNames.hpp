#pragma once

#include "../../../JObject.hpp"

class JArray;
namespace android::icu::text
{
	class DisplayContext;
}
namespace android::icu::text
{
	class DisplayContext_Type;
}
namespace android::icu::text
{
	class LocaleDisplayNames_DialectHandling;
}
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
	class LocaleDisplayNames : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit LocaleDisplayNames(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		LocaleDisplayNames(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::icu::text::LocaleDisplayNames getInstance(android::icu::util::ULocale arg0);
		static android::icu::text::LocaleDisplayNames getInstance(java::util::Locale arg0);
		static android::icu::text::LocaleDisplayNames getInstance(android::icu::util::ULocale arg0, JArray arg1);
		static android::icu::text::LocaleDisplayNames getInstance(android::icu::util::ULocale arg0, android::icu::text::LocaleDisplayNames_DialectHandling arg1);
		static android::icu::text::LocaleDisplayNames getInstance(java::util::Locale arg0, JArray arg1);
		android::icu::text::DisplayContext getContext(android::icu::text::DisplayContext_Type arg0);
		android::icu::text::LocaleDisplayNames_DialectHandling getDialectHandling();
		android::icu::util::ULocale getLocale();
		JObject getUiList(JObject arg0, jboolean arg1, JObject arg2);
		JObject getUiListCompareWholeItems(JObject arg0, JObject arg1);
		JString keyDisplayName(JString arg0);
		JString keyValueDisplayName(JString arg0, JString arg1);
		JString languageDisplayName(JString arg0);
		JString localeDisplayName(android::icu::util::ULocale arg0);
		JString localeDisplayName(JString arg0);
		JString localeDisplayName(java::util::Locale arg0);
		JString regionDisplayName(JString arg0);
		JString scriptDisplayName(jint arg0);
		JString scriptDisplayName(JString arg0);
		JString variantDisplayName(JString arg0);
	};
} // namespace android::icu::text

