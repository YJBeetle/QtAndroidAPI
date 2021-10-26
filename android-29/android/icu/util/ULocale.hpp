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
		void __constructor(const QString &arg0);
		void __constructor(jstring arg0, jstring arg1, jstring arg2);
		void __constructor(const QString &arg0, const QString &arg1, const QString &arg2);
		void __constructor(jstring arg0, jstring arg1);
		void __constructor(const QString &arg0, const QString &arg1);
		
		// Methods
		jstring getName();
		static jstring getName(jstring arg0);
		static jstring getName(const QString &arg0);
		jboolean equals(jobject arg0);
		jstring toString();
		jint hashCode();
		jobject clone();
		jint compareTo(__jni_impl::android::icu::util::ULocale arg0);
		jint compareTo(jobject arg0);
		static QAndroidJniObject getDefault();
		static QAndroidJniObject getDefault(__jni_impl::android::icu::util::ULocale_Category arg0);
		static jstring canonicalize(jstring arg0);
		static jstring canonicalize(const QString &arg0);
		static jstring getLanguage(jstring arg0);
		static jstring getLanguage(const QString &arg0);
		jstring getLanguage();
		static jarray getAvailableLocales();
		static jarray getISOCountries();
		static jarray getISOLanguages();
		jstring getExtension(jchar arg0);
		QAndroidJniObject getExtensionKeys();
		jstring toLanguageTag();
		static QAndroidJniObject forLanguageTag(jstring arg0);
		static QAndroidJniObject forLanguageTag(const QString &arg0);
		static jstring getISO3Language(jstring arg0);
		static jstring getISO3Language(const QString &arg0);
		jstring getISO3Language();
		jstring getISO3Country();
		static jstring getISO3Country(jstring arg0);
		static jstring getISO3Country(const QString &arg0);
		static jstring getScript(jstring arg0);
		static jstring getScript(const QString &arg0);
		jstring getScript();
		static jstring getCountry(jstring arg0);
		static jstring getCountry(const QString &arg0);
		jstring getCountry();
		static jstring getVariant(jstring arg0);
		static jstring getVariant(const QString &arg0);
		jstring getVariant();
		QAndroidJniObject getUnicodeLocaleAttributes();
		jstring getUnicodeLocaleType(jstring arg0);
		jstring getUnicodeLocaleType(const QString &arg0);
		QAndroidJniObject getUnicodeLocaleKeys();
		jstring getDisplayLanguage();
		jstring getDisplayLanguage(__jni_impl::android::icu::util::ULocale arg0);
		static jstring getDisplayLanguage(jstring arg0, __jni_impl::android::icu::util::ULocale arg1);
		static jstring getDisplayLanguage(const QString &arg0, __jni_impl::android::icu::util::ULocale arg1);
		static jstring getDisplayLanguage(jstring arg0, jstring arg1);
		static jstring getDisplayLanguage(const QString &arg0, const QString &arg1);
		static jstring getDisplayScript(jstring arg0, jstring arg1);
		static jstring getDisplayScript(const QString &arg0, const QString &arg1);
		static jstring getDisplayScript(jstring arg0, __jni_impl::android::icu::util::ULocale arg1);
		static jstring getDisplayScript(const QString &arg0, __jni_impl::android::icu::util::ULocale arg1);
		jstring getDisplayScript(__jni_impl::android::icu::util::ULocale arg0);
		jstring getDisplayScript();
		static jstring getDisplayCountry(jstring arg0, __jni_impl::android::icu::util::ULocale arg1);
		static jstring getDisplayCountry(const QString &arg0, __jni_impl::android::icu::util::ULocale arg1);
		jstring getDisplayCountry();
		jstring getDisplayCountry(__jni_impl::android::icu::util::ULocale arg0);
		static jstring getDisplayCountry(jstring arg0, jstring arg1);
		static jstring getDisplayCountry(const QString &arg0, const QString &arg1);
		jstring getDisplayVariant();
		jstring getDisplayVariant(__jni_impl::android::icu::util::ULocale arg0);
		static jstring getDisplayVariant(jstring arg0, __jni_impl::android::icu::util::ULocale arg1);
		static jstring getDisplayVariant(const QString &arg0, __jni_impl::android::icu::util::ULocale arg1);
		static jstring getDisplayVariant(jstring arg0, jstring arg1);
		static jstring getDisplayVariant(const QString &arg0, const QString &arg1);
		jstring getDisplayName(__jni_impl::android::icu::util::ULocale arg0);
		jstring getDisplayName();
		static jstring getDisplayName(jstring arg0, __jni_impl::android::icu::util::ULocale arg1);
		static jstring getDisplayName(const QString &arg0, __jni_impl::android::icu::util::ULocale arg1);
		static jstring getDisplayName(jstring arg0, jstring arg1);
		static jstring getDisplayName(const QString &arg0, const QString &arg1);
		QAndroidJniObject toLocale();
		static QAndroidJniObject createCanonical(jstring arg0);
		static QAndroidJniObject createCanonical(const QString &arg0);
		static QAndroidJniObject forLocale(__jni_impl::java::util::Locale arg0);
		QAndroidJniObject getFallback();
		static jstring getFallback(jstring arg0);
		static jstring getFallback(const QString &arg0);
		static jstring getBaseName(jstring arg0);
		static jstring getBaseName(const QString &arg0);
		jstring getBaseName();
		QAndroidJniObject getKeywords();
		static QAndroidJniObject getKeywords(jstring arg0);
		static QAndroidJniObject getKeywords(const QString &arg0);
		jstring getKeywordValue(jstring arg0);
		jstring getKeywordValue(const QString &arg0);
		static jstring getKeywordValue(jstring arg0, jstring arg1);
		static jstring getKeywordValue(const QString &arg0, const QString &arg1);
		QAndroidJniObject setKeywordValue(jstring arg0, jstring arg1);
		QAndroidJniObject setKeywordValue(const QString &arg0, const QString &arg1);
		static jstring setKeywordValue(jstring arg0, jstring arg1, jstring arg2);
		static jstring setKeywordValue(const QString &arg0, const QString &arg1, const QString &arg2);
		jboolean isRightToLeft();
		static jstring getDisplayLanguageWithDialect(jstring arg0, jstring arg1);
		static jstring getDisplayLanguageWithDialect(const QString &arg0, const QString &arg1);
		jstring getDisplayLanguageWithDialect(__jni_impl::android::icu::util::ULocale arg0);
		jstring getDisplayLanguageWithDialect();
		static jstring getDisplayLanguageWithDialect(jstring arg0, __jni_impl::android::icu::util::ULocale arg1);
		static jstring getDisplayLanguageWithDialect(const QString &arg0, __jni_impl::android::icu::util::ULocale arg1);
		static jstring getDisplayKeyword(jstring arg0, jstring arg1);
		static jstring getDisplayKeyword(const QString &arg0, const QString &arg1);
		static jstring getDisplayKeyword(jstring arg0, __jni_impl::android::icu::util::ULocale arg1);
		static jstring getDisplayKeyword(const QString &arg0, __jni_impl::android::icu::util::ULocale arg1);
		static jstring getDisplayKeyword(jstring arg0);
		static jstring getDisplayKeyword(const QString &arg0);
		static jstring getDisplayKeywordValue(jstring arg0, jstring arg1, __jni_impl::android::icu::util::ULocale arg2);
		static jstring getDisplayKeywordValue(const QString &arg0, const QString &arg1, __jni_impl::android::icu::util::ULocale arg2);
		jstring getDisplayKeywordValue(jstring arg0, __jni_impl::android::icu::util::ULocale arg1);
		jstring getDisplayKeywordValue(const QString &arg0, __jni_impl::android::icu::util::ULocale arg1);
		jstring getDisplayKeywordValue(jstring arg0);
		jstring getDisplayKeywordValue(const QString &arg0);
		static jstring getDisplayKeywordValue(jstring arg0, jstring arg1, jstring arg2);
		static jstring getDisplayKeywordValue(const QString &arg0, const QString &arg1, const QString &arg2);
		static jstring getDisplayNameWithDialect(jstring arg0, __jni_impl::android::icu::util::ULocale arg1);
		static jstring getDisplayNameWithDialect(const QString &arg0, __jni_impl::android::icu::util::ULocale arg1);
		jstring getDisplayNameWithDialect(__jni_impl::android::icu::util::ULocale arg0);
		jstring getDisplayNameWithDialect();
		static jstring getDisplayNameWithDialect(jstring arg0, jstring arg1);
		static jstring getDisplayNameWithDialect(const QString &arg0, const QString &arg1);
		jstring getCharacterOrientation();
		jstring getLineOrientation();
		static QAndroidJniObject acceptLanguage(jstring arg0, jbooleanArray arg1);
		static QAndroidJniObject acceptLanguage(const QString &arg0, jbooleanArray arg1);
		static QAndroidJniObject acceptLanguage(jstring arg0, jarray arg1, jbooleanArray arg2);
		static QAndroidJniObject acceptLanguage(const QString &arg0, jarray arg1, jbooleanArray arg2);
		static QAndroidJniObject acceptLanguage(jarray arg0, jarray arg1, jbooleanArray arg2);
		static QAndroidJniObject acceptLanguage(jarray arg0, jbooleanArray arg1);
		static QAndroidJniObject addLikelySubtags(__jni_impl::android::icu::util::ULocale arg0);
		static QAndroidJniObject minimizeSubtags(__jni_impl::android::icu::util::ULocale arg0);
		static jstring toUnicodeLocaleKey(jstring arg0);
		static jstring toUnicodeLocaleKey(const QString &arg0);
		static jstring toUnicodeLocaleType(jstring arg0, jstring arg1);
		static jstring toUnicodeLocaleType(const QString &arg0, const QString &arg1);
		static jstring toLegacyKey(jstring arg0);
		static jstring toLegacyKey(const QString &arg0);
		static jstring toLegacyType(jstring arg0, jstring arg1);
		static jstring toLegacyType(const QString &arg0, const QString &arg1);
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
			"Landroid/icu/util/ULocale;"
		);
	}
	QAndroidJniObject ULocale::CANADA_FRENCH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.ULocale",
			"CANADA_FRENCH",
			"Landroid/icu/util/ULocale;"
		);
	}
	QAndroidJniObject ULocale::CHINA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.ULocale",
			"CHINA",
			"Landroid/icu/util/ULocale;"
		);
	}
	QAndroidJniObject ULocale::CHINESE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.ULocale",
			"CHINESE",
			"Landroid/icu/util/ULocale;"
		);
	}
	QAndroidJniObject ULocale::ENGLISH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.ULocale",
			"ENGLISH",
			"Landroid/icu/util/ULocale;"
		);
	}
	QAndroidJniObject ULocale::FRANCE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.ULocale",
			"FRANCE",
			"Landroid/icu/util/ULocale;"
		);
	}
	QAndroidJniObject ULocale::FRENCH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.ULocale",
			"FRENCH",
			"Landroid/icu/util/ULocale;"
		);
	}
	QAndroidJniObject ULocale::GERMAN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.ULocale",
			"GERMAN",
			"Landroid/icu/util/ULocale;"
		);
	}
	QAndroidJniObject ULocale::GERMANY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.ULocale",
			"GERMANY",
			"Landroid/icu/util/ULocale;"
		);
	}
	QAndroidJniObject ULocale::ITALIAN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.ULocale",
			"ITALIAN",
			"Landroid/icu/util/ULocale;"
		);
	}
	QAndroidJniObject ULocale::ITALY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.ULocale",
			"ITALY",
			"Landroid/icu/util/ULocale;"
		);
	}
	QAndroidJniObject ULocale::JAPAN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.ULocale",
			"JAPAN",
			"Landroid/icu/util/ULocale;"
		);
	}
	QAndroidJniObject ULocale::JAPANESE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.ULocale",
			"JAPANESE",
			"Landroid/icu/util/ULocale;"
		);
	}
	QAndroidJniObject ULocale::KOREA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.ULocale",
			"KOREA",
			"Landroid/icu/util/ULocale;"
		);
	}
	QAndroidJniObject ULocale::KOREAN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.ULocale",
			"KOREAN",
			"Landroid/icu/util/ULocale;"
		);
	}
	QAndroidJniObject ULocale::PRC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.ULocale",
			"PRC",
			"Landroid/icu/util/ULocale;"
		);
	}
	jchar ULocale::PRIVATE_USE_EXTENSION()
	{
		return QAndroidJniObject::getStaticField<jchar>(
			"android.icu.util.ULocale",
			"PRIVATE_USE_EXTENSION"
		);
	}
	QAndroidJniObject ULocale::ROOT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.ULocale",
			"ROOT",
			"Landroid/icu/util/ULocale;"
		);
	}
	QAndroidJniObject ULocale::SIMPLIFIED_CHINESE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.ULocale",
			"SIMPLIFIED_CHINESE",
			"Landroid/icu/util/ULocale;"
		);
	}
	QAndroidJniObject ULocale::TAIWAN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.ULocale",
			"TAIWAN",
			"Landroid/icu/util/ULocale;"
		);
	}
	QAndroidJniObject ULocale::TRADITIONAL_CHINESE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.ULocale",
			"TRADITIONAL_CHINESE",
			"Landroid/icu/util/ULocale;"
		);
	}
	QAndroidJniObject ULocale::UK()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.ULocale",
			"UK",
			"Landroid/icu/util/ULocale;"
		);
	}
	jchar ULocale::UNICODE_LOCALE_EXTENSION()
	{
		return QAndroidJniObject::getStaticField<jchar>(
			"android.icu.util.ULocale",
			"UNICODE_LOCALE_EXTENSION"
		);
	}
	QAndroidJniObject ULocale::US()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.util.ULocale",
			"US",
			"Landroid/icu/util/ULocale;"
		);
	}
	
	// Constructors
	void ULocale::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.ULocale",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void ULocale::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.ULocale",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void ULocale::__constructor(jstring arg0, jstring arg1, jstring arg2)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.ULocale",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2
		);
	}
	void ULocale::__constructor(const QString &arg0, const QString &arg1, const QString &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.ULocale",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
	void ULocale::__constructor(jstring arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.ULocale",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void ULocale::__constructor(const QString &arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.ULocale",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	
	// Methods
	jstring ULocale::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ULocale::getName(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getName",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring ULocale::getName(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getName",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
	jboolean ULocale::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring ULocale::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint ULocale::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jobject ULocale::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jint ULocale::compareTo(__jni_impl::android::icu::util::ULocale arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Landroid/icu/util/ULocale;)I",
			arg0.__jniObject().object()
		);
	}
	jint ULocale::compareTo(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	QAndroidJniObject ULocale::getDefault()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDefault",
			"()Landroid/icu/util/ULocale;"
		);
	}
	QAndroidJniObject ULocale::getDefault(__jni_impl::android::icu::util::ULocale_Category arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDefault",
			"(Landroid/icu/util/ULocale$Category;)Landroid/icu/util/ULocale;",
			arg0.__jniObject().object()
		);
	}
	jstring ULocale::canonicalize(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"canonicalize",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring ULocale::canonicalize(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"canonicalize",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
	jstring ULocale::getLanguage(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getLanguage",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring ULocale::getLanguage(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getLanguage",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
	jstring ULocale::getLanguage()
	{
		return __thiz.callObjectMethod(
			"getLanguage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jarray ULocale::getAvailableLocales()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getAvailableLocales",
			"()[Landroid/icu/util/ULocale;"
		).object<jarray>();
	}
	jarray ULocale::getISOCountries()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getISOCountries",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jarray ULocale::getISOLanguages()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getISOLanguages",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jstring ULocale::getExtension(jchar arg0)
	{
		return __thiz.callObjectMethod(
			"getExtension",
			"(C)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	QAndroidJniObject ULocale::getExtensionKeys()
	{
		return __thiz.callObjectMethod(
			"getExtensionKeys",
			"()Ljava/util/Set;"
		);
	}
	jstring ULocale::toLanguageTag()
	{
		return __thiz.callObjectMethod(
			"toLanguageTag",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject ULocale::forLanguageTag(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"forLanguageTag",
			"(Ljava/lang/String;)Landroid/icu/util/ULocale;",
			arg0
		);
	}
	QAndroidJniObject ULocale::forLanguageTag(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"forLanguageTag",
			"(Ljava/lang/String;)Landroid/icu/util/ULocale;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jstring ULocale::getISO3Language(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getISO3Language",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring ULocale::getISO3Language(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getISO3Language",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
	jstring ULocale::getISO3Language()
	{
		return __thiz.callObjectMethod(
			"getISO3Language",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ULocale::getISO3Country()
	{
		return __thiz.callObjectMethod(
			"getISO3Country",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ULocale::getISO3Country(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getISO3Country",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring ULocale::getISO3Country(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getISO3Country",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
	jstring ULocale::getScript(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getScript",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring ULocale::getScript(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getScript",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
	jstring ULocale::getScript()
	{
		return __thiz.callObjectMethod(
			"getScript",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ULocale::getCountry(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getCountry",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring ULocale::getCountry(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getCountry",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
	jstring ULocale::getCountry()
	{
		return __thiz.callObjectMethod(
			"getCountry",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ULocale::getVariant(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getVariant",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring ULocale::getVariant(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getVariant",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
	jstring ULocale::getVariant()
	{
		return __thiz.callObjectMethod(
			"getVariant",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject ULocale::getUnicodeLocaleAttributes()
	{
		return __thiz.callObjectMethod(
			"getUnicodeLocaleAttributes",
			"()Ljava/util/Set;"
		);
	}
	jstring ULocale::getUnicodeLocaleType(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getUnicodeLocaleType",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring ULocale::getUnicodeLocaleType(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getUnicodeLocaleType",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
	QAndroidJniObject ULocale::getUnicodeLocaleKeys()
	{
		return __thiz.callObjectMethod(
			"getUnicodeLocaleKeys",
			"()Ljava/util/Set;"
		);
	}
	jstring ULocale::getDisplayLanguage()
	{
		return __thiz.callObjectMethod(
			"getDisplayLanguage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ULocale::getDisplayLanguage(__jni_impl::android::icu::util::ULocale arg0)
	{
		return __thiz.callObjectMethod(
			"getDisplayLanguage",
			"(Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jstring ULocale::getDisplayLanguage(jstring arg0, __jni_impl::android::icu::util::ULocale arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayLanguage",
			"(Ljava/lang/String;Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0,
			arg1.__jniObject().object()
		).object<jstring>();
	}
	jstring ULocale::getDisplayLanguage(const QString &arg0, __jni_impl::android::icu::util::ULocale arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayLanguage",
			"(Ljava/lang/String;Landroid/icu/util/ULocale;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		).object<jstring>();
	}
	jstring ULocale::getDisplayLanguage(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayLanguage",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring ULocale::getDisplayLanguage(const QString &arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayLanguage",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		).object<jstring>();
	}
	jstring ULocale::getDisplayScript(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayScript",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring ULocale::getDisplayScript(const QString &arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayScript",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		).object<jstring>();
	}
	jstring ULocale::getDisplayScript(jstring arg0, __jni_impl::android::icu::util::ULocale arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayScript",
			"(Ljava/lang/String;Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0,
			arg1.__jniObject().object()
		).object<jstring>();
	}
	jstring ULocale::getDisplayScript(const QString &arg0, __jni_impl::android::icu::util::ULocale arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayScript",
			"(Ljava/lang/String;Landroid/icu/util/ULocale;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		).object<jstring>();
	}
	jstring ULocale::getDisplayScript(__jni_impl::android::icu::util::ULocale arg0)
	{
		return __thiz.callObjectMethod(
			"getDisplayScript",
			"(Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jstring ULocale::getDisplayScript()
	{
		return __thiz.callObjectMethod(
			"getDisplayScript",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ULocale::getDisplayCountry(jstring arg0, __jni_impl::android::icu::util::ULocale arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayCountry",
			"(Ljava/lang/String;Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0,
			arg1.__jniObject().object()
		).object<jstring>();
	}
	jstring ULocale::getDisplayCountry(const QString &arg0, __jni_impl::android::icu::util::ULocale arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayCountry",
			"(Ljava/lang/String;Landroid/icu/util/ULocale;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		).object<jstring>();
	}
	jstring ULocale::getDisplayCountry()
	{
		return __thiz.callObjectMethod(
			"getDisplayCountry",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ULocale::getDisplayCountry(__jni_impl::android::icu::util::ULocale arg0)
	{
		return __thiz.callObjectMethod(
			"getDisplayCountry",
			"(Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jstring ULocale::getDisplayCountry(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayCountry",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring ULocale::getDisplayCountry(const QString &arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayCountry",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		).object<jstring>();
	}
	jstring ULocale::getDisplayVariant()
	{
		return __thiz.callObjectMethod(
			"getDisplayVariant",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ULocale::getDisplayVariant(__jni_impl::android::icu::util::ULocale arg0)
	{
		return __thiz.callObjectMethod(
			"getDisplayVariant",
			"(Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jstring ULocale::getDisplayVariant(jstring arg0, __jni_impl::android::icu::util::ULocale arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayVariant",
			"(Ljava/lang/String;Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0,
			arg1.__jniObject().object()
		).object<jstring>();
	}
	jstring ULocale::getDisplayVariant(const QString &arg0, __jni_impl::android::icu::util::ULocale arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayVariant",
			"(Ljava/lang/String;Landroid/icu/util/ULocale;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		).object<jstring>();
	}
	jstring ULocale::getDisplayVariant(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayVariant",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring ULocale::getDisplayVariant(const QString &arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayVariant",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		).object<jstring>();
	}
	jstring ULocale::getDisplayName(__jni_impl::android::icu::util::ULocale arg0)
	{
		return __thiz.callObjectMethod(
			"getDisplayName",
			"(Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jstring ULocale::getDisplayName()
	{
		return __thiz.callObjectMethod(
			"getDisplayName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ULocale::getDisplayName(jstring arg0, __jni_impl::android::icu::util::ULocale arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayName",
			"(Ljava/lang/String;Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0,
			arg1.__jniObject().object()
		).object<jstring>();
	}
	jstring ULocale::getDisplayName(const QString &arg0, __jni_impl::android::icu::util::ULocale arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayName",
			"(Ljava/lang/String;Landroid/icu/util/ULocale;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		).object<jstring>();
	}
	jstring ULocale::getDisplayName(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayName",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring ULocale::getDisplayName(const QString &arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayName",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		).object<jstring>();
	}
	QAndroidJniObject ULocale::toLocale()
	{
		return __thiz.callObjectMethod(
			"toLocale",
			"()Ljava/util/Locale;"
		);
	}
	QAndroidJniObject ULocale::createCanonical(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"createCanonical",
			"(Ljava/lang/String;)Landroid/icu/util/ULocale;",
			arg0
		);
	}
	QAndroidJniObject ULocale::createCanonical(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"createCanonical",
			"(Ljava/lang/String;)Landroid/icu/util/ULocale;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject ULocale::forLocale(__jni_impl::java::util::Locale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"forLocale",
			"(Ljava/util/Locale;)Landroid/icu/util/ULocale;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ULocale::getFallback()
	{
		return __thiz.callObjectMethod(
			"getFallback",
			"()Landroid/icu/util/ULocale;"
		);
	}
	jstring ULocale::getFallback(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getFallback",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring ULocale::getFallback(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getFallback",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
	jstring ULocale::getBaseName(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getBaseName",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring ULocale::getBaseName(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getBaseName",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
	jstring ULocale::getBaseName()
	{
		return __thiz.callObjectMethod(
			"getBaseName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject ULocale::getKeywords()
	{
		return __thiz.callObjectMethod(
			"getKeywords",
			"()Ljava/util/Iterator;"
		);
	}
	QAndroidJniObject ULocale::getKeywords(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getKeywords",
			"(Ljava/lang/String;)Ljava/util/Iterator;",
			arg0
		);
	}
	QAndroidJniObject ULocale::getKeywords(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getKeywords",
			"(Ljava/lang/String;)Ljava/util/Iterator;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jstring ULocale::getKeywordValue(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getKeywordValue",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring ULocale::getKeywordValue(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getKeywordValue",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
	jstring ULocale::getKeywordValue(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getKeywordValue",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring ULocale::getKeywordValue(const QString &arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getKeywordValue",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		).object<jstring>();
	}
	QAndroidJniObject ULocale::setKeywordValue(jstring arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"setKeywordValue",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/icu/util/ULocale;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject ULocale::setKeywordValue(const QString &arg0, const QString &arg1)
	{
		return __thiz.callObjectMethod(
			"setKeywordValue",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/icu/util/ULocale;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	jstring ULocale::setKeywordValue(jstring arg0, jstring arg1, jstring arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"setKeywordValue",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1,
			arg2
		).object<jstring>();
	}
	jstring ULocale::setKeywordValue(const QString &arg0, const QString &arg1, const QString &arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"setKeywordValue",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>()
		).object<jstring>();
	}
	jboolean ULocale::isRightToLeft()
	{
		return __thiz.callMethod<jboolean>(
			"isRightToLeft",
			"()Z"
		);
	}
	jstring ULocale::getDisplayLanguageWithDialect(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayLanguageWithDialect",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring ULocale::getDisplayLanguageWithDialect(const QString &arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayLanguageWithDialect",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		).object<jstring>();
	}
	jstring ULocale::getDisplayLanguageWithDialect(__jni_impl::android::icu::util::ULocale arg0)
	{
		return __thiz.callObjectMethod(
			"getDisplayLanguageWithDialect",
			"(Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jstring ULocale::getDisplayLanguageWithDialect()
	{
		return __thiz.callObjectMethod(
			"getDisplayLanguageWithDialect",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ULocale::getDisplayLanguageWithDialect(jstring arg0, __jni_impl::android::icu::util::ULocale arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayLanguageWithDialect",
			"(Ljava/lang/String;Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0,
			arg1.__jniObject().object()
		).object<jstring>();
	}
	jstring ULocale::getDisplayLanguageWithDialect(const QString &arg0, __jni_impl::android::icu::util::ULocale arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayLanguageWithDialect",
			"(Ljava/lang/String;Landroid/icu/util/ULocale;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		).object<jstring>();
	}
	jstring ULocale::getDisplayKeyword(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayKeyword",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring ULocale::getDisplayKeyword(const QString &arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayKeyword",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		).object<jstring>();
	}
	jstring ULocale::getDisplayKeyword(jstring arg0, __jni_impl::android::icu::util::ULocale arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayKeyword",
			"(Ljava/lang/String;Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0,
			arg1.__jniObject().object()
		).object<jstring>();
	}
	jstring ULocale::getDisplayKeyword(const QString &arg0, __jni_impl::android::icu::util::ULocale arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayKeyword",
			"(Ljava/lang/String;Landroid/icu/util/ULocale;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		).object<jstring>();
	}
	jstring ULocale::getDisplayKeyword(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayKeyword",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring ULocale::getDisplayKeyword(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayKeyword",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
	jstring ULocale::getDisplayKeywordValue(jstring arg0, jstring arg1, __jni_impl::android::icu::util::ULocale arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayKeywordValue",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0,
			arg1,
			arg2.__jniObject().object()
		).object<jstring>();
	}
	jstring ULocale::getDisplayKeywordValue(const QString &arg0, const QString &arg1, __jni_impl::android::icu::util::ULocale arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayKeywordValue",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/icu/util/ULocale;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
		).object<jstring>();
	}
	jstring ULocale::getDisplayKeywordValue(jstring arg0, __jni_impl::android::icu::util::ULocale arg1)
	{
		return __thiz.callObjectMethod(
			"getDisplayKeywordValue",
			"(Ljava/lang/String;Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0,
			arg1.__jniObject().object()
		).object<jstring>();
	}
	jstring ULocale::getDisplayKeywordValue(const QString &arg0, __jni_impl::android::icu::util::ULocale arg1)
	{
		return __thiz.callObjectMethod(
			"getDisplayKeywordValue",
			"(Ljava/lang/String;Landroid/icu/util/ULocale;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		).object<jstring>();
	}
	jstring ULocale::getDisplayKeywordValue(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getDisplayKeywordValue",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring ULocale::getDisplayKeywordValue(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getDisplayKeywordValue",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
	jstring ULocale::getDisplayKeywordValue(jstring arg0, jstring arg1, jstring arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayKeywordValue",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1,
			arg2
		).object<jstring>();
	}
	jstring ULocale::getDisplayKeywordValue(const QString &arg0, const QString &arg1, const QString &arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayKeywordValue",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>()
		).object<jstring>();
	}
	jstring ULocale::getDisplayNameWithDialect(jstring arg0, __jni_impl::android::icu::util::ULocale arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayNameWithDialect",
			"(Ljava/lang/String;Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0,
			arg1.__jniObject().object()
		).object<jstring>();
	}
	jstring ULocale::getDisplayNameWithDialect(const QString &arg0, __jni_impl::android::icu::util::ULocale arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayNameWithDialect",
			"(Ljava/lang/String;Landroid/icu/util/ULocale;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		).object<jstring>();
	}
	jstring ULocale::getDisplayNameWithDialect(__jni_impl::android::icu::util::ULocale arg0)
	{
		return __thiz.callObjectMethod(
			"getDisplayNameWithDialect",
			"(Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jstring ULocale::getDisplayNameWithDialect()
	{
		return __thiz.callObjectMethod(
			"getDisplayNameWithDialect",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ULocale::getDisplayNameWithDialect(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayNameWithDialect",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring ULocale::getDisplayNameWithDialect(const QString &arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"getDisplayNameWithDialect",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		).object<jstring>();
	}
	jstring ULocale::getCharacterOrientation()
	{
		return __thiz.callObjectMethod(
			"getCharacterOrientation",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ULocale::getLineOrientation()
	{
		return __thiz.callObjectMethod(
			"getLineOrientation",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject ULocale::acceptLanguage(jstring arg0, jbooleanArray arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"acceptLanguage",
			"(Ljava/lang/String;[Z)Landroid/icu/util/ULocale;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject ULocale::acceptLanguage(const QString &arg0, jbooleanArray arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"acceptLanguage",
			"(Ljava/lang/String;[Z)Landroid/icu/util/ULocale;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	QAndroidJniObject ULocale::acceptLanguage(jstring arg0, jarray arg1, jbooleanArray arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"acceptLanguage",
			"(Ljava/lang/String;[Landroid/icu/util/ULocale;[Z)Landroid/icu/util/ULocale;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject ULocale::acceptLanguage(const QString &arg0, jarray arg1, jbooleanArray arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"acceptLanguage",
			"(Ljava/lang/String;[Landroid/icu/util/ULocale;[Z)Landroid/icu/util/ULocale;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2
		);
	}
	QAndroidJniObject ULocale::acceptLanguage(jarray arg0, jarray arg1, jbooleanArray arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"acceptLanguage",
			"([Landroid/icu/util/ULocale;[Landroid/icu/util/ULocale;[Z)Landroid/icu/util/ULocale;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject ULocale::acceptLanguage(jarray arg0, jbooleanArray arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"acceptLanguage",
			"([Landroid/icu/util/ULocale;[Z)Landroid/icu/util/ULocale;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject ULocale::addLikelySubtags(__jni_impl::android::icu::util::ULocale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"addLikelySubtags",
			"(Landroid/icu/util/ULocale;)Landroid/icu/util/ULocale;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ULocale::minimizeSubtags(__jni_impl::android::icu::util::ULocale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"minimizeSubtags",
			"(Landroid/icu/util/ULocale;)Landroid/icu/util/ULocale;",
			arg0.__jniObject().object()
		);
	}
	jstring ULocale::toUnicodeLocaleKey(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"toUnicodeLocaleKey",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring ULocale::toUnicodeLocaleKey(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"toUnicodeLocaleKey",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
	jstring ULocale::toUnicodeLocaleType(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"toUnicodeLocaleType",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring ULocale::toUnicodeLocaleType(const QString &arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"toUnicodeLocaleType",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		).object<jstring>();
	}
	jstring ULocale::toLegacyKey(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"toLegacyKey",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring ULocale::toLegacyKey(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"toLegacyKey",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
	jstring ULocale::toLegacyType(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"toLegacyType",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring ULocale::toLegacyType(const QString &arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.ULocale",
			"toLegacyType",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		).object<jstring>();
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

