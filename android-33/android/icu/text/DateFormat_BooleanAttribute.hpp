#pragma once

#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./DateFormat_BooleanAttribute.def.hpp"

namespace android::icu::text
{
	// Fields
	inline android::icu::text::DateFormat_BooleanAttribute DateFormat_BooleanAttribute::PARSE_ALLOW_NUMERIC()
	{
		return getStaticObjectField(
			"android.icu.text.DateFormat$BooleanAttribute",
			"PARSE_ALLOW_NUMERIC",
			"Landroid/icu/text/DateFormat$BooleanAttribute;"
		);
	}
	inline android::icu::text::DateFormat_BooleanAttribute DateFormat_BooleanAttribute::PARSE_ALLOW_WHITESPACE()
	{
		return getStaticObjectField(
			"android.icu.text.DateFormat$BooleanAttribute",
			"PARSE_ALLOW_WHITESPACE",
			"Landroid/icu/text/DateFormat$BooleanAttribute;"
		);
	}
	inline android::icu::text::DateFormat_BooleanAttribute DateFormat_BooleanAttribute::PARSE_MULTIPLE_PATTERNS_FOR_MATCH()
	{
		return getStaticObjectField(
			"android.icu.text.DateFormat$BooleanAttribute",
			"PARSE_MULTIPLE_PATTERNS_FOR_MATCH",
			"Landroid/icu/text/DateFormat$BooleanAttribute;"
		);
	}
	inline android::icu::text::DateFormat_BooleanAttribute DateFormat_BooleanAttribute::PARSE_PARTIAL_LITERAL_MATCH()
	{
		return getStaticObjectField(
			"android.icu.text.DateFormat$BooleanAttribute",
			"PARSE_PARTIAL_LITERAL_MATCH",
			"Landroid/icu/text/DateFormat$BooleanAttribute;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::icu::text::DateFormat_BooleanAttribute DateFormat_BooleanAttribute::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.DateFormat$BooleanAttribute",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/DateFormat$BooleanAttribute;",
			arg0.object<jstring>()
		);
	}
	inline JArray DateFormat_BooleanAttribute::values()
	{
		return callStaticObjectMethod(
			"android.icu.text.DateFormat$BooleanAttribute",
			"values",
			"()[Landroid/icu/text/DateFormat$BooleanAttribute;"
		);
	}
} // namespace android::icu::text

// Base class headers
#include "../../../java/lang/Enum.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::icu::text;
#endif
