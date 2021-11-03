#pragma once

#include "../../JObject.hpp"

namespace java::util
{
	class Optional;
}

namespace java::lang
{
	class Character : public JObject
	{
	public:
		// Fields
		static jint BYTES();
		static jbyte COMBINING_SPACING_MARK();
		static jbyte CONNECTOR_PUNCTUATION();
		static jbyte CONTROL();
		static jbyte CURRENCY_SYMBOL();
		static jbyte DASH_PUNCTUATION();
		static jbyte DECIMAL_DIGIT_NUMBER();
		static jbyte DIRECTIONALITY_ARABIC_NUMBER();
		static jbyte DIRECTIONALITY_BOUNDARY_NEUTRAL();
		static jbyte DIRECTIONALITY_COMMON_NUMBER_SEPARATOR();
		static jbyte DIRECTIONALITY_EUROPEAN_NUMBER();
		static jbyte DIRECTIONALITY_EUROPEAN_NUMBER_SEPARATOR();
		static jbyte DIRECTIONALITY_EUROPEAN_NUMBER_TERMINATOR();
		static jbyte DIRECTIONALITY_FIRST_STRONG_ISOLATE();
		static jbyte DIRECTIONALITY_LEFT_TO_RIGHT();
		static jbyte DIRECTIONALITY_LEFT_TO_RIGHT_EMBEDDING();
		static jbyte DIRECTIONALITY_LEFT_TO_RIGHT_ISOLATE();
		static jbyte DIRECTIONALITY_LEFT_TO_RIGHT_OVERRIDE();
		static jbyte DIRECTIONALITY_NONSPACING_MARK();
		static jbyte DIRECTIONALITY_OTHER_NEUTRALS();
		static jbyte DIRECTIONALITY_PARAGRAPH_SEPARATOR();
		static jbyte DIRECTIONALITY_POP_DIRECTIONAL_FORMAT();
		static jbyte DIRECTIONALITY_POP_DIRECTIONAL_ISOLATE();
		static jbyte DIRECTIONALITY_RIGHT_TO_LEFT();
		static jbyte DIRECTIONALITY_RIGHT_TO_LEFT_ARABIC();
		static jbyte DIRECTIONALITY_RIGHT_TO_LEFT_EMBEDDING();
		static jbyte DIRECTIONALITY_RIGHT_TO_LEFT_ISOLATE();
		static jbyte DIRECTIONALITY_RIGHT_TO_LEFT_OVERRIDE();
		static jbyte DIRECTIONALITY_SEGMENT_SEPARATOR();
		static jbyte DIRECTIONALITY_UNDEFINED();
		static jbyte DIRECTIONALITY_WHITESPACE();
		static jbyte ENCLOSING_MARK();
		static jbyte END_PUNCTUATION();
		static jbyte FINAL_QUOTE_PUNCTUATION();
		static jbyte FORMAT();
		static jbyte INITIAL_QUOTE_PUNCTUATION();
		static jbyte LETTER_NUMBER();
		static jbyte LINE_SEPARATOR();
		static jbyte LOWERCASE_LETTER();
		static jbyte MATH_SYMBOL();
		static jint MAX_CODE_POINT();
		static jchar MAX_HIGH_SURROGATE();
		static jchar MAX_LOW_SURROGATE();
		static jint MAX_RADIX();
		static jchar MAX_SURROGATE();
		static jchar MAX_VALUE();
		static jint MIN_CODE_POINT();
		static jchar MIN_HIGH_SURROGATE();
		static jchar MIN_LOW_SURROGATE();
		static jint MIN_RADIX();
		static jint MIN_SUPPLEMENTARY_CODE_POINT();
		static jchar MIN_SURROGATE();
		static jchar MIN_VALUE();
		static jbyte MODIFIER_LETTER();
		static jbyte MODIFIER_SYMBOL();
		static jbyte NON_SPACING_MARK();
		static jbyte OTHER_LETTER();
		static jbyte OTHER_NUMBER();
		static jbyte OTHER_PUNCTUATION();
		static jbyte OTHER_SYMBOL();
		static jbyte PARAGRAPH_SEPARATOR();
		static jbyte PRIVATE_USE();
		static jint SIZE();
		static jbyte SPACE_SEPARATOR();
		static jbyte START_PUNCTUATION();
		static jbyte SURROGATE();
		static jbyte TITLECASE_LETTER();
		static jclass TYPE();
		static jbyte UNASSIGNED();
		static jbyte UPPERCASE_LETTER();
		
