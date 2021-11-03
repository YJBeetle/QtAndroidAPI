#pragma once

#include "../../../JObject.hpp"

namespace android::icu::util
{
	class ULocale_AvailableType;
}
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
	class ULocale : public JObject
	{
	public:
		// Fields
		static android::icu::util::ULocale CANADA();
		static android::icu::util::ULocale CANADA_FRENCH();
		static android::icu::util::ULocale CHINA();
		static android::icu::util::ULocale CHINESE();
		static android::icu::util::ULocale ENGLISH();
		static android::icu::util::ULocale FRANCE();
		static android::icu::util::ULocale FRENCH();
		static android::icu::util::ULocale GERMAN();
		static android::icu::util::ULocale GERMANY();
		static android::icu::util::ULocale ITALIAN();
		static android::icu::util::ULocale ITALY();
		static android::icu::util::ULocale JAPAN();
		static android::icu::util::ULocale JAPANESE();
		static android::icu::util::ULocale KOREA();
		static android::icu::util::ULocale KOREAN();
		static android::icu::util::ULocale PRC();
		static jchar PRIVATE_USE_EXTENSION();
		static android::icu::util::ULocale ROOT();
		static android::icu::util::ULocale SIMPLIFIED_CHINESE();
		static android::icu::util::ULocale TAIWAN();
		static android::icu::util::ULocale TRADITIONAL_CHINESE();
		static android::icu::util::ULocale UK();
		static jchar UNICODE_LOCALE_EXTENSION();
		static android::icu::util::ULocale US();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ULocale(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ULocale(QAndroidJniObject obj);
		
		// Constructors
		ULocale(jstring arg0);
		ULocale(jstring arg0, jstring arg1);
		ULocale(jstring arg0, jstring arg1, jstring arg2);
		
		// Methods
		static android::icu::util::ULocale acceptLanguage(jarray arg0, jbooleanArray arg1);
		static android::icu::util::ULocale acceptLanguage(jstring arg0, jbooleanArray arg1);
		static android::icu::util::ULocale acceptLanguage(jarray arg0, jarray arg1, jbooleanArray arg2);
		static android::icu::util::ULocale acceptLanguage(jstring arg0, jarray arg1, jbooleanArray arg2);
		static android::icu::util::ULocale addLikelySubtags(android::icu::util::ULocale arg0);
		static jstring canonicalize(jstring arg0);
		static android::icu::util::ULocale createCanonical(jstring arg0);
		static android::icu::util::ULocale forLanguageTag(jstring arg0);
		static android::icu::util::ULocale forLocale(java::util::Locale arg0);
		static jarray getAvailableLocales();
		static JObject getAvailableLocalesByType(android::icu::util::ULocale_AvailableType arg0);
		static jstring getBaseName(jstring arg0);
		static jstring getCountry(jstring arg0);
		static android::icu::util::ULocale getDefault();
		static android::icu::util::ULocale getDefault(android::icu::util::ULocale_Category arg0);
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
		static JObject getKeywords(jstring arg0);
		static jstring getLanguage(jstring arg0);
		static jstring getName(jstring arg0);
		static jstring getScript(jstring arg0);
		static jstring getVariant(jstring arg0);
		static android::icu::util::ULocale minimizeSubtags(android::icu::util::ULocale arg0);
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
		JObject getExtensionKeys();
		android::icu::util::ULocale getFallback();
		jstring getISO3Country();
		jstring getISO3Language();
		jstring getKeywordValue(jstring arg0);
		JObject getKeywords();
		jstring getLanguage();
		jstring getLineOrientation();
		jstring getName();
		jstring getScript();
		JObject getUnicodeLocaleAttributes();
		JObject getUnicodeLocaleKeys();
		jstring getUnicodeLocaleType(jstring arg0);
		jstring getVariant();
		jint hashCode();
		jboolean isRightToLeft();
		android::icu::util::ULocale setKeywordValue(jstring arg0, jstring arg1);
		jstring toLanguageTag();
		java::util::Locale toLocale();
		jstring toString();
	};
} // namespace android::icu::util

