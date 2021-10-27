#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::util
{
	class Locale;
}

namespace java::util
{
	class Locale_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		Locale_Builder(QAndroidJniObject obj);
		// Constructors
		Locale_Builder();
		
		// Methods
		QAndroidJniObject addUnicodeLocaleAttribute(jstring arg0);
		QAndroidJniObject addUnicodeLocaleAttribute(const QString &arg0);
		QAndroidJniObject build();
		QAndroidJniObject clear();
		QAndroidJniObject clearExtensions();
		QAndroidJniObject removeUnicodeLocaleAttribute(jstring arg0);
		QAndroidJniObject removeUnicodeLocaleAttribute(const QString &arg0);
		QAndroidJniObject setExtension(jchar arg0, jstring arg1);
		QAndroidJniObject setExtension(jchar arg0, const QString &arg1);
		QAndroidJniObject setLanguage(jstring arg0);
		QAndroidJniObject setLanguage(const QString &arg0);
		QAndroidJniObject setLanguageTag(jstring arg0);
		QAndroidJniObject setLanguageTag(const QString &arg0);
		QAndroidJniObject setLocale(java::util::Locale arg0);
		QAndroidJniObject setRegion(jstring arg0);
		QAndroidJniObject setRegion(const QString &arg0);
		QAndroidJniObject setScript(jstring arg0);
		QAndroidJniObject setScript(const QString &arg0);
		QAndroidJniObject setUnicodeLocaleKeyword(jstring arg0, jstring arg1);
		QAndroidJniObject setUnicodeLocaleKeyword(const QString &arg0, const QString &arg1);
		QAndroidJniObject setVariant(jstring arg0);
		QAndroidJniObject setVariant(const QString &arg0);
	};
} // namespace java::util

