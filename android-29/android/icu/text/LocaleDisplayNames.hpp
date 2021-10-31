#pragma once

#include "../../../__JniBaseClass.hpp"

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
namespace java::util
{
	class Locale;
}

namespace android::icu::text
{
	class LocaleDisplayNames : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit LocaleDisplayNames(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		LocaleDisplayNames(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::icu::text::LocaleDisplayNames getInstance(android::icu::util::ULocale arg0);
		static android::icu::text::LocaleDisplayNames getInstance(java::util::Locale arg0);
		static android::icu::text::LocaleDisplayNames getInstance(android::icu::util::ULocale arg0, jarray arg1);
		static android::icu::text::LocaleDisplayNames getInstance(android::icu::util::ULocale arg0, android::icu::text::LocaleDisplayNames_DialectHandling arg1);
		static android::icu::text::LocaleDisplayNames getInstance(java::util::Locale arg0, jarray arg1);
		android::icu::text::DisplayContext getContext(android::icu::text::DisplayContext_Type arg0);
		android::icu::text::LocaleDisplayNames_DialectHandling getDialectHandling();
		android::icu::util::ULocale getLocale();
		__JniBaseClass getUiList(__JniBaseClass arg0, jboolean arg1, __JniBaseClass arg2);
		__JniBaseClass getUiListCompareWholeItems(__JniBaseClass arg0, __JniBaseClass arg1);
		jstring keyDisplayName(jstring arg0);
		jstring keyValueDisplayName(jstring arg0, jstring arg1);
		jstring languageDisplayName(jstring arg0);
		jstring localeDisplayName(android::icu::util::ULocale arg0);
		jstring localeDisplayName(jstring arg0);
		jstring localeDisplayName(java::util::Locale arg0);
		jstring regionDisplayName(jstring arg0);
		jstring scriptDisplayName(jint arg0);
		jstring scriptDisplayName(jstring arg0);
		jstring variantDisplayName(jstring arg0);
	};
} // namespace android::icu::text

