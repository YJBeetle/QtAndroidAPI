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
		static java::util::Locale CANADA();
		static java::util::Locale CANADA_FRENCH();
		static java::util::Locale CHINA();
		static java::util::Locale CHINESE();
		static java::util::Locale ENGLISH();
		static java::util::Locale FRANCE();
		static java::util::Locale FRENCH();
		static java::util::Locale GERMAN();
		static java::util::Locale GERMANY();
		static java::util::Locale ITALIAN();
		static java::util::Locale ITALY();
		static java::util::Locale JAPAN();
		static java::util::Locale JAPANESE();
		static java::util::Locale KOREA();
		static java::util::Locale KOREAN();
		static java::util::Locale PRC();
		static jchar PRIVATE_USE_EXTENSION();
		static java::util::Locale ROOT();
		static java::util::Locale SIMPLIFIED_CHINESE();
		static java::util::Locale TAIWAN();
		static java::util::Locale TRADITIONAL_CHINESE();
		static java::util::Locale UK();
		static jchar UNICODE_LOCALE_EXTENSION();
		static java::util::Locale US();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Locale(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Locale(QAndroidJniObject obj);
		
		// Constructors
		Locale(jstring arg0);
		Locale(jstring arg0, jstring arg1);
		Locale(jstring arg0, jstring arg1, jstring arg2);
		
		// Methods
		static __JniBaseClass filter(__JniBaseClass arg0, __JniBaseClass arg1);
		static __JniBaseClass filter(__JniBaseClass arg0, __JniBaseClass arg1, java::util::Locale_FilteringMode arg2);
		static __JniBaseClass filterTags(__JniBaseClass arg0, __JniBaseClass arg1);
		static __JniBaseClass filterTags(__JniBaseClass arg0, __JniBaseClass arg1, java::util::Locale_FilteringMode arg2);
		static java::util::Locale forLanguageTag(jstring arg0);
		static jarray getAvailableLocales();
		static java::util::Locale getDefault();
		static java::util::Locale getDefault(java::util::Locale_Category arg0);
		static jarray getISOCountries();
		static __JniBaseClass getISOCountries(__JniBaseClass arg0);
		static jarray getISOLanguages();
		static java::util::Locale lookup(__JniBaseClass arg0, __JniBaseClass arg1);
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
		__JniBaseClass getExtensionKeys();
		jstring getISO3Country();
		jstring getISO3Language();
		jstring getLanguage();
		jstring getScript();
		__JniBaseClass getUnicodeLocaleAttributes();
		__JniBaseClass getUnicodeLocaleKeys();
		jstring getUnicodeLocaleType(jstring arg0);
		jstring getVariant();
		jboolean hasExtensions();
		jint hashCode();
		java::util::Locale stripExtensions();
		jstring toLanguageTag();
		jstring toString();
	};
} // namespace java::util

