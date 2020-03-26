#pragma once

#ifndef JAVA_LANG_CHARACTER
#define JAVA_LANG_CHARACTER

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::java::lang
{
	class Character : public __JniBaseClass
	{
	public:
		// Fields
		static jint MIN_RADIX();
		static jint MAX_RADIX();
		static jchar MIN_VALUE();
		static jchar MAX_VALUE();
		static jclass TYPE();
		static jbyte UNASSIGNED();
		static jbyte UPPERCASE_LETTER();
		static jbyte LOWERCASE_LETTER();
		static jbyte TITLECASE_LETTER();
		static jbyte MODIFIER_LETTER();
		static jbyte OTHER_LETTER();
		static jbyte NON_SPACING_MARK();
		static jbyte ENCLOSING_MARK();
		static jbyte COMBINING_SPACING_MARK();
		static jbyte DECIMAL_DIGIT_NUMBER();
		static jbyte LETTER_NUMBER();
		static jbyte OTHER_NUMBER();
		static jbyte SPACE_SEPARATOR();
		static jbyte LINE_SEPARATOR();
		static jbyte PARAGRAPH_SEPARATOR();
		static jbyte CONTROL();
		static jbyte FORMAT();
		static jbyte PRIVATE_USE();
		static jbyte SURROGATE();
		static jbyte DASH_PUNCTUATION();
		static jbyte START_PUNCTUATION();
		static jbyte END_PUNCTUATION();
		static jbyte CONNECTOR_PUNCTUATION();
		static jbyte OTHER_PUNCTUATION();
		static jbyte MATH_SYMBOL();
		static jbyte CURRENCY_SYMBOL();
		static jbyte MODIFIER_SYMBOL();
		static jbyte OTHER_SYMBOL();
		static jbyte INITIAL_QUOTE_PUNCTUATION();
		static jbyte FINAL_QUOTE_PUNCTUATION();
		static jbyte DIRECTIONALITY_UNDEFINED();
		static jbyte DIRECTIONALITY_LEFT_TO_RIGHT();
		static jbyte DIRECTIONALITY_RIGHT_TO_LEFT();
		static jbyte DIRECTIONALITY_RIGHT_TO_LEFT_ARABIC();
		static jbyte DIRECTIONALITY_EUROPEAN_NUMBER();
		static jbyte DIRECTIONALITY_EUROPEAN_NUMBER_SEPARATOR();
		static jbyte DIRECTIONALITY_EUROPEAN_NUMBER_TERMINATOR();
		static jbyte DIRECTIONALITY_ARABIC_NUMBER();
		static jbyte DIRECTIONALITY_COMMON_NUMBER_SEPARATOR();
		static jbyte DIRECTIONALITY_NONSPACING_MARK();
		static jbyte DIRECTIONALITY_BOUNDARY_NEUTRAL();
		static jbyte DIRECTIONALITY_PARAGRAPH_SEPARATOR();
		static jbyte DIRECTIONALITY_SEGMENT_SEPARATOR();
		static jbyte DIRECTIONALITY_WHITESPACE();
		static jbyte DIRECTIONALITY_OTHER_NEUTRALS();
		static jbyte DIRECTIONALITY_LEFT_TO_RIGHT_EMBEDDING();
		static jbyte DIRECTIONALITY_LEFT_TO_RIGHT_OVERRIDE();
		static jbyte DIRECTIONALITY_RIGHT_TO_LEFT_EMBEDDING();
		static jbyte DIRECTIONALITY_RIGHT_TO_LEFT_OVERRIDE();
		static jbyte DIRECTIONALITY_POP_DIRECTIONAL_FORMAT();
		static jbyte DIRECTIONALITY_LEFT_TO_RIGHT_ISOLATE();
		static jbyte DIRECTIONALITY_RIGHT_TO_LEFT_ISOLATE();
		static jbyte DIRECTIONALITY_FIRST_STRONG_ISOLATE();
		static jbyte DIRECTIONALITY_POP_DIRECTIONAL_ISOLATE();
		static jchar MIN_HIGH_SURROGATE();
		static jchar MAX_HIGH_SURROGATE();
		static jchar MIN_LOW_SURROGATE();
		static jchar MAX_LOW_SURROGATE();
		static jchar MIN_SURROGATE();
		static jchar MAX_SURROGATE();
		static jint MIN_SUPPLEMENTARY_CODE_POINT();
		static jint MIN_CODE_POINT();
		static jint MAX_CODE_POINT();
		static jint SIZE();
		static jint BYTES();
		
		// Constructors
		void __constructor(jchar arg0);
		
		// Methods
		static jstring getName(jint arg0);
		static jboolean isJavaIdentifierStart(jint arg0);
		static jboolean isJavaIdentifierStart(jchar arg0);
		static jboolean isJavaIdentifierPart(jint arg0);
		static jboolean isJavaIdentifierPart(jchar arg0);
		jboolean equals(jobject arg0);
		static jstring toString(jchar arg0);
		jstring toString();
		static jstring toString(jint arg0);
		jint hashCode();
		static jint hashCode(jchar arg0);
		static jchar reverseBytes(jchar arg0);
		jint compareTo(__jni_impl::java::lang::Character arg0);
		jint compareTo(jobject arg0);
		static jboolean isDigit(jchar arg0);
		static jboolean isDigit(jint arg0);
		static jboolean isLowerCase(jint arg0);
		static jboolean isLowerCase(jchar arg0);
		static jboolean isUpperCase(jint arg0);
		static jboolean isUpperCase(jchar arg0);
		static jboolean isWhitespace(jint arg0);
		static jboolean isWhitespace(jchar arg0);
		jchar charValue();
		static QAndroidJniObject valueOf(jchar arg0);
		static jint codePointAt(jcharArray arg0, jint arg1, jint arg2);
		static jint codePointAt(jstring arg0, jint arg1);
		static jint codePointAt(jcharArray arg0, jint arg1);
		static jint codePointBefore(jcharArray arg0, jint arg1, jint arg2);
		static jint codePointBefore(jstring arg0, jint arg1);
		static jint codePointBefore(jcharArray arg0, jint arg1);
		static jint codePointCount(jcharArray arg0, jint arg1, jint arg2);
		static jint codePointCount(jstring arg0, jint arg1, jint arg2);
		static jint offsetByCodePoints(jcharArray arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		static jint offsetByCodePoints(jstring arg0, jint arg1, jint arg2);
		static jint compare(jchar arg0, jchar arg1);
		static jchar toLowerCase(jchar arg0);
		static jint toLowerCase(jint arg0);
		static jint toUpperCase(jint arg0);
		static jchar toUpperCase(jchar arg0);
		static jcharArray toChars(jint arg0);
		static jint toChars(jint arg0, jcharArray arg1, jint arg2);
		static jboolean isBmpCodePoint(jint arg0);
		static jboolean isSupplementaryCodePoint(jint arg0);
		static jint getType(jint arg0);
		static jint getType(jchar arg0);
		static jboolean isLetter(jint arg0);
		static jboolean isLetter(jchar arg0);
		static jboolean isLetterOrDigit(jchar arg0);
		static jboolean isLetterOrDigit(jint arg0);
		static jboolean isHighSurrogate(jchar arg0);
		static jboolean isLowSurrogate(jchar arg0);
		static jint toCodePoint(jchar arg0, jchar arg1);
		static jboolean isValidCodePoint(jint arg0);
		static jchar lowSurrogate(jint arg0);
		static jchar highSurrogate(jint arg0);
		static jboolean isTitleCase(jchar arg0);
		static jboolean isTitleCase(jint arg0);
		static jboolean isDefined(jint arg0);
		static jboolean isDefined(jchar arg0);
		static jboolean isIdeographic(jint arg0);
		static jboolean isUnicodeIdentifierStart(jint arg0);
		static jboolean isUnicodeIdentifierStart(jchar arg0);
		static jboolean isUnicodeIdentifierPart(jint arg0);
		static jboolean isUnicodeIdentifierPart(jchar arg0);
		static jboolean isIdentifierIgnorable(jchar arg0);
		static jboolean isIdentifierIgnorable(jint arg0);
		static jchar toTitleCase(jchar arg0);
		static jint toTitleCase(jint arg0);
		static jint digit(jint arg0, jint arg1);
		static jint digit(jchar arg0, jint arg1);
		static jint getNumericValue(jint arg0);
		static jint getNumericValue(jchar arg0);
		static jboolean isSpaceChar(jint arg0);
		static jboolean isSpaceChar(jchar arg0);
		static jboolean isISOControl(jchar arg0);
		static jboolean isISOControl(jint arg0);
		static jbyte getDirectionality(jchar arg0);
		static jbyte getDirectionality(jint arg0);
		static jboolean isMirrored(jint arg0);
		static jboolean isMirrored(jchar arg0);
		static jboolean isSurrogate(jchar arg0);
		static jboolean isSurrogatePair(jchar arg0, jchar arg1);
		static jint charCount(jint arg0);
		static jboolean isJavaLetter(jchar arg0);
		static jboolean isJavaLetterOrDigit(jchar arg0);
		static jboolean isAlphabetic(jint arg0);
		static jboolean isSpace(jchar arg0);
		static jchar forDigit(jint arg0, jint arg1);
		static jint codePointOf(jstring arg0);
	};
} // namespace __jni_impl::java::lang


namespace __jni_impl::java::lang
{
	// Fields
	jint Character::MIN_RADIX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.lang.Character",
			"MIN_RADIX"
		);
	}
	jint Character::MAX_RADIX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.lang.Character",
			"MAX_RADIX"
		);
	}
	jchar Character::MIN_VALUE()
	{
		return QAndroidJniObject::getStaticField<jchar>(
			"java.lang.Character",
			"MIN_VALUE"
		);
	}
	jchar Character::MAX_VALUE()
	{
		return QAndroidJniObject::getStaticField<jchar>(
			"java.lang.Character",
			"MAX_VALUE"
		);
	}
	jclass Character::TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character",
			"TYPE",
			"Ljava/lang/Class;"
		).object<jclass>();
	}
	jbyte Character::UNASSIGNED()
	{
		return QAndroidJniObject::getStaticField<jbyte>(
			"java.lang.Character",
			"UNASSIGNED"
		);
	}
	jbyte Character::UPPERCASE_LETTER()
	{
		return QAndroidJniObject::getStaticField<jbyte>(
			"java.lang.Character",
			"UPPERCASE_LETTER"
		);
	}
	jbyte Character::LOWERCASE_LETTER()
	{
		return QAndroidJniObject::getStaticField<jbyte>(
			"java.lang.Character",
			"LOWERCASE_LETTER"
		);
	}
	jbyte Character::TITLECASE_LETTER()
	{
		return QAndroidJniObject::getStaticField<jbyte>(
			"java.lang.Character",
			"TITLECASE_LETTER"
		);
	}
	jbyte Character::MODIFIER_LETTER()
	{
		return QAndroidJniObject::getStaticField<jbyte>(
			"java.lang.Character",
			"MODIFIER_LETTER"
		);
	}
	jbyte Character::OTHER_LETTER()
	{
		return QAndroidJniObject::getStaticField<jbyte>(
			"java.lang.Character",
			"OTHER_LETTER"
		);
	}
	jbyte Character::NON_SPACING_MARK()
	{
		return QAndroidJniObject::getStaticField<jbyte>(
			"java.lang.Character",
			"NON_SPACING_MARK"
		);
	}
	jbyte Character::ENCLOSING_MARK()
	{
		return QAndroidJniObject::getStaticField<jbyte>(
			"java.lang.Character",
			"ENCLOSING_MARK"
		);
	}
	jbyte Character::COMBINING_SPACING_MARK()
	{
		return QAndroidJniObject::getStaticField<jbyte>(
			"java.lang.Character",
			"COMBINING_SPACING_MARK"
		);
	}
	jbyte Character::DECIMAL_DIGIT_NUMBER()
	{
		return QAndroidJniObject::getStaticField<jbyte>(
			"java.lang.Character",
			"DECIMAL_DIGIT_NUMBER"
		);
	}
	jbyte Character::LETTER_NUMBER()
	{
		return QAndroidJniObject::getStaticField<jbyte>(
			"java.lang.Character",
			"LETTER_NUMBER"
		);
	}
	jbyte Character::OTHER_NUMBER()
	{
		return QAndroidJniObject::getStaticField<jbyte>(
			"java.lang.Character",
			"OTHER_NUMBER"
		);
	}
	jbyte Character::SPACE_SEPARATOR()
	{
		return QAndroidJniObject::getStaticField<jbyte>(
			"java.lang.Character",
			"SPACE_SEPARATOR"
		);
	}
	jbyte Character::LINE_SEPARATOR()
	{
		return QAndroidJniObject::getStaticField<jbyte>(
			"java.lang.Character",
			"LINE_SEPARATOR"
		);
	}
	jbyte Character::PARAGRAPH_SEPARATOR()
	{
		return QAndroidJniObject::getStaticField<jbyte>(
			"java.lang.Character",
			"PARAGRAPH_SEPARATOR"
		);
	}
	jbyte Character::CONTROL()
	{
		return QAndroidJniObject::getStaticField<jbyte>(
			"java.lang.Character",
			"CONTROL"
		);
	}
	jbyte Character::FORMAT()
	{
		return QAndroidJniObject::getStaticField<jbyte>(
			"java.lang.Character",
			"FORMAT"
		);
	}
	jbyte Character::PRIVATE_USE()
	{
		return QAndroidJniObject::getStaticField<jbyte>(
			"java.lang.Character",
			"PRIVATE_USE"
		);
	}
	jbyte Character::SURROGATE()
	{
		return QAndroidJniObject::getStaticField<jbyte>(
			"java.lang.Character",
			"SURROGATE"
		);
	}
	jbyte Character::DASH_PUNCTUATION()
	{
		return QAndroidJniObject::getStaticField<jbyte>(
			"java.lang.Character",
			"DASH_PUNCTUATION"
		);
	}
	jbyte Character::START_PUNCTUATION()
	{
		return QAndroidJniObject::getStaticField<jbyte>(
			"java.lang.Character",
			"START_PUNCTUATION"
		);
	}
	jbyte Character::END_PUNCTUATION()
	{
		return QAndroidJniObject::getStaticField<jbyte>(
			"java.lang.Character",
			"END_PUNCTUATION"
		);
	}
	jbyte Character::CONNECTOR_PUNCTUATION()
	{
		return QAndroidJniObject::getStaticField<jbyte>(
			"java.lang.Character",
			"CONNECTOR_PUNCTUATION"
		);
	}
	jbyte Character::OTHER_PUNCTUATION()
	{
		return QAndroidJniObject::getStaticField<jbyte>(
			"java.lang.Character",
			"OTHER_PUNCTUATION"
		);
	}
	jbyte Character::MATH_SYMBOL()
	{
		return QAndroidJniObject::getStaticField<jbyte>(
			"java.lang.Character",
			"MATH_SYMBOL"
		);
	}
	jbyte Character::CURRENCY_SYMBOL()
	{
		return QAndroidJniObject::getStaticField<jbyte>(
			"java.lang.Character",
			"CURRENCY_SYMBOL"
		);
	}
	jbyte Character::MODIFIER_SYMBOL()
	{
		return QAndroidJniObject::getStaticField<jbyte>(
			"java.lang.Character",
			"MODIFIER_SYMBOL"
		);
	}
	jbyte Character::OTHER_SYMBOL()
	{
		return QAndroidJniObject::getStaticField<jbyte>(
			"java.lang.Character",
			"OTHER_SYMBOL"
		);
	}
	jbyte Character::INITIAL_QUOTE_PUNCTUATION()
	{
		return QAndroidJniObject::getStaticField<jbyte>(
			"java.lang.Character",
			"INITIAL_QUOTE_PUNCTUATION"
		);
	}
	jbyte Character::FINAL_QUOTE_PUNCTUATION()
	{
		return QAndroidJniObject::getStaticField<jbyte>(
			"java.lang.Character",
			"FINAL_QUOTE_PUNCTUATION"
		);
	}
	jbyte Character::DIRECTIONALITY_UNDEFINED()
	{
		return QAndroidJniObject::getStaticField<jbyte>(
			"java.lang.Character",
			"DIRECTIONALITY_UNDEFINED"
		);
	}
	jbyte Character::DIRECTIONALITY_LEFT_TO_RIGHT()
	{
		return QAndroidJniObject::getStaticField<jbyte>(
			"java.lang.Character",
			"DIRECTIONALITY_LEFT_TO_RIGHT"
		);
	}
	jbyte Character::DIRECTIONALITY_RIGHT_TO_LEFT()
	{
		return QAndroidJniObject::getStaticField<jbyte>(
			"java.lang.Character",
			"DIRECTIONALITY_RIGHT_TO_LEFT"
		);
	}
	jbyte Character::DIRECTIONALITY_RIGHT_TO_LEFT_ARABIC()
	{
		return QAndroidJniObject::getStaticField<jbyte>(
			"java.lang.Character",
			"DIRECTIONALITY_RIGHT_TO_LEFT_ARABIC"
		);
	}
	jbyte Character::DIRECTIONALITY_EUROPEAN_NUMBER()
	{
		return QAndroidJniObject::getStaticField<jbyte>(
			"java.lang.Character",
			"DIRECTIONALITY_EUROPEAN_NUMBER"
		);
	}
	jbyte Character::DIRECTIONALITY_EUROPEAN_NUMBER_SEPARATOR()
	{
		return QAndroidJniObject::getStaticField<jbyte>(
			"java.lang.Character",
			"DIRECTIONALITY_EUROPEAN_NUMBER_SEPARATOR"
		);
	}
	jbyte Character::DIRECTIONALITY_EUROPEAN_NUMBER_TERMINATOR()
	{
		return QAndroidJniObject::getStaticField<jbyte>(
			"java.lang.Character",
			"DIRECTIONALITY_EUROPEAN_NUMBER_TERMINATOR"
		);
	}
	jbyte Character::DIRECTIONALITY_ARABIC_NUMBER()
	{
		return QAndroidJniObject::getStaticField<jbyte>(
			"java.lang.Character",
			"DIRECTIONALITY_ARABIC_NUMBER"
		);
	}
	jbyte Character::DIRECTIONALITY_COMMON_NUMBER_SEPARATOR()
	{
		return QAndroidJniObject::getStaticField<jbyte>(
			"java.lang.Character",
			"DIRECTIONALITY_COMMON_NUMBER_SEPARATOR"
		);
	}
	jbyte Character::DIRECTIONALITY_NONSPACING_MARK()
	{
		return QAndroidJniObject::getStaticField<jbyte>(
			"java.lang.Character",
			"DIRECTIONALITY_NONSPACING_MARK"
		);
	}
	jbyte Character::DIRECTIONALITY_BOUNDARY_NEUTRAL()
	{
		return QAndroidJniObject::getStaticField<jbyte>(
			"java.lang.Character",
			"DIRECTIONALITY_BOUNDARY_NEUTRAL"
		);
	}
	jbyte Character::DIRECTIONALITY_PARAGRAPH_SEPARATOR()
	{
		return QAndroidJniObject::getStaticField<jbyte>(
			"java.lang.Character",
			"DIRECTIONALITY_PARAGRAPH_SEPARATOR"
		);
	}
	jbyte Character::DIRECTIONALITY_SEGMENT_SEPARATOR()
	{
		return QAndroidJniObject::getStaticField<jbyte>(
			"java.lang.Character",
			"DIRECTIONALITY_SEGMENT_SEPARATOR"
		);
	}
	jbyte Character::DIRECTIONALITY_WHITESPACE()
	{
		return QAndroidJniObject::getStaticField<jbyte>(
			"java.lang.Character",
			"DIRECTIONALITY_WHITESPACE"
		);
	}
	jbyte Character::DIRECTIONALITY_OTHER_NEUTRALS()
	{
		return QAndroidJniObject::getStaticField<jbyte>(
			"java.lang.Character",
			"DIRECTIONALITY_OTHER_NEUTRALS"
		);
	}
	jbyte Character::DIRECTIONALITY_LEFT_TO_RIGHT_EMBEDDING()
	{
		return QAndroidJniObject::getStaticField<jbyte>(
			"java.lang.Character",
			"DIRECTIONALITY_LEFT_TO_RIGHT_EMBEDDING"
		);
	}
	jbyte Character::DIRECTIONALITY_LEFT_TO_RIGHT_OVERRIDE()
	{
		return QAndroidJniObject::getStaticField<jbyte>(
			"java.lang.Character",
			"DIRECTIONALITY_LEFT_TO_RIGHT_OVERRIDE"
		);
	}
	jbyte Character::DIRECTIONALITY_RIGHT_TO_LEFT_EMBEDDING()
	{
		return QAndroidJniObject::getStaticField<jbyte>(
			"java.lang.Character",
			"DIRECTIONALITY_RIGHT_TO_LEFT_EMBEDDING"
		);
	}
	jbyte Character::DIRECTIONALITY_RIGHT_TO_LEFT_OVERRIDE()
	{
		return QAndroidJniObject::getStaticField<jbyte>(
			"java.lang.Character",
			"DIRECTIONALITY_RIGHT_TO_LEFT_OVERRIDE"
		);
	}
	jbyte Character::DIRECTIONALITY_POP_DIRECTIONAL_FORMAT()
	{
		return QAndroidJniObject::getStaticField<jbyte>(
			"java.lang.Character",
			"DIRECTIONALITY_POP_DIRECTIONAL_FORMAT"
		);
	}
	jbyte Character::DIRECTIONALITY_LEFT_TO_RIGHT_ISOLATE()
	{
		return QAndroidJniObject::getStaticField<jbyte>(
			"java.lang.Character",
			"DIRECTIONALITY_LEFT_TO_RIGHT_ISOLATE"
		);
	}
	jbyte Character::DIRECTIONALITY_RIGHT_TO_LEFT_ISOLATE()
	{
		return QAndroidJniObject::getStaticField<jbyte>(
			"java.lang.Character",
			"DIRECTIONALITY_RIGHT_TO_LEFT_ISOLATE"
		);
	}
	jbyte Character::DIRECTIONALITY_FIRST_STRONG_ISOLATE()
	{
		return QAndroidJniObject::getStaticField<jbyte>(
			"java.lang.Character",
			"DIRECTIONALITY_FIRST_STRONG_ISOLATE"
		);
	}
	jbyte Character::DIRECTIONALITY_POP_DIRECTIONAL_ISOLATE()
	{
		return QAndroidJniObject::getStaticField<jbyte>(
			"java.lang.Character",
			"DIRECTIONALITY_POP_DIRECTIONAL_ISOLATE"
		);
	}
	jchar Character::MIN_HIGH_SURROGATE()
	{
		return QAndroidJniObject::getStaticField<jchar>(
			"java.lang.Character",
			"MIN_HIGH_SURROGATE"
		);
	}
	jchar Character::MAX_HIGH_SURROGATE()
	{
		return QAndroidJniObject::getStaticField<jchar>(
			"java.lang.Character",
			"MAX_HIGH_SURROGATE"
		);
	}
	jchar Character::MIN_LOW_SURROGATE()
	{
		return QAndroidJniObject::getStaticField<jchar>(
			"java.lang.Character",
			"MIN_LOW_SURROGATE"
		);
	}
	jchar Character::MAX_LOW_SURROGATE()
	{
		return QAndroidJniObject::getStaticField<jchar>(
			"java.lang.Character",
			"MAX_LOW_SURROGATE"
		);
	}
	jchar Character::MIN_SURROGATE()
	{
		return QAndroidJniObject::getStaticField<jchar>(
			"java.lang.Character",
			"MIN_SURROGATE"
		);
	}
	jchar Character::MAX_SURROGATE()
	{
		return QAndroidJniObject::getStaticField<jchar>(
			"java.lang.Character",
			"MAX_SURROGATE"
		);
	}
	jint Character::MIN_SUPPLEMENTARY_CODE_POINT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.lang.Character",
			"MIN_SUPPLEMENTARY_CODE_POINT"
		);
	}
	jint Character::MIN_CODE_POINT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.lang.Character",
			"MIN_CODE_POINT"
		);
	}
	jint Character::MAX_CODE_POINT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.lang.Character",
			"MAX_CODE_POINT"
		);
	}
	jint Character::SIZE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.lang.Character",
			"SIZE"
		);
	}
	jint Character::BYTES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.lang.Character",
			"BYTES"
		);
	}
	
	// Constructors
	void Character::__constructor(jchar arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.Character",
			"(C)V",
			arg0);
	}
	
	// Methods
	jstring Character::getName(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Character",
			"getName",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jboolean Character::isJavaIdentifierStart(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.lang.Character",
			"isJavaIdentifierStart",
			"(I)Z",
			arg0
		);
	}
	jboolean Character::isJavaIdentifierStart(jchar arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.lang.Character",
			"isJavaIdentifierStart",
			"(C)Z",
			arg0
		);
	}
	jboolean Character::isJavaIdentifierPart(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.lang.Character",
			"isJavaIdentifierPart",
			"(I)Z",
			arg0
		);
	}
	jboolean Character::isJavaIdentifierPart(jchar arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.lang.Character",
			"isJavaIdentifierPart",
			"(C)Z",
			arg0
		);
	}
	jboolean Character::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring Character::toString(jchar arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Character",
			"toString",
			"(C)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring Character::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Character::toString(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Character",
			"toString",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jint Character::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jint Character::hashCode(jchar arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Character",
			"hashCode",
			"(C)I",
			arg0
		);
	}
	jchar Character::reverseBytes(jchar arg0)
	{
		return QAndroidJniObject::callStaticMethod<jchar>(
			"java.lang.Character",
			"reverseBytes",
			"(C)C",
			arg0
		);
	}
	jint Character::compareTo(__jni_impl::java::lang::Character arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Character;)I",
			arg0.__jniObject().object()
		);
	}
	jint Character::compareTo(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jboolean Character::isDigit(jchar arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.lang.Character",
			"isDigit",
			"(C)Z",
			arg0
		);
	}
	jboolean Character::isDigit(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.lang.Character",
			"isDigit",
			"(I)Z",
			arg0
		);
	}
	jboolean Character::isLowerCase(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.lang.Character",
			"isLowerCase",
			"(I)Z",
			arg0
		);
	}
	jboolean Character::isLowerCase(jchar arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.lang.Character",
			"isLowerCase",
			"(C)Z",
			arg0
		);
	}
	jboolean Character::isUpperCase(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.lang.Character",
			"isUpperCase",
			"(I)Z",
			arg0
		);
	}
	jboolean Character::isUpperCase(jchar arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.lang.Character",
			"isUpperCase",
			"(C)Z",
			arg0
		);
	}
	jboolean Character::isWhitespace(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.lang.Character",
			"isWhitespace",
			"(I)Z",
			arg0
		);
	}
	jboolean Character::isWhitespace(jchar arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.lang.Character",
			"isWhitespace",
			"(C)Z",
			arg0
		);
	}
	jchar Character::charValue()
	{
		return __thiz.callMethod<jchar>(
			"charValue",
			"()C"
		);
	}
	QAndroidJniObject Character::valueOf(jchar arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Character",
			"valueOf",
			"(C)Ljava/lang/Character;",
			arg0
		);
	}
	jint Character::codePointAt(jcharArray arg0, jint arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Character",
			"codePointAt",
			"([CII)I",
			arg0,
			arg1,
			arg2
		);
	}
	jint Character::codePointAt(jstring arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Character",
			"codePointAt",
			"(Ljava/lang/CharSequence;I)I",
			arg0,
			arg1
		);
	}
	jint Character::codePointAt(jcharArray arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Character",
			"codePointAt",
			"([CI)I",
			arg0,
			arg1
		);
	}
	jint Character::codePointBefore(jcharArray arg0, jint arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Character",
			"codePointBefore",
			"([CII)I",
			arg0,
			arg1,
			arg2
		);
	}
	jint Character::codePointBefore(jstring arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Character",
			"codePointBefore",
			"(Ljava/lang/CharSequence;I)I",
			arg0,
			arg1
		);
	}
	jint Character::codePointBefore(jcharArray arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Character",
			"codePointBefore",
			"([CI)I",
			arg0,
			arg1
		);
	}
	jint Character::codePointCount(jcharArray arg0, jint arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Character",
			"codePointCount",
			"([CII)I",
			arg0,
			arg1,
			arg2
		);
	}
	jint Character::codePointCount(jstring arg0, jint arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Character",
			"codePointCount",
			"(Ljava/lang/CharSequence;II)I",
			arg0,
			arg1,
			arg2
		);
	}
	jint Character::offsetByCodePoints(jcharArray arg0, jint arg1, jint arg2, jint arg3, jint arg4)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Character",
			"offsetByCodePoints",
			"([CIIII)I",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	jint Character::offsetByCodePoints(jstring arg0, jint arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Character",
			"offsetByCodePoints",
			"(Ljava/lang/CharSequence;II)I",
			arg0,
			arg1,
			arg2
		);
	}
	jint Character::compare(jchar arg0, jchar arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Character",
			"compare",
			"(CC)I",
			arg0,
			arg1
		);
	}
	jchar Character::toLowerCase(jchar arg0)
	{
		return QAndroidJniObject::callStaticMethod<jchar>(
			"java.lang.Character",
			"toLowerCase",
			"(C)C",
			arg0
		);
	}
	jint Character::toLowerCase(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Character",
			"toLowerCase",
			"(I)I",
			arg0
		);
	}
	jint Character::toUpperCase(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Character",
			"toUpperCase",
			"(I)I",
			arg0
		);
	}
	jchar Character::toUpperCase(jchar arg0)
	{
		return QAndroidJniObject::callStaticMethod<jchar>(
			"java.lang.Character",
			"toUpperCase",
			"(C)C",
			arg0
		);
	}
	jcharArray Character::toChars(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Character",
			"toChars",
			"(I)[C",
			arg0
		).object<jcharArray>();
	}
	jint Character::toChars(jint arg0, jcharArray arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Character",
			"toChars",
			"(I[CI)I",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean Character::isBmpCodePoint(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.lang.Character",
			"isBmpCodePoint",
			"(I)Z",
			arg0
		);
	}
	jboolean Character::isSupplementaryCodePoint(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.lang.Character",
			"isSupplementaryCodePoint",
			"(I)Z",
			arg0
		);
	}
	jint Character::getType(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Character",
			"getType",
			"(I)I",
			arg0
		);
	}
	jint Character::getType(jchar arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Character",
			"getType",
			"(C)I",
			arg0
		);
	}
	jboolean Character::isLetter(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.lang.Character",
			"isLetter",
			"(I)Z",
			arg0
		);
	}
	jboolean Character::isLetter(jchar arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.lang.Character",
			"isLetter",
			"(C)Z",
			arg0
		);
	}
	jboolean Character::isLetterOrDigit(jchar arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.lang.Character",
			"isLetterOrDigit",
			"(C)Z",
			arg0
		);
	}
	jboolean Character::isLetterOrDigit(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.lang.Character",
			"isLetterOrDigit",
			"(I)Z",
			arg0
		);
	}
	jboolean Character::isHighSurrogate(jchar arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.lang.Character",
			"isHighSurrogate",
			"(C)Z",
			arg0
		);
	}
	jboolean Character::isLowSurrogate(jchar arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.lang.Character",
			"isLowSurrogate",
			"(C)Z",
			arg0
		);
	}
	jint Character::toCodePoint(jchar arg0, jchar arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Character",
			"toCodePoint",
			"(CC)I",
			arg0,
			arg1
		);
	}
	jboolean Character::isValidCodePoint(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.lang.Character",
			"isValidCodePoint",
			"(I)Z",
			arg0
		);
	}
	jchar Character::lowSurrogate(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jchar>(
			"java.lang.Character",
			"lowSurrogate",
			"(I)C",
			arg0
		);
	}
	jchar Character::highSurrogate(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jchar>(
			"java.lang.Character",
			"highSurrogate",
			"(I)C",
			arg0
		);
	}
	jboolean Character::isTitleCase(jchar arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.lang.Character",
			"isTitleCase",
			"(C)Z",
			arg0
		);
	}
	jboolean Character::isTitleCase(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.lang.Character",
			"isTitleCase",
			"(I)Z",
			arg0
		);
	}
	jboolean Character::isDefined(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.lang.Character",
			"isDefined",
			"(I)Z",
			arg0
		);
	}
	jboolean Character::isDefined(jchar arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.lang.Character",
			"isDefined",
			"(C)Z",
			arg0
		);
	}
	jboolean Character::isIdeographic(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.lang.Character",
			"isIdeographic",
			"(I)Z",
			arg0
		);
	}
	jboolean Character::isUnicodeIdentifierStart(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.lang.Character",
			"isUnicodeIdentifierStart",
			"(I)Z",
			arg0
		);
	}
	jboolean Character::isUnicodeIdentifierStart(jchar arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.lang.Character",
			"isUnicodeIdentifierStart",
			"(C)Z",
			arg0
		);
	}
	jboolean Character::isUnicodeIdentifierPart(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.lang.Character",
			"isUnicodeIdentifierPart",
			"(I)Z",
			arg0
		);
	}
	jboolean Character::isUnicodeIdentifierPart(jchar arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.lang.Character",
			"isUnicodeIdentifierPart",
			"(C)Z",
			arg0
		);
	}
	jboolean Character::isIdentifierIgnorable(jchar arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.lang.Character",
			"isIdentifierIgnorable",
			"(C)Z",
			arg0
		);
	}
	jboolean Character::isIdentifierIgnorable(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.lang.Character",
			"isIdentifierIgnorable",
			"(I)Z",
			arg0
		);
	}
	jchar Character::toTitleCase(jchar arg0)
	{
		return QAndroidJniObject::callStaticMethod<jchar>(
			"java.lang.Character",
			"toTitleCase",
			"(C)C",
			arg0
		);
	}
	jint Character::toTitleCase(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Character",
			"toTitleCase",
			"(I)I",
			arg0
		);
	}
	jint Character::digit(jint arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Character",
			"digit",
			"(II)I",
			arg0,
			arg1
		);
	}
	jint Character::digit(jchar arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Character",
			"digit",
			"(CI)I",
			arg0,
			arg1
		);
	}
	jint Character::getNumericValue(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Character",
			"getNumericValue",
			"(I)I",
			arg0
		);
	}
	jint Character::getNumericValue(jchar arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Character",
			"getNumericValue",
			"(C)I",
			arg0
		);
	}
	jboolean Character::isSpaceChar(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.lang.Character",
			"isSpaceChar",
			"(I)Z",
			arg0
		);
	}
	jboolean Character::isSpaceChar(jchar arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.lang.Character",
			"isSpaceChar",
			"(C)Z",
			arg0
		);
	}
	jboolean Character::isISOControl(jchar arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.lang.Character",
			"isISOControl",
			"(C)Z",
			arg0
		);
	}
	jboolean Character::isISOControl(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.lang.Character",
			"isISOControl",
			"(I)Z",
			arg0
		);
	}
	jbyte Character::getDirectionality(jchar arg0)
	{
		return QAndroidJniObject::callStaticMethod<jbyte>(
			"java.lang.Character",
			"getDirectionality",
			"(C)B",
			arg0
		);
	}
	jbyte Character::getDirectionality(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jbyte>(
			"java.lang.Character",
			"getDirectionality",
			"(I)B",
			arg0
		);
	}
	jboolean Character::isMirrored(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.lang.Character",
			"isMirrored",
			"(I)Z",
			arg0
		);
	}
	jboolean Character::isMirrored(jchar arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.lang.Character",
			"isMirrored",
			"(C)Z",
			arg0
		);
	}
	jboolean Character::isSurrogate(jchar arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.lang.Character",
			"isSurrogate",
			"(C)Z",
			arg0
		);
	}
	jboolean Character::isSurrogatePair(jchar arg0, jchar arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.lang.Character",
			"isSurrogatePair",
			"(CC)Z",
			arg0,
			arg1
		);
	}
	jint Character::charCount(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Character",
			"charCount",
			"(I)I",
			arg0
		);
	}
	jboolean Character::isJavaLetter(jchar arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.lang.Character",
			"isJavaLetter",
			"(C)Z",
			arg0
		);
	}
	jboolean Character::isJavaLetterOrDigit(jchar arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.lang.Character",
			"isJavaLetterOrDigit",
			"(C)Z",
			arg0
		);
	}
	jboolean Character::isAlphabetic(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.lang.Character",
			"isAlphabetic",
			"(I)Z",
			arg0
		);
	}
	jboolean Character::isSpace(jchar arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.lang.Character",
			"isSpace",
			"(C)Z",
			arg0
		);
	}
	jchar Character::forDigit(jint arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jchar>(
			"java.lang.Character",
			"forDigit",
			"(II)C",
			arg0,
			arg1
		);
	}
	jint Character::codePointOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Character",
			"codePointOf",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
} // namespace __jni_impl::java::lang

namespace java::lang
{
	class Character : public __jni_impl::java::lang::Character
	{
	public:
		Character(QAndroidJniObject obj) { __thiz = obj; }
		Character(jchar arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::lang

#endif // JAVA_LANG_CHARACTER

