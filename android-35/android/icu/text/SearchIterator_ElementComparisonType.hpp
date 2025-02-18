#pragma once

#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./SearchIterator_ElementComparisonType.def.hpp"

namespace android::icu::text
{
	// Fields
	inline android::icu::text::SearchIterator_ElementComparisonType SearchIterator_ElementComparisonType::ANY_BASE_WEIGHT_IS_WILDCARD()
	{
		return getStaticObjectField(
			"android.icu.text.SearchIterator$ElementComparisonType",
			"ANY_BASE_WEIGHT_IS_WILDCARD",
			"Landroid/icu/text/SearchIterator$ElementComparisonType;"
		);
	}
	inline android::icu::text::SearchIterator_ElementComparisonType SearchIterator_ElementComparisonType::PATTERN_BASE_WEIGHT_IS_WILDCARD()
	{
		return getStaticObjectField(
			"android.icu.text.SearchIterator$ElementComparisonType",
			"PATTERN_BASE_WEIGHT_IS_WILDCARD",
			"Landroid/icu/text/SearchIterator$ElementComparisonType;"
		);
	}
	inline android::icu::text::SearchIterator_ElementComparisonType SearchIterator_ElementComparisonType::STANDARD_ELEMENT_COMPARISON()
	{
		return getStaticObjectField(
			"android.icu.text.SearchIterator$ElementComparisonType",
			"STANDARD_ELEMENT_COMPARISON",
			"Landroid/icu/text/SearchIterator$ElementComparisonType;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::icu::text::SearchIterator_ElementComparisonType SearchIterator_ElementComparisonType::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.SearchIterator$ElementComparisonType",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/SearchIterator$ElementComparisonType;",
			arg0.object<jstring>()
		);
	}
	inline JArray SearchIterator_ElementComparisonType::values()
	{
		return callStaticObjectMethod(
			"android.icu.text.SearchIterator$ElementComparisonType",
			"values",
			"()[Landroid/icu/text/SearchIterator$ElementComparisonType;"
		);
	}
} // namespace android::icu::text

// Base class headers
#include "../../../java/lang/Enum.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::icu::text;
#endif
