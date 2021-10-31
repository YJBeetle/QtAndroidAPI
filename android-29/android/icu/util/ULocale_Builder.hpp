#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::icu::util
{
	class ULocale;
}

namespace android::icu::util
{
	class ULocale_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		ULocale_Builder(QAndroidJniObject obj);
		// Constructors
		ULocale_Builder();
		
		// Methods
		QAndroidJniObject addUnicodeLocaleAttribute(jstring arg0);
		QAndroidJniObject build();
		QAndroidJniObject clear();
		QAndroidJniObject clearExtensions();
		QAndroidJniObject removeUnicodeLocaleAttribute(jstring arg0);
		QAndroidJniObject setExtension(jchar arg0, jstring arg1);
		QAndroidJniObject setLanguage(jstring arg0);
		QAndroidJniObject setLanguageTag(jstring arg0);
		QAndroidJniObject setLocale(android::icu::util::ULocale arg0);
		QAndroidJniObject setRegion(jstring arg0);
		QAndroidJniObject setScript(jstring arg0);
		QAndroidJniObject setUnicodeLocaleKeyword(jstring arg0, jstring arg1);
		QAndroidJniObject setVariant(jstring arg0);
	};
} // namespace android::icu::util

