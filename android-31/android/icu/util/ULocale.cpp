#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JBooleanArray.hpp"
#include "./ULocale_AvailableType.hpp"
#include "./ULocale_Category.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../../../java/util/Locale.hpp"
#include "./ULocale.hpp"

namespace android::icu::util
{
	// Fields
	android::icu::util::ULocale ULocale::CANADA()
	{
		return getStaticObjectField(
			"android.icu.util.ULocale",
			"CANADA",
			"Landroid/icu/util/ULocale;"
		);
	}
	android::icu::util::ULocale ULocale::CANADA_FRENCH()
	{
		return getStaticObjectField(
			"android.icu.util.ULocale",
			"CANADA_FRENCH",
			"Landroid/icu/util/ULocale;"
		);
	}
	android::icu::util::ULocale ULocale::CHINA()
	{
		return getStaticObjectField(
			"android.icu.util.ULocale",
			"CHINA",
			"Landroid/icu/util/ULocale;"
		);
	}
	android::icu::util::ULocale ULocale::CHINESE()
	{
		return getStaticObjectField(
			"android.icu.util.ULocale",
			"CHINESE",
			"Landroid/icu/util/ULocale;"
		);
	}
	android::icu::util::ULocale ULocale::ENGLISH()
	{
		return getStaticObjectField(
			"android.icu.util.ULocale",
			"ENGLISH",
			"Landroid/icu/util/ULocale;"
		);
	}
	android::icu::util::ULocale ULocale::FRANCE()
	{
		return getStaticObjectField(
			"android.icu.util.ULocale",
			"FRANCE",
			"Landroid/icu/util/ULocale;"
		);
	}
	android::icu::util::ULocale ULocale::FRENCH()
	{
		return getStaticObjectField(
			"android.icu.util.ULocale",
			"FRENCH",
			"Landroid/icu/util/ULocale;"
		);
	}
	android::icu::util::ULocale ULocale::GERMAN()
	{
		return getStaticObjectField(
			"android.icu.util.ULocale",
			"GERMAN",
			"Landroid/icu/util/ULocale;"
		);
	}
	android::icu::util::ULocale ULocale::GERMANY()
	{
		return getStaticObjectField(
			"android.icu.util.ULocale",
			"GERMANY",
			"Landroid/icu/util/ULocale;"
		);
	}
	android::icu::util::ULocale ULocale::ITALIAN()
	{
		return getStaticObjectField(
			"android.icu.util.ULocale",
			"ITALIAN",
			"Landroid/icu/util/ULocale;"
		);
	}
	android::icu::util::ULocale ULocale::ITALY()
	{
		return getStaticObjectField(
			"android.icu.util.ULocale",
			"ITALY",
			"Landroid/icu/util/ULocale;"
		);
	}
	android::icu::util::ULocale ULocale::JAPAN()
	{
		return getStaticObjectField(
			"android.icu.util.ULocale",
			"JAPAN",
			"Landroid/icu/util/ULocale;"
		);
	}
	android::icu::util::ULocale ULocale::JAPANESE()
	{
		return getStaticObjectField(
			"android.icu.util.ULocale",
			"JAPANESE",
			"Landroid/icu/util/ULocale;"
		);
	}
	android::icu::util::ULocale ULocale::KOREA()
	{
		return getStaticObjectField(
			"android.icu.util.ULocale",
			"KOREA",
			"Landroid/icu/util/ULocale;"
		);
	}
	android::icu::util::ULocale ULocale::KOREAN()
	{
		return getStaticObjectField(
			"android.icu.util.ULocale",
			"KOREAN",
			"Landroid/icu/util/ULocale;"
		);
	}
	android::icu::util::ULocale ULocale::PRC()
	{
		return getStaticObjectField(
			"android.icu.util.ULocale",
			"PRC",
			"Landroid/icu/util/ULocale;"
		);
	}
	jchar ULocale::PRIVATE_USE_EXTENSION()
	{
		return getStaticField<jchar>(
			"android.icu.util.ULocale",
			"PRIVATE_USE_EXTENSION"
		);
	}
	android::icu::util::ULocale ULocale::ROOT()
	{
		return getStaticObjectField(
			"android.icu.util.ULocale",
			"ROOT",
			"Landroid/icu/util/ULocale;"
		);
	}
	android::icu::util::ULocale ULocale::SIMPLIFIED_CHINESE()
	{
		return getStaticObjectField(
			"android.icu.util.ULocale",
			"SIMPLIFIED_CHINESE",
			"Landroid/icu/util/ULocale;"
		);
	}
	android::icu::util::ULocale ULocale::TAIWAN()
	{
		return getStaticObjectField(
			"android.icu.util.ULocale",
			"TAIWAN",
			"Landroid/icu/util/ULocale;"
		);
	}
	android::icu::util::ULocale ULocale::TRADITIONAL_CHINESE()
	{
		return getStaticObjectField(
			"android.icu.util.ULocale",
			"TRADITIONAL_CHINESE",
			"Landroid/icu/util/ULocale;"
		);
	}
	android::icu::util::ULocale ULocale::UK()
	{
		return getStaticObjectField(
			"android.icu.util.ULocale",
			"UK",
			"Landroid/icu/util/ULocale;"
		);
	}
	jchar ULocale::UNICODE_LOCALE_EXTENSION()
	{
		return getStaticField<jchar>(
			"android.icu.util.ULocale",
			"UNICODE_LOCALE_EXTENSION"
		);
	}
	android::icu::util::ULocale ULocale::US()
	{
		return getStaticObjectField(
			"android.icu.util.ULocale",
			"US",
			"Landroid/icu/util/ULocale;"
		);
	}
	
