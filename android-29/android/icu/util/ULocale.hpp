#pragma once

#ifndef ANDROID_ICU_UTIL_ULOCALE
#define ANDROID_ICU_UTIL_ULOCALE

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::icu::util
{
	class ULocale_Category;
}
namespace __jni_impl::java::util
{
	class Locale;
}

namespace __jni_impl::android::icu::util
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
		
		// Constructors
		void __constructor(jstring arg0);
		void __constructor(jstring arg0, jstring arg1, jstring arg2);
		void __constructor(jstring arg0, jstring arg1);
		
		// Methods
		QAndroidJniObject getName();
		static QAndroidJniObject getName(jstring arg0);
		jboolean equals(jobject arg0);
		QAndroidJniObject toString();
		jint hashCode();
		QAndroidJniObject clone();
		jint compareTo(__jni_impl::android::icu::util::ULocale arg0);
		jint compareTo(jobject arg0);
		static QAndroidJniObject getDefault();
		static QAndroidJniObject getDefault(__jni_impl::android::icu::util::ULocale_Category arg0);
		static QAndroidJniObject canonicalize(jstring arg0);
		static QAndroidJniObject getLanguage(jstring arg0);
		QAndroidJniObject getLanguage();
		static QAndroidJniObject getAvailableLocales();
		static QAndroidJniObject getISOCountries();
		static QAndroidJniObject getISOLanguages();
		QAndroidJniObject getExtension(jchar arg0);
		QAndroidJniObject getExtensionKeys();
		QAndroidJniObject toLanguageTag();
		static QAndroidJniObject forLanguageTag(jstring arg0);
		static QAndroidJniObject getISO3Language(jstring arg0);
		QAndroidJniObject getISO3Language();
		QAndroidJniObject getISO3Country();
		static QAndroidJniObject getISO3Country(jstring arg0);
		static QAndroidJniObject getScript(jstring arg0);
		QAndroidJniObject getScript();
		static QAndroidJniObject getCountry(jstring arg0);
		QAndroidJniObject getCountry();
		static QAndroidJniObject getVariant(jstring arg0);
		QAndroidJniObject getVariant();
		QAndroidJniObject getUnicodeLocaleAttributes();
		QAndroidJniObject getUnicodeLocaleType(jstring arg0);
		QAndroidJniObject getUnicodeLocaleKeys();
		QAndroidJniObject getDisplayLanguage();
		QAndroidJniObject getDisplayLanguage(__jni_impl::android::icu::util::ULocale arg0);
		static QAndroidJniObject getDisplayLanguage(jstring arg0, __jni_impl::android::icu::util::ULocale arg1);
		static QAndroidJniObject getDisplayLanguage(jstring arg0, jstring arg1);
		static QAndroidJniObject getDisplayScript(jstring arg0, jstring arg1);
		static QAndroidJniObject getDisplayScript(jstring arg0, __jni_impl::android::icu::util::ULocale arg1);
		QAndroidJniObject getDisplayScript(__jni_impl::android::icu::util::ULocale arg0);
		QAndroidJniObject getDisplayScript();
		static QAndroidJniObject getDisplayCountry(jstring arg0, __jni_impl::android::icu::util::ULocale arg1);
		QAndroidJniObject getDisplayCountry();
		QAndroidJniObject getDisplayCountry(__jni_impl::android::icu::util::ULocale arg0);
		static QAndroidJniObject getDisplayCountry(jstring arg0, jstring arg1);
		QAndroidJniObject getDisplayVariant();
		QAndroidJniObject getDisplayVariant(__jni_impl::android::icu::util::ULocale arg0);
		static QAndroidJniObject getDisplayVariant(jstring arg0, __jni_impl::android::icu::util::ULocale arg1);
		static QAndroidJniObject getDisplayVariant(jstring arg0, jstring arg1);
		QAndroidJniObject getDisplayName(__jni_impl::android::icu::util::ULocale arg0);
		QAndroidJniObject getDisplayName();
		static QAndroidJniObject getDisplayName(jstring arg0, __jni_impl::android::icu::util::ULocale arg1);
		static QAndroidJniObject getDisplayName(jstring arg0, jstring arg1);
		static QAndroidJniObject createCanonical(jstring arg0);
		static QAndroidJniObject forLocale(__jni_impl::java::util::Locale arg0);
		QAndroidJniObject toLocale();
		QAndroidJniObject getFallback();
		static QAndroidJniObject getFallback(jstring arg0);
		static QAndroidJniObject getBaseName(jstring arg0);
		QAndroidJniObject getBaseName();
		QAndroidJniObject getKeywords();
		static QAndroidJniObject getKeywords(jstring arg0);
		QAndroidJniObject getKeywordValue(jstring arg0);
		static QAndroidJniObject getKeywordValue(jstring arg0, jstring arg1);
		QAndroidJniObject setKeywordValue(jstring arg0, jstring arg1);
		static QAndroidJniObject setKeywordValue(jstring arg0, jstring arg1, jstring arg2);
		jboolean isRightToLeft();
		static QAndroidJniObject getDisplayLanguageWithDialect(jstring arg0, jstring arg1);
		QAndroidJniObject getDisplayLanguageWithDialect(__jni_impl::android::icu::util::ULocale arg0);
		QAndroidJniObject getDisplayLanguageWithDialect();
		static QAndroidJniObject getDisplayLanguageWithDialect(jstring arg0, __jni_impl::android::icu::util::ULocale arg1);
		static QAndroidJniObject getDisplayKeyword(jstring arg0, jstring arg1);
		static QAndroidJniObject getDisplayKeyword(jstring arg0, __jni_impl::android::icu::util::ULocale arg1);
		static QAndroidJniObject getDisplayKeyword(jstring arg0);
		static QAndroidJniObject getDisplayKeywordValue(jstring arg0, jstring arg1, __jni_impl::android::icu::util::ULocale arg2);
		QAndroidJniObject getDisplayKeywordValue(jstring arg0, __jni_impl::android::icu::util::ULocale arg1);
		QAndroidJniObject getDisplayKeywordValue(jstring arg0);
		static QAndroidJniObject getDisplayKeywordValue(jstring arg0, jstring arg1, jstring arg2);
		static QAndroidJniObject getDisplayNameWithDialect(jstring arg0, __jni_impl::android::icu::util::ULocale arg1);
		QAndroidJniObject getDisplayNameWithDialect(__jni_impl::android::icu::util::ULocale arg0);
		QAndroidJniObject getDisplayNameWithDialect();
		static QAndroidJniObject getDisplayNameWithDialect(jstring arg0, jstring arg1);
		QAndroidJniObject getCharacterOrientation();
		QAndroidJniObject getLineOrientation();
		static QAndroidJniObject acceptLanguage(jstring arg0, jbooleanArray arg1);
		static QAndroidJniObject acceptLanguage(jstring arg0, jarray arg1, jbooleanArray arg2);
		static QAndroidJniObject acceptLanguage(jarray arg0, jarray arg1, jbooleanArray arg2);
		static QAndroidJniObject acceptLanguage(jarray arg0, jbooleanArray arg1);
		static QAndroidJniObject addLikelySubtags(__jni_impl::android::icu::util::ULocale arg0);
		static QAndroidJniObject minimizeSubtags(__jni_impl::android::icu::util::ULocale arg0);
		static QAndroidJniObject toUnicodeLocaleKey(jstring arg0);
		static QAndroidJniObject toUnicodeLocaleType(jstring arg0, jstring arg1);
		static QAndroidJniObject toLegacyKey(jstring arg0);
		static QAndroidJniObject toLegacyType(jstring arg0, jstring arg1);
	};
} // namespace __jni_impl::android::icu::util

