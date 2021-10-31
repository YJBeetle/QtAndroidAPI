#include "../text/BreakIterator.hpp"
#include "../util/ULocale.hpp"
#include "../util/VersionInfo.hpp"
#include "../../../java/util/Locale.hpp"
#include "./UCharacter.hpp"

namespace android::icu::lang
{
	// Fields
	jint UCharacter::FOLD_CASE_DEFAULT()
	{
		return getStaticField<jint>(
			"android.icu.lang.UCharacter",
			"FOLD_CASE_DEFAULT"
		);
	}
	jint UCharacter::FOLD_CASE_EXCLUDE_SPECIAL_I()
	{
		return getStaticField<jint>(
			"android.icu.lang.UCharacter",
			"FOLD_CASE_EXCLUDE_SPECIAL_I"
		);
	}
	jint UCharacter::MAX_CODE_POINT()
	{
		return getStaticField<jint>(
			"android.icu.lang.UCharacter",
			"MAX_CODE_POINT"
		);
	}
	jchar UCharacter::MAX_HIGH_SURROGATE()
	{
		return getStaticField<jchar>(
			"android.icu.lang.UCharacter",
			"MAX_HIGH_SURROGATE"
		);
	}
	jchar UCharacter::MAX_LOW_SURROGATE()
	{
		return getStaticField<jchar>(
			"android.icu.lang.UCharacter",
			"MAX_LOW_SURROGATE"
		);
	}
	jint UCharacter::MAX_RADIX()
	{
		return getStaticField<jint>(
			"android.icu.lang.UCharacter",
			"MAX_RADIX"
		);
	}
	jchar UCharacter::MAX_SURROGATE()
	{
		return getStaticField<jchar>(
			"android.icu.lang.UCharacter",
			"MAX_SURROGATE"
		);
	}
	jint UCharacter::MAX_VALUE()
	{
		return getStaticField<jint>(
			"android.icu.lang.UCharacter",
			"MAX_VALUE"
		);
	}
	jint UCharacter::MIN_CODE_POINT()
	{
		return getStaticField<jint>(
			"android.icu.lang.UCharacter",
			"MIN_CODE_POINT"
		);
	}
	jchar UCharacter::MIN_HIGH_SURROGATE()
	{
		return getStaticField<jchar>(
			"android.icu.lang.UCharacter",
			"MIN_HIGH_SURROGATE"
		);
	}
	jchar UCharacter::MIN_LOW_SURROGATE()
	{
		return getStaticField<jchar>(
			"android.icu.lang.UCharacter",
			"MIN_LOW_SURROGATE"
		);
	}
	jint UCharacter::MIN_RADIX()
	{
		return getStaticField<jint>(
			"android.icu.lang.UCharacter",
			"MIN_RADIX"
		);
	}
	jint UCharacter::MIN_SUPPLEMENTARY_CODE_POINT()
	{
		return getStaticField<jint>(
			"android.icu.lang.UCharacter",
			"MIN_SUPPLEMENTARY_CODE_POINT"
		);
	}
	jchar UCharacter::MIN_SURROGATE()
	{
		return getStaticField<jchar>(
			"android.icu.lang.UCharacter",
			"MIN_SURROGATE"
		);
	}
	jint UCharacter::MIN_VALUE()
	{
		return getStaticField<jint>(
			"android.icu.lang.UCharacter",
			"MIN_VALUE"
		);
	}
	jdouble UCharacter::NO_NUMERIC_VALUE()
	{
		return getStaticField<jdouble>(
			"android.icu.lang.UCharacter",
			"NO_NUMERIC_VALUE"
		);
	}
	jint UCharacter::REPLACEMENT_CHAR()
	{
		return getStaticField<jint>(
			"android.icu.lang.UCharacter",
			"REPLACEMENT_CHAR"
		);
	}
	jint UCharacter::SUPPLEMENTARY_MIN_VALUE()
	{
		return getStaticField<jint>(
			"android.icu.lang.UCharacter",
			"SUPPLEMENTARY_MIN_VALUE"
		);
	}
	jint UCharacter::TITLECASE_NO_BREAK_ADJUSTMENT()
	{
		return getStaticField<jint>(
			"android.icu.lang.UCharacter",
			"TITLECASE_NO_BREAK_ADJUSTMENT"
		);
	}
	jint UCharacter::TITLECASE_NO_LOWERCASE()
	{
		return getStaticField<jint>(
			"android.icu.lang.UCharacter",
			"TITLECASE_NO_LOWERCASE"
		);
	}
	