	// QAndroidJniObject forward
	ULocale::ULocale(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	ULocale::ULocale(JString arg0)
		: JObject(
			"android.icu.util.ULocale",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	ULocale::ULocale(JString arg0, JString arg1)
		: JObject(
			"android.icu.util.ULocale",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	ULocale::ULocale(JString arg0, JString arg1, JString arg2)
		: JObject(
			"android.icu.util.ULocale",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		) {}
	
	// Methods
	android::icu::util::ULocale ULocale::acceptLanguage(JArray arg0, JBooleanArray arg1)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"acceptLanguage",
			"([Landroid/icu/util/ULocale;[Z)Landroid/icu/util/ULocale;",
			arg0.object<jarray>(),
			arg1.object<jbooleanArray>()
		);
	}
	android::icu::util::ULocale ULocale::acceptLanguage(JString arg0, JBooleanArray arg1)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"acceptLanguage",
			"(Ljava/lang/String;[Z)Landroid/icu/util/ULocale;",
			arg0.object<jstring>(),
			arg1.object<jbooleanArray>()
		);
	}
	android::icu::util::ULocale ULocale::acceptLanguage(JArray arg0, JArray arg1, JBooleanArray arg2)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"acceptLanguage",
			"([Landroid/icu/util/ULocale;[Landroid/icu/util/ULocale;[Z)Landroid/icu/util/ULocale;",
			arg0.object<jarray>(),
			arg1.object<jarray>(),
			arg2.object<jbooleanArray>()
		);
	}
	android::icu::util::ULocale ULocale::acceptLanguage(JString arg0, JArray arg1, JBooleanArray arg2)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"acceptLanguage",
			"(Ljava/lang/String;[Landroid/icu/util/ULocale;[Z)Landroid/icu/util/ULocale;",
			arg0.object<jstring>(),
			arg1.object<jarray>(),
			arg2.object<jbooleanArray>()
		);
	}
	android::icu::util::ULocale ULocale::addLikelySubtags(android::icu::util::ULocale arg0)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"addLikelySubtags",
			"(Landroid/icu/util/ULocale;)Landroid/icu/util/ULocale;",
			arg0.object()
		);
	}
	JString ULocale::canonicalize(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"canonicalize",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	android::icu::util::ULocale ULocale::createCanonical(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"createCanonical",
			"(Ljava/lang/String;)Landroid/icu/util/ULocale;",
			arg0.object<jstring>()
		);
	}
	android::icu::util::ULocale ULocale::forLanguageTag(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"forLanguageTag",
			"(Ljava/lang/String;)Landroid/icu/util/ULocale;",
			arg0.object<jstring>()
		);
	}
	android::icu::util::ULocale ULocale::forLocale(java::util::Locale arg0)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"forLocale",
			"(Ljava/util/Locale;)Landroid/icu/util/ULocale;",
			arg0.object()
		);
	}
	JArray ULocale::getAvailableLocales()
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getAvailableLocales",
			"()[Landroid/icu/util/ULocale;"
		);
	}
	JObject ULocale::getAvailableLocalesByType(android::icu::util::ULocale_AvailableType arg0)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getAvailableLocalesByType",
			"(Landroid/icu/util/ULocale$AvailableType;)Ljava/util/Collection;",
			arg0.object()
		);
	}
	JString ULocale::getBaseName(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getBaseName",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	JString ULocale::getCountry(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getCountry",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	android::icu::util::ULocale ULocale::getDefault()
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDefault",
			"()Landroid/icu/util/ULocale;"
		);
	}
	android::icu::util::ULocale ULocale::getDefault(android::icu::util::ULocale_Category arg0)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDefault",
			"(Landroid/icu/util/ULocale$Category;)Landroid/icu/util/ULocale;",
			arg0.object()
		);
	}
	JString ULocale::getDisplayCountry(JString arg0, android::icu::util::ULocale arg1)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayCountry",
			"(Ljava/lang/String;Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	JString ULocale::getDisplayCountry(JString arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayCountry",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	JString ULocale::getDisplayKeyword(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayKeyword",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	JString ULocale::getDisplayKeyword(JString arg0, android::icu::util::ULocale arg1)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayKeyword",
			"(Ljava/lang/String;Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	JString ULocale::getDisplayKeyword(JString arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayKeyword",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	JString ULocale::getDisplayKeywordValue(JString arg0, JString arg1, android::icu::util::ULocale arg2)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayKeywordValue",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	JString ULocale::getDisplayKeywordValue(JString arg0, JString arg1, JString arg2)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayKeywordValue",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		);
	}
	JString ULocale::getDisplayLanguage(JString arg0, android::icu::util::ULocale arg1)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayLanguage",
			"(Ljava/lang/String;Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	JString ULocale::getDisplayLanguage(JString arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayLanguage",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	JString ULocale::getDisplayLanguageWithDialect(JString arg0, android::icu::util::ULocale arg1)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayLanguageWithDialect",
			"(Ljava/lang/String;Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	JString ULocale::getDisplayLanguageWithDialect(JString arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayLanguageWithDialect",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	JString ULocale::getDisplayName(JString arg0, android::icu::util::ULocale arg1)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayName",
			"(Ljava/lang/String;Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	JString ULocale::getDisplayName(JString arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayName",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	JString ULocale::getDisplayNameWithDialect(JString arg0, android::icu::util::ULocale arg1)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayNameWithDialect",
			"(Ljava/lang/String;Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	JString ULocale::getDisplayNameWithDialect(JString arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayNameWithDialect",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	JString ULocale::getDisplayScript(JString arg0, android::icu::util::ULocale arg1)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayScript",
			"(Ljava/lang/String;Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	JString ULocale::getDisplayScript(JString arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayScript",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	JString ULocale::getDisplayVariant(JString arg0, android::icu::util::ULocale arg1)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayVariant",
			"(Ljava/lang/String;Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	JString ULocale::getDisplayVariant(JString arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayVariant",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	JString ULocale::getFallback(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getFallback",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	JString ULocale::getISO3Country(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getISO3Country",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	JString ULocale::getISO3Language(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getISO3Language",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	JArray ULocale::getISOCountries()
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getISOCountries",
			"()[Ljava/lang/String;"
		);
	}
	JArray ULocale::getISOLanguages()
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getISOLanguages",
			"()[Ljava/lang/String;"
		);
	}
	JString ULocale::getKeywordValue(JString arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getKeywordValue",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	JObject ULocale::getKeywords(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getKeywords",
			"(Ljava/lang/String;)Ljava/util/Iterator;",
			arg0.object<jstring>()
		);
	}
	JString ULocale::getLanguage(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getLanguage",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	JString ULocale::getName(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getName",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	JString ULocale::getScript(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getScript",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	JString ULocale::getVariant(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getVariant",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	android::icu::util::ULocale ULocale::minimizeSubtags(android::icu::util::ULocale arg0)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"minimizeSubtags",
			"(Landroid/icu/util/ULocale;)Landroid/icu/util/ULocale;",
			arg0.object()
		);
	}
	JString ULocale::setKeywordValue(JString arg0, JString arg1, JString arg2)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"setKeywordValue",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		);
	}
	JString ULocale::toLegacyKey(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"toLegacyKey",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	JString ULocale::toLegacyType(JString arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"toLegacyType",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	JString ULocale::toUnicodeLocaleKey(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"toUnicodeLocaleKey",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	JString ULocale::toUnicodeLocaleType(JString arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"toUnicodeLocaleType",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	JObject ULocale::clone()
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	jint ULocale::compareTo(android::icu::util::ULocale arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Landroid/icu/util/ULocale;)I",
			arg0.object()
		);
	}
	jint ULocale::compareTo(JObject arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	jboolean ULocale::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JString ULocale::getBaseName()
	{
		return callObjectMethod(
			"getBaseName",
			"()Ljava/lang/String;"
		);
	}
	JString ULocale::getCharacterOrientation()
	{
		return callObjectMethod(
			"getCharacterOrientation",
			"()Ljava/lang/String;"
		);
	}
	JString ULocale::getCountry()
	{
		return callObjectMethod(
			"getCountry",
			"()Ljava/lang/String;"
		);
	}
	JString ULocale::getDisplayCountry()
	{
		return callObjectMethod(
			"getDisplayCountry",
			"()Ljava/lang/String;"
		);
	}
	JString ULocale::getDisplayCountry(android::icu::util::ULocale arg0)
	{
		return callObjectMethod(
			"getDisplayCountry",
			"(Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0.object()
		);
	}
	JString ULocale::getDisplayKeywordValue(JString arg0)
	{
		return callObjectMethod(
			"getDisplayKeywordValue",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	JString ULocale::getDisplayKeywordValue(JString arg0, android::icu::util::ULocale arg1)
	{
		return callObjectMethod(
			"getDisplayKeywordValue",
			"(Ljava/lang/String;Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	JString ULocale::getDisplayLanguage()
	{
		return callObjectMethod(
			"getDisplayLanguage",
			"()Ljava/lang/String;"
		);
	}
	JString ULocale::getDisplayLanguage(android::icu::util::ULocale arg0)
	{
		return callObjectMethod(
			"getDisplayLanguage",
			"(Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0.object()
		);
	}
	JString ULocale::getDisplayLanguageWithDialect()
	{
		return callObjectMethod(
			"getDisplayLanguageWithDialect",
			"()Ljava/lang/String;"
		);
	}
	JString ULocale::getDisplayLanguageWithDialect(android::icu::util::ULocale arg0)
	{
		return callObjectMethod(
			"getDisplayLanguageWithDialect",
			"(Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0.object()
		);
	}
	JString ULocale::getDisplayName()
	{
		return callObjectMethod(
			"getDisplayName",
			"()Ljava/lang/String;"
		);
	}
	JString ULocale::getDisplayName(android::icu::util::ULocale arg0)
	{
		return callObjectMethod(
			"getDisplayName",
			"(Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0.object()
		);
	}
	JString ULocale::getDisplayNameWithDialect()
	{
		return callObjectMethod(
			"getDisplayNameWithDialect",
			"()Ljava/lang/String;"
		);
	}
	JString ULocale::getDisplayNameWithDialect(android::icu::util::ULocale arg0)
	{
		return callObjectMethod(
			"getDisplayNameWithDialect",
			"(Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0.object()
		);
	}
	JString ULocale::getDisplayScript()
	{
		return callObjectMethod(
			"getDisplayScript",
			"()Ljava/lang/String;"
		);
	}
	JString ULocale::getDisplayScript(android::icu::util::ULocale arg0)
	{
		return callObjectMethod(
			"getDisplayScript",
			"(Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0.object()
		);
	}
	JString ULocale::getDisplayVariant()
	{
		return callObjectMethod(
			"getDisplayVariant",
			"()Ljava/lang/String;"
		);
	}
	JString ULocale::getDisplayVariant(android::icu::util::ULocale arg0)
	{
		return callObjectMethod(
			"getDisplayVariant",
			"(Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0.object()
		);
	}
	JString ULocale::getExtension(jchar arg0)
	{
		return callObjectMethod(
			"getExtension",
			"(C)Ljava/lang/String;",
			arg0
		);
	}
	JObject ULocale::getExtensionKeys()
	{
		return callObjectMethod(
			"getExtensionKeys",
			"()Ljava/util/Set;"
		);
	}
	android::icu::util::ULocale ULocale::getFallback()
	{
		return callObjectMethod(
			"getFallback",
			"()Landroid/icu/util/ULocale;"
		);
	}
	JString ULocale::getISO3Country()
	{
		return callObjectMethod(
			"getISO3Country",
			"()Ljava/lang/String;"
		);
	}
	JString ULocale::getISO3Language()
	{
		return callObjectMethod(
			"getISO3Language",
			"()Ljava/lang/String;"
		);
	}
	JString ULocale::getKeywordValue(JString arg0)
	{
		return callObjectMethod(
			"getKeywordValue",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	JObject ULocale::getKeywords()
	{
		return callObjectMethod(
			"getKeywords",
			"()Ljava/util/Iterator;"
		);
	}
	JString ULocale::getLanguage()
	{
		return callObjectMethod(
			"getLanguage",
			"()Ljava/lang/String;"
		);
	}
	JString ULocale::getLineOrientation()
	{
		return callObjectMethod(
			"getLineOrientation",
			"()Ljava/lang/String;"
		);
	}
	JString ULocale::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	JString ULocale::getScript()
	{
		return callObjectMethod(
			"getScript",
			"()Ljava/lang/String;"
		);
	}
	JObject ULocale::getUnicodeLocaleAttributes()
	{
		return callObjectMethod(
			"getUnicodeLocaleAttributes",
			"()Ljava/util/Set;"
		);
	}
	JObject ULocale::getUnicodeLocaleKeys()
	{
		return callObjectMethod(
			"getUnicodeLocaleKeys",
			"()Ljava/util/Set;"
		);
	}
	JString ULocale::getUnicodeLocaleType(JString arg0)
	{
		return callObjectMethod(
			"getUnicodeLocaleType",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	JString ULocale::getVariant()
	{
		return callObjectMethod(
			"getVariant",
			"()Ljava/lang/String;"
		);
	}
	jint ULocale::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean ULocale::isRightToLeft()
	{
		return callMethod<jboolean>(
			"isRightToLeft",
			"()Z"
		);
	}
	android::icu::util::ULocale ULocale::setKeywordValue(JString arg0, JString arg1)
	{
		return callObjectMethod(
			"setKeywordValue",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/icu/util/ULocale;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	JString ULocale::toLanguageTag()
	{
		return callObjectMethod(
			"toLanguageTag",
			"()Ljava/lang/String;"
		);
	}
	java::util::Locale ULocale::toLocale()
	{
		return callObjectMethod(
			"toLocale",
			"()Ljava/util/Locale;"
		);
	}
	JString ULocale::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::icu::util

