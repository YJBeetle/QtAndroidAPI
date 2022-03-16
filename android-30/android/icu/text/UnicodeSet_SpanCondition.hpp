#pragma once

#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./UnicodeSet_SpanCondition.def.hpp"

namespace android::icu::text
{
	// Fields
	inline android::icu::text::UnicodeSet_SpanCondition UnicodeSet_SpanCondition::CONDITION_COUNT()
	{
		return getStaticObjectField(
			"android.icu.text.UnicodeSet$SpanCondition",
			"CONDITION_COUNT",
			"Landroid/icu/text/UnicodeSet$SpanCondition;"
		);
	}
	inline android::icu::text::UnicodeSet_SpanCondition UnicodeSet_SpanCondition::CONTAINED()
	{
		return getStaticObjectField(
			"android.icu.text.UnicodeSet$SpanCondition",
			"CONTAINED",
			"Landroid/icu/text/UnicodeSet$SpanCondition;"
		);
	}
	inline android::icu::text::UnicodeSet_SpanCondition UnicodeSet_SpanCondition::NOT_CONTAINED()
	{
		return getStaticObjectField(
			"android.icu.text.UnicodeSet$SpanCondition",
			"NOT_CONTAINED",
			"Landroid/icu/text/UnicodeSet$SpanCondition;"
		);
	}
	inline android::icu::text::UnicodeSet_SpanCondition UnicodeSet_SpanCondition::SIMPLE()
	{
		return getStaticObjectField(
			"android.icu.text.UnicodeSet$SpanCondition",
			"SIMPLE",
			"Landroid/icu/text/UnicodeSet$SpanCondition;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::icu::text::UnicodeSet_SpanCondition UnicodeSet_SpanCondition::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.UnicodeSet$SpanCondition",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/UnicodeSet$SpanCondition;",
			arg0.object<jstring>()
		);
	}
	inline JArray UnicodeSet_SpanCondition::values()
	{
		return callStaticObjectMethod(
			"android.icu.text.UnicodeSet$SpanCondition",
			"values",
			"()[Landroid/icu/text/UnicodeSet$SpanCondition;"
		);
	}
} // namespace android::icu::text

// Base class headers
#include "../../../java/lang/Enum.hpp"

