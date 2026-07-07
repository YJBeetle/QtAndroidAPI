#pragma once

#include "../../JCharArray.hpp"
#include "../../JString.hpp"
#include "../../JClass.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../util/Optional.def.hpp"
#include "./Character.def.hpp"

namespace java::lang
{
	// Fields
	inline jint Character::BYTES()
	{
		return getStaticField<jint>(
			"java.lang.Character",
			"BYTES"
		);
	}
	inline jbyte Character::COMBINING_SPACING_MARK()
	{
		return getStaticField<jbyte>(
			"java.lang.Character",
			"COMBINING_SPACING_MARK"
		);
	}
	inline jbyte Character::CONNECTOR_PUNCTUATION()
	{
		return getStaticField<jbyte>(
			"java.lang.Character",
			"CONNECTOR_PUNCTUATION"
		);
	}
	inline jbyte Character::CONTROL()
	{
		return getStaticField<jbyte>(
			"java.lang.Character",
			"CONTROL"
		);
	}
	inline jbyte Character::CURRENCY_SYMBOL()
	{
		return getStaticField<jbyte>(
			"java.lang.Character",
			"CURRENCY_SYMBOL"
		);
	}
	inline jbyte Character::DASH_PUNCTUATION()
	{
		return getStaticField<jbyte>(
			"java.lang.Character",
			"DASH_PUNCTUATION"
		);
	}
	inline jbyte Character::DECIMAL_DIGIT_NUMBER()
	{
		return getStaticField<jbyte>(
			"java.lang.Character",
			"DECIMAL_DIGIT_NUMBER"
		);
	}
	inline jbyte Character::DIRECTIONALITY_ARABIC_NUMBER()
	{
		return getStaticField<jbyte>(
			"java.lang.Character",
			"DIRECTIONALITY_ARABIC_NUMBER"
		);
	}
	inline jbyte Character::DIRECTIONALITY_BOUNDARY_NEUTRAL()
	{
		return getStaticField<jbyte>(
			"java.lang.Character",
			"DIRECTIONALITY_BOUNDARY_NEUTRAL"
		);
	}
	inline jbyte Character::DIRECTIONALITY_COMMON_NUMBER_SEPARATOR()
	{
		return getStaticField<jbyte>(
			"java.lang.Character",
			"DIRECTIONALITY_COMMON_NUMBER_SEPARATOR"
		);
	}
	inline jbyte Character::DIRECTIONALITY_EUROPEAN_NUMBER()
	{
		return getStaticField<jbyte>(
			"java.lang.Character",
			"DIRECTIONALITY_EUROPEAN_NUMBER"
		);
	}
	inline jbyte Character::DIRECTIONALITY_EUROPEAN_NUMBER_SEPARATOR()
	{
		return getStaticField<jbyte>(
			"java.lang.Character",
			"DIRECTIONALITY_EUROPEAN_NUMBER_SEPARATOR"
		);
	}
	inline jbyte Character::DIRECTIONALITY_EUROPEAN_NUMBER_TERMINATOR()
	{
		return getStaticField<jbyte>(
			"java.lang.Character",
			"DIRECTIONALITY_EUROPEAN_NUMBER_TERMINATOR"
		);
	}
	inline jbyte Character::DIRECTIONALITY_FIRST_STRONG_ISOLATE()
	{
		return getStaticField<jbyte>(
			"java.lang.Character",
			"DIRECTIONALITY_FIRST_STRONG_ISOLATE"
		);
	}
	inline jbyte Character::DIRECTIONALITY_LEFT_TO_RIGHT()
	{
		return getStaticField<jbyte>(
			"java.lang.Character",
			"DIRECTIONALITY_LEFT_TO_RIGHT"
		);
	}
	inline jbyte Character::DIRECTIONALITY_LEFT_TO_RIGHT_EMBEDDING()
	{
		return getStaticField<jbyte>(
			"java.lang.Character",
			"DIRECTIONALITY_LEFT_TO_RIGHT_EMBEDDING"
		);
	}
	inline jbyte Character::DIRECTIONALITY_LEFT_TO_RIGHT_ISOLATE()
	{
		return getStaticField<jbyte>(
			"java.lang.Character",
			"DIRECTIONALITY_LEFT_TO_RIGHT_ISOLATE"
		);
	}
	inline jbyte Character::DIRECTIONALITY_LEFT_TO_RIGHT_OVERRIDE()
	{
		return getStaticField<jbyte>(
			"java.lang.Character",
			"DIRECTIONALITY_LEFT_TO_RIGHT_OVERRIDE"
		);
	}
	inline jbyte Character::DIRECTIONALITY_NONSPACING_MARK()
	{
		return getStaticField<jbyte>(
			"java.lang.Character",
			"DIRECTIONALITY_NONSPACING_MARK"
		);
	}
	inline jbyte Character::DIRECTIONALITY_OTHER_NEUTRALS()
	{
		return getStaticField<jbyte>(
			"java.lang.Character",
			"DIRECTIONALITY_OTHER_NEUTRALS"
		);
	}
	inline jbyte Character::DIRECTIONALITY_PARAGRAPH_SEPARATOR()
	{
		return getStaticField<jbyte>(
			"java.lang.Character",
			"DIRECTIONALITY_PARAGRAPH_SEPARATOR"
		);
	}
	inline jbyte Character::DIRECTIONALITY_POP_DIRECTIONAL_FORMAT()
	{
		return getStaticField<jbyte>(
			"java.lang.Character",
			"DIRECTIONALITY_POP_DIRECTIONAL_FORMAT"
		);
	}
	inline jbyte Character::DIRECTIONALITY_POP_DIRECTIONAL_ISOLATE()
	{
		return getStaticField<jbyte>(
			"java.lang.Character",
			"DIRECTIONALITY_POP_DIRECTIONAL_ISOLATE"
		);
	}
	inline jbyte Character::DIRECTIONALITY_RIGHT_TO_LEFT()
	{
		return getStaticField<jbyte>(
			"java.lang.Character",
			"DIRECTIONALITY_RIGHT_TO_LEFT"
		);
	}
	inline jbyte Character::DIRECTIONALITY_RIGHT_TO_LEFT_ARABIC()
	{
		return getStaticField<jbyte>(
			"java.lang.Character",
			"DIRECTIONALITY_RIGHT_TO_LEFT_ARABIC"
		);
	}
	inline jbyte Character::DIRECTIONALITY_RIGHT_TO_LEFT_EMBEDDING()
	{
		return getStaticField<jbyte>(
			"java.lang.Character",
			"DIRECTIONALITY_RIGHT_TO_LEFT_EMBEDDING"
		);
	}
	inline jbyte Character::DIRECTIONALITY_RIGHT_TO_LEFT_ISOLATE()
	{
		return getStaticField<jbyte>(
			"java.lang.Character",
			"DIRECTIONALITY_RIGHT_TO_LEFT_ISOLATE"
		);
	}
	inline jbyte Character::DIRECTIONALITY_RIGHT_TO_LEFT_OVERRIDE()
	{
		return getStaticField<jbyte>(
			"java.lang.Character",
			"DIRECTIONALITY_RIGHT_TO_LEFT_OVERRIDE"
		);
	}
	inline jbyte Character::DIRECTIONALITY_SEGMENT_SEPARATOR()
	{
		return getStaticField<jbyte>(
			"java.lang.Character",
			"DIRECTIONALITY_SEGMENT_SEPARATOR"
		);
	}
	inline jbyte Character::DIRECTIONALITY_UNDEFINED()
	{
		return getStaticField<jbyte>(
			"java.lang.Character",
			"DIRECTIONALITY_UNDEFINED"
		);
	}
	inline jbyte Character::DIRECTIONALITY_WHITESPACE()
	{
		return getStaticField<jbyte>(
			"java.lang.Character",
			"DIRECTIONALITY_WHITESPACE"
		);
	}
	inline jbyte Character::ENCLOSING_MARK()
	{
		return getStaticField<jbyte>(
			"java.lang.Character",
			"ENCLOSING_MARK"
		);
	}
	inline jbyte Character::END_PUNCTUATION()
	{
		return getStaticField<jbyte>(
			"java.lang.Character",
			"END_PUNCTUATION"
		);
	}
	inline jbyte Character::FINAL_QUOTE_PUNCTUATION()
	{
		return getStaticField<jbyte>(
			"java.lang.Character",
			"FINAL_QUOTE_PUNCTUATION"
		);
	}
	inline jbyte Character::FORMAT()
	{
		return getStaticField<jbyte>(
			"java.lang.Character",
			"FORMAT"
		);
	}
	inline jbyte Character::INITIAL_QUOTE_PUNCTUATION()
	{
		return getStaticField<jbyte>(
			"java.lang.Character",
			"INITIAL_QUOTE_PUNCTUATION"
		);
	}
	inline jbyte Character::LETTER_NUMBER()
	{
		return getStaticField<jbyte>(
			"java.lang.Character",
			"LETTER_NUMBER"
		);
	}
	inline jbyte Character::LINE_SEPARATOR()
	{
		return getStaticField<jbyte>(
			"java.lang.Character",
			"LINE_SEPARATOR"
		);
	}
	inline jbyte Character::LOWERCASE_LETTER()
	{
		return getStaticField<jbyte>(
			"java.lang.Character",
			"LOWERCASE_LETTER"
		);
	}
	inline jbyte Character::MATH_SYMBOL()
	{
		return getStaticField<jbyte>(
			"java.lang.Character",
			"MATH_SYMBOL"
		);
	}
	inline jint Character::MAX_CODE_POINT()
	{
		return getStaticField<jint>(
			"java.lang.Character",
			"MAX_CODE_POINT"
		);
	}
	inline jchar Character::MAX_HIGH_SURROGATE()
	{
		return getStaticField<jchar>(
			"java.lang.Character",
			"MAX_HIGH_SURROGATE"
		);
	}
	inline jchar Character::MAX_LOW_SURROGATE()
	{
		return getStaticField<jchar>(
			"java.lang.Character",
			"MAX_LOW_SURROGATE"
		);
	}
	inline jint Character::MAX_RADIX()
	{
		return getStaticField<jint>(
			"java.lang.Character",
			"MAX_RADIX"
		);
	}
	inline jchar Character::MAX_SURROGATE()
	{
		return getStaticField<jchar>(
			"java.lang.Character",
			"MAX_SURROGATE"
		);
	}
	inline jchar Character::MAX_VALUE()
	{
		return getStaticField<jchar>(
			"java.lang.Character",
			"MAX_VALUE"
		);
	}
	inline jint Character::MIN_CODE_POINT()
	{
		return getStaticField<jint>(
			"java.lang.Character",
			"MIN_CODE_POINT"
		);
	}
	inline jchar Character::MIN_HIGH_SURROGATE()
	{
		return getStaticField<jchar>(
			"java.lang.Character",
			"MIN_HIGH_SURROGATE"
		);
	}
	inline jchar Character::MIN_LOW_SURROGATE()
	{
		return getStaticField<jchar>(
			"java.lang.Character",
			"MIN_LOW_SURROGATE"
		);
	}
	inline jint Character::MIN_RADIX()
	{
		return getStaticField<jint>(
			"java.lang.Character",
			"MIN_RADIX"
		);
	}
	inline jint Character::MIN_SUPPLEMENTARY_CODE_POINT()
	{
		return getStaticField<jint>(
			"java.lang.Character",
			"MIN_SUPPLEMENTARY_CODE_POINT"
		);
	}
	inline jchar Character::MIN_SURROGATE()
	{
		return getStaticField<jchar>(
			"java.lang.Character",
			"MIN_SURROGATE"
		);
	}
	inline jchar Character::MIN_VALUE()
	{
		return getStaticField<jchar>(
			"java.lang.Character",
			"MIN_VALUE"
		);
	}
	inline jbyte Character::MODIFIER_LETTER()
	{
		return getStaticField<jbyte>(
			"java.lang.Character",
			"MODIFIER_LETTER"
		);
	}
	inline jbyte Character::MODIFIER_SYMBOL()
	{
		return getStaticField<jbyte>(
			"java.lang.Character",
			"MODIFIER_SYMBOL"
		);
	}
	inline jbyte Character::NON_SPACING_MARK()
	{
		return getStaticField<jbyte>(
			"java.lang.Character",
			"NON_SPACING_MARK"
		);
	}
	inline jbyte Character::OTHER_LETTER()
	{
		return getStaticField<jbyte>(
			"java.lang.Character",
			"OTHER_LETTER"
		);
	}
	inline jbyte Character::OTHER_NUMBER()
	{
		return getStaticField<jbyte>(
			"java.lang.Character",
			"OTHER_NUMBER"
		);
	}
	inline jbyte Character::OTHER_PUNCTUATION()
	{
		return getStaticField<jbyte>(
			"java.lang.Character",
			"OTHER_PUNCTUATION"
		);
	}
	inline jbyte Character::OTHER_SYMBOL()
	{
		return getStaticField<jbyte>(
			"java.lang.Character",
			"OTHER_SYMBOL"
		);
	}
	inline jbyte Character::PARAGRAPH_SEPARATOR()
	{
		return getStaticField<jbyte>(
			"java.lang.Character",
			"PARAGRAPH_SEPARATOR"
		);
	}
	inline jbyte Character::PRIVATE_USE()
	{
		return getStaticField<jbyte>(
			"java.lang.Character",
			"PRIVATE_USE"
		);
	}
	inline jint Character::SIZE()
	{
		return getStaticField<jint>(
			"java.lang.Character",
			"SIZE"
		);
	}
	inline jbyte Character::SPACE_SEPARATOR()
	{
		return getStaticField<jbyte>(
			"java.lang.Character",
			"SPACE_SEPARATOR"
		);
	}
	inline jbyte Character::START_PUNCTUATION()
	{
		return getStaticField<jbyte>(
			"java.lang.Character",
			"START_PUNCTUATION"
		);
	}
	inline jbyte Character::SURROGATE()
	{
		return getStaticField<jbyte>(
			"java.lang.Character",
			"SURROGATE"
		);
	}
	inline jbyte Character::TITLECASE_LETTER()
	{
		return getStaticField<jbyte>(
			"java.lang.Character",
			"TITLECASE_LETTER"
		);
	}
	inline JClass Character::TYPE()
	{
		return getStaticObjectField(
			"java.lang.Character",
			"TYPE",
			"Ljava/lang/Class;"
		);
	}
	inline jbyte Character::UNASSIGNED()
	{
		return getStaticField<jbyte>(
			"java.lang.Character",
			"UNASSIGNED"
		);
	}
	inline jbyte Character::UPPERCASE_LETTER()
	{
		return getStaticField<jbyte>(
			"java.lang.Character",
			"UPPERCASE_LETTER"
		);
	}
	
