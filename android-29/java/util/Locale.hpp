#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::io
{
	class ObjectInputStream;
}
namespace java::io
{
	class ObjectOutputStream;
}
namespace java::util
{
	class Locale_Category;
}
namespace java::util
{
	class Locale_FilteringMode;
}
namespace java::util
{
	class Optional;
}

namespace java::util
{
	class Locale : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CANADA();
		static QAndroidJniObject CANADA_FRENCH();
		static QAndroidJniObject CHINA();
		static QAndroidJniObject CHINESE();
		static QAndroidJniObject ENGLISH();
		static QAndroidJniObject FRANCE();
		static QAndroidJniObject FRENCH();
		static QAndroidJniObject GERMAN();
		static QAndroidJniObject GERMANY();
		static QAndroidJniObject ITALIAN();
		static QAndroidJniObject ITALY();
		static QAndroidJniObject JAPAN();
		static QAndroidJniObject JAPANESE();
		static QAndroidJniObject KOREA();
		static QAndroidJniObject KOREAN();
		static QAndroidJniObject PRC();
		static jchar PRIVATE_USE_EXTENSION();
		static QAndroidJniObject ROOT();
		static QAndroidJniObject SIMPLIFIED_CHINESE();
		static QAndroidJniObject TAIWAN();
		static QAndroidJniObject TRADITIONAL_CHINESE();
		static QAndroidJniObject UK();
		static jchar UNICODE_LOCALE_EXTENSION();
		static QAndroidJniObject US();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Locale(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Locale(QAndroidJniObject obj);
		
		// Constructors
		Locale(jstring arg0);
		Locale(jstring arg0, jstring arg1);
		Locale(jstring arg0, jstring arg1, jstring arg2);
		
		// Methods
		static QAndroidJniObject filter(__JniBaseClass arg0, __JniBaseClass arg1);
		static QAndroidJniObject filter(__JniBaseClass arg0, __JniBaseClass arg1, java::util::Locale_FilteringMode arg2);
		static QAndroidJniObject filterTags(__JniBaseClass arg0, __JniBaseClass arg1);
		static QAndroidJniObject filterTags(__JniBaseClass arg0, __JniBaseClass arg1, java::util::Locale_FilteringMode arg2);
		static QAndroidJniObject forLanguageTag(jstring arg0);
		static jarray getAvailableLocales();
		static QAndroidJniObject getDefault();
		static QAndroidJniObject getDefault(java::util::Locale_Category arg0);
		static jarray getISOCountries();
		static QAndroidJniObject getISOCountries(__JniBaseClass arg0);
		static jarray getISOLanguages();
		static QAndroidJniObject lookup(__JniBaseClass arg0, __JniBaseClass arg1);
		static jstring lookupTag(__JniBaseClass arg0, __JniBaseClass arg1);
		static void setDefault(java::util::Locale arg0);
		static void setDefault(java::util::Locale_Category arg0, java::util::Locale arg1);
		jobject clone();
		jboolean equals(jobject arg0);
		jstring getCountry();
		jstring getDisplayCountry();
		jstring getDisplayCountry(java::util::Locale arg0);
		jstring getDisplayLanguage();
		jstring getDisplayLanguage(java::util::Locale arg0);
		jstring getDisplayName();
		jstring getDisplayName(java::util::Locale arg0);
		jstring getDisplayScript();
		jstring getDisplayScript(java::util::Locale arg0);
		jstring getDisplayVariant();
		jstring getDisplayVariant(java::util::Locale arg0);
		jstring getExtension(jchar arg0);
		QAndroidJniObject getExtensionKeys();
		jstring getISO3Country();
		jstring getISO3Language();
		jstring getLanguage();
		jstring getScript();
		QAndroidJniObject getUnicodeLocaleAttributes();
		QAndroidJniObject getUnicodeLocaleKeys();
		jstring getUnicodeLocaleType(jstring arg0);
		jstring getVariant();
		jboolean hasExtensions();
		jint hashCode();
		QAndroidJniObject stripExtensions();
		jstring toLanguageTag();
		jstring toString();
	};
} // namespace java::util