	// QAndroidJniObject forward
	UCharacter::UCharacter(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint UCharacter::charCount(jint arg0)
	{
		return callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"charCount",
			"(I)I",
			arg0
		);
	}
	jint UCharacter::codePointAt(jcharArray arg0, jint arg1)
	{
		return callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"codePointAt",
			"([CI)I",
			arg0,
			arg1
		);
	}
	jint UCharacter::codePointAt(jstring arg0, jint arg1)
	{
		return callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"codePointAt",
			"(Ljava/lang/CharSequence;I)I",
			arg0,
			arg1
		);
	}
	jint UCharacter::codePointAt(jcharArray arg0, jint arg1, jint arg2)
	{
		return callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"codePointAt",
			"([CII)I",
			arg0,
			arg1,
			arg2
		);
	}
	jint UCharacter::codePointBefore(jcharArray arg0, jint arg1)
	{
		return callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"codePointBefore",
			"([CI)I",
			arg0,
			arg1
		);
	}
	jint UCharacter::codePointBefore(jstring arg0, jint arg1)
	{
		return callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"codePointBefore",
			"(Ljava/lang/CharSequence;I)I",
			arg0,
			arg1
		);
	}
	jint UCharacter::codePointBefore(jcharArray arg0, jint arg1, jint arg2)
	{
		return callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"codePointBefore",
			"([CII)I",
			arg0,
			arg1,
			arg2
		);
	}
	jint UCharacter::codePointCount(jcharArray arg0, jint arg1, jint arg2)
	{
		return callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"codePointCount",
			"([CII)I",
			arg0,
			arg1,
			arg2
		);
	}
	jint UCharacter::codePointCount(jstring arg0, jint arg1, jint arg2)
	{
		return callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"codePointCount",
			"(Ljava/lang/CharSequence;II)I",
			arg0,
			arg1,
			arg2
		);
	}
	jint UCharacter::digit(jint arg0)
	{
		return callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"digit",
			"(I)I",
			arg0
		);
	}
	jint UCharacter::digit(jint arg0, jint arg1)
	{
		return callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"digit",
			"(II)I",
			arg0,
			arg1
		);
	}
	jint UCharacter::foldCase(jint arg0, jboolean arg1)
	{
		return callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"foldCase",
			"(IZ)I",
			arg0,
			arg1
		);
	}
	jint UCharacter::foldCase(jint arg0, jint arg1)
	{
		return callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"foldCase",
			"(II)I",
			arg0,
			arg1
		);
	}
	jstring UCharacter::foldCase(jstring arg0, jboolean arg1)
	{
		return callStaticObjectMethod(
			"android.icu.lang.UCharacter",
			"foldCase",
			"(Ljava/lang/String;Z)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring UCharacter::foldCase(jstring arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.icu.lang.UCharacter",
			"foldCase",
			"(Ljava/lang/String;I)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jchar UCharacter::forDigit(jint arg0, jint arg1)
	{
		return callStaticMethod<jchar>(
			"android.icu.lang.UCharacter",
			"forDigit",
			"(II)C",
			arg0,
			arg1
		);
	}
	android::icu::util::VersionInfo UCharacter::getAge(jint arg0)
	{
		return callStaticObjectMethod(
			"android.icu.lang.UCharacter",
			"getAge",
			"(I)Landroid/icu/util/VersionInfo;",
			arg0
		);
	}
	jint UCharacter::getBidiPairedBracket(jint arg0)
	{
		return callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"getBidiPairedBracket",
			"(I)I",
			arg0
		);
	}
	jint UCharacter::getCharFromExtendedName(jstring arg0)
	{
		return callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"getCharFromExtendedName",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
	jint UCharacter::getCharFromName(jstring arg0)
	{
		return callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"getCharFromName",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
	jint UCharacter::getCharFromNameAlias(jstring arg0)
	{
		return callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"getCharFromNameAlias",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
	jint UCharacter::getCodePoint(jchar arg0)
	{
		return callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"getCodePoint",
			"(C)I",
			arg0
		);
	}
	jint UCharacter::getCodePoint(jchar arg0, jchar arg1)
	{
		return callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"getCodePoint",
			"(CC)I",
			arg0,
			arg1
		);
	}
	jint UCharacter::getCombiningClass(jint arg0)
	{
		return callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"getCombiningClass",
			"(I)I",
			arg0
		);
	}
	jint UCharacter::getDirection(jint arg0)
	{
		return callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"getDirection",
			"(I)I",
			arg0
		);
	}
	jbyte UCharacter::getDirectionality(jint arg0)
	{
		return callStaticMethod<jbyte>(
			"android.icu.lang.UCharacter",
			"getDirectionality",
			"(I)B",
			arg0
		);
	}
	jstring UCharacter::getExtendedName(jint arg0)
	{
		return callStaticObjectMethod(
			"android.icu.lang.UCharacter",
			"getExtendedName",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	__JniBaseClass UCharacter::getExtendedNameIterator()
	{
		return callStaticObjectMethod(
			"android.icu.lang.UCharacter",
			"getExtendedNameIterator",
			"()Landroid/icu/util/ValueIterator;"
		);
	}
	jint UCharacter::getHanNumericValue(jint arg0)
	{
		return callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"getHanNumericValue",
			"(I)I",
			arg0
		);
	}
	jint UCharacter::getIntPropertyMaxValue(jint arg0)
	{
		return callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"getIntPropertyMaxValue",
			"(I)I",
			arg0
		);
	}
	jint UCharacter::getIntPropertyMinValue(jint arg0)
	{
		return callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"getIntPropertyMinValue",
			"(I)I",
			arg0
		);
	}
	jint UCharacter::getIntPropertyValue(jint arg0, jint arg1)
	{
		return callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"getIntPropertyValue",
			"(II)I",
			arg0,
			arg1
		);
	}
	jint UCharacter::getMirror(jint arg0)
	{
		return callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"getMirror",
			"(I)I",
			arg0
		);
	}
	jstring UCharacter::getName(jint arg0)
	{
		return callStaticObjectMethod(
			"android.icu.lang.UCharacter",
			"getName",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring UCharacter::getName(jstring arg0, jstring arg1)
	{
		return callStaticObjectMethod(
			"android.icu.lang.UCharacter",
			"getName",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring UCharacter::getNameAlias(jint arg0)
	{
		return callStaticObjectMethod(
			"android.icu.lang.UCharacter",
			"getNameAlias",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	__JniBaseClass UCharacter::getNameIterator()
	{
		return callStaticObjectMethod(
			"android.icu.lang.UCharacter",
			"getNameIterator",
			"()Landroid/icu/util/ValueIterator;"
		);
	}
	jint UCharacter::getNumericValue(jint arg0)
	{
		return callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"getNumericValue",
			"(I)I",
			arg0
		);
	}
	jint UCharacter::getPropertyEnum(jstring arg0)
	{
		return callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"getPropertyEnum",
			"(Ljava/lang/CharSequence;)I",
			arg0
		);
	}
	jstring UCharacter::getPropertyName(jint arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.icu.lang.UCharacter",
			"getPropertyName",
			"(II)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jint UCharacter::getPropertyValueEnum(jint arg0, jstring arg1)
	{
		return callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"getPropertyValueEnum",
			"(ILjava/lang/CharSequence;)I",
			arg0,
			arg1
		);
	}
	jstring UCharacter::getPropertyValueName(jint arg0, jint arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"android.icu.lang.UCharacter",
			"getPropertyValueName",
			"(III)Ljava/lang/String;",
			arg0,
			arg1,
			arg2
		).object<jstring>();
	}
	jint UCharacter::getType(jint arg0)
	{
		return callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"getType",
			"(I)I",
			arg0
		);
	}
	__JniBaseClass UCharacter::getTypeIterator()
	{
		return callStaticObjectMethod(
			"android.icu.lang.UCharacter",
			"getTypeIterator",
			"()Landroid/icu/util/RangeValueIterator;"
		);
	}
	jdouble UCharacter::getUnicodeNumericValue(jint arg0)
	{
		return callStaticMethod<jdouble>(
			"android.icu.lang.UCharacter",
			"getUnicodeNumericValue",
			"(I)D",
			arg0
		);
	}
	android::icu::util::VersionInfo UCharacter::getUnicodeVersion()
	{
		return callStaticObjectMethod(
			"android.icu.lang.UCharacter",
			"getUnicodeVersion",
			"()Landroid/icu/util/VersionInfo;"
		);
	}
	jboolean UCharacter::hasBinaryProperty(jint arg0, jint arg1)
	{
		return callStaticMethod<jboolean>(
			"android.icu.lang.UCharacter",
			"hasBinaryProperty",
			"(II)Z",
			arg0,
			arg1
		);
	}
	jboolean UCharacter::isBMP(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.icu.lang.UCharacter",
			"isBMP",
			"(I)Z",
			arg0
		);
	}
	jboolean UCharacter::isBaseForm(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.icu.lang.UCharacter",
			"isBaseForm",
			"(I)Z",
			arg0
		);
	}
	jboolean UCharacter::isDefined(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.icu.lang.UCharacter",
			"isDefined",
			"(I)Z",
			arg0
		);
	}
	jboolean UCharacter::isDigit(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.icu.lang.UCharacter",
			"isDigit",
			"(I)Z",
			arg0
		);
	}
	jboolean UCharacter::isHighSurrogate(jchar arg0)
	{
		return callStaticMethod<jboolean>(
			"android.icu.lang.UCharacter",
			"isHighSurrogate",
			"(C)Z",
			arg0
		);
	}
	jboolean UCharacter::isISOControl(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.icu.lang.UCharacter",
			"isISOControl",
			"(I)Z",
			arg0
		);
	}
	jboolean UCharacter::isIdentifierIgnorable(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.icu.lang.UCharacter",
			"isIdentifierIgnorable",
			"(I)Z",
			arg0
		);
	}
	jboolean UCharacter::isJavaIdentifierPart(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.icu.lang.UCharacter",
			"isJavaIdentifierPart",
			"(I)Z",
			arg0
		);
	}
	jboolean UCharacter::isJavaIdentifierStart(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.icu.lang.UCharacter",
			"isJavaIdentifierStart",
			"(I)Z",
			arg0
		);
	}
	jboolean UCharacter::isLegal(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.icu.lang.UCharacter",
			"isLegal",
			"(I)Z",
			arg0
		);
	}
	jboolean UCharacter::isLegal(jstring arg0)
	{
		return callStaticMethod<jboolean>(
			"android.icu.lang.UCharacter",
			"isLegal",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean UCharacter::isLetter(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.icu.lang.UCharacter",
			"isLetter",
			"(I)Z",
			arg0
		);
	}
	jboolean UCharacter::isLetterOrDigit(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.icu.lang.UCharacter",
			"isLetterOrDigit",
			"(I)Z",
			arg0
		);
	}
	jboolean UCharacter::isLowSurrogate(jchar arg0)
	{
		return callStaticMethod<jboolean>(
			"android.icu.lang.UCharacter",
			"isLowSurrogate",
			"(C)Z",
			arg0
		);
	}
	jboolean UCharacter::isLowerCase(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.icu.lang.UCharacter",
			"isLowerCase",
			"(I)Z",
			arg0
		);
	}
	jboolean UCharacter::isMirrored(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.icu.lang.UCharacter",
			"isMirrored",
			"(I)Z",
			arg0
		);
	}
	jboolean UCharacter::isPrintable(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.icu.lang.UCharacter",
			"isPrintable",
			"(I)Z",
			arg0
		);
	}
	jboolean UCharacter::isSpaceChar(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.icu.lang.UCharacter",
			"isSpaceChar",
			"(I)Z",
			arg0
		);
	}
	jboolean UCharacter::isSupplementary(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.icu.lang.UCharacter",
			"isSupplementary",
			"(I)Z",
			arg0
		);
	}
	jboolean UCharacter::isSupplementaryCodePoint(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.icu.lang.UCharacter",
			"isSupplementaryCodePoint",
			"(I)Z",
			arg0
		);
	}
	jboolean UCharacter::isSurrogatePair(jchar arg0, jchar arg1)
	{
		return callStaticMethod<jboolean>(
			"android.icu.lang.UCharacter",
			"isSurrogatePair",
			"(CC)Z",
			arg0,
			arg1
		);
	}
	jboolean UCharacter::isTitleCase(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.icu.lang.UCharacter",
			"isTitleCase",
			"(I)Z",
			arg0
		);
	}
	jboolean UCharacter::isUAlphabetic(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.icu.lang.UCharacter",
			"isUAlphabetic",
			"(I)Z",
			arg0
		);
	}
	jboolean UCharacter::isULowercase(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.icu.lang.UCharacter",
			"isULowercase",
			"(I)Z",
			arg0
		);
	}
	jboolean UCharacter::isUUppercase(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.icu.lang.UCharacter",
			"isUUppercase",
			"(I)Z",
			arg0
		);
	}
	jboolean UCharacter::isUWhiteSpace(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.icu.lang.UCharacter",
			"isUWhiteSpace",
			"(I)Z",
			arg0
		);
	}
	jboolean UCharacter::isUnicodeIdentifierPart(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.icu.lang.UCharacter",
			"isUnicodeIdentifierPart",
			"(I)Z",
			arg0
		);
	}
	jboolean UCharacter::isUnicodeIdentifierStart(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.icu.lang.UCharacter",
			"isUnicodeIdentifierStart",
			"(I)Z",
			arg0
		);
	}
	jboolean UCharacter::isUpperCase(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.icu.lang.UCharacter",
			"isUpperCase",
			"(I)Z",
			arg0
		);
	}
	jboolean UCharacter::isValidCodePoint(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.icu.lang.UCharacter",
			"isValidCodePoint",
			"(I)Z",
			arg0
		);
	}
	jboolean UCharacter::isWhitespace(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.icu.lang.UCharacter",
			"isWhitespace",
			"(I)Z",
			arg0
		);
	}
	jint UCharacter::offsetByCodePoints(jstring arg0, jint arg1, jint arg2)
	{
		return callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"offsetByCodePoints",
			"(Ljava/lang/CharSequence;II)I",
			arg0,
			arg1,
			arg2
		);
	}
	jint UCharacter::offsetByCodePoints(jcharArray arg0, jint arg1, jint arg2, jint arg3, jint arg4)
	{
		return callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"offsetByCodePoints",
			"([CIIII)I",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	jcharArray UCharacter::toChars(jint arg0)
	{
		return callStaticObjectMethod(
			"android.icu.lang.UCharacter",
			"toChars",
			"(I)[C",
			arg0
		).object<jcharArray>();
	}
	jint UCharacter::toChars(jint arg0, jcharArray arg1, jint arg2)
	{
		return callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"toChars",
			"(I[CI)I",
			arg0,
			arg1,
			arg2
		);
	}
	jint UCharacter::toCodePoint(jchar arg0, jchar arg1)
	{
		return callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"toCodePoint",
			"(CC)I",
			arg0,
			arg1
		);
	}
	jint UCharacter::toLowerCase(jint arg0)
	{
		return callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"toLowerCase",
			"(I)I",
			arg0
		);
	}
	jstring UCharacter::toLowerCase(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.icu.lang.UCharacter",
			"toLowerCase",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring UCharacter::toLowerCase(android::icu::util::ULocale arg0, jstring arg1)
	{
		return callStaticObjectMethod(
			"android.icu.lang.UCharacter",
			"toLowerCase",
			"(Landroid/icu/util/ULocale;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object(),
			arg1
		).object<jstring>();
	}
	jstring UCharacter::toLowerCase(java::util::Locale arg0, jstring arg1)
	{
		return callStaticObjectMethod(
			"android.icu.lang.UCharacter",
			"toLowerCase",
			"(Ljava/util/Locale;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object(),
			arg1
		).object<jstring>();
	}
	jstring UCharacter::toString(jint arg0)
	{
		return callStaticObjectMethod(
			"android.icu.lang.UCharacter",
			"toString",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jint UCharacter::toTitleCase(jint arg0)
	{
		return callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"toTitleCase",
			"(I)I",
			arg0
		);
	}
	jstring UCharacter::toTitleCase(jstring arg0, android::icu::text::BreakIterator arg1)
	{
		return callStaticObjectMethod(
			"android.icu.lang.UCharacter",
			"toTitleCase",
			"(Ljava/lang/String;Landroid/icu/text/BreakIterator;)Ljava/lang/String;",
			arg0,
			arg1.object()
		).object<jstring>();
	}
	jstring UCharacter::toTitleCase(android::icu::util::ULocale arg0, jstring arg1, android::icu::text::BreakIterator arg2)
	{
		return callStaticObjectMethod(
			"android.icu.lang.UCharacter",
			"toTitleCase",
			"(Landroid/icu/util/ULocale;Ljava/lang/String;Landroid/icu/text/BreakIterator;)Ljava/lang/String;",
			arg0.object(),
			arg1,
			arg2.object()
		).object<jstring>();
	}
	jstring UCharacter::toTitleCase(java::util::Locale arg0, jstring arg1, android::icu::text::BreakIterator arg2)
	{
		return callStaticObjectMethod(
			"android.icu.lang.UCharacter",
			"toTitleCase",
			"(Ljava/util/Locale;Ljava/lang/String;Landroid/icu/text/BreakIterator;)Ljava/lang/String;",
			arg0.object(),
			arg1,
			arg2.object()
		).object<jstring>();
	}
	jstring UCharacter::toTitleCase(android::icu::util::ULocale arg0, jstring arg1, android::icu::text::BreakIterator arg2, jint arg3)
	{
		return callStaticObjectMethod(
			"android.icu.lang.UCharacter",
			"toTitleCase",
			"(Landroid/icu/util/ULocale;Ljava/lang/String;Landroid/icu/text/BreakIterator;I)Ljava/lang/String;",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3
		).object<jstring>();
	}
	jstring UCharacter::toTitleCase(java::util::Locale arg0, jstring arg1, android::icu::text::BreakIterator arg2, jint arg3)
	{
		return callStaticObjectMethod(
			"android.icu.lang.UCharacter",
			"toTitleCase",
			"(Ljava/util/Locale;Ljava/lang/String;Landroid/icu/text/BreakIterator;I)Ljava/lang/String;",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3
		).object<jstring>();
	}
	jint UCharacter::toUpperCase(jint arg0)
	{
		return callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"toUpperCase",
			"(I)I",
			arg0
		);
	}
	jstring UCharacter::toUpperCase(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.icu.lang.UCharacter",
			"toUpperCase",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring UCharacter::toUpperCase(android::icu::util::ULocale arg0, jstring arg1)
	{
		return callStaticObjectMethod(
			"android.icu.lang.UCharacter",
			"toUpperCase",
			"(Landroid/icu/util/ULocale;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object(),
			arg1
		).object<jstring>();
	}
	jstring UCharacter::toUpperCase(java::util::Locale arg0, jstring arg1)
	{
		return callStaticObjectMethod(
			"android.icu.lang.UCharacter",
			"toUpperCase",
			"(Ljava/util/Locale;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object(),
			arg1
		).object<jstring>();
	}
} // namespace android::icu::lang

