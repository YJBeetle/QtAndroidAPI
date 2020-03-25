#pragma once

#ifndef ANDROID_ICU_LANG_UCHARACTER
#define ANDROID_ICU_LANG_UCHARACTER

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::util
{
	class Locale;
}
namespace __jni_impl::android::icu::util
{
	class ULocale;
}
namespace __jni_impl::android::icu::text
{
	class BreakIterator;
}
namespace __jni_impl::android::icu::util
{
	class VersionInfo;
}

namespace __jni_impl::android::icu::lang
{
	class UCharacter : public __JniBaseClass
	{
	public:
		// Fields
		static jint FOLD_CASE_DEFAULT();
		static jint FOLD_CASE_EXCLUDE_SPECIAL_I();
		static jint MAX_CODE_POINT();
		static jchar MAX_HIGH_SURROGATE();
		static jchar MAX_LOW_SURROGATE();
		static jint MAX_RADIX();
		static jchar MAX_SURROGATE();
		static jint MAX_VALUE();
		static jint MIN_CODE_POINT();
		static jchar MIN_HIGH_SURROGATE();
		static jchar MIN_LOW_SURROGATE();
		static jint MIN_RADIX();
		static jint MIN_SUPPLEMENTARY_CODE_POINT();
		static jchar MIN_SURROGATE();
		static jint MIN_VALUE();
		static jdouble NO_NUMERIC_VALUE();
		static jint REPLACEMENT_CHAR();
		static jint SUPPLEMENTARY_MIN_VALUE();
		static jint TITLECASE_NO_BREAK_ADJUSTMENT();
		static jint TITLECASE_NO_LOWERCASE();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject getName(jstring arg0, jstring arg1);
		static QAndroidJniObject getName(jint arg0);
		static jboolean isJavaIdentifierStart(jint arg0);
		static jboolean isJavaIdentifierPart(jint arg0);
		static QAndroidJniObject toString(jint arg0);
		static jboolean isDigit(jint arg0);
		static jboolean isLowerCase(jint arg0);
		static jboolean isUpperCase(jint arg0);
		static jboolean isWhitespace(jint arg0);
		static jint codePointAt(jstring arg0, jint arg1);
		static jint codePointAt(jcharArray arg0, jint arg1);
		static jint codePointAt(jcharArray arg0, jint arg1, jint arg2);
		static jint codePointBefore(jcharArray arg0, jint arg1);
		static jint codePointBefore(jstring arg0, jint arg1);
		static jint codePointBefore(jcharArray arg0, jint arg1, jint arg2);
		static jint codePointCount(jstring arg0, jint arg1, jint arg2);
		static jint codePointCount(jcharArray arg0, jint arg1, jint arg2);
		static jint offsetByCodePoints(jstring arg0, jint arg1, jint arg2);
		static jint offsetByCodePoints(jcharArray arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		static QAndroidJniObject toLowerCase(__jni_impl::java::util::Locale arg0, jstring arg1);
		static QAndroidJniObject toLowerCase(jstring arg0);
		static jint toLowerCase(jint arg0);
		static QAndroidJniObject toLowerCase(__jni_impl::android::icu::util::ULocale arg0, jstring arg1);
		static QAndroidJniObject toUpperCase(jstring arg0);
		static QAndroidJniObject toUpperCase(__jni_impl::java::util::Locale arg0, jstring arg1);
		static QAndroidJniObject toUpperCase(__jni_impl::android::icu::util::ULocale arg0, jstring arg1);
		static jint toUpperCase(jint arg0);
		static QAndroidJniObject toChars(jint arg0);
		static jint toChars(jint arg0, jcharArray arg1, jint arg2);
		static jboolean isSupplementaryCodePoint(jint arg0);
		static jint getType(jint arg0);
		static jboolean isLetter(jint arg0);
		static jboolean isLetterOrDigit(jint arg0);
		static jboolean isHighSurrogate(jchar arg0);
		static jboolean isLowSurrogate(jchar arg0);
		static jint toCodePoint(jchar arg0, jchar arg1);
		static jboolean isValidCodePoint(jint arg0);
		static jboolean isTitleCase(jint arg0);
		static jboolean isDefined(jint arg0);
		static jboolean isUnicodeIdentifierStart(jint arg0);
		static jboolean isUnicodeIdentifierPart(jint arg0);
		static jboolean isIdentifierIgnorable(jint arg0);
		static QAndroidJniObject toTitleCase(__jni_impl::java::util::Locale arg0, jstring arg1, __jni_impl::android::icu::text::BreakIterator arg2, jint arg3);
		static QAndroidJniObject toTitleCase(__jni_impl::android::icu::util::ULocale arg0, jstring arg1, __jni_impl::android::icu::text::BreakIterator arg2);
		static QAndroidJniObject toTitleCase(jstring arg0, __jni_impl::android::icu::text::BreakIterator arg1);
		static QAndroidJniObject toTitleCase(__jni_impl::java::util::Locale arg0, jstring arg1, __jni_impl::android::icu::text::BreakIterator arg2);
		static QAndroidJniObject toTitleCase(__jni_impl::android::icu::util::ULocale arg0, jstring arg1, __jni_impl::android::icu::text::BreakIterator arg2, jint arg3);
		static jint toTitleCase(jint arg0);
		static jint digit(jint arg0, jint arg1);
		static jint digit(jint arg0);
		static jint getNumericValue(jint arg0);
		static jboolean isSpaceChar(jint arg0);
		static jboolean isISOControl(jint arg0);
		static jbyte getDirectionality(jint arg0);
		static jboolean isMirrored(jint arg0);
		static jint getCodePoint(jchar arg0);
		static jint getCodePoint(jchar arg0, jchar arg1);
		static jboolean isSurrogatePair(jchar arg0, jchar arg1);
		static jint charCount(jint arg0);
		static jchar forDigit(jint arg0, jint arg1);
		static jint getCombiningClass(jint arg0);
		static jboolean isSupplementary(jint arg0);
		static jint getMirror(jint arg0);
		static jdouble getUnicodeNumericValue(jint arg0);
		static jboolean isBMP(jint arg0);
		static jboolean isPrintable(jint arg0);
		static jboolean isBaseForm(jint arg0);
		static jint getBidiPairedBracket(jint arg0);
		static jboolean isLegal(jstring arg0);
		static jboolean isLegal(jint arg0);
		static QAndroidJniObject getUnicodeVersion();
		static QAndroidJniObject getExtendedName(jint arg0);
		static QAndroidJniObject getNameAlias(jint arg0);
		static jint getCharFromName(jstring arg0);
		static jint getCharFromExtendedName(jstring arg0);
		static jint getCharFromNameAlias(jstring arg0);
		static QAndroidJniObject getPropertyName(jint arg0, jint arg1);
		static jint getPropertyEnum(jstring arg0);
		static QAndroidJniObject getPropertyValueName(jint arg0, jint arg1, jint arg2);
		static jint getPropertyValueEnum(jint arg0, jstring arg1);
		static jint foldCase(jint arg0, jboolean arg1);
		static QAndroidJniObject foldCase(jstring arg0, jboolean arg1);
		static jint foldCase(jint arg0, jint arg1);
		static QAndroidJniObject foldCase(jstring arg0, jint arg1);
		static jint getHanNumericValue(jint arg0);
		static QAndroidJniObject getTypeIterator();
		static QAndroidJniObject getNameIterator();
		static QAndroidJniObject getExtendedNameIterator();
		static QAndroidJniObject getAge(jint arg0);
		static jboolean hasBinaryProperty(jint arg0, jint arg1);
		static jboolean isUAlphabetic(jint arg0);
		static jboolean isULowercase(jint arg0);
		static jboolean isUUppercase(jint arg0);
		static jboolean isUWhiteSpace(jint arg0);
		static jint getIntPropertyValue(jint arg0, jint arg1);
		static jint getIntPropertyMinValue(jint arg0);
		static jint getIntPropertyMaxValue(jint arg0);
		static jint getDirection(jint arg0);
	};
} // namespace __jni_impl::android::icu::lang

#include "../../../java/util/Locale.hpp"
#include "../util/ULocale.hpp"
#include "../text/BreakIterator.hpp"
#include "../util/VersionInfo.hpp"

namespace __jni_impl::android::icu::lang
{
	// Fields
	jint UCharacter::FOLD_CASE_DEFAULT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.lang.UCharacter",
			"FOLD_CASE_DEFAULT");
	}
	jint UCharacter::FOLD_CASE_EXCLUDE_SPECIAL_I()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.lang.UCharacter",
			"FOLD_CASE_EXCLUDE_SPECIAL_I");
	}
	jint UCharacter::MAX_CODE_POINT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.lang.UCharacter",
			"MAX_CODE_POINT");
	}
	jchar UCharacter::MAX_HIGH_SURROGATE()
	{
		return QAndroidJniObject::getStaticField<jchar>(
			"android.icu.lang.UCharacter",
			"MAX_HIGH_SURROGATE");
	}
	jchar UCharacter::MAX_LOW_SURROGATE()
	{
		return QAndroidJniObject::getStaticField<jchar>(
			"android.icu.lang.UCharacter",
			"MAX_LOW_SURROGATE");
	}
	jint UCharacter::MAX_RADIX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.lang.UCharacter",
			"MAX_RADIX");
	}
	jchar UCharacter::MAX_SURROGATE()
	{
		return QAndroidJniObject::getStaticField<jchar>(
			"android.icu.lang.UCharacter",
			"MAX_SURROGATE");
	}
	jint UCharacter::MAX_VALUE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.lang.UCharacter",
			"MAX_VALUE");
	}
	jint UCharacter::MIN_CODE_POINT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.lang.UCharacter",
			"MIN_CODE_POINT");
	}
	jchar UCharacter::MIN_HIGH_SURROGATE()
	{
		return QAndroidJniObject::getStaticField<jchar>(
			"android.icu.lang.UCharacter",
			"MIN_HIGH_SURROGATE");
	}
	jchar UCharacter::MIN_LOW_SURROGATE()
	{
		return QAndroidJniObject::getStaticField<jchar>(
			"android.icu.lang.UCharacter",
			"MIN_LOW_SURROGATE");
	}
	jint UCharacter::MIN_RADIX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.lang.UCharacter",
			"MIN_RADIX");
	}
	jint UCharacter::MIN_SUPPLEMENTARY_CODE_POINT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.lang.UCharacter",
			"MIN_SUPPLEMENTARY_CODE_POINT");
	}
	jchar UCharacter::MIN_SURROGATE()
	{
		return QAndroidJniObject::getStaticField<jchar>(
			"android.icu.lang.UCharacter",
			"MIN_SURROGATE");
	}
	jint UCharacter::MIN_VALUE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.lang.UCharacter",
			"MIN_VALUE");
	}
	jdouble UCharacter::NO_NUMERIC_VALUE()
	{
		return QAndroidJniObject::getStaticField<jdouble>(
			"android.icu.lang.UCharacter",
			"NO_NUMERIC_VALUE");
	}
	jint UCharacter::REPLACEMENT_CHAR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.lang.UCharacter",
			"REPLACEMENT_CHAR");
	}
	jint UCharacter::SUPPLEMENTARY_MIN_VALUE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.lang.UCharacter",
			"SUPPLEMENTARY_MIN_VALUE");
	}
	jint UCharacter::TITLECASE_NO_BREAK_ADJUSTMENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.lang.UCharacter",
			"TITLECASE_NO_BREAK_ADJUSTMENT");
	}
	jint UCharacter::TITLECASE_NO_LOWERCASE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.lang.UCharacter",
			"TITLECASE_NO_LOWERCASE");
	}
	
	// Constructors
	void UCharacter::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.lang.UCharacter",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject UCharacter::getName(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.lang.UCharacter",
			"getName",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1);
	}
	QAndroidJniObject UCharacter::getName(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.lang.UCharacter",
			"getName",
			"(I)Ljava/lang/String;",
			arg0);
	}
	jboolean UCharacter::isJavaIdentifierStart(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.icu.lang.UCharacter",
			"isJavaIdentifierStart",
			"(I)Z",
			arg0);
	}
	jboolean UCharacter::isJavaIdentifierPart(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.icu.lang.UCharacter",
			"isJavaIdentifierPart",
			"(I)Z",
			arg0);
	}
	QAndroidJniObject UCharacter::toString(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.lang.UCharacter",
			"toString",
			"(I)Ljava/lang/String;",
			arg0);
	}
	jboolean UCharacter::isDigit(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.icu.lang.UCharacter",
			"isDigit",
			"(I)Z",
			arg0);
	}
	jboolean UCharacter::isLowerCase(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.icu.lang.UCharacter",
			"isLowerCase",
			"(I)Z",
			arg0);
	}
	jboolean UCharacter::isUpperCase(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.icu.lang.UCharacter",
			"isUpperCase",
			"(I)Z",
			arg0);
	}
	jboolean UCharacter::isWhitespace(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.icu.lang.UCharacter",
			"isWhitespace",
			"(I)Z",
			arg0);
	}
	jint UCharacter::codePointAt(jstring arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"codePointAt",
			"(Ljava/lang/CharSequence;I)I",
			arg0,
			arg1);
	}
	jint UCharacter::codePointAt(jcharArray arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"codePointAt",
			"([CI)I",
			arg0,
			arg1);
	}
	jint UCharacter::codePointAt(jcharArray arg0, jint arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"codePointAt",
			"([CII)I",
			arg0,
			arg1,
			arg2);
	}
	jint UCharacter::codePointBefore(jcharArray arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"codePointBefore",
			"([CI)I",
			arg0,
			arg1);
	}
	jint UCharacter::codePointBefore(jstring arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"codePointBefore",
			"(Ljava/lang/CharSequence;I)I",
			arg0,
			arg1);
	}
	jint UCharacter::codePointBefore(jcharArray arg0, jint arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"codePointBefore",
			"([CII)I",
			arg0,
			arg1,
			arg2);
	}
	jint UCharacter::codePointCount(jstring arg0, jint arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"codePointCount",
			"(Ljava/lang/CharSequence;II)I",
			arg0,
			arg1,
			arg2);
	}
	jint UCharacter::codePointCount(jcharArray arg0, jint arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"codePointCount",
			"([CII)I",
			arg0,
			arg1,
			arg2);
	}
	jint UCharacter::offsetByCodePoints(jstring arg0, jint arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"offsetByCodePoints",
			"(Ljava/lang/CharSequence;II)I",
			arg0,
			arg1,
			arg2);
	}
	jint UCharacter::offsetByCodePoints(jcharArray arg0, jint arg1, jint arg2, jint arg3, jint arg4)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"offsetByCodePoints",
			"([CIIII)I",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4);
	}
	QAndroidJniObject UCharacter::toLowerCase(__jni_impl::java::util::Locale arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.lang.UCharacter",
			"toLowerCase",
			"(Ljava/util/Locale;Ljava/lang/String;)Ljava/lang/String;",
			arg0.__jniObject().object(),
			arg1);
	}
	QAndroidJniObject UCharacter::toLowerCase(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.lang.UCharacter",
			"toLowerCase",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0);
	}
	jint UCharacter::toLowerCase(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"toLowerCase",
			"(I)I",
			arg0);
	}
	QAndroidJniObject UCharacter::toLowerCase(__jni_impl::android::icu::util::ULocale arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.lang.UCharacter",
			"toLowerCase",
			"(Landroid/icu/util/ULocale;Ljava/lang/String;)Ljava/lang/String;",
			arg0.__jniObject().object(),
			arg1);
	}
	QAndroidJniObject UCharacter::toUpperCase(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.lang.UCharacter",
			"toUpperCase",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0);
	}
	QAndroidJniObject UCharacter::toUpperCase(__jni_impl::java::util::Locale arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.lang.UCharacter",
			"toUpperCase",
			"(Ljava/util/Locale;Ljava/lang/String;)Ljava/lang/String;",
			arg0.__jniObject().object(),
			arg1);
	}
	QAndroidJniObject UCharacter::toUpperCase(__jni_impl::android::icu::util::ULocale arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.lang.UCharacter",
			"toUpperCase",
			"(Landroid/icu/util/ULocale;Ljava/lang/String;)Ljava/lang/String;",
			arg0.__jniObject().object(),
			arg1);
	}
	jint UCharacter::toUpperCase(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"toUpperCase",
			"(I)I",
			arg0);
	}
	QAndroidJniObject UCharacter::toChars(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.lang.UCharacter",
			"toChars",
			"(I)[C",
			arg0);
	}
	jint UCharacter::toChars(jint arg0, jcharArray arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"toChars",
			"(I[CI)I",
			arg0,
			arg1,
			arg2);
	}
	jboolean UCharacter::isSupplementaryCodePoint(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.icu.lang.UCharacter",
			"isSupplementaryCodePoint",
			"(I)Z",
			arg0);
	}
	jint UCharacter::getType(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"getType",
			"(I)I",
			arg0);
	}
	jboolean UCharacter::isLetter(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.icu.lang.UCharacter",
			"isLetter",
			"(I)Z",
			arg0);
	}
	jboolean UCharacter::isLetterOrDigit(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.icu.lang.UCharacter",
			"isLetterOrDigit",
			"(I)Z",
			arg0);
	}
	jboolean UCharacter::isHighSurrogate(jchar arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.icu.lang.UCharacter",
			"isHighSurrogate",
			"(C)Z",
			arg0);
	}
	jboolean UCharacter::isLowSurrogate(jchar arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.icu.lang.UCharacter",
			"isLowSurrogate",
			"(C)Z",
			arg0);
	}
	jint UCharacter::toCodePoint(jchar arg0, jchar arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"toCodePoint",
			"(CC)I",
			arg0,
			arg1);
	}
	jboolean UCharacter::isValidCodePoint(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.icu.lang.UCharacter",
			"isValidCodePoint",
			"(I)Z",
			arg0);
	}
	jboolean UCharacter::isTitleCase(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.icu.lang.UCharacter",
			"isTitleCase",
			"(I)Z",
			arg0);
	}
	jboolean UCharacter::isDefined(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.icu.lang.UCharacter",
			"isDefined",
			"(I)Z",
			arg0);
	}
	jboolean UCharacter::isUnicodeIdentifierStart(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.icu.lang.UCharacter",
			"isUnicodeIdentifierStart",
			"(I)Z",
			arg0);
	}
	jboolean UCharacter::isUnicodeIdentifierPart(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.icu.lang.UCharacter",
			"isUnicodeIdentifierPart",
			"(I)Z",
			arg0);
	}
	jboolean UCharacter::isIdentifierIgnorable(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.icu.lang.UCharacter",
			"isIdentifierIgnorable",
			"(I)Z",
			arg0);
	}
	QAndroidJniObject UCharacter::toTitleCase(__jni_impl::java::util::Locale arg0, jstring arg1, __jni_impl::android::icu::text::BreakIterator arg2, jint arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.lang.UCharacter",
			"toTitleCase",
			"(Ljava/util/Locale;Ljava/lang/String;Landroid/icu/text/BreakIterator;I)Ljava/lang/String;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3);
	}
	QAndroidJniObject UCharacter::toTitleCase(__jni_impl::android::icu::util::ULocale arg0, jstring arg1, __jni_impl::android::icu::text::BreakIterator arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.lang.UCharacter",
			"toTitleCase",
			"(Landroid/icu/util/ULocale;Ljava/lang/String;Landroid/icu/text/BreakIterator;)Ljava/lang/String;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object());
	}
	QAndroidJniObject UCharacter::toTitleCase(jstring arg0, __jni_impl::android::icu::text::BreakIterator arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.lang.UCharacter",
			"toTitleCase",
			"(Ljava/lang/String;Landroid/icu/text/BreakIterator;)Ljava/lang/String;",
			arg0,
			arg1.__jniObject().object());
	}
	QAndroidJniObject UCharacter::toTitleCase(__jni_impl::java::util::Locale arg0, jstring arg1, __jni_impl::android::icu::text::BreakIterator arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.lang.UCharacter",
			"toTitleCase",
			"(Ljava/util/Locale;Ljava/lang/String;Landroid/icu/text/BreakIterator;)Ljava/lang/String;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object());
	}
	QAndroidJniObject UCharacter::toTitleCase(__jni_impl::android::icu::util::ULocale arg0, jstring arg1, __jni_impl::android::icu::text::BreakIterator arg2, jint arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.lang.UCharacter",
			"toTitleCase",
			"(Landroid/icu/util/ULocale;Ljava/lang/String;Landroid/icu/text/BreakIterator;I)Ljava/lang/String;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3);
	}
	jint UCharacter::toTitleCase(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"toTitleCase",
			"(I)I",
			arg0);
	}
	jint UCharacter::digit(jint arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"digit",
			"(II)I",
			arg0,
			arg1);
	}
	jint UCharacter::digit(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"digit",
			"(I)I",
			arg0);
	}
	jint UCharacter::getNumericValue(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"getNumericValue",
			"(I)I",
			arg0);
	}
	jboolean UCharacter::isSpaceChar(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.icu.lang.UCharacter",
			"isSpaceChar",
			"(I)Z",
			arg0);
	}
	jboolean UCharacter::isISOControl(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.icu.lang.UCharacter",
			"isISOControl",
			"(I)Z",
			arg0);
	}
	jbyte UCharacter::getDirectionality(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jbyte>(
			"android.icu.lang.UCharacter",
			"getDirectionality",
			"(I)B",
			arg0);
	}
	jboolean UCharacter::isMirrored(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.icu.lang.UCharacter",
			"isMirrored",
			"(I)Z",
			arg0);
	}
	jint UCharacter::getCodePoint(jchar arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"getCodePoint",
			"(C)I",
			arg0);
	}
	jint UCharacter::getCodePoint(jchar arg0, jchar arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"getCodePoint",
			"(CC)I",
			arg0,
			arg1);
	}
	jboolean UCharacter::isSurrogatePair(jchar arg0, jchar arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.icu.lang.UCharacter",
			"isSurrogatePair",
			"(CC)Z",
			arg0,
			arg1);
	}
	jint UCharacter::charCount(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"charCount",
			"(I)I",
			arg0);
	}
	jchar UCharacter::forDigit(jint arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jchar>(
			"android.icu.lang.UCharacter",
			"forDigit",
			"(II)C",
			arg0,
			arg1);
	}
	jint UCharacter::getCombiningClass(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"getCombiningClass",
			"(I)I",
			arg0);
	}
	jboolean UCharacter::isSupplementary(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.icu.lang.UCharacter",
			"isSupplementary",
			"(I)Z",
			arg0);
	}
	jint UCharacter::getMirror(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"getMirror",
			"(I)I",
			arg0);
	}
	jdouble UCharacter::getUnicodeNumericValue(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jdouble>(
			"android.icu.lang.UCharacter",
			"getUnicodeNumericValue",
			"(I)D",
			arg0);
	}
	jboolean UCharacter::isBMP(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.icu.lang.UCharacter",
			"isBMP",
			"(I)Z",
			arg0);
	}
	jboolean UCharacter::isPrintable(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.icu.lang.UCharacter",
			"isPrintable",
			"(I)Z",
			arg0);
	}
	jboolean UCharacter::isBaseForm(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.icu.lang.UCharacter",
			"isBaseForm",
			"(I)Z",
			arg0);
	}
	jint UCharacter::getBidiPairedBracket(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"getBidiPairedBracket",
			"(I)I",
			arg0);
	}
	jboolean UCharacter::isLegal(jstring arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.icu.lang.UCharacter",
			"isLegal",
			"(Ljava/lang/String;)Z",
			arg0);
	}
	jboolean UCharacter::isLegal(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.icu.lang.UCharacter",
			"isLegal",
			"(I)Z",
			arg0);
	}
	QAndroidJniObject UCharacter::getUnicodeVersion()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.lang.UCharacter",
			"getUnicodeVersion",
			"()Landroid/icu/util/VersionInfo;");
	}
	QAndroidJniObject UCharacter::getExtendedName(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.lang.UCharacter",
			"getExtendedName",
			"(I)Ljava/lang/String;",
			arg0);
	}
	QAndroidJniObject UCharacter::getNameAlias(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.lang.UCharacter",
			"getNameAlias",
			"(I)Ljava/lang/String;",
			arg0);
	}
	jint UCharacter::getCharFromName(jstring arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"getCharFromName",
			"(Ljava/lang/String;)I",
			arg0);
	}
	jint UCharacter::getCharFromExtendedName(jstring arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"getCharFromExtendedName",
			"(Ljava/lang/String;)I",
			arg0);
	}
	jint UCharacter::getCharFromNameAlias(jstring arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"getCharFromNameAlias",
			"(Ljava/lang/String;)I",
			arg0);
	}
	QAndroidJniObject UCharacter::getPropertyName(jint arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.lang.UCharacter",
			"getPropertyName",
			"(II)Ljava/lang/String;",
			arg0,
			arg1);
	}
	jint UCharacter::getPropertyEnum(jstring arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"getPropertyEnum",
			"(Ljava/lang/CharSequence;)I",
			arg0);
	}
	QAndroidJniObject UCharacter::getPropertyValueName(jint arg0, jint arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.lang.UCharacter",
			"getPropertyValueName",
			"(III)Ljava/lang/String;",
			arg0,
			arg1,
			arg2);
	}
	jint UCharacter::getPropertyValueEnum(jint arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"getPropertyValueEnum",
			"(ILjava/lang/CharSequence;)I",
			arg0,
			arg1);
	}
	jint UCharacter::foldCase(jint arg0, jboolean arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"foldCase",
			"(IZ)I",
			arg0,
			arg1);
	}
	QAndroidJniObject UCharacter::foldCase(jstring arg0, jboolean arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.lang.UCharacter",
			"foldCase",
			"(Ljava/lang/String;Z)Ljava/lang/String;",
			arg0,
			arg1);
	}
	jint UCharacter::foldCase(jint arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"foldCase",
			"(II)I",
			arg0,
			arg1);
	}
	QAndroidJniObject UCharacter::foldCase(jstring arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.lang.UCharacter",
			"foldCase",
			"(Ljava/lang/String;I)Ljava/lang/String;",
			arg0,
			arg1);
	}
	jint UCharacter::getHanNumericValue(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"getHanNumericValue",
			"(I)I",
			arg0);
	}
	QAndroidJniObject UCharacter::getTypeIterator()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.lang.UCharacter",
			"getTypeIterator",
			"()Landroid/icu/util/RangeValueIterator;");
	}
	QAndroidJniObject UCharacter::getNameIterator()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.lang.UCharacter",
			"getNameIterator",
			"()Landroid/icu/util/ValueIterator;");
	}
	QAndroidJniObject UCharacter::getExtendedNameIterator()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.lang.UCharacter",
			"getExtendedNameIterator",
			"()Landroid/icu/util/ValueIterator;");
	}
	QAndroidJniObject UCharacter::getAge(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.lang.UCharacter",
			"getAge",
			"(I)Landroid/icu/util/VersionInfo;",
			arg0);
	}
	jboolean UCharacter::hasBinaryProperty(jint arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.icu.lang.UCharacter",
			"hasBinaryProperty",
			"(II)Z",
			arg0,
			arg1);
	}
	jboolean UCharacter::isUAlphabetic(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.icu.lang.UCharacter",
			"isUAlphabetic",
			"(I)Z",
			arg0);
	}
	jboolean UCharacter::isULowercase(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.icu.lang.UCharacter",
			"isULowercase",
			"(I)Z",
			arg0);
	}
	jboolean UCharacter::isUUppercase(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.icu.lang.UCharacter",
			"isUUppercase",
			"(I)Z",
			arg0);
	}
	jboolean UCharacter::isUWhiteSpace(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.icu.lang.UCharacter",
			"isUWhiteSpace",
			"(I)Z",
			arg0);
	}
	jint UCharacter::getIntPropertyValue(jint arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"getIntPropertyValue",
			"(II)I",
			arg0,
			arg1);
	}
	jint UCharacter::getIntPropertyMinValue(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"getIntPropertyMinValue",
			"(I)I",
			arg0);
	}
	jint UCharacter::getIntPropertyMaxValue(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"getIntPropertyMaxValue",
			"(I)I",
			arg0);
	}
	jint UCharacter::getDirection(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"getDirection",
			"(I)I",
			arg0);
	}
} // namespace __jni_impl::android::icu::lang

namespace android::icu::lang
{
	class UCharacter : public __jni_impl::android::icu::lang::UCharacter
	{
	public:
		UCharacter(QAndroidJniObject obj) { __thiz = obj; }
		UCharacter()
		{
			__constructor();
		}
	};
} // namespace android::icu::lang

#endif // ANDROID_ICU_LANG_UCHARACTER

