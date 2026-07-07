#pragma once

#include "./DisplayOptions.def.hpp"
#include "./DisplayOptions_Capitalization.def.hpp"
#include "./DisplayOptions_DisplayLength.def.hpp"
#include "./DisplayOptions_GrammaticalCase.def.hpp"
#include "./DisplayOptions_NameStyle.def.hpp"
#include "./DisplayOptions_NounClass.def.hpp"
#include "./DisplayOptions_PluralCategory.def.hpp"
#include "./DisplayOptions_SubstituteHandling.def.hpp"
#include "./DisplayOptions_Builder.def.hpp"

namespace android::icu::text
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::icu::text::DisplayOptions DisplayOptions_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/icu/text/DisplayOptions;"
		);
	}
	inline android::icu::text::DisplayOptions_Builder DisplayOptions_Builder::setCapitalization(android::icu::text::DisplayOptions_Capitalization arg0) const
	{
		return callObjectMethod(
			"setCapitalization",
			"(Landroid/icu/text/DisplayOptions$Capitalization;)Landroid/icu/text/DisplayOptions$Builder;",
			arg0.object()
		);
	}
	inline android::icu::text::DisplayOptions_Builder DisplayOptions_Builder::setDisplayLength(android::icu::text::DisplayOptions_DisplayLength arg0) const
	{
		return callObjectMethod(
			"setDisplayLength",
			"(Landroid/icu/text/DisplayOptions$DisplayLength;)Landroid/icu/text/DisplayOptions$Builder;",
			arg0.object()
		);
	}
	inline android::icu::text::DisplayOptions_Builder DisplayOptions_Builder::setGrammaticalCase(android::icu::text::DisplayOptions_GrammaticalCase arg0) const
	{
		return callObjectMethod(
			"setGrammaticalCase",
			"(Landroid/icu/text/DisplayOptions$GrammaticalCase;)Landroid/icu/text/DisplayOptions$Builder;",
			arg0.object()
		);
	}
	inline android::icu::text::DisplayOptions_Builder DisplayOptions_Builder::setNameStyle(android::icu::text::DisplayOptions_NameStyle arg0) const
	{
		return callObjectMethod(
			"setNameStyle",
			"(Landroid/icu/text/DisplayOptions$NameStyle;)Landroid/icu/text/DisplayOptions$Builder;",
			arg0.object()
		);
	}
	inline android::icu::text::DisplayOptions_Builder DisplayOptions_Builder::setNounClass(android::icu::text::DisplayOptions_NounClass arg0) const
	{
		return callObjectMethod(
			"setNounClass",
			"(Landroid/icu/text/DisplayOptions$NounClass;)Landroid/icu/text/DisplayOptions$Builder;",
			arg0.object()
		);
	}
	inline android::icu::text::DisplayOptions_Builder DisplayOptions_Builder::setPluralCategory(android::icu::text::DisplayOptions_PluralCategory arg0) const
	{
		return callObjectMethod(
			"setPluralCategory",
			"(Landroid/icu/text/DisplayOptions$PluralCategory;)Landroid/icu/text/DisplayOptions$Builder;",
			arg0.object()
		);
	}
	inline android::icu::text::DisplayOptions_Builder DisplayOptions_Builder::setSubstituteHandling(android::icu::text::DisplayOptions_SubstituteHandling arg0) const
	{
		return callObjectMethod(
			"setSubstituteHandling",
			"(Landroid/icu/text/DisplayOptions$SubstituteHandling;)Landroid/icu/text/DisplayOptions$Builder;",
			arg0.object()
		);
	}
} // namespace android::icu::text

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::icu::text;
#endif
