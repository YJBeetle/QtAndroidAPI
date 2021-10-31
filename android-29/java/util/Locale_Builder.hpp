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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Locale_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Locale_Builder(QAndroidJniObject obj);
		
		// Constructors
		Locale_Builder();
		
		// Methods
		QAndroidJniObject addUnicodeLocaleAttribute(jstring arg0);
		QAndroidJniObject build();
		QAndroidJniObject clear();
		QAndroidJniObject clearExtensions();
		QAndroidJniObject removeUnicodeLocaleAttribute(jstring arg0);
		QAndroidJniObject setExtension(jchar arg0, jstring arg1);
		QAndroidJniObject setLanguage(jstring arg0);
		QAndroidJniObject setLanguageTag(jstring arg0);
		QAndroidJniObject setLocale(java::util::Locale arg0);
		QAndroidJniObject setRegion(jstring arg0);
		QAndroidJniObject setScript(jstring arg0);
		QAndroidJniObject setUnicodeLocaleKeyword(jstring arg0, jstring arg1);
		QAndroidJniObject setVariant(jstring arg0);
	};
} // namespace java::util

