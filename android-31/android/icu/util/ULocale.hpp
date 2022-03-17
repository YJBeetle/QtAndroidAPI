#pragma once

#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JBooleanArray.hpp"
#include "./ULocale_AvailableType.def.hpp"
#include "./ULocale_Category.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../../../java/util/Locale.def.hpp"
#include "./ULocale.def.hpp"

namespace android::icu::util
{
	// Fields
	inline android::icu::util::ULocale ULocale::CANADA()
	{
		return getStaticObjectField(
			"android.icu.util.ULocale",
			"CANADA",
			"Landroid/icu/util/ULocale;"
		);
	}
	inline android::icu::util::ULocale ULocale::CANADA_FRENCH()
	{
		return getStaticObjectField(
			"android.icu.util.ULocale",
			"CANADA_FRENCH",
			"Landroid/icu/util/ULocale;"
		);
	}
	inline android::icu::util::ULocale ULocale::CHINA()
	{
		return getStaticObjectField(
			"android.icu.util.ULocale",
			"CHINA",
			"Landroid/icu/util/ULocale;"
		);
	}
	inline android::icu::util::ULocale ULocale::CHINESE()
	{
		return getStaticObjectField(
			"android.icu.util.ULocale",
			"CHINESE",
			"Landroid/icu/util/ULocale;"
		);
	}
	inline android::icu::util::ULocale ULocale::ENGLISH()
	{
		return getStaticObjectField(
			"android.icu.util.ULocale",
			"ENGLISH",
			"Landroid/icu/util/ULocale;"
		);
	}
	inline android::icu::util::ULocale ULocale::FRANCE()
	{
		return getStaticObjectField(
			"android.icu.util.ULocale",
			"FRANCE",
			"Landroid/icu/util/ULocale;"
		);
	}
	inline android::icu::util::ULocale ULocale::FRENCH()
	{
		return getStaticObjectField(
			"android.icu.util.ULocale",
			"FRENCH",
			"Landroid/icu/util/ULocale;"
		);
	}
	inline android::icu::util::ULocale ULocale::GERMAN()
	{
		return getStaticObjectField(
			"android.icu.util.ULocale",
			"GERMAN",
			"Landroid/icu/util/ULocale;"
		);
	}
	inline android::icu::util::ULocale ULocale::GERMANY()
	{
		return getStaticObjectField(
			"android.icu.util.ULocale",
			"GERMANY",
			"Landroid/icu/util/ULocale;"
		);
	}
	inline android::icu::util::ULocale ULocale::ITALIAN()
	{
		return getStaticObjectField(
			"android.icu.util.ULocale",
			"ITALIAN",
			"Landroid/icu/util/ULocale;"
		);
	}
	inline android::icu::util::ULocale ULocale::ITALY()
	{
		return getStaticObjectField(
			"android.icu.util.ULocale",
			"ITALY",
			"Landroid/icu/util/ULocale;"
		);
	}
	inline android::icu::util::ULocale ULocale::JAPAN()
	{
		return getStaticObjectField(
			"android.icu.util.ULocale",
			"JAPAN",
			"Landroid/icu/util/ULocale;"
		);
	}
	inline android::icu::util::ULocale ULocale::JAPANESE()
	{
		return getStaticObjectField(
			"android.icu.util.ULocale",
			"JAPANESE",
			"Landroid/icu/util/ULocale;"
		);
	}
	inline android::icu::util::ULocale ULocale::KOREA()
	{
		return getStaticObjectField(
			"android.icu.util.ULocale",
			"KOREA",
			"Landroid/icu/util/ULocale;"
		);
	}
	inline android::icu::util::ULocale ULocale::KOREAN()
	{
		return getStaticObjectField(
			"android.icu.util.ULocale",
			"KOREAN",
			"Landroid/icu/util/ULocale;"
		);
	}
	inline android::icu::util::ULocale ULocale::PRC()
	{
		return getStaticObjectField(
			"android.icu.util.ULocale",
			"PRC",
			"Landroid/icu/util/ULocale;"
		);
	}
	inline jchar ULocale::PRIVATE_USE_EXTENSION()
	{
		return getStaticField<jchar>(
			"android.icu.util.ULocale",
			"PRIVATE_USE_EXTENSION"
		);
	}
	inline android::icu::util::ULocale ULocale::ROOT()
	{
		return getStaticObjectField(
			"android.icu.util.ULocale",
			"ROOT",
			"Landroid/icu/util/ULocale;"
		);
	}
	inline android::icu::util::ULocale ULocale::SIMPLIFIED_CHINESE()
	{
		return getStaticObjectField(
			"android.icu.util.ULocale",
			"SIMPLIFIED_CHINESE",
			"Landroid/icu/util/ULocale;"
		);
	}
	inline android::icu::util::ULocale ULocale::TAIWAN()
	{
		return getStaticObjectField(
			"android.icu.util.ULocale",
			"TAIWAN",
			"Landroid/icu/util/ULocale;"
		);
	}
	inline android::icu::util::ULocale ULocale::TRADITIONAL_CHINESE()
	{
		return getStaticObjectField(
			"android.icu.util.ULocale",
			"TRADITIONAL_CHINESE",
			"Landroid/icu/util/ULocale;"
		);
	}
	inline android::icu::util::ULocale ULocale::UK()
	{
		return getStaticObjectField(
			"android.icu.util.ULocale",
			"UK",
			"Landroid/icu/util/ULocale;"
		);
	}
	inline jchar ULocale::UNICODE_LOCALE_EXTENSION()
	{
		return getStaticField<jchar>(
			"android.icu.util.ULocale",
			"UNICODE_LOCALE_EXTENSION"
		);
	}
	inline android::icu::util::ULocale ULocale::US()
	{
		return getStaticObjectField(
			"android.icu.util.ULocale",
			"US",
			"Landroid/icu/util/ULocale;"
		);
	}
	