		// QJniObject forward
		template<typename ...Ts> explicit Character(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Character(QJniObject obj);
		
		// Constructors
		Character(jchar arg0);
		
		// Methods
		static jint charCount(jint arg0);
		static jint codePointAt(jcharArray arg0, jint arg1);
		static jint codePointAt(jstring arg0, jint arg1);
		static jint codePointAt(jcharArray arg0, jint arg1, jint arg2);
		static jint codePointBefore(jcharArray arg0, jint arg1);
		static jint codePointBefore(jstring arg0, jint arg1);
		static jint codePointBefore(jcharArray arg0, jint arg1, jint arg2);
		static jint codePointCount(jcharArray arg0, jint arg1, jint arg2);
		static jint codePointCount(jstring arg0, jint arg1, jint arg2);
		static jint codePointOf(jstring arg0);
		static jint compare(jchar arg0, jchar arg1);
		static jint digit(jchar arg0, jint arg1);
		static jint digit(jint arg0, jint arg1);
		static jchar forDigit(jint arg0, jint arg1);
		static jbyte getDirectionality(jchar arg0);
		static jbyte getDirectionality(jint arg0);
		static jstring getName(jint arg0);
		static jint getNumericValue(jchar arg0);
		static jint getNumericValue(jint arg0);
		static jint getType(jchar arg0);
		static jint getType(jint arg0);
		static jint hashCode(jchar arg0);
		static jchar highSurrogate(jint arg0);
		static jboolean isAlphabetic(jint arg0);
		static jboolean isBmpCodePoint(jint arg0);
		static jboolean isDefined(jchar arg0);
		static jboolean isDefined(jint arg0);
		static jboolean isDigit(jchar arg0);
		static jboolean isDigit(jint arg0);
		static jboolean isHighSurrogate(jchar arg0);
		static jboolean isISOControl(jchar arg0);
		static jboolean isISOControl(jint arg0);
		static jboolean isIdentifierIgnorable(jchar arg0);
		static jboolean isIdentifierIgnorable(jint arg0);
		static jboolean isIdeographic(jint arg0);
		static jboolean isJavaIdentifierPart(jchar arg0);
		static jboolean isJavaIdentifierPart(jint arg0);
		static jboolean isJavaIdentifierStart(jchar arg0);
		static jboolean isJavaIdentifierStart(jint arg0);
		static jboolean isJavaLetter(jchar arg0);
		static jboolean isJavaLetterOrDigit(jchar arg0);
		static jboolean isLetter(jchar arg0);
		static jboolean isLetter(jint arg0);
		static jboolean isLetterOrDigit(jchar arg0);
		static jboolean isLetterOrDigit(jint arg0);
		static jboolean isLowSurrogate(jchar arg0);
		static jboolean isLowerCase(jchar arg0);
		static jboolean isLowerCase(jint arg0);
		static jboolean isMirrored(jchar arg0);
		static jboolean isMirrored(jint arg0);
		static jboolean isSpace(jchar arg0);
		static jboolean isSpaceChar(jchar arg0);
		static jboolean isSpaceChar(jint arg0);
		static jboolean isSupplementaryCodePoint(jint arg0);
		static jboolean isSurrogate(jchar arg0);
		static jboolean isSurrogatePair(jchar arg0, jchar arg1);
		static jboolean isTitleCase(jchar arg0);
		static jboolean isTitleCase(jint arg0);
		static jboolean isUnicodeIdentifierPart(jchar arg0);
		static jboolean isUnicodeIdentifierPart(jint arg0);
		static jboolean isUnicodeIdentifierStart(jchar arg0);
		static jboolean isUnicodeIdentifierStart(jint arg0);
		static jboolean isUpperCase(jchar arg0);
		static jboolean isUpperCase(jint arg0);
		static jboolean isValidCodePoint(jint arg0);
		static jboolean isWhitespace(jchar arg0);
		static jboolean isWhitespace(jint arg0);
		static jchar lowSurrogate(jint arg0);
		static jint offsetByCodePoints(jstring arg0, jint arg1, jint arg2);
		static jint offsetByCodePoints(jcharArray arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		static jchar reverseBytes(jchar arg0);
		static jcharArray toChars(jint arg0);
		static jint toChars(jint arg0, jcharArray arg1, jint arg2);
		static jint toCodePoint(jchar arg0, jchar arg1);
		static jchar toLowerCase(jchar arg0);
		static jint toLowerCase(jint arg0);
		static jstring toString(jchar arg0);
		static jstring toString(jint arg0);
		static jchar toTitleCase(jchar arg0);
		static jint toTitleCase(jint arg0);
		static jchar toUpperCase(jchar arg0);
		static jint toUpperCase(jint arg0);
		static java::lang::Character valueOf(jchar arg0);
		jchar charValue();
		jint compareTo(java::lang::Character arg0);
		jint compareTo(jobject arg0);
		java::util::Optional describeConstable();
		jboolean equals(jobject arg0);
		jint hashCode();
		jstring toString();
	};
} // namespace java::lang

