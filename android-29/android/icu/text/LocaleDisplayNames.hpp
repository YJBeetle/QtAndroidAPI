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
		
		LocaleDisplayNames(QAndroidJniObject obj);
		// Constructors
		LocaleDisplayNames() = default;
		
		// Methods
		static QAndroidJniObject getInstance(android::icu::util::ULocale arg0);
		static QAndroidJniObject getInstance(java::util::Locale arg0);
		static QAndroidJniObject getInstance(android::icu::util::ULocale arg0, jarray arg1);
		static QAndroidJniObject getInstance(android::icu::util::ULocale arg0, android::icu::text::LocaleDisplayNames_DialectHandling arg1);
		static QAndroidJniObject getInstance(java::util::Locale arg0, jarray arg1);
		QAndroidJniObject getContext(android::icu::text::DisplayContext_Type arg0);
		QAndroidJniObject getDialectHandling();
		QAndroidJniObject getLocale();
		QAndroidJniObject getUiList(__JniBaseClass arg0, jboolean arg1, __JniBaseClass arg2);
		QAndroidJniObject getUiListCompareWholeItems(__JniBaseClass arg0, __JniBaseClass arg1);
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