	// Constructors
	inline ULocale::ULocale(JString arg0)
		: JObject(
			"android.icu.util.ULocale",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline ULocale::ULocale(JString arg0, JString arg1)
		: JObject(
			"android.icu.util.ULocale",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	inline ULocale::ULocale(JString arg0, JString arg1, JString arg2)
		: JObject(
			"android.icu.util.ULocale",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		) {}
	
	// Methods
	inline android::icu::util::ULocale ULocale::acceptLanguage(JArray arg0, JBooleanArray arg1)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"acceptLanguage",
			"([Landroid/icu/util/ULocale;[Z)Landroid/icu/util/ULocale;",
			arg0.object<jarray>(),
			arg1.object<jbooleanArray>()
		);
	}
	inline android::icu::util::ULocale ULocale::acceptLanguage(JString arg0, JBooleanArray arg1)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"acceptLanguage",
			"(Ljava/lang/String;[Z)Landroid/icu/util/ULocale;",
			arg0.object<jstring>(),
			arg1.object<jbooleanArray>()
		);
	}
	inline android::icu::util::ULocale ULocale::acceptLanguage(JArray arg0, JArray arg1, JBooleanArray arg2)
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
	inline android::icu::util::ULocale ULocale::acceptLanguage(JString arg0, JArray arg1, JBooleanArray arg2)
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
	inline android::icu::util::ULocale ULocale::addLikelySubtags(android::icu::util::ULocale arg0)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"addLikelySubtags",
			"(Landroid/icu/util/ULocale;)Landroid/icu/util/ULocale;",
			arg0.object()
		);
	}
	inline JString ULocale::canonicalize(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"canonicalize",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline android::icu::util::ULocale ULocale::createCanonical(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"createCanonical",
			"(Ljava/lang/String;)Landroid/icu/util/ULocale;",
			arg0.object<jstring>()
		);
	}
	inline android::icu::util::ULocale ULocale::forLanguageTag(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"forLanguageTag",
			"(Ljava/lang/String;)Landroid/icu/util/ULocale;",
			arg0.object<jstring>()
		);
	}
	inline android::icu::util::ULocale ULocale::forLocale(java::util::Locale arg0)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"forLocale",
			"(Ljava/util/Locale;)Landroid/icu/util/ULocale;",
			arg0.object()
		);
	}
	inline JArray ULocale::getAvailableLocales()
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getAvailableLocales",
			"()[Landroid/icu/util/ULocale;"
		);
	}
	inline JObject ULocale::getAvailableLocalesByType(android::icu::util::ULocale_AvailableType arg0)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getAvailableLocalesByType",
			"(Landroid/icu/util/ULocale$AvailableType;)Ljava/util/Collection;",
			arg0.object()
		);
	}
	inline JString ULocale::getBaseName(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getBaseName",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline JString ULocale::getCountry(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getCountry",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline android::icu::util::ULocale ULocale::getDefault()
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDefault",
			"()Landroid/icu/util/ULocale;"
		);
	}
	inline android::icu::util::ULocale ULocale::getDefault(android::icu::util::ULocale_Category arg0)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDefault",
			"(Landroid/icu/util/ULocale$Category;)Landroid/icu/util/ULocale;",
			arg0.object()
		);
	}
	inline JString ULocale::getDisplayCountry(JString arg0, android::icu::util::ULocale arg1)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayCountry",
			"(Ljava/lang/String;Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline JString ULocale::getDisplayCountry(JString arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayCountry",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline JString ULocale::getDisplayKeyword(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayKeyword",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline JString ULocale::getDisplayKeyword(JString arg0, android::icu::util::ULocale arg1)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayKeyword",
			"(Ljava/lang/String;Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline JString ULocale::getDisplayKeyword(JString arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayKeyword",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline JString ULocale::getDisplayKeywordValue(JString arg0, JString arg1, android::icu::util::ULocale arg2)
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
	inline JString ULocale::getDisplayKeywordValue(JString arg0, JString arg1, JString arg2)
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
	inline JString ULocale::getDisplayLanguage(JString arg0, android::icu::util::ULocale arg1)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayLanguage",
			"(Ljava/lang/String;Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline JString ULocale::getDisplayLanguage(JString arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayLanguage",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline JString ULocale::getDisplayLanguageWithDialect(JString arg0, android::icu::util::ULocale arg1)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayLanguageWithDialect",
			"(Ljava/lang/String;Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline JString ULocale::getDisplayLanguageWithDialect(JString arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayLanguageWithDialect",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline JString ULocale::getDisplayName(JString arg0, android::icu::util::ULocale arg1)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayName",
			"(Ljava/lang/String;Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline JString ULocale::getDisplayName(JString arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayName",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline JString ULocale::getDisplayNameWithDialect(JString arg0, android::icu::util::ULocale arg1)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayNameWithDialect",
			"(Ljava/lang/String;Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline JString ULocale::getDisplayNameWithDialect(JString arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayNameWithDialect",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline JString ULocale::getDisplayScript(JString arg0, android::icu::util::ULocale arg1)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayScript",
			"(Ljava/lang/String;Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline JString ULocale::getDisplayScript(JString arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayScript",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline JString ULocale::getDisplayVariant(JString arg0, android::icu::util::ULocale arg1)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayVariant",
			"(Ljava/lang/String;Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline JString ULocale::getDisplayVariant(JString arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayVariant",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline JString ULocale::getFallback(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getFallback",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline JString ULocale::getISO3Country(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getISO3Country",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline JString ULocale::getISO3Language(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getISO3Language",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline JArray ULocale::getISOCountries()
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getISOCountries",
			"()[Ljava/lang/String;"
		);
	}
	inline JArray ULocale::getISOLanguages()
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getISOLanguages",
			"()[Ljava/lang/String;"
		);
	}
	inline JString ULocale::getKeywordValue(JString arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getKeywordValue",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline JObject ULocale::getKeywords(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getKeywords",
			"(Ljava/lang/String;)Ljava/util/Iterator;",
			arg0.object<jstring>()
		);
	}
	inline JString ULocale::getLanguage(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getLanguage",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline JString ULocale::getName(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getName",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline JString ULocale::getScript(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getScript",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline JString ULocale::getVariant(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getVariant",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline android::icu::util::ULocale ULocale::minimizeSubtags(android::icu::util::ULocale arg0)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"minimizeSubtags",
			"(Landroid/icu/util/ULocale;)Landroid/icu/util/ULocale;",
			arg0.object()
		);
	}
	inline JString ULocale::setKeywordValue(JString arg0, JString arg1, JString arg2)
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
	inline JString ULocale::toLegacyKey(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"toLegacyKey",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline JString ULocale::toLegacyType(JString arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"toLegacyType",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline JString ULocale::toUnicodeLocaleKey(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"toUnicodeLocaleKey",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline JString ULocale::toUnicodeLocaleType(JString arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"toUnicodeLocaleType",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline JObject ULocale::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	inline jint ULocale::compareTo(android::icu::util::ULocale arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Landroid/icu/util/ULocale;)I",
			arg0.object()
		);
	}
	inline jint ULocale::compareTo(JObject arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	inline jboolean ULocale::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JString ULocale::getBaseName() const
	{
		return callObjectMethod(
			"getBaseName",
			"()Ljava/lang/String;"
		);
	}
	inline JString ULocale::getCharacterOrientation() const
	{
		return callObjectMethod(
			"getCharacterOrientation",
			"()Ljava/lang/String;"
		);
	}
	inline JString ULocale::getCountry() const
	{
		return callObjectMethod(
			"getCountry",
			"()Ljava/lang/String;"
		);
	}
	inline JString ULocale::getDisplayCountry() const
	{
		return callObjectMethod(
			"getDisplayCountry",
			"()Ljava/lang/String;"
		);
	}
	inline JString ULocale::getDisplayCountry(android::icu::util::ULocale arg0) const
	{
		return callObjectMethod(
			"getDisplayCountry",
			"(Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0.object()
		);
	}
	inline JString ULocale::getDisplayKeywordValue(JString arg0) const
	{
		return callObjectMethod(
			"getDisplayKeywordValue",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline JString ULocale::getDisplayKeywordValue(JString arg0, android::icu::util::ULocale arg1) const
	{
		return callObjectMethod(
			"getDisplayKeywordValue",
			"(Ljava/lang/String;Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline JString ULocale::getDisplayLanguage() const
	{
		return callObjectMethod(
			"getDisplayLanguage",
			"()Ljava/lang/String;"
		);
	}
	inline JString ULocale::getDisplayLanguage(android::icu::util::ULocale arg0) const
	{
		return callObjectMethod(
			"getDisplayLanguage",
			"(Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0.object()
		);
	}
	inline JString ULocale::getDisplayLanguageWithDialect() const
	{
		return callObjectMethod(
			"getDisplayLanguageWithDialect",
			"()Ljava/lang/String;"
		);
	}
	inline JString ULocale::getDisplayLanguageWithDialect(android::icu::util::ULocale arg0) const
	{
		return callObjectMethod(
			"getDisplayLanguageWithDialect",
			"(Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0.object()
		);
	}
	inline JString ULocale::getDisplayName() const
	{
		return callObjectMethod(
			"getDisplayName",
			"()Ljava/lang/String;"
		);
	}
	inline JString ULocale::getDisplayName(android::icu::util::ULocale arg0) const
	{
		return callObjectMethod(
			"getDisplayName",
			"(Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0.object()
		);
	}
	inline JString ULocale::getDisplayNameWithDialect() const
	{
		return callObjectMethod(
			"getDisplayNameWithDialect",
			"()Ljava/lang/String;"
		);
	}
	inline JString ULocale::getDisplayNameWithDialect(android::icu::util::ULocale arg0) const
	{
		return callObjectMethod(
			"getDisplayNameWithDialect",
			"(Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0.object()
		);
	}
	inline JString ULocale::getDisplayScript() const
	{
		return callObjectMethod(
			"getDisplayScript",
			"()Ljava/lang/String;"
		);
	}
	inline JString ULocale::getDisplayScript(android::icu::util::ULocale arg0) const
	{
		return callObjectMethod(
			"getDisplayScript",
			"(Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0.object()
		);
	}
	inline JString ULocale::getDisplayVariant() const
	{
		return callObjectMethod(
			"getDisplayVariant",
			"()Ljava/lang/String;"
		);
	}
	inline JString ULocale::getDisplayVariant(android::icu::util::ULocale arg0) const
	{
		return callObjectMethod(
			"getDisplayVariant",
			"(Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0.object()
		);
	}
	inline JString ULocale::getExtension(jchar arg0) const
	{
		return callObjectMethod(
			"getExtension",
			"(C)Ljava/lang/String;",
			arg0
		);
	}
	inline JObject ULocale::getExtensionKeys() const
	{
		return callObjectMethod(
			"getExtensionKeys",
			"()Ljava/util/Set;"
		);
	}
	inline android::icu::util::ULocale ULocale::getFallback() const
	{
		return callObjectMethod(
			"getFallback",
			"()Landroid/icu/util/ULocale;"
		);
	}
	inline JString ULocale::getISO3Country() const
	{
		return callObjectMethod(
			"getISO3Country",
			"()Ljava/lang/String;"
		);
	}
	inline JString ULocale::getISO3Language() const
	{
		return callObjectMethod(
			"getISO3Language",
			"()Ljava/lang/String;"
		);
	}
	inline JString ULocale::getKeywordValue(JString arg0) const
	{
		return callObjectMethod(
			"getKeywordValue",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline JObject ULocale::getKeywords() const
	{
		return callObjectMethod(
			"getKeywords",
			"()Ljava/util/Iterator;"
		);
	}
	inline JString ULocale::getLanguage() const
	{
		return callObjectMethod(
			"getLanguage",
			"()Ljava/lang/String;"
		);
	}
	inline JString ULocale::getLineOrientation() const
	{
		return callObjectMethod(
			"getLineOrientation",
			"()Ljava/lang/String;"
		);
	}
	inline JString ULocale::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	inline JString ULocale::getScript() const
	{
		return callObjectMethod(
			"getScript",
			"()Ljava/lang/String;"
		);
	}
	inline JObject ULocale::getUnicodeLocaleAttributes() const
	{
		return callObjectMethod(
			"getUnicodeLocaleAttributes",
			"()Ljava/util/Set;"
		);
	}
	inline JObject ULocale::getUnicodeLocaleKeys() const
	{
		return callObjectMethod(
			"getUnicodeLocaleKeys",
			"()Ljava/util/Set;"
		);
	}
	inline JString ULocale::getUnicodeLocaleType(JString arg0) const
	{
		return callObjectMethod(
			"getUnicodeLocaleType",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline JString ULocale::getVariant() const
	{
		return callObjectMethod(
			"getVariant",
			"()Ljava/lang/String;"
		);
	}
	inline jint ULocale::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean ULocale::isRightToLeft() const
	{
		return callMethod<jboolean>(
			"isRightToLeft",
			"()Z"
		);
	}
	inline android::icu::util::ULocale ULocale::setKeywordValue(JString arg0, JString arg1) const
	{
		return callObjectMethod(
			"setKeywordValue",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/icu/util/ULocale;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline JString ULocale::toLanguageTag() const
	{
		return callObjectMethod(
			"toLanguageTag",
			"()Ljava/lang/String;"
		);
	}
	inline java::util::Locale ULocale::toLocale() const
	{
		return callObjectMethod(
			"toLocale",
			"()Ljava/util/Locale;"
		);
	}
	inline JString ULocale::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::icu::util

// Base class headers

