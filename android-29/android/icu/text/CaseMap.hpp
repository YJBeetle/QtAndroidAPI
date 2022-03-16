#pragma once

#include "./CaseMap_Fold.def.hpp"
#include "./CaseMap_Lower.def.hpp"
#include "./CaseMap_Title.def.hpp"
#include "./CaseMap_Upper.def.hpp"
#include "./CaseMap.def.hpp"

namespace android::icu::text
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::icu::text::CaseMap_Fold CaseMap::fold()
	{
		return callStaticObjectMethod(
			"android.icu.text.CaseMap",
			"fold",
			"()Landroid/icu/text/CaseMap$Fold;"
		);
	}
	inline android::icu::text::CaseMap_Lower CaseMap::toLower()
	{
		return callStaticObjectMethod(
			"android.icu.text.CaseMap",
			"toLower",
			"()Landroid/icu/text/CaseMap$Lower;"
		);
	}
	inline android::icu::text::CaseMap_Title CaseMap::toTitle()
	{
		return callStaticObjectMethod(
			"android.icu.text.CaseMap",
			"toTitle",
			"()Landroid/icu/text/CaseMap$Title;"
		);
	}
	inline android::icu::text::CaseMap_Upper CaseMap::toUpper()
	{
		return callStaticObjectMethod(
			"android.icu.text.CaseMap",
			"toUpper",
			"()Landroid/icu/text/CaseMap$Upper;"
		);
	}
	inline android::icu::text::CaseMap CaseMap::omitUnchangedText() const
	{
		return callObjectMethod(
			"omitUnchangedText",
			"()Landroid/icu/text/CaseMap;"
		);
	}
} // namespace android::icu::text

// Base class headers