#include "ULocale_Category.hpp"
#include "../../../java/util/Locale.hpp"

namespace __jni_impl::android::icu::util
{
	// Fields
	QAndroidJniObject ULocale::CANADA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.ULocale",
			"CANADA",
			"Landroid/icu/util/ULocale;");
	}
	QAndroidJniObject ULocale::CANADA_FRENCH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.ULocale",
			"CANADA_FRENCH",
			"Landroid/icu/util/ULocale;");
	}
	QAndroidJniObject ULocale::CHINA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.ULocale",
			"CHINA",
			"Landroid/icu/util/ULocale;");
	}
	QAndroidJniObject ULocale::CHINESE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.ULocale",
			"CHINESE",
			"Landroid/icu/util/ULocale;");
	}
	QAndroidJniObject ULocale::ENGLISH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.ULocale",
			"ENGLISH",
			"Landroid/icu/util/ULocale;");
	}
	QAndroidJniObject ULocale::FRANCE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.ULocale",
			"FRANCE",
			"Landroid/icu/util/ULocale;");
	}
	QAndroidJniObject ULocale::FRENCH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.ULocale",
			"FRENCH",
			"Landroid/icu/util/ULocale;");
	}
	QAndroidJniObject ULocale::GERMAN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.ULocale",
			"GERMAN",
			"Landroid/icu/util/ULocale;");
	}
	QAndroidJniObject ULocale::GERMANY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.ULocale",
			"GERMANY",
			"Landroid/icu/util/ULocale;");
	}
	QAndroidJniObject ULocale::ITALIAN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.ULocale",
			"ITALIAN",
			"Landroid/icu/util/ULocale;");
	}
	QAndroidJniObject ULocale::ITALY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.ULocale",
			"ITALY",
			"Landroid/icu/util/ULocale;");
	}
	QAndroidJniObject ULocale::JAPAN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.ULocale",
			"JAPAN",
			"Landroid/icu/util/ULocale;");
	}
	QAndroidJniObject ULocale::JAPANESE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.ULocale",
			"JAPANESE",
			"Landroid/icu/util/ULocale;");
	}
	QAndroidJniObject ULocale::KOREA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.ULocale",
			"KOREA",
			"Landroid/icu/util/ULocale;");
	}
	QAndroidJniObject ULocale::KOREAN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.ULocale",
			"KOREAN",
			"Landroid/icu/util/ULocale;");
	}
	QAndroidJniObject ULocale::PRC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.ULocale",
			"PRC",
			"Landroid/icu/util/ULocale;");
	}
	jchar ULocale::PRIVATE_USE_EXTENSION()
	{
		return QAndroidJniObject::getStaticField<jchar>(
			"android.icu.util.ULocale",
			"PRIVATE_USE_EXTENSION");
	}
	QAndroidJniObject ULocale::ROOT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.ULocale",
			"ROOT",
			"Landroid/icu/util/ULocale;");
	}
	QAndroidJniObject ULocale::SIMPLIFIED_CHINESE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.ULocale",
			"SIMPLIFIED_CHINESE",
			"Landroid/icu/util/ULocale;");
	}
	QAndroidJniObject ULocale::TAIWAN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.ULocale",
			"TAIWAN",
			"Landroid/icu/util/ULocale;");
	}
	QAndroidJniObject ULocale::TRADITIONAL_CHINESE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.ULocale",
			"TRADITIONAL_CHINESE",
			"Landroid/icu/util/ULocale;");
	}
	QAndroidJniObject ULocale::UK()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.ULocale",
			"UK",
			"Landroid/icu/util/ULocale;");
	}
	jchar ULocale::UNICODE_LOCALE_EXTENSION()
	{
		return QAndroidJniObject::getStaticField<jchar>(
			"android.icu.util.ULocale",
			"UNICODE_LOCALE_EXTENSION");
	}
	QAndroidJniObject ULocale::US()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.ULocale",
			"US",
			"Landroid/icu/util/ULocale;");
	}
	
	// Constructors
	void ULocale::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.ULocale",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void ULocale::__constructor(jstring arg0, jstring arg1, jstring arg2)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.ULocale",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2);
	}
	void ULocale::__constructor(jstring arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.ULocale",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1);
	}
	
	// Methods
	QAndroidJniObject ULocale::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject ULocale::getName(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getName",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0);
	}
	jboolean ULocale::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject ULocale::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint ULocale::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	QAndroidJniObject ULocale::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;");
	}
	jint ULocale::compareTo(__jni_impl::android::icu::util::ULocale arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Landroid/icu/util/ULocale;)I",
			arg0.__jniObject().object());
	}
	jint ULocale::compareTo(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0);
	}
	QAndroidJniObject ULocale::getDefault()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDefault",
			"()Landroid/icu/util/ULocale;");
	}
	QAndroidJniObject ULocale::getDefault(__jni_impl::android::icu::util::ULocale_Category arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDefault",
			"(Landroid/icu/util/ULocale$Category;)Landroid/icu/util/ULocale;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject ULocale::canonicalize(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"canonicalize",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0);
	}
	QAndroidJniObject ULocale::getLanguage(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getLanguage",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0);
	}
	QAndroidJniObject ULocale::getLanguage()
	{
		return __thiz.callObjectMethod(
			"getLanguage",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject ULocale::getAvailableLocales()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getAvailableLocales",
			"()[Landroid/icu/util/ULocale;");
	}
	QAndroidJniObject ULocale::getISOCountries()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getISOCountries",
			"()[Ljava/lang/String;");
	}
	QAndroidJniObject ULocale::getISOLanguages()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getISOLanguages",
			"()[Ljava/lang/String;");
	}
	QAndroidJniObject ULocale::getExtension(jchar arg0)
	{
		return __thiz.callObjectMethod(
			"getExtension",
			"(C)Ljava/lang/String;",
			arg0);
	}
	QAndroidJniObject ULocale::getExtensionKeys()
	{
		return __thiz.callObjectMethod(
			"getExtensionKeys",
			"()Ljava/util/Set;");
	}
	QAndroidJniObject ULocale::toLanguageTag()
	{
		return __thiz.callObjectMethod(
			"toLanguageTag",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject ULocale::forLanguageTag(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"forLanguageTag",
			"(Ljava/lang/String;)Landroid/icu/util/ULocale;",
			arg0);
	}
	QAndroidJniObject ULocale::getISO3Language(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getISO3Language",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0);
	}
	QAndroidJniObject ULocale::getISO3Language()
	{
		return __thiz.callObjectMethod(
			"getISO3Language",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject ULocale::getISO3Country()
	{
		return __thiz.callObjectMethod(
			"getISO3Country",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject ULocale::getISO3Country(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getISO3Country",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0);
	}
	QAndroidJniObject ULocale::getScript(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getScript",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0);
	}
	QAndroidJniObject ULocale::getScript()
	{
		return __thiz.callObjectMethod(
			"getScript",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject ULocale::getCountry(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getCountry",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0);
	}
	QAndroidJniObject ULocale::getCountry()
	{
		return __thiz.callObjectMethod(
			"getCountry",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject ULocale::getVariant(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getVariant",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0);
	}
	QAndroidJniObject ULocale::getVariant()
	{
		return __thiz.callObjectMethod(
			"getVariant",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject ULocale::getUnicodeLocaleAttributes()
	{
		return __thiz.callObjectMethod(
			"getUnicodeLocaleAttributes",
			"()Ljava/util/Set;");
	}
	QAndroidJniObject ULocale::getUnicodeLocaleType(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getUnicodeLocaleType",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0);
	}
	QAndroidJniObject ULocale::getUnicodeLocaleKeys()
	{
		return __thiz.callObjectMethod(
			"getUnicodeLocaleKeys",
			"()Ljava/util/Set;");
	}
	QAndroidJniObject ULocale::getDisplayLanguage()
	{
		return __thiz.callObjectMethod(
			"getDisplayLanguage",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject ULocale::getDisplayLanguage(__jni_impl::android::icu::util::ULocale arg0)
	{
		return __thiz.callObjectMethod(
			"getDisplayLanguage",
			"(Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject ULocale::getDisplayLanguage(jstring arg0, __jni_impl::android::icu::util::ULocale arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayLanguage",
			"(Ljava/lang/String;Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0,
			arg1.__jniObject().object());
	}
	QAndroidJniObject ULocale::getDisplayLanguage(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayLanguage",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1);
	}
	QAndroidJniObject ULocale::getDisplayScript(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayScript",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1);
	}
	QAndroidJniObject ULocale::getDisplayScript(jstring arg0, __jni_impl::android::icu::util::ULocale arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayScript",
			"(Ljava/lang/String;Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0,
			arg1.__jniObject().object());
	}
	QAndroidJniObject ULocale::getDisplayScript(__jni_impl::android::icu::util::ULocale arg0)
	{
		return __thiz.callObjectMethod(
			"getDisplayScript",
			"(Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject ULocale::getDisplayScript()
	{
		return __thiz.callObjectMethod(
			"getDisplayScript",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject ULocale::getDisplayCountry(jstring arg0, __jni_impl::android::icu::util::ULocale arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayCountry",
			"(Ljava/lang/String;Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0,
			arg1.__jniObject().object());
	}
	QAndroidJniObject ULocale::getDisplayCountry()
	{
		return __thiz.callObjectMethod(
			"getDisplayCountry",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject ULocale::getDisplayCountry(__jni_impl::android::icu::util::ULocale arg0)
	{
		return __thiz.callObjectMethod(
			"getDisplayCountry",
			"(Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject ULocale::getDisplayCountry(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayCountry",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1);
	}
	QAndroidJniObject ULocale::getDisplayVariant()
	{
		return __thiz.callObjectMethod(
			"getDisplayVariant",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject ULocale::getDisplayVariant(__jni_impl::android::icu::util::ULocale arg0)
	{
		return __thiz.callObjectMethod(
			"getDisplayVariant",
			"(Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject ULocale::getDisplayVariant(jstring arg0, __jni_impl::android::icu::util::ULocale arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayVariant",
			"(Ljava/lang/String;Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0,
			arg1.__jniObject().object());
	}
	QAndroidJniObject ULocale::getDisplayVariant(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayVariant",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1);
	}
	QAndroidJniObject ULocale::getDisplayName(__jni_impl::android::icu::util::ULocale arg0)
	{
		return __thiz.callObjectMethod(
			"getDisplayName",
			"(Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject ULocale::getDisplayName()
	{
		return __thiz.callObjectMethod(
			"getDisplayName",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject ULocale::getDisplayName(jstring arg0, __jni_impl::android::icu::util::ULocale arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayName",
			"(Ljava/lang/String;Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0,
			arg1.__jniObject().object());
	}
	QAndroidJniObject ULocale::getDisplayName(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayName",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1);
	}
	QAndroidJniObject ULocale::createCanonical(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"createCanonical",
			"(Ljava/lang/String;)Landroid/icu/util/ULocale;",
			arg0);
	}
	QAndroidJniObject ULocale::forLocale(__jni_impl::java::util::Locale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"forLocale",
			"(Ljava/util/Locale;)Landroid/icu/util/ULocale;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject ULocale::toLocale()
	{
		return __thiz.callObjectMethod(
			"toLocale",
			"()Ljava/util/Locale;");
	}
	QAndroidJniObject ULocale::getFallback()
	{
		return __thiz.callObjectMethod(
			"getFallback",
			"()Landroid/icu/util/ULocale;");
	}
	QAndroidJniObject ULocale::getFallback(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getFallback",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0);
	}
	QAndroidJniObject ULocale::getBaseName(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getBaseName",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0);
	}
	QAndroidJniObject ULocale::getBaseName()
	{
		return __thiz.callObjectMethod(
			"getBaseName",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject ULocale::getKeywords()
	{
		return __thiz.callObjectMethod(
			"getKeywords",
			"()Ljava/util/Iterator;");
	}
	QAndroidJniObject ULocale::getKeywords(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getKeywords",
			"(Ljava/lang/String;)Ljava/util/Iterator;",
			arg0);
	}
	QAndroidJniObject ULocale::getKeywordValue(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getKeywordValue",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0);
	}
	QAndroidJniObject ULocale::getKeywordValue(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getKeywordValue",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1);
	}
	QAndroidJniObject ULocale::setKeywordValue(jstring arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"setKeywordValue",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/icu/util/ULocale;",
			arg0,
			arg1);
	}
	QAndroidJniObject ULocale::setKeywordValue(jstring arg0, jstring arg1, jstring arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"setKeywordValue",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1,
			arg2);
	}
	jboolean ULocale::isRightToLeft()
	{
		return __thiz.callMethod<jboolean>(
			"isRightToLeft",
			"()Z");
	}
	QAndroidJniObject ULocale::getDisplayLanguageWithDialect(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayLanguageWithDialect",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1);
	}
	QAndroidJniObject ULocale::getDisplayLanguageWithDialect(__jni_impl::android::icu::util::ULocale arg0)
	{
		return __thiz.callObjectMethod(
			"getDisplayLanguageWithDialect",
			"(Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject ULocale::getDisplayLanguageWithDialect()
	{
		return __thiz.callObjectMethod(
			"getDisplayLanguageWithDialect",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject ULocale::getDisplayLanguageWithDialect(jstring arg0, __jni_impl::android::icu::util::ULocale arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayLanguageWithDialect",
			"(Ljava/lang/String;Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0,
			arg1.__jniObject().object());
	}
	QAndroidJniObject ULocale::getDisplayKeyword(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayKeyword",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1);
	}
	QAndroidJniObject ULocale::getDisplayKeyword(jstring arg0, __jni_impl::android::icu::util::ULocale arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayKeyword",
			"(Ljava/lang/String;Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0,
			arg1.__jniObject().object());
	}
	QAndroidJniObject ULocale::getDisplayKeyword(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayKeyword",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0);
	}
	QAndroidJniObject ULocale::getDisplayKeywordValue(jstring arg0, jstring arg1, __jni_impl::android::icu::util::ULocale arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayKeywordValue",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0,
			arg1,
			arg2.__jniObject().object());
	}
	QAndroidJniObject ULocale::getDisplayKeywordValue(jstring arg0, __jni_impl::android::icu::util::ULocale arg1)
	{
		return __thiz.callObjectMethod(
			"getDisplayKeywordValue",
			"(Ljava/lang/String;Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0,
			arg1.__jniObject().object());
	}
	QAndroidJniObject ULocale::getDisplayKeywordValue(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getDisplayKeywordValue",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0);
	}
	QAndroidJniObject ULocale::getDisplayKeywordValue(jstring arg0, jstring arg1, jstring arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayKeywordValue",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1,
			arg2);
	}
	QAndroidJniObject ULocale::getDisplayNameWithDialect(jstring arg0, __jni_impl::android::icu::util::ULocale arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayNameWithDialect",
			"(Ljava/lang/String;Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0,
			arg1.__jniObject().object());
	}
	QAndroidJniObject ULocale::getDisplayNameWithDialect(__jni_impl::android::icu::util::ULocale arg0)
	{
		return __thiz.callObjectMethod(
			"getDisplayNameWithDialect",
			"(Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject ULocale::getDisplayNameWithDialect()
	{
		return __thiz.callObjectMethod(
			"getDisplayNameWithDialect",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject ULocale::getDisplayNameWithDialect(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayNameWithDialect",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1);
	}
	QAndroidJniObject ULocale::getCharacterOrientation()
	{
		return __thiz.callObjectMethod(
			"getCharacterOrientation",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject ULocale::getLineOrientation()
	{
		return __thiz.callObjectMethod(
			"getLineOrientation",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject ULocale::acceptLanguage(jstring arg0, jbooleanArray arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"acceptLanguage",
			"(Ljava/lang/String;[Z)Landroid/icu/util/ULocale;",
			arg0,
			arg1);
	}
	QAndroidJniObject ULocale::acceptLanguage(jstring arg0, jarray arg1, jbooleanArray arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"acceptLanguage",
			"(Ljava/lang/String;[Landroid/icu/util/ULocale;[Z)Landroid/icu/util/ULocale;",
			arg0,
			arg1,
			arg2);
	}
	QAndroidJniObject ULocale::acceptLanguage(jarray arg0, jarray arg1, jbooleanArray arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"acceptLanguage",
			"([Landroid/icu/util/ULocale;[Landroid/icu/util/ULocale;[Z)Landroid/icu/util/ULocale;",
			arg0,
			arg1,
			arg2);
	}
	QAndroidJniObject ULocale::acceptLanguage(jarray arg0, jbooleanArray arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"acceptLanguage",
			"([Landroid/icu/util/ULocale;[Z)Landroid/icu/util/ULocale;",
			arg0,
			arg1);
	}
	QAndroidJniObject ULocale::addLikelySubtags(__jni_impl::android::icu::util::ULocale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"addLikelySubtags",
			"(Landroid/icu/util/ULocale;)Landroid/icu/util/ULocale;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject ULocale::minimizeSubtags(__jni_impl::android::icu::util::ULocale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"minimizeSubtags",
			"(Landroid/icu/util/ULocale;)Landroid/icu/util/ULocale;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject ULocale::toUnicodeLocaleKey(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"toUnicodeLocaleKey",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0);
	}
	QAndroidJniObject ULocale::toUnicodeLocaleType(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"toUnicodeLocaleType",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1);
	}
	QAndroidJniObject ULocale::toLegacyKey(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"toLegacyKey",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0);
	}
	QAndroidJniObject ULocale::toLegacyType(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"toLegacyType",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1);
	}
} // namespace __jni_impl::android::icu::util

namespace android::icu::util
{
	class ULocale : public __jni_impl::android::icu::util::ULocale
	{
	public:
		ULocale(QAndroidJniObject obj) { __thiz = obj; }
		ULocale(jstring arg0)
		{
			__constructor(
				arg0);
		}
		ULocale(jstring arg0, jstring arg1, jstring arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		ULocale(jstring arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::icu::util

#endif // ANDROID_ICU_UTIL_ULOCALE

