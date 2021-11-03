#pragma once

#include "../../../JObject.hpp"

class JArray;
class JArray;
class JBooleanArray;
namespace android::icu::util
{
	class ULocale_AvailableType;
}
namespace android::icu::util
{
	class ULocale_Category;
}
class JObject;
class JString;
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
		ULocale(JString arg0);
		ULocale(JString arg0, JString arg1);
		ULocale(JString arg0, JString arg1, JString arg2);
		
		// Methods
		static android::icu::util::ULocale acceptLanguage(JArray arg0, JBooleanArray arg1);
		static android::icu::util::ULocale acceptLanguage(JString arg0, JBooleanArray arg1);
		static android::icu::util::ULocale acceptLanguage(JArray arg0, JArray arg1, JBooleanArray arg2);
		static android::icu::util::ULocale acceptLanguage(JString arg0, JArray arg1, JBooleanArray arg2);
		static android::icu::util::ULocale addLikelySubtags(android::icu::util::ULocale arg0);
		static JString canonicalize(JString arg0);
		static android::icu::util::ULocale createCanonical(JString arg0);
		static android::icu::util::ULocale forLanguageTag(JString arg0);
		static android::icu::util::ULocale forLocale(java::util::Locale arg0);
		static JArray getAvailableLocales();
		static JObject getAvailableLocalesByType(android::icu::util::ULocale_AvailableType arg0);
		static JString getBaseName(JString arg0);
		static JString getCountry(JString arg0);
		static android::icu::util::ULocale getDefault();
		static android::icu::util::ULocale getDefault(android::icu::util::ULocale_Category arg0);
		static JString getDisplayCountry(JString arg0, android::icu::util::ULocale arg1);
		static JString getDisplayCountry(JString arg0, JString arg1);
		static JString getDisplayKeyword(JString arg0);
		static JString getDisplayKeyword(JString arg0, android::icu::util::ULocale arg1);
		static JString getDisplayKeyword(JString arg0, JString arg1);
		static JString getDisplayKeywordValue(JString arg0, JString arg1, android::icu::util::ULocale arg2);
		static JString getDisplayKeywordValue(JString arg0, JString arg1, JString arg2);
		static JString getDisplayLanguage(JString arg0, android::icu::util::ULocale arg1);
		static JString getDisplayLanguage(JString arg0, JString arg1);
		static JString getDisplayLanguageWithDialect(JString arg0, android::icu::util::ULocale arg1);
		static JString getDisplayLanguageWithDialect(JString arg0, JString arg1);
		static JString getDisplayName(JString arg0, android::icu::util::ULocale arg1);
		static JString getDisplayName(JString arg0, JString arg1);
		static JString getDisplayNameWithDialect(JString arg0, android::icu::util::ULocale arg1);
		static JString getDisplayNameWithDialect(JString arg0, JString arg1);
		static JString getDisplayScript(JString arg0, android::icu::util::ULocale arg1);
		static JString getDisplayScript(JString arg0, JString arg1);
		static JString getDisplayVariant(JString arg0, android::icu::util::ULocale arg1);
		static JString getDisplayVariant(JString arg0, JString arg1);
		static JString getFallback(JString arg0);
		static JString getISO3Country(JString arg0);
		static JString getISO3Language(JString arg0);
		static JArray getISOCountries();
		static JArray getISOLanguages();
		static JString getKeywordValue(JString arg0, JString arg1);
		static JObject getKeywords(JString arg0);
		static JString getLanguage(JString arg0);
		static JString getName(JString arg0);
		static JString getScript(JString arg0);
		static JString getVariant(JString arg0);
		static android::icu::util::ULocale minimizeSubtags(android::icu::util::ULocale arg0);
		static JString setKeywordValue(JString arg0, JString arg1, JString arg2);
		static JString toLegacyKey(JString arg0);
		static JString toLegacyType(JString arg0, JString arg1);
		static JString toUnicodeLocaleKey(JString arg0);
		static JString toUnicodeLocaleType(JString arg0, JString arg1);
		JObject clone();
		jint compareTo(android::icu::util::ULocale arg0);
		jint compareTo(JObject arg0);
		jboolean equals(JObject arg0);
		JString getBaseName();
		JString getCharacterOrientation();
		JString getCountry();
		JString getDisplayCountry();
		JString getDisplayCountry(android::icu::util::ULocale arg0);
		JString getDisplayKeywordValue(JString arg0);
		JString getDisplayKeywordValue(JString arg0, android::icu::util::ULocale arg1);
		JString getDisplayLanguage();
		JString getDisplayLanguage(android::icu::util::ULocale arg0);
		JString getDisplayLanguageWithDialect();
		JString getDisplayLanguageWithDialect(android::icu::util::ULocale arg0);
		JString getDisplayName();
		JString getDisplayName(android::icu::util::ULocale arg0);
		JString getDisplayNameWithDialect();
		JString getDisplayNameWithDialect(android::icu::util::ULocale arg0);
		JString getDisplayScript();
		JString getDisplayScript(android::icu::util::ULocale arg0);
		JString getDisplayVariant();
		JString getDisplayVariant(android::icu::util::ULocale arg0);
		JString getExtension(jchar arg0);
		JObject getExtensionKeys();
		android::icu::util::ULocale getFallback();
		JString getISO3Country();
		JString getISO3Language();
		JString getKeywordValue(JString arg0);
		JObject getKeywords();
		JString getLanguage();
		JString getLineOrientation();
		JString getName();
		JString getScript();
		JObject getUnicodeLocaleAttributes();
		JObject getUnicodeLocaleKeys();
		JString getUnicodeLocaleType(JString arg0);
		JString getVariant();
		jint hashCode();
		jboolean isRightToLeft();
		android::icu::util::ULocale setKeywordValue(JString arg0, JString arg1);
		JString toLanguageTag();
		java::util::Locale toLocale();
		JString toString();
	};
} // namespace android::icu::util

