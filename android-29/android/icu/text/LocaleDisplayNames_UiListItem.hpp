#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::icu::util
{
	class ULocale;
}

namespace android::icu::text
{
	class LocaleDisplayNames_UiListItem : public __JniBaseClass
	{
	public:
		// Fields
		QAndroidJniObject minimized();
		QAndroidJniObject modified();
		jstring nameInDisplayLocale();
		jstring nameInSelf();
		
		LocaleDisplayNames_UiListItem(QAndroidJniObject obj);
		// Constructors
		LocaleDisplayNames_UiListItem(android::icu::util::ULocale &arg0, android::icu::util::ULocale &arg1, jstring &arg2, jstring &arg3);
		LocaleDisplayNames_UiListItem(android::icu::util::ULocale &arg0, android::icu::util::ULocale &arg1, const QString &arg2, const QString &arg3);
		LocaleDisplayNames_UiListItem() = default;
		
		// Methods
		static QAndroidJniObject getComparator(__JniBaseClass arg0, jboolean arg1);
		jboolean equals(jobject arg0);
		jint hashCode();
		jstring toString();
	};
} // namespace android::icu::text

