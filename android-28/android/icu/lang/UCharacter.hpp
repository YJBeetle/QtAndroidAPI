#pragma once

#include "../../../JObject.hpp"

namespace android::icu::text
{
	class BreakIterator;
}
namespace android::icu::util
{
	class ULocale;
}
namespace android::icu::util
{
	class VersionInfo;
}
namespace java::util
{
	class Locale;
}

namespace android::icu::lang
{
	class UCharacter : public JObject
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
		
		// QJniObject forward
		template<typename ...Ts> explicit UCharacter(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		UCharacter(QJniObject obj);
		
		// Constructors
		
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
		static jint digit(jint arg0);
		static jint digit(jint arg0, jint arg1);
		static jint foldCase(jint arg0, jboolean arg1);
		static jint foldCase(jint arg0, jint arg1);
		static jstring foldCase(jstring arg0, jboolean arg1);
		static jstring foldCase(jstring arg0, jint arg1);
		static jchar forDigit(jint arg0, jint arg1);
		static android::icu::util::VersionInfo getAge(jint arg0);
		static jint getBidiPairedBracket(jint arg0);
		static jint getCharFromExtendedName(jstring arg0);
		static jint getCharFromName(jstring arg0);
		static jint getCharFromNameAlias(jstring arg0);
		static jint getCodePoint(jchar arg0);
		static jint getCodePoint(jchar arg0, jchar arg1);
		static jint getCombiningClass(jint arg0);
		static jint getDirection(jint arg0);
		static jbyte getDirectionality(jint arg0);
		static jstring getExtendedName(jint arg0);
		static JObject getExtendedNameIterator();
		static jint getHanNumericValue(jint arg0);
		static jint getIntPropertyMaxValue(jint arg0);
		static jint getIntPropertyMinValue(jint arg0);
		static jint getIntPropertyValue(jint arg0, jint arg1);
		static jint getMirror(jint arg0);
		static jstring getName(jint arg0);
		static jstring getName(jstring arg0, jstring arg1);
		static jstring getNameAlias(jint arg0);
		static JObject getNameIterator();
		static jint getNumericValue(jint arg0);
		static jint getPropertyEnum(jstring arg0);
		static jstring getPropertyName(jint arg0, jint arg1);
		static jint getPropertyValueEnum(jint arg0, jstring arg1);
		static jstring getPropertyValueName(jint arg0, jint arg1, jint arg2);
		static jint getType(jint arg0);
		static JObject getTypeIterator();
		static jdouble getUnicodeNumericValue(jint arg0);
		static android::icu::util::VersionInfo getUnicodeVersion();
		static jboolean hasBinaryProperty(jint arg0, jint arg1);
		static jboolean isBMP(jint arg0);
		static jboolean isBaseForm(jint arg0);
		static jboolean isDefined(jint arg0);
		static jboolean isDigit(jint arg0);
		static jboolean isHighSurrogate(jchar arg0);
		static jboolean isISOControl(jint arg0);
		static jboolean isIdentifierIgnorable(jint arg0);
		static jboolean isJavaIdentifierPart(jint arg0);
		static jboolean isJavaIdentifierStart(jint arg0);
		static jboolean isLegal(jint arg0);
		static jboolean isLegal(jstring arg0);
		static jboolean isLetter(jint arg0);
		static jboolean isLetterOrDigit(jint arg0);
		static jboolean isLowSurrogate(jchar arg0);
		static jboolean isLowerCase(jint arg0);
		static jboolean isMirrored(jint arg0);
		static jboolean isPrintable(jint arg0);
		static jboolean isSpaceChar(jint arg0);
		static jboolean isSupplementary(jint arg0);
		static jboolean isSupplementaryCodePoint(jint arg0);
		static jboolean isSurrogatePair(jchar arg0, jchar arg1);
		static jboolean isTitleCase(jint arg0);
		static jboolean isUAlphabetic(jint arg0);
		static jboolean isULowercase(jint arg0);
		static jboolean isUUppercase(jint arg0);
		static jboolean isUWhiteSpace(jint arg0);
		static jboolean isUnicodeIdentifierPart(jint arg0);
		static jboolean isUnicodeIdentifierStart(jint arg0);
		static jboolean isUpperCase(jint arg0);
		static jboolean isValidCodePoint(jint arg0);
		static jboolean isWhitespace(jint arg0);
		static jint offsetByCodePoints(jstring arg0, jint arg1, jint arg2);
		static jint offsetByCodePoints(jcharArray arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		static jcharArray toChars(jint arg0);
		static jint toChars(jint arg0, jcharArray arg1, jint arg2);
		static jint toCodePoint(jchar arg0, jchar arg1);
		static jint toLowerCase(jint arg0);
		static jstring toLowerCase(jstring arg0);
		static jstring toLowerCase(android::icu::util::ULocale arg0, jstring arg1);
		static jstring toLowerCase(java::util::Locale arg0, jstring arg1);
		static jstring toString(jint arg0);
		static jint toTitleCase(jint arg0);
		static jstring toTitleCase(jstring arg0, android::icu::text::BreakIterator arg1);
		static jstring toTitleCase(android::icu::util::ULocale arg0, jstring arg1, android::icu::text::BreakIterator arg2);
		static jstring toTitleCase(java::util::Locale arg0, jstring arg1, android::icu::text::BreakIterator arg2);
		static jstring toTitleCase(android::icu::util::ULocale arg0, jstring arg1, android::icu::text::BreakIterator arg2, jint arg3);
		static jstring toTitleCase(java::util::Locale arg0, jstring arg1, android::icu::text::BreakIterator arg2, jint arg3);
		static jint toUpperCase(jint arg0);
		static jstring toUpperCase(jstring arg0);
		static jstring toUpperCase(android::icu::util::ULocale arg0, jstring arg1);
		static jstring toUpperCase(java::util::Locale arg0, jstring arg1);
	};
} // namespace android::icu::lang

