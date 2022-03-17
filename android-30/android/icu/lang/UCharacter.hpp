#pragma once

#include "../../../JCharArray.hpp"
#include "../text/BreakIterator.def.hpp"
#include "../util/ULocale.def.hpp"
#include "../util/VersionInfo.def.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "../../../java/util/Locale.def.hpp"
#include "./UCharacter.def.hpp"

namespace android::icu::lang
{
	// Fields
	inline jint UCharacter::FOLD_CASE_DEFAULT()
	{
		return getStaticField<jint>(
			"android.icu.lang.UCharacter",
			"FOLD_CASE_DEFAULT"
		);
	}
	inline jint UCharacter::FOLD_CASE_EXCLUDE_SPECIAL_I()
	{
		return getStaticField<jint>(
			"android.icu.lang.UCharacter",
			"FOLD_CASE_EXCLUDE_SPECIAL_I"
		);
	}
	inline jint UCharacter::MAX_CODE_POINT()
	{
		return getStaticField<jint>(
			"android.icu.lang.UCharacter",
			"MAX_CODE_POINT"
		);
	}
	inline jchar UCharacter::MAX_HIGH_SURROGATE()
	{
		return getStaticField<jchar>(
			"android.icu.lang.UCharacter",
			"MAX_HIGH_SURROGATE"
		);
	}
	inline jchar UCharacter::MAX_LOW_SURROGATE()
	{
		return getStaticField<jchar>(
			"android.icu.lang.UCharacter",
			"MAX_LOW_SURROGATE"
		);
	}
	inline jint UCharacter::MAX_RADIX()
	{
		return getStaticField<jint>(
			"android.icu.lang.UCharacter",
			"MAX_RADIX"
		);
	}
	inline jchar UCharacter::MAX_SURROGATE()
	{
		return getStaticField<jchar>(
			"android.icu.lang.UCharacter",
			"MAX_SURROGATE"
		);
	}
	inline jint UCharacter::MAX_VALUE()
	{
		return getStaticField<jint>(
			"android.icu.lang.UCharacter",
			"MAX_VALUE"
		);
	}
	inline jint UCharacter::MIN_CODE_POINT()
	{
		return getStaticField<jint>(
			"android.icu.lang.UCharacter",
			"MIN_CODE_POINT"
		);
	}
	inline jchar UCharacter::MIN_HIGH_SURROGATE()
	{
		return getStaticField<jchar>(
			"android.icu.lang.UCharacter",
			"MIN_HIGH_SURROGATE"
		);
	}
	inline jchar UCharacter::MIN_LOW_SURROGATE()
	{
		return getStaticField<jchar>(
			"android.icu.lang.UCharacter",
			"MIN_LOW_SURROGATE"
		);
	}
	inline jint UCharacter::MIN_RADIX()
	{
		return getStaticField<jint>(
			"android.icu.lang.UCharacter",
			"MIN_RADIX"
		);
	}
	inline jint UCharacter::MIN_SUPPLEMENTARY_CODE_POINT()
	{
		return getStaticField<jint>(
			"android.icu.lang.UCharacter",
			"MIN_SUPPLEMENTARY_CODE_POINT"
		);
	}
	inline jchar UCharacter::MIN_SURROGATE()
	{
		return getStaticField<jchar>(
			"android.icu.lang.UCharacter",
			"MIN_SURROGATE"
		);
	}
	inline jint UCharacter::MIN_VALUE()
	{
		return getStaticField<jint>(
			"android.icu.lang.UCharacter",
			"MIN_VALUE"
		);
	}
	inline jdouble UCharacter::NO_NUMERIC_VALUE()
	{
		return getStaticField<jdouble>(
			"android.icu.lang.UCharacter",
			"NO_NUMERIC_VALUE"
		);
	}
	inline jint UCharacter::REPLACEMENT_CHAR()
	{
		return getStaticField<jint>(
			"android.icu.lang.UCharacter",
			"REPLACEMENT_CHAR"
		);
	}
	inline jint UCharacter::SUPPLEMENTARY_MIN_VALUE()
	{
		return getStaticField<jint>(
			"android.icu.lang.UCharacter",
			"SUPPLEMENTARY_MIN_VALUE"
		);
	}
	inline jint UCharacter::TITLECASE_NO_BREAK_ADJUSTMENT()
	{
		return getStaticField<jint>(
			"android.icu.lang.UCharacter",
			"TITLECASE_NO_BREAK_ADJUSTMENT"
		);
	}
	inline jint UCharacter::TITLECASE_NO_LOWERCASE()
	{
		return getStaticField<jint>(
			"android.icu.lang.UCharacter",
			"TITLECASE_NO_LOWERCASE"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint UCharacter::charCount(jint arg0)
	{
		return callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"charCount",
			"(I)I",
			arg0
		);
	}
	inline jint UCharacter::codePointAt(JCharArray arg0, jint arg1)
	{
		return callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"codePointAt",
			"([CI)I",
			arg0.object<jcharArray>(),
			arg1
		);
	}
	inline jint UCharacter::codePointAt(JString arg0, jint arg1)
	{
		return callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"codePointAt",
			"(Ljava/lang/CharSequence;I)I",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline jint UCharacter::codePointAt(JCharArray arg0, jint arg1, jint arg2)
	{
		return callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"codePointAt",
			"([CII)I",
			arg0.object<jcharArray>(),
			arg1,
			arg2
		);
	}
	inline jint UCharacter::codePointBefore(JCharArray arg0, jint arg1)
	{
		return callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"codePointBefore",
			"([CI)I",
			arg0.object<jcharArray>(),
			arg1
		);
	}
	inline jint UCharacter::codePointBefore(JString arg0, jint arg1)
	{
		return callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"codePointBefore",
			"(Ljava/lang/CharSequence;I)I",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline jint UCharacter::codePointBefore(JCharArray arg0, jint arg1, jint arg2)
	{
		return callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"codePointBefore",
			"([CII)I",
			arg0.object<jcharArray>(),
			arg1,
			arg2
		);
	}
	inline jint UCharacter::codePointCount(JCharArray arg0, jint arg1, jint arg2)
	{
		return callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"codePointCount",
			"([CII)I",
			arg0.object<jcharArray>(),
			arg1,
			arg2
		);
	}
	inline jint UCharacter::codePointCount(JString arg0, jint arg1, jint arg2)
	{
		return callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"codePointCount",
			"(Ljava/lang/CharSequence;II)I",
			arg0.object<jstring>(),
			arg1,
			arg2
		);
	}
	inline jint UCharacter::digit(jint arg0)
	{
		return callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"digit",
			"(I)I",
			arg0
		);
	}
	inline jint UCharacter::digit(jint arg0, jint arg1)
	{
		return callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"digit",
			"(II)I",
			arg0,
			arg1
		);
	}
	inline jint UCharacter::foldCase(jint arg0, jboolean arg1)
	{
		return callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"foldCase",
			"(IZ)I",
			arg0,
			arg1
		);
	}
	inline jint UCharacter::foldCase(jint arg0, jint arg1)
	{
		return callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"foldCase",
			"(II)I",
			arg0,
			arg1
		);
	}
	inline JString UCharacter::foldCase(JString arg0, jboolean arg1)
	{
		return callStaticObjectMethod(
			"android.icu.lang.UCharacter",
			"foldCase",
			"(Ljava/lang/String;Z)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline JString UCharacter::foldCase(JString arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.icu.lang.UCharacter",
			"foldCase",
			"(Ljava/lang/String;I)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline jchar UCharacter::forDigit(jint arg0, jint arg1)
	{
		return callStaticMethod<jchar>(
			"android.icu.lang.UCharacter",
			"forDigit",
			"(II)C",
			arg0,
			arg1
		);
	}
	inline android::icu::util::VersionInfo UCharacter::getAge(jint arg0)
	{
		return callStaticObjectMethod(
			"android.icu.lang.UCharacter",
			"getAge",
			"(I)Landroid/icu/util/VersionInfo;",
			arg0
		);
	}
	inline jint UCharacter::getBidiPairedBracket(jint arg0)
	{
		return callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"getBidiPairedBracket",
			"(I)I",
			arg0
		);
	}
	inline jint UCharacter::getCharFromExtendedName(JString arg0)
	{
		return callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"getCharFromExtendedName",
			"(Ljava/lang/String;)I",
			arg0.object<jstring>()
		);
	}
	inline jint UCharacter::getCharFromName(JString arg0)
	{
		return callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"getCharFromName",
			"(Ljava/lang/String;)I",
			arg0.object<jstring>()
		);
	}
	inline jint UCharacter::getCharFromNameAlias(JString arg0)
	{
		return callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"getCharFromNameAlias",
			"(Ljava/lang/String;)I",
			arg0.object<jstring>()
		);
	}
	inline jint UCharacter::getCodePoint(jchar arg0)
	{
		return callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"getCodePoint",
			"(C)I",
			arg0
		);
	}
	inline jint UCharacter::getCodePoint(jchar arg0, jchar arg1)
	{
		return callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"getCodePoint",
			"(CC)I",
			arg0,
			arg1
		);
	}
	inline jint UCharacter::getCombiningClass(jint arg0)
	{
		return callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"getCombiningClass",
			"(I)I",
			arg0
		);
	}
	inline jint UCharacter::getDirection(jint arg0)
	{
		return callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"getDirection",
			"(I)I",
			arg0
		);
	}
	inline jbyte UCharacter::getDirectionality(jint arg0)
	{
		return callStaticMethod<jbyte>(
			"android.icu.lang.UCharacter",
			"getDirectionality",
			"(I)B",
			arg0
		);
	}
	inline JString UCharacter::getExtendedName(jint arg0)
	{
		return callStaticObjectMethod(
			"android.icu.lang.UCharacter",
			"getExtendedName",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline JObject UCharacter::getExtendedNameIterator()
	{
		return callStaticObjectMethod(
			"android.icu.lang.UCharacter",
			"getExtendedNameIterator",
			"()Landroid/icu/util/ValueIterator;"
		);
	}
	inline jint UCharacter::getHanNumericValue(jint arg0)
	{
		return callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"getHanNumericValue",
			"(I)I",
			arg0
		);
	}
	inline jint UCharacter::getIntPropertyMaxValue(jint arg0)
	{
		return callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"getIntPropertyMaxValue",
			"(I)I",
			arg0
		);
	}
	inline jint UCharacter::getIntPropertyMinValue(jint arg0)
	{
		return callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"getIntPropertyMinValue",
			"(I)I",
			arg0
		);
	}
	inline jint UCharacter::getIntPropertyValue(jint arg0, jint arg1)
	{
		return callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"getIntPropertyValue",
			"(II)I",
			arg0,
			arg1
		);
	}
	inline jint UCharacter::getMirror(jint arg0)
	{
		return callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"getMirror",
			"(I)I",
			arg0
		);
	}
	inline JString UCharacter::getName(jint arg0)
	{
		return callStaticObjectMethod(
			"android.icu.lang.UCharacter",
			"getName",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline JString UCharacter::getName(JString arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"android.icu.lang.UCharacter",
			"getName",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline JString UCharacter::getNameAlias(jint arg0)
	{
		return callStaticObjectMethod(
			"android.icu.lang.UCharacter",
			"getNameAlias",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline JObject UCharacter::getNameIterator()
	{
		return callStaticObjectMethod(
			"android.icu.lang.UCharacter",
			"getNameIterator",
			"()Landroid/icu/util/ValueIterator;"
		);
	}
	inline jint UCharacter::getNumericValue(jint arg0)
	{
		return callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"getNumericValue",
			"(I)I",
			arg0
		);
	}
	inline jint UCharacter::getPropertyEnum(JString arg0)
	{
		return callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"getPropertyEnum",
			"(Ljava/lang/CharSequence;)I",
			arg0.object<jstring>()
		);
	}
	inline JString UCharacter::getPropertyName(jint arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.icu.lang.UCharacter",
			"getPropertyName",
			"(II)Ljava/lang/String;",
			arg0,
			arg1
		);
	}
	inline jint UCharacter::getPropertyValueEnum(jint arg0, JString arg1)
	{
		return callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"getPropertyValueEnum",
			"(ILjava/lang/CharSequence;)I",
			arg0,
			arg1.object<jstring>()
		);
	}
	inline JString UCharacter::getPropertyValueName(jint arg0, jint arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"android.icu.lang.UCharacter",
			"getPropertyValueName",
			"(III)Ljava/lang/String;",
			arg0,
			arg1,
			arg2
		);
	}
	inline jint UCharacter::getType(jint arg0)
	{
		return callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"getType",
			"(I)I",
			arg0
		);
	}
	inline JObject UCharacter::getTypeIterator()
	{
		return callStaticObjectMethod(
			"android.icu.lang.UCharacter",
			"getTypeIterator",
			"()Landroid/icu/util/RangeValueIterator;"
		);
	}
	inline jdouble UCharacter::getUnicodeNumericValue(jint arg0)
	{
		return callStaticMethod<jdouble>(
			"android.icu.lang.UCharacter",
			"getUnicodeNumericValue",
			"(I)D",
			arg0
		);
	}
	inline android::icu::util::VersionInfo UCharacter::getUnicodeVersion()
	{
		return callStaticObjectMethod(
			"android.icu.lang.UCharacter",
			"getUnicodeVersion",
			"()Landroid/icu/util/VersionInfo;"
		);
	}
	inline jboolean UCharacter::hasBinaryProperty(jint arg0, jint arg1)
	{
		return callStaticMethod<jboolean>(
			"android.icu.lang.UCharacter",
			"hasBinaryProperty",
			"(II)Z",
			arg0,
			arg1
		);
	}
	inline jboolean UCharacter::isBMP(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.icu.lang.UCharacter",
			"isBMP",
			"(I)Z",
			arg0
		);
	}
	inline jboolean UCharacter::isBaseForm(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.icu.lang.UCharacter",
			"isBaseForm",
			"(I)Z",
			arg0
		);
	}
	inline jboolean UCharacter::isDefined(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.icu.lang.UCharacter",
			"isDefined",
			"(I)Z",
			arg0
		);
	}
	inline jboolean UCharacter::isDigit(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.icu.lang.UCharacter",
			"isDigit",
			"(I)Z",
			arg0
		);
	}
	inline jboolean UCharacter::isHighSurrogate(jchar arg0)
	{
		return callStaticMethod<jboolean>(
			"android.icu.lang.UCharacter",
			"isHighSurrogate",
			"(C)Z",
			arg0
		);
	}
	inline jboolean UCharacter::isISOControl(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.icu.lang.UCharacter",
			"isISOControl",
			"(I)Z",
			arg0
		);
	}
	inline jboolean UCharacter::isIdentifierIgnorable(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.icu.lang.UCharacter",
			"isIdentifierIgnorable",
			"(I)Z",
			arg0
		);
	}
	inline jboolean UCharacter::isJavaIdentifierPart(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.icu.lang.UCharacter",
			"isJavaIdentifierPart",
			"(I)Z",
			arg0
		);
	}
	inline jboolean UCharacter::isJavaIdentifierStart(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.icu.lang.UCharacter",
			"isJavaIdentifierStart",
			"(I)Z",
			arg0
		);
	}
	inline jboolean UCharacter::isLegal(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.icu.lang.UCharacter",
			"isLegal",
			"(I)Z",
			arg0
		);
	}
	inline jboolean UCharacter::isLegal(JString arg0)
	{
		return callStaticMethod<jboolean>(
			"android.icu.lang.UCharacter",
			"isLegal",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline jboolean UCharacter::isLetter(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.icu.lang.UCharacter",
			"isLetter",
			"(I)Z",
			arg0
		);
	}
	inline jboolean UCharacter::isLetterOrDigit(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.icu.lang.UCharacter",
			"isLetterOrDigit",
			"(I)Z",
			arg0
		);
	}
	inline jboolean UCharacter::isLowSurrogate(jchar arg0)
	{
		return callStaticMethod<jboolean>(
			"android.icu.lang.UCharacter",
			"isLowSurrogate",
			"(C)Z",
			arg0
		);
	}
	inline jboolean UCharacter::isLowerCase(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.icu.lang.UCharacter",
			"isLowerCase",
			"(I)Z",
			arg0
		);
	}
	inline jboolean UCharacter::isMirrored(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.icu.lang.UCharacter",
			"isMirrored",
			"(I)Z",
			arg0
		);
	}
	inline jboolean UCharacter::isPrintable(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.icu.lang.UCharacter",
			"isPrintable",
			"(I)Z",
			arg0
		);
	}
	inline jboolean UCharacter::isSpaceChar(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.icu.lang.UCharacter",
			"isSpaceChar",
			"(I)Z",
			arg0
		);
	}
	inline jboolean UCharacter::isSupplementary(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.icu.lang.UCharacter",
			"isSupplementary",
			"(I)Z",
			arg0
		);
	}
	inline jboolean UCharacter::isSupplementaryCodePoint(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.icu.lang.UCharacter",
			"isSupplementaryCodePoint",
			"(I)Z",
			arg0
		);
	}
	inline jboolean UCharacter::isSurrogatePair(jchar arg0, jchar arg1)
	{
		return callStaticMethod<jboolean>(
			"android.icu.lang.UCharacter",
			"isSurrogatePair",
			"(CC)Z",
			arg0,
			arg1
		);
	}
	inline jboolean UCharacter::isTitleCase(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.icu.lang.UCharacter",
			"isTitleCase",
			"(I)Z",
			arg0
		);
	}
	inline jboolean UCharacter::isUAlphabetic(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.icu.lang.UCharacter",
			"isUAlphabetic",
			"(I)Z",
			arg0
		);
	}
	inline jboolean UCharacter::isULowercase(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.icu.lang.UCharacter",
			"isULowercase",
			"(I)Z",
			arg0
		);
	}
	inline jboolean UCharacter::isUUppercase(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.icu.lang.UCharacter",
			"isUUppercase",
			"(I)Z",
			arg0
		);
	}
	inline jboolean UCharacter::isUWhiteSpace(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.icu.lang.UCharacter",
			"isUWhiteSpace",
			"(I)Z",
			arg0
		);
	}
	inline jboolean UCharacter::isUnicodeIdentifierPart(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.icu.lang.UCharacter",
			"isUnicodeIdentifierPart",
			"(I)Z",
			arg0
		);
	}
	inline jboolean UCharacter::isUnicodeIdentifierStart(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.icu.lang.UCharacter",
			"isUnicodeIdentifierStart",
			"(I)Z",
			arg0
		);
	}
	inline jboolean UCharacter::isUpperCase(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.icu.lang.UCharacter",
			"isUpperCase",
			"(I)Z",
			arg0
		);
	}
	inline jboolean UCharacter::isValidCodePoint(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.icu.lang.UCharacter",
			"isValidCodePoint",
			"(I)Z",
			arg0
		);
	}
	inline jboolean UCharacter::isWhitespace(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.icu.lang.UCharacter",
			"isWhitespace",
			"(I)Z",
			arg0
		);
	}
	inline jint UCharacter::offsetByCodePoints(JString arg0, jint arg1, jint arg2)
	{
		return callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"offsetByCodePoints",
			"(Ljava/lang/CharSequence;II)I",
			arg0.object<jstring>(),
			arg1,
			arg2
		);
	}
	inline jint UCharacter::offsetByCodePoints(JCharArray arg0, jint arg1, jint arg2, jint arg3, jint arg4)
	{
		return callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"offsetByCodePoints",
			"([CIIII)I",
			arg0.object<jcharArray>(),
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	inline JCharArray UCharacter::toChars(jint arg0)
	{
		return callStaticObjectMethod(
			"android.icu.lang.UCharacter",
			"toChars",
			"(I)[C",
			arg0
		);
	}
	inline jint UCharacter::toChars(jint arg0, JCharArray arg1, jint arg2)
	{
		return callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"toChars",
			"(I[CI)I",
			arg0,
			arg1.object<jcharArray>(),
			arg2
		);
	}
	inline jint UCharacter::toCodePoint(jchar arg0, jchar arg1)
	{
		return callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"toCodePoint",
			"(CC)I",
			arg0,
			arg1
		);
	}
	inline jint UCharacter::toLowerCase(jint arg0)
	{
		return callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"toLowerCase",
			"(I)I",
			arg0
		);
	}
	inline JString UCharacter::toLowerCase(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.lang.UCharacter",
			"toLowerCase",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline JString UCharacter::toLowerCase(android::icu::util::ULocale arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"android.icu.lang.UCharacter",
			"toLowerCase",
			"(Landroid/icu/util/ULocale;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline JString UCharacter::toLowerCase(java::util::Locale arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"android.icu.lang.UCharacter",
			"toLowerCase",
			"(Ljava/util/Locale;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline JString UCharacter::toString(jint arg0)
	{
		return callStaticObjectMethod(
			"android.icu.lang.UCharacter",
			"toString",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline jint UCharacter::toTitleCase(jint arg0)
	{
		return callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"toTitleCase",
			"(I)I",
			arg0
		);
	}
	inline JString UCharacter::toTitleCase(JString arg0, android::icu::text::BreakIterator arg1)
	{
		return callStaticObjectMethod(
			"android.icu.lang.UCharacter",
			"toTitleCase",
			"(Ljava/lang/String;Landroid/icu/text/BreakIterator;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline JString UCharacter::toTitleCase(android::icu::util::ULocale arg0, JString arg1, android::icu::text::BreakIterator arg2)
	{
		return callStaticObjectMethod(
			"android.icu.lang.UCharacter",
			"toTitleCase",
			"(Landroid/icu/util/ULocale;Ljava/lang/String;Landroid/icu/text/BreakIterator;)Ljava/lang/String;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	inline JString UCharacter::toTitleCase(java::util::Locale arg0, JString arg1, android::icu::text::BreakIterator arg2)
	{
		return callStaticObjectMethod(
			"android.icu.lang.UCharacter",
			"toTitleCase",
			"(Ljava/util/Locale;Ljava/lang/String;Landroid/icu/text/BreakIterator;)Ljava/lang/String;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	inline JString UCharacter::toTitleCase(android::icu::util::ULocale arg0, JString arg1, android::icu::text::BreakIterator arg2, jint arg3)
	{
		return callStaticObjectMethod(
			"android.icu.lang.UCharacter",
			"toTitleCase",
			"(Landroid/icu/util/ULocale;Ljava/lang/String;Landroid/icu/text/BreakIterator;I)Ljava/lang/String;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object(),
			arg3
		);
	}
	inline JString UCharacter::toTitleCase(java::util::Locale arg0, JString arg1, android::icu::text::BreakIterator arg2, jint arg3)
	{
		return callStaticObjectMethod(
			"android.icu.lang.UCharacter",
			"toTitleCase",
			"(Ljava/util/Locale;Ljava/lang/String;Landroid/icu/text/BreakIterator;I)Ljava/lang/String;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object(),
			arg3
		);
	}
	inline jint UCharacter::toUpperCase(jint arg0)
	{
		return callStaticMethod<jint>(
			"android.icu.lang.UCharacter",
			"toUpperCase",
			"(I)I",
			arg0
		);
	}
	inline JString UCharacter::toUpperCase(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.lang.UCharacter",
			"toUpperCase",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline JString UCharacter::toUpperCase(android::icu::util::ULocale arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"android.icu.lang.UCharacter",
			"toUpperCase",
			"(Landroid/icu/util/ULocale;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline JString UCharacter::toUpperCase(java::util::Locale arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"android.icu.lang.UCharacter",
			"toUpperCase",
			"(Ljava/util/Locale;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
} // namespace android::icu::lang

// Base class headers

