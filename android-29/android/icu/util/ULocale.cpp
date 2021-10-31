#include "./ULocale_Category.hpp"
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
	
	// QJniObject forward
	ULocale::ULocale(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	ULocale::ULocale(jstring arg0)
		: __JniBaseClass(
			"android.icu.util.ULocale",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	ULocale::ULocale(jstring arg0, jstring arg1)
		: __JniBaseClass(
			"android.icu.util.ULocale",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		) {}
	ULocale::ULocale(jstring arg0, jstring arg1, jstring arg2)
		: __JniBaseClass(
			"android.icu.util.ULocale",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
	android::icu::util::ULocale ULocale::acceptLanguage(jarray arg0, jbooleanArray arg1)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"acceptLanguage",
			"([Landroid/icu/util/ULocale;[Z)Landroid/icu/util/ULocale;",
			arg0,
			arg1
		);
	}
	android::icu::util::ULocale ULocale::acceptLanguage(jstring arg0, jbooleanArray arg1)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"acceptLanguage",
			"(Ljava/lang/String;[Z)Landroid/icu/util/ULocale;",
			arg0,
			arg1
		);
	}
	android::icu::util::ULocale ULocale::acceptLanguage(jarray arg0, jarray arg1, jbooleanArray arg2)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"acceptLanguage",
			"([Landroid/icu/util/ULocale;[Landroid/icu/util/ULocale;[Z)Landroid/icu/util/ULocale;",
			arg0,
			arg1,
			arg2
		);
	}
	android::icu::util::ULocale ULocale::acceptLanguage(jstring arg0, jarray arg1, jbooleanArray arg2)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"acceptLanguage",
			"(Ljava/lang/String;[Landroid/icu/util/ULocale;[Z)Landroid/icu/util/ULocale;",
			arg0,
			arg1,
			arg2
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
	jstring ULocale::canonicalize(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"canonicalize",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	android::icu::util::ULocale ULocale::createCanonical(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"createCanonical",
			"(Ljava/lang/String;)Landroid/icu/util/ULocale;",
			arg0
		);
	}
	android::icu::util::ULocale ULocale::forLanguageTag(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"forLanguageTag",
			"(Ljava/lang/String;)Landroid/icu/util/ULocale;",
			arg0
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
	jarray ULocale::getAvailableLocales()
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getAvailableLocales",
			"()[Landroid/icu/util/ULocale;"
		).object<jarray>();
	}
	jstring ULocale::getBaseName(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getBaseName",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring ULocale::getCountry(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getCountry",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
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
	jstring ULocale::getDisplayCountry(jstring arg0, android::icu::util::ULocale arg1)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayCountry",
			"(Ljava/lang/String;Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0,
			arg1.object()
		).object<jstring>();
	}
	jstring ULocale::getDisplayCountry(jstring arg0, jstring arg1)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayCountry",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring ULocale::getDisplayKeyword(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayKeyword",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring ULocale::getDisplayKeyword(jstring arg0, android::icu::util::ULocale arg1)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayKeyword",
			"(Ljava/lang/String;Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0,
			arg1.object()
		).object<jstring>();
	}
	jstring ULocale::getDisplayKeyword(jstring arg0, jstring arg1)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayKeyword",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring ULocale::getDisplayKeywordValue(jstring arg0, jstring arg1, android::icu::util::ULocale arg2)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayKeywordValue",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0,
			arg1,
			arg2.object()
		).object<jstring>();
	}
	jstring ULocale::getDisplayKeywordValue(jstring arg0, jstring arg1, jstring arg2)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayKeywordValue",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1,
			arg2
		).object<jstring>();
	}
	jstring ULocale::getDisplayLanguage(jstring arg0, android::icu::util::ULocale arg1)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayLanguage",
			"(Ljava/lang/String;Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0,
			arg1.object()
		).object<jstring>();
	}
	jstring ULocale::getDisplayLanguage(jstring arg0, jstring arg1)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayLanguage",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring ULocale::getDisplayLanguageWithDialect(jstring arg0, android::icu::util::ULocale arg1)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayLanguageWithDialect",
			"(Ljava/lang/String;Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0,
			arg1.object()
		).object<jstring>();
	}
	jstring ULocale::getDisplayLanguageWithDialect(jstring arg0, jstring arg1)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayLanguageWithDialect",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring ULocale::getDisplayName(jstring arg0, android::icu::util::ULocale arg1)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayName",
			"(Ljava/lang/String;Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0,
			arg1.object()
		).object<jstring>();
	}
	jstring ULocale::getDisplayName(jstring arg0, jstring arg1)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayName",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring ULocale::getDisplayNameWithDialect(jstring arg0, android::icu::util::ULocale arg1)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayNameWithDialect",
			"(Ljava/lang/String;Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0,
			arg1.object()
		).object<jstring>();
	}
	jstring ULocale::getDisplayNameWithDialect(jstring arg0, jstring arg1)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayNameWithDialect",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring ULocale::getDisplayScript(jstring arg0, android::icu::util::ULocale arg1)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayScript",
			"(Ljava/lang/String;Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0,
			arg1.object()
		).object<jstring>();
	}
	jstring ULocale::getDisplayScript(jstring arg0, jstring arg1)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayScript",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring ULocale::getDisplayVariant(jstring arg0, android::icu::util::ULocale arg1)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayVariant",
			"(Ljava/lang/String;Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0,
			arg1.object()
		).object<jstring>();
	}
	jstring ULocale::getDisplayVariant(jstring arg0, jstring arg1)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayVariant",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring ULocale::getFallback(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getFallback",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring ULocale::getISO3Country(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getISO3Country",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring ULocale::getISO3Language(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getISO3Language",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jarray ULocale::getISOCountries()
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getISOCountries",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jarray ULocale::getISOLanguages()
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getISOLanguages",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jstring ULocale::getKeywordValue(jstring arg0, jstring arg1)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getKeywordValue",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	__JniBaseClass ULocale::getKeywords(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getKeywords",
			"(Ljava/lang/String;)Ljava/util/Iterator;",
			arg0
		);
	}
	jstring ULocale::getLanguage(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getLanguage",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring ULocale::getName(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getName",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring ULocale::getScript(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getScript",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring ULocale::getVariant(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getVariant",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
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
	jstring ULocale::setKeywordValue(jstring arg0, jstring arg1, jstring arg2)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"setKeywordValue",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1,
			arg2
		).object<jstring>();
	}
	jstring ULocale::toLegacyKey(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"toLegacyKey",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring ULocale::toLegacyType(jstring arg0, jstring arg1)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"toLegacyType",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring ULocale::toUnicodeLocaleKey(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"toUnicodeLocaleKey",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring ULocale::toUnicodeLocaleType(jstring arg0, jstring arg1)
	{
		return callStaticObjectMethod(
			"android.icu.util.ULocale",
			"toUnicodeLocaleType",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jobject ULocale::clone()
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jint ULocale::compareTo(android::icu::util::ULocale arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Landroid/icu/util/ULocale;)I",
			arg0.object()
		);
	}
	jint ULocale::compareTo(jobject arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jboolean ULocale::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring ULocale::getBaseName()
	{
		return callObjectMethod(
			"getBaseName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ULocale::getCharacterOrientation()
	{
		return callObjectMethod(
			"getCharacterOrientation",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ULocale::getCountry()
	{
		return callObjectMethod(
			"getCountry",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ULocale::getDisplayCountry()
	{
		return callObjectMethod(
			"getDisplayCountry",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ULocale::getDisplayCountry(android::icu::util::ULocale arg0)
	{
		return callObjectMethod(
			"getDisplayCountry",
			"(Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0.object()
		).object<jstring>();
	}
	jstring ULocale::getDisplayKeywordValue(jstring arg0)
	{
		return callObjectMethod(
			"getDisplayKeywordValue",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring ULocale::getDisplayKeywordValue(jstring arg0, android::icu::util::ULocale arg1)
	{
		return callObjectMethod(
			"getDisplayKeywordValue",
			"(Ljava/lang/String;Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0,
			arg1.object()
		).object<jstring>();
	}
	jstring ULocale::getDisplayLanguage()
	{
		return callObjectMethod(
			"getDisplayLanguage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ULocale::getDisplayLanguage(android::icu::util::ULocale arg0)
	{
		return callObjectMethod(
			"getDisplayLanguage",
			"(Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0.object()
		).object<jstring>();
	}
	jstring ULocale::getDisplayLanguageWithDialect()
	{
		return callObjectMethod(
			"getDisplayLanguageWithDialect",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ULocale::getDisplayLanguageWithDialect(android::icu::util::ULocale arg0)
	{
		return callObjectMethod(
			"getDisplayLanguageWithDialect",
			"(Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0.object()
		).object<jstring>();
	}
	jstring ULocale::getDisplayName()
	{
		return callObjectMethod(
			"getDisplayName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ULocale::getDisplayName(android::icu::util::ULocale arg0)
	{
		return callObjectMethod(
			"getDisplayName",
			"(Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0.object()
		).object<jstring>();
	}
	jstring ULocale::getDisplayNameWithDialect()
	{
		return callObjectMethod(
			"getDisplayNameWithDialect",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ULocale::getDisplayNameWithDialect(android::icu::util::ULocale arg0)
	{
		return callObjectMethod(
			"getDisplayNameWithDialect",
			"(Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0.object()
		).object<jstring>();
	}
	jstring ULocale::getDisplayScript()
	{
		return callObjectMethod(
			"getDisplayScript",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ULocale::getDisplayScript(android::icu::util::ULocale arg0)
	{
		return callObjectMethod(
			"getDisplayScript",
			"(Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0.object()
		).object<jstring>();
	}
	jstring ULocale::getDisplayVariant()
	{
		return callObjectMethod(
			"getDisplayVariant",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ULocale::getDisplayVariant(android::icu::util::ULocale arg0)
	{
		return callObjectMethod(
			"getDisplayVariant",
			"(Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0.object()
		).object<jstring>();
	}
	jstring ULocale::getExtension(jchar arg0)
	{
		return callObjectMethod(
			"getExtension",
			"(C)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	__JniBaseClass ULocale::getExtensionKeys()
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
	jstring ULocale::getISO3Country()
	{
		return callObjectMethod(
			"getISO3Country",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ULocale::getISO3Language()
	{
		return callObjectMethod(
			"getISO3Language",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ULocale::getKeywordValue(jstring arg0)
	{
		return callObjectMethod(
			"getKeywordValue",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	__JniBaseClass ULocale::getKeywords()
	{
		return callObjectMethod(
			"getKeywords",
			"()Ljava/util/Iterator;"
		);
	}
	jstring ULocale::getLanguage()
	{
		return callObjectMethod(
			"getLanguage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ULocale::getLineOrientation()
	{
		return callObjectMethod(
			"getLineOrientation",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ULocale::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ULocale::getScript()
	{
		return callObjectMethod(
			"getScript",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	__JniBaseClass ULocale::getUnicodeLocaleAttributes()
	{
		return callObjectMethod(
			"getUnicodeLocaleAttributes",
			"()Ljava/util/Set;"
		);
	}
	__JniBaseClass ULocale::getUnicodeLocaleKeys()
	{
		return callObjectMethod(
			"getUnicodeLocaleKeys",
			"()Ljava/util/Set;"
		);
	}
	jstring ULocale::getUnicodeLocaleType(jstring arg0)
	{
		return callObjectMethod(
			"getUnicodeLocaleType",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring ULocale::getVariant()
	{
		return callObjectMethod(
			"getVariant",
			"()Ljava/lang/String;"
		).object<jstring>();
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
	android::icu::util::ULocale ULocale::setKeywordValue(jstring arg0, jstring arg1)
	{
		return callObjectMethod(
			"setKeywordValue",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/icu/util/ULocale;",
			arg0,
			arg1
		);
	}
	jstring ULocale::toLanguageTag()
	{
		return callObjectMethod(
			"toLanguageTag",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	java::util::Locale ULocale::toLocale()
	{
		return callObjectMethod(
			"toLocale",
			"()Ljava/util/Locale;"
		);
	}
	jstring ULocale::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::icu::util

