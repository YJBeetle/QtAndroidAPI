#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::icu::util
{
	class ULocale_Category;
}
namespace java::util
{
	class Locale;
}

namespace android::icu::util
{
	class ULocale : public __JniBaseClass
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
		template<typename ...Ts> explicit ULocale(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ULocale(QAndroidJniObject obj);
		
		// Constructors
		ULocale(jstring arg0);
		ULocale(jstring arg0, jstring arg1);
		ULocale(jstring arg0, jstring arg1, jstring arg2);
		
		// Methods
		static QAndroidJniObject acceptLanguage(jarray arg0, jbooleanArray arg1);
		static QAndroidJniObject acceptLanguage(jstring arg0, jbooleanArray arg1);
		static QAndroidJniObject acceptLanguage(jarray arg0, jarray arg1, jbooleanArray arg2);
		static QAndroidJniObject acceptLanguage(jstring arg0, jarray arg1, jbooleanArray arg2);
		static QAndroidJniObject addLikelySubtags(android::icu::util::ULocale arg0);
		static jstring canonicalize(jstring arg0);
		static QAndroidJniObject createCanonical(jstring arg0);
		static QAndroidJniObject forLanguageTag(jstring arg0);
		static QAndroidJniObject forLocale(java::util::Locale arg0);
		static jarray getAvailableLocales();
		static jstring getBaseName(jstring arg0);
		static jstring getCountry(jstring arg0);
		static QAndroidJniObject getDefault();
		static QAndroidJniObject getDefault(android::icu::util::ULocale_Category arg0);
		static jstring getDisplayCountry(jstring arg0, android::icu::util::ULocale arg1);
		static jstring getDisplayCountry(jstring arg0, jstring arg1);
		static jstring getDisplayKeyword(jstring arg0);
		static jstring getDisplayKeyword(jstring arg0, android::icu::util::ULocale arg1);
		static jstring getDisplayKeyword(jstring arg0, jstring arg1);
		static jstring getDisplayKeywordValue(jstring arg0, jstring arg1, android::icu::util::ULocale arg2);
		static jstring getDisplayKeywordValue(jstring arg0, jstring arg1, jstring arg2);
		static jstring getDisplayLanguage(jstring arg0, android::icu::util::ULocale arg1);
		static jstring getDisplayLanguage(jstring arg0, jstring arg1);
		static jstring getDisplayLanguageWithDialect(jstring arg0, android::icu::util::ULocale arg1);
		static jstring getDisplayLanguageWithDialect(jstring arg0, jstring arg1);
		static jstring getDisplayName(jstring arg0, android::icu::util::ULocale arg1);
		static jstring getDisplayName(jstring arg0, jstring arg1);
		static jstring getDisplayNameWithDialect(jstring arg0, android::icu::util::ULocale arg1);
		static jstring getDisplayNameWithDialect(jstring arg0, jstring arg1);
		static jstring getDisplayScript(jstring arg0, android::icu::util::ULocale arg1);
		static jstring getDisplayScript(jstring arg0, jstring arg1);
		static jstring getDisplayVariant(jstring arg0, android::icu::util::ULocale arg1);
		static jstring getDisplayVariant(jstring arg0, jstring arg1);
		static jstring getFallback(jstring arg0);
		static jstring getISO3Country(jstring arg0);
		static jstring getISO3Language(jstring arg0);
		static jarray getISOCountries();
		static jarray getISOLanguages();
		static jstring getKeywordValue(jstring arg0, jstring arg1);
		static QAndroidJniObject getKeywords(jstring arg0);
		static jstring getLanguage(jstring arg0);
		static jstring getName(jstring arg0);
		static jstring getScript(jstring arg0);
		static jstring getVariant(jstring arg0);
		static QAndroidJniObject minimizeSubtags(android::icu::util::ULocale arg0);
		static jstring setKeywordValue(jstring arg0, jstring arg1, jstring arg2);
		static jstring toLegacyKey(jstring arg0);
		static jstring toLegacyType(jstring arg0, jstring arg1);
		static jstring toUnicodeLocaleKey(jstring arg0);
		static jstring toUnicodeLocaleType(jstring arg0, jstring arg1);
		jobject clone();
		jint compareTo(android::icu::util::ULocale arg0);
		jint compareTo(jobject arg0);
		jboolean equals(jobject arg0);
		jstring getBaseName();
		jstring getCharacterOrientation();
		jstring getCountry();
		jstring getDisplayCountry();
		jstring getDisplayCountry(android::icu::util::ULocale arg0);
		jstring getDisplayKeywordValue(jstring arg0);
		jstring getDisplayKeywordValue(jstring arg0, android::icu::util::ULocale arg1);
		jstring getDisplayLanguage();
		jstring getDisplayLanguage(android::icu::util::ULocale arg0);
		jstring getDisplayLanguageWithDialect();
		jstring getDisplayLanguageWithDialect(android::icu::util::ULocale arg0);
		jstring getDisplayName();
		jstring getDisplayName(android::icu::util::ULocale arg0);
		jstring getDisplayNameWithDialect();
		jstring getDisplayNameWithDialect(android::icu::util::ULocale arg0);
		jstring getDisplayScript();
		jstring getDisplayScript(android::icu::util::ULocale arg0);
		jstring getDisplayVariant();
		jstring getDisplayVariant(android::icu::util::ULocale arg0);
		jstring getExtension(jchar arg0);
		QAndroidJniObject getExtensionKeys();
		QAndroidJniObject getFallback();
		jstring getISO3Country();
		jstring getISO3Language();
		jstring getKeywordValue(jstring arg0);
		QAndroidJniObject getKeywords();
		jstring getLanguage();
		jstring getLineOrientation();
		jstring getName();
		jstring getScript();
		QAndroidJniObject getUnicodeLocaleAttributes();
		QAndroidJniObject getUnicodeLocaleKeys();
		jstring getUnicodeLocaleType(jstring arg0);
		jstring getVariant();
		jint hashCode();
		jboolean isRightToLeft();
		QAndroidJniObject setKeywordValue(jstring arg0, jstring arg1);
		jstring toLanguageTag();
		QAndroidJniObject toLocale();
		jstring toString();
	};
} // namespace android::icu::util