	// Constructors
	inline Character::Character(jchar arg0)
		: JObject(
			"java.lang.Character",
			"(C)V",
			arg0
		) {}
	
	// Methods
	inline jint Character::charCount(jint arg0)
	{
		return callStaticMethod<jint>(
			"java.lang.Character",
			"charCount",
			"(I)I",
			arg0
		);
	}
	inline jint Character::codePointAt(JCharArray arg0, jint arg1)
	{
		return callStaticMethod<jint>(
			"java.lang.Character",
			"codePointAt",
			"([CI)I",
			arg0.object<jcharArray>(),
			arg1
		);
	}
	inline jint Character::codePointAt(JString arg0, jint arg1)
	{
		return callStaticMethod<jint>(
			"java.lang.Character",
			"codePointAt",
			"(Ljava/lang/CharSequence;I)I",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline jint Character::codePointAt(JCharArray arg0, jint arg1, jint arg2)
	{
		return callStaticMethod<jint>(
			"java.lang.Character",
			"codePointAt",
			"([CII)I",
			arg0.object<jcharArray>(),
			arg1,
			arg2
		);
	}
	inline jint Character::codePointBefore(JCharArray arg0, jint arg1)
	{
		return callStaticMethod<jint>(
			"java.lang.Character",
			"codePointBefore",
			"([CI)I",
			arg0.object<jcharArray>(),
			arg1
		);
	}
	inline jint Character::codePointBefore(JString arg0, jint arg1)
	{
		return callStaticMethod<jint>(
			"java.lang.Character",
			"codePointBefore",
			"(Ljava/lang/CharSequence;I)I",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline jint Character::codePointBefore(JCharArray arg0, jint arg1, jint arg2)
	{
		return callStaticMethod<jint>(
			"java.lang.Character",
			"codePointBefore",
			"([CII)I",
			arg0.object<jcharArray>(),
			arg1,
			arg2
		);
	}
	inline jint Character::codePointCount(JCharArray arg0, jint arg1, jint arg2)
	{
		return callStaticMethod<jint>(
			"java.lang.Character",
			"codePointCount",
			"([CII)I",
			arg0.object<jcharArray>(),
			arg1,
			arg2
		);
	}
	inline jint Character::codePointCount(JString arg0, jint arg1, jint arg2)
	{
		return callStaticMethod<jint>(
			"java.lang.Character",
			"codePointCount",
			"(Ljava/lang/CharSequence;II)I",
			arg0.object<jstring>(),
			arg1,
			arg2
		);
	}
	inline jint Character::codePointOf(JString arg0)
	{
		return callStaticMethod<jint>(
			"java.lang.Character",
			"codePointOf",
			"(Ljava/lang/String;)I",
			arg0.object<jstring>()
		);
	}
	inline jint Character::compare(jchar arg0, jchar arg1)
	{
		return callStaticMethod<jint>(
			"java.lang.Character",
			"compare",
			"(CC)I",
			arg0,
			arg1
		);
	}
	inline jint Character::digit(jchar arg0, jint arg1)
	{
		return callStaticMethod<jint>(
			"java.lang.Character",
			"digit",
			"(CI)I",
			arg0,
			arg1
		);
	}
	inline jint Character::digit(jint arg0, jint arg1)
	{
		return callStaticMethod<jint>(
			"java.lang.Character",
			"digit",
			"(II)I",
			arg0,
			arg1
		);
	}
	inline jchar Character::forDigit(jint arg0, jint arg1)
	{
		return callStaticMethod<jchar>(
			"java.lang.Character",
			"forDigit",
			"(II)C",
			arg0,
			arg1
		);
	}
	inline jbyte Character::getDirectionality(jchar arg0)
	{
		return callStaticMethod<jbyte>(
			"java.lang.Character",
			"getDirectionality",
			"(C)B",
			arg0
		);
	}
	inline jbyte Character::getDirectionality(jint arg0)
	{
		return callStaticMethod<jbyte>(
			"java.lang.Character",
			"getDirectionality",
			"(I)B",
			arg0
		);
	}
	inline JString Character::getName(jint arg0)
	{
		return callStaticObjectMethod(
			"java.lang.Character",
			"getName",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline jint Character::getNumericValue(jchar arg0)
	{
		return callStaticMethod<jint>(
			"java.lang.Character",
			"getNumericValue",
			"(C)I",
			arg0
		);
	}
	inline jint Character::getNumericValue(jint arg0)
	{
		return callStaticMethod<jint>(
			"java.lang.Character",
			"getNumericValue",
			"(I)I",
			arg0
		);
	}
	inline jint Character::getType(jchar arg0)
	{
		return callStaticMethod<jint>(
			"java.lang.Character",
			"getType",
			"(C)I",
			arg0
		);
	}
	inline jint Character::getType(jint arg0)
	{
		return callStaticMethod<jint>(
			"java.lang.Character",
			"getType",
			"(I)I",
			arg0
		);
	}
	inline jint Character::hashCode(jchar arg0)
	{
		return callStaticMethod<jint>(
			"java.lang.Character",
			"hashCode",
			"(C)I",
			arg0
		);
	}
	inline jchar Character::highSurrogate(jint arg0)
	{
		return callStaticMethod<jchar>(
			"java.lang.Character",
			"highSurrogate",
			"(I)C",
			arg0
		);
	}
	inline jboolean Character::isAlphabetic(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"java.lang.Character",
			"isAlphabetic",
			"(I)Z",
			arg0
		);
	}
	inline jboolean Character::isBmpCodePoint(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"java.lang.Character",
			"isBmpCodePoint",
			"(I)Z",
			arg0
		);
	}
	inline jboolean Character::isDefined(jchar arg0)
	{
		return callStaticMethod<jboolean>(
			"java.lang.Character",
			"isDefined",
			"(C)Z",
			arg0
		);
	}
	inline jboolean Character::isDefined(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"java.lang.Character",
			"isDefined",
			"(I)Z",
			arg0
		);
	}
	inline jboolean Character::isDigit(jchar arg0)
	{
		return callStaticMethod<jboolean>(
			"java.lang.Character",
			"isDigit",
			"(C)Z",
			arg0
		);
	}
	inline jboolean Character::isDigit(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"java.lang.Character",
			"isDigit",
			"(I)Z",
			arg0
		);
	}
	inline jboolean Character::isHighSurrogate(jchar arg0)
	{
		return callStaticMethod<jboolean>(
			"java.lang.Character",
			"isHighSurrogate",
			"(C)Z",
			arg0
		);
	}
	inline jboolean Character::isISOControl(jchar arg0)
	{
		return callStaticMethod<jboolean>(
			"java.lang.Character",
			"isISOControl",
			"(C)Z",
			arg0
		);
	}
	inline jboolean Character::isISOControl(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"java.lang.Character",
			"isISOControl",
			"(I)Z",
			arg0
		);
	}
	inline jboolean Character::isIdentifierIgnorable(jchar arg0)
	{
		return callStaticMethod<jboolean>(
			"java.lang.Character",
			"isIdentifierIgnorable",
			"(C)Z",
			arg0
		);
	}
	inline jboolean Character::isIdentifierIgnorable(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"java.lang.Character",
			"isIdentifierIgnorable",
			"(I)Z",
			arg0
		);
	}
	inline jboolean Character::isIdeographic(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"java.lang.Character",
			"isIdeographic",
			"(I)Z",
			arg0
		);
	}
	inline jboolean Character::isJavaIdentifierPart(jchar arg0)
	{
		return callStaticMethod<jboolean>(
			"java.lang.Character",
			"isJavaIdentifierPart",
			"(C)Z",
			arg0
		);
	}
	inline jboolean Character::isJavaIdentifierPart(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"java.lang.Character",
			"isJavaIdentifierPart",
			"(I)Z",
			arg0
		);
	}
	inline jboolean Character::isJavaIdentifierStart(jchar arg0)
	{
		return callStaticMethod<jboolean>(
			"java.lang.Character",
			"isJavaIdentifierStart",
			"(C)Z",
			arg0
		);
	}
	inline jboolean Character::isJavaIdentifierStart(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"java.lang.Character",
			"isJavaIdentifierStart",
			"(I)Z",
			arg0
		);
	}
	inline jboolean Character::isJavaLetter(jchar arg0)
	{
		return callStaticMethod<jboolean>(
			"java.lang.Character",
			"isJavaLetter",
			"(C)Z",
			arg0
		);
	}
	inline jboolean Character::isJavaLetterOrDigit(jchar arg0)
	{
		return callStaticMethod<jboolean>(
			"java.lang.Character",
			"isJavaLetterOrDigit",
			"(C)Z",
			arg0
		);
	}
	inline jboolean Character::isLetter(jchar arg0)
	{
		return callStaticMethod<jboolean>(
			"java.lang.Character",
			"isLetter",
			"(C)Z",
			arg0
		);
	}
	inline jboolean Character::isLetter(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"java.lang.Character",
			"isLetter",
			"(I)Z",
			arg0
		);
	}
	inline jboolean Character::isLetterOrDigit(jchar arg0)
	{
		return callStaticMethod<jboolean>(
			"java.lang.Character",
			"isLetterOrDigit",
			"(C)Z",
			arg0
		);
	}
	inline jboolean Character::isLetterOrDigit(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"java.lang.Character",
			"isLetterOrDigit",
			"(I)Z",
			arg0
		);
	}
	inline jboolean Character::isLowSurrogate(jchar arg0)
	{
		return callStaticMethod<jboolean>(
			"java.lang.Character",
			"isLowSurrogate",
			"(C)Z",
			arg0
		);
	}
	inline jboolean Character::isLowerCase(jchar arg0)
	{
		return callStaticMethod<jboolean>(
			"java.lang.Character",
			"isLowerCase",
			"(C)Z",
			arg0
		);
	}
	inline jboolean Character::isLowerCase(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"java.lang.Character",
			"isLowerCase",
			"(I)Z",
			arg0
		);
	}
	inline jboolean Character::isMirrored(jchar arg0)
	{
		return callStaticMethod<jboolean>(
			"java.lang.Character",
			"isMirrored",
			"(C)Z",
			arg0
		);
	}
	inline jboolean Character::isMirrored(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"java.lang.Character",
			"isMirrored",
			"(I)Z",
			arg0
		);
	}
	inline jboolean Character::isSpace(jchar arg0)
	{
		return callStaticMethod<jboolean>(
			"java.lang.Character",
			"isSpace",
			"(C)Z",
			arg0
		);
	}
	inline jboolean Character::isSpaceChar(jchar arg0)
	{
		return callStaticMethod<jboolean>(
			"java.lang.Character",
			"isSpaceChar",
			"(C)Z",
			arg0
		);
	}
	inline jboolean Character::isSpaceChar(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"java.lang.Character",
			"isSpaceChar",
			"(I)Z",
			arg0
		);
	}
	inline jboolean Character::isSupplementaryCodePoint(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"java.lang.Character",
			"isSupplementaryCodePoint",
			"(I)Z",
			arg0
		);
	}
	inline jboolean Character::isSurrogate(jchar arg0)
	{
		return callStaticMethod<jboolean>(
			"java.lang.Character",
			"isSurrogate",
			"(C)Z",
			arg0
		);
	}
	inline jboolean Character::isSurrogatePair(jchar arg0, jchar arg1)
	{
		return callStaticMethod<jboolean>(
			"java.lang.Character",
			"isSurrogatePair",
			"(CC)Z",
			arg0,
			arg1
		);
	}
	inline jboolean Character::isTitleCase(jchar arg0)
	{
		return callStaticMethod<jboolean>(
			"java.lang.Character",
			"isTitleCase",
			"(C)Z",
			arg0
		);
	}
	inline jboolean Character::isTitleCase(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"java.lang.Character",
			"isTitleCase",
			"(I)Z",
			arg0
		);
	}
	inline jboolean Character::isUnicodeIdentifierPart(jchar arg0)
	{
		return callStaticMethod<jboolean>(
			"java.lang.Character",
			"isUnicodeIdentifierPart",
			"(C)Z",
			arg0
		);
	}
	inline jboolean Character::isUnicodeIdentifierPart(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"java.lang.Character",
			"isUnicodeIdentifierPart",
			"(I)Z",
			arg0
		);
	}
	inline jboolean Character::isUnicodeIdentifierStart(jchar arg0)
	{
		return callStaticMethod<jboolean>(
			"java.lang.Character",
			"isUnicodeIdentifierStart",
			"(C)Z",
			arg0
		);
	}
	inline jboolean Character::isUnicodeIdentifierStart(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"java.lang.Character",
			"isUnicodeIdentifierStart",
			"(I)Z",
			arg0
		);
	}
	inline jboolean Character::isUpperCase(jchar arg0)
	{
		return callStaticMethod<jboolean>(
			"java.lang.Character",
			"isUpperCase",
			"(C)Z",
			arg0
		);
	}
	inline jboolean Character::isUpperCase(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"java.lang.Character",
			"isUpperCase",
			"(I)Z",
			arg0
		);
	}
	inline jboolean Character::isValidCodePoint(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"java.lang.Character",
			"isValidCodePoint",
			"(I)Z",
			arg0
		);
	}
	inline jboolean Character::isWhitespace(jchar arg0)
	{
		return callStaticMethod<jboolean>(
			"java.lang.Character",
			"isWhitespace",
			"(C)Z",
			arg0
		);
	}
	inline jboolean Character::isWhitespace(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"java.lang.Character",
			"isWhitespace",
			"(I)Z",
			arg0
		);
	}
	inline jchar Character::lowSurrogate(jint arg0)
	{
		return callStaticMethod<jchar>(
			"java.lang.Character",
			"lowSurrogate",
			"(I)C",
			arg0
		);
	}
	inline jint Character::offsetByCodePoints(JString arg0, jint arg1, jint arg2)
	{
		return callStaticMethod<jint>(
			"java.lang.Character",
			"offsetByCodePoints",
			"(Ljava/lang/CharSequence;II)I",
			arg0.object<jstring>(),
			arg1,
			arg2
		);
	}
	inline jint Character::offsetByCodePoints(JCharArray arg0, jint arg1, jint arg2, jint arg3, jint arg4)
	{
		return callStaticMethod<jint>(
			"java.lang.Character",
			"offsetByCodePoints",
			"([CIIII)I",
			arg0.object<jcharArray>(),
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	inline jchar Character::reverseBytes(jchar arg0)
	{
		return callStaticMethod<jchar>(
			"java.lang.Character",
			"reverseBytes",
			"(C)C",
			arg0
		);
	}
	inline JCharArray Character::toChars(jint arg0)
	{
		return callStaticObjectMethod(
			"java.lang.Character",
			"toChars",
			"(I)[C",
			arg0
		);
	}
	inline jint Character::toChars(jint arg0, JCharArray arg1, jint arg2)
	{
		return callStaticMethod<jint>(
			"java.lang.Character",
			"toChars",
			"(I[CI)I",
			arg0,
			arg1.object<jcharArray>(),
			arg2
		);
	}
	inline jint Character::toCodePoint(jchar arg0, jchar arg1)
	{
		return callStaticMethod<jint>(
			"java.lang.Character",
			"toCodePoint",
			"(CC)I",
			arg0,
			arg1
		);
	}
	inline jchar Character::toLowerCase(jchar arg0)
	{
		return callStaticMethod<jchar>(
			"java.lang.Character",
			"toLowerCase",
			"(C)C",
			arg0
		);
	}
	inline jint Character::toLowerCase(jint arg0)
	{
		return callStaticMethod<jint>(
			"java.lang.Character",
			"toLowerCase",
			"(I)I",
			arg0
		);
	}
	inline JString Character::toString(jchar arg0)
	{
		return callStaticObjectMethod(
			"java.lang.Character",
			"toString",
			"(C)Ljava/lang/String;",
			arg0
		);
	}
	inline JString Character::toString(jint arg0)
	{
		return callStaticObjectMethod(
			"java.lang.Character",
			"toString",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline jchar Character::toTitleCase(jchar arg0)
	{
		return callStaticMethod<jchar>(
			"java.lang.Character",
			"toTitleCase",
			"(C)C",
			arg0
		);
	}
	inline jint Character::toTitleCase(jint arg0)
	{
		return callStaticMethod<jint>(
			"java.lang.Character",
			"toTitleCase",
			"(I)I",
			arg0
		);
	}
	inline jchar Character::toUpperCase(jchar arg0)
	{
		return callStaticMethod<jchar>(
			"java.lang.Character",
			"toUpperCase",
			"(C)C",
			arg0
		);
	}
	inline jint Character::toUpperCase(jint arg0)
	{
		return callStaticMethod<jint>(
			"java.lang.Character",
			"toUpperCase",
			"(I)I",
			arg0
		);
	}
	inline java::lang::Character Character::valueOf(jchar arg0)
	{
		return callStaticObjectMethod(
			"java.lang.Character",
			"valueOf",
			"(C)Ljava/lang/Character;",
			arg0
		);
	}
	inline jchar Character::charValue() const
	{
		return callMethod<jchar>(
			"charValue",
			"()C"
		);
	}
	inline jint Character::compareTo(java::lang::Character arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Character;)I",
			arg0.object()
		);
	}
	inline jint Character::compareTo(JObject arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	inline java::util::Optional Character::describeConstable() const
	{
		return callObjectMethod(
			"describeConstable",
			"()Ljava/util/Optional;"
		);
	}
	inline jboolean Character::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint Character::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString Character::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::lang

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::lang;
#endif
