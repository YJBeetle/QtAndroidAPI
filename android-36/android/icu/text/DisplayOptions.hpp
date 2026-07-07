#pragma once

#include "./DisplayOptions_Builder.def.hpp"
#include "./DisplayOptions_Capitalization.def.hpp"
#include "./DisplayOptions_DisplayLength.def.hpp"
#include "./DisplayOptions_GrammaticalCase.def.hpp"
#include "./DisplayOptions_NameStyle.def.hpp"
#include "./DisplayOptions_NounClass.def.hpp"
#include "./DisplayOptions_PluralCategory.def.hpp"
#include "./DisplayOptions_SubstituteHandling.def.hpp"
#include "./DisplayOptions.def.hpp"

namespace android::icu::text
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::icu::text::DisplayOptions_Builder DisplayOptions::builder()
	{
		return callStaticObjectMethod(
			"android.icu.text.DisplayOptions",
			"builder",
			"()Landroid/icu/text/DisplayOptions$Builder;"
		);
	}
	inline android::icu::text::DisplayOptions_Builder DisplayOptions::copyToBuilder() const
	{
		return callObjectMethod(
			"copyToBuilder",
			"()Landroid/icu/text/DisplayOptions$Builder;"
		);
	}
	inline android::icu::text::DisplayOptions_Capitalization DisplayOptions::getCapitalization() const
	{
		return callObjectMethod(
			"getCapitalization",
			"()Landroid/icu/text/DisplayOptions$Capitalization;"
		);
	}
	inline android::icu::text::DisplayOptions_DisplayLength DisplayOptions::getDisplayLength() const
	{
		return callObjectMethod(
			"getDisplayLength",
			"()Landroid/icu/text/DisplayOptions$DisplayLength;"
		);
	}
	inline android::icu::text::DisplayOptions_GrammaticalCase DisplayOptions::getGrammaticalCase() const
	{
		return callObjectMethod(
			"getGrammaticalCase",
			"()Landroid/icu/text/DisplayOptions$GrammaticalCase;"
		);
	}
	inline android::icu::text::DisplayOptions_NameStyle DisplayOptions::getNameStyle() const
	{
		return callObjectMethod(
			"getNameStyle",
			"()Landroid/icu/text/DisplayOptions$NameStyle;"
		);
	}
	inline android::icu::text::DisplayOptions_NounClass DisplayOptions::getNounClass() const
	{
		return callObjectMethod(
			"getNounClass",
			"()Landroid/icu/text/DisplayOptions$NounClass;"
		);
	}
	inline android::icu::text::DisplayOptions_PluralCategory DisplayOptions::getPluralCategory() const
	{
		return callObjectMethod(
			"getPluralCategory",
			"()Landroid/icu/text/DisplayOptions$PluralCategory;"
		);
	}
	inline android::icu::text::DisplayOptions_SubstituteHandling DisplayOptions::getSubstituteHandling() const
	{
		return callObjectMethod(
			"getSubstituteHandling",
			"()Landroid/icu/text/DisplayOptions$SubstituteHandling;"
		);
	}
} // namespace android::icu::text

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::icu::text;
#endif
