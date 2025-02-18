#pragma once

#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./DisplayOptions_PluralCategory.def.hpp"

namespace android::icu::text
{
	// Fields
	inline android::icu::text::DisplayOptions_PluralCategory DisplayOptions_PluralCategory::FEW()
	{
		return getStaticObjectField(
			"android.icu.text.DisplayOptions$PluralCategory",
			"FEW",
			"Landroid/icu/text/DisplayOptions$PluralCategory;"
		);
	}
	inline android::icu::text::DisplayOptions_PluralCategory DisplayOptions_PluralCategory::MANY()
	{
		return getStaticObjectField(
			"android.icu.text.DisplayOptions$PluralCategory",
			"MANY",
			"Landroid/icu/text/DisplayOptions$PluralCategory;"
		);
	}
	inline android::icu::text::DisplayOptions_PluralCategory DisplayOptions_PluralCategory::ONE()
	{
		return getStaticObjectField(
			"android.icu.text.DisplayOptions$PluralCategory",
			"ONE",
			"Landroid/icu/text/DisplayOptions$PluralCategory;"
		);
	}
	inline android::icu::text::DisplayOptions_PluralCategory DisplayOptions_PluralCategory::OTHER()
	{
		return getStaticObjectField(
			"android.icu.text.DisplayOptions$PluralCategory",
			"OTHER",
			"Landroid/icu/text/DisplayOptions$PluralCategory;"
		);
	}
	inline android::icu::text::DisplayOptions_PluralCategory DisplayOptions_PluralCategory::TWO()
	{
		return getStaticObjectField(
			"android.icu.text.DisplayOptions$PluralCategory",
			"TWO",
			"Landroid/icu/text/DisplayOptions$PluralCategory;"
		);
	}
	inline android::icu::text::DisplayOptions_PluralCategory DisplayOptions_PluralCategory::UNDEFINED()
	{
		return getStaticObjectField(
			"android.icu.text.DisplayOptions$PluralCategory",
			"UNDEFINED",
			"Landroid/icu/text/DisplayOptions$PluralCategory;"
		);
	}
	inline JObject DisplayOptions_PluralCategory::VALUES()
	{
		return getStaticObjectField(
			"android.icu.text.DisplayOptions$PluralCategory",
			"VALUES",
			"Ljava/util/List;"
		);
	}
	inline android::icu::text::DisplayOptions_PluralCategory DisplayOptions_PluralCategory::ZERO()
	{
		return getStaticObjectField(
			"android.icu.text.DisplayOptions$PluralCategory",
			"ZERO",
			"Landroid/icu/text/DisplayOptions$PluralCategory;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::icu::text::DisplayOptions_PluralCategory DisplayOptions_PluralCategory::fromIdentifier(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.DisplayOptions$PluralCategory",
			"fromIdentifier",
			"(Ljava/lang/String;)Landroid/icu/text/DisplayOptions$PluralCategory;",
			arg0.object<jstring>()
		);
	}
	inline android::icu::text::DisplayOptions_PluralCategory DisplayOptions_PluralCategory::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.DisplayOptions$PluralCategory",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/DisplayOptions$PluralCategory;",
			arg0.object<jstring>()
		);
	}
	inline JArray DisplayOptions_PluralCategory::values()
	{
		return callStaticObjectMethod(
			"android.icu.text.DisplayOptions$PluralCategory",
			"values",
			"()[Landroid/icu/text/DisplayOptions$PluralCategory;"
		);
	}
	inline JString DisplayOptions_PluralCategory::getIdentifier() const
	{
		return callObjectMethod(
			"getIdentifier",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::icu::text

// Base class headers
#include "../../../java/lang/Enum.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::icu::text;
#endif
