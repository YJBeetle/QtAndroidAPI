#include "./CaseMap_1.hpp"
#include "./CaseMap_Fold.hpp"
#include "./CaseMap_Lower.hpp"
#include "./CaseMap_Title.hpp"
#include "./CaseMap_Upper.hpp"
#include "./CaseMap.hpp"

namespace android::icu::text
{
	// Fields
	
	// Constructors
	
	// Methods
	android::icu::text::CaseMap_Fold CaseMap::fold()
	{
		return callStaticObjectMethod(
			"android.icu.text.CaseMap",
			"fold",
			"()Landroid/icu/text/CaseMap$Fold;"
		);
	}
	android::icu::text::CaseMap_Lower CaseMap::toLower()
	{
		return callStaticObjectMethod(
			"android.icu.text.CaseMap",
			"toLower",
			"()Landroid/icu/text/CaseMap$Lower;"
		);
	}
	android::icu::text::CaseMap_Title CaseMap::toTitle()
	{
		return callStaticObjectMethod(
			"android.icu.text.CaseMap",
			"toTitle",
			"()Landroid/icu/text/CaseMap$Title;"
		);
	}
	android::icu::text::CaseMap_Upper CaseMap::toUpper()
	{
		return callStaticObjectMethod(
			"android.icu.text.CaseMap",
			"toUpper",
			"()Landroid/icu/text/CaseMap$Upper;"
		);
	}
	android::icu::text::CaseMap CaseMap::omitUnchangedText() const
	{
		return callObjectMethod(
			"omitUnchangedText",
			"()Landroid/icu/text/CaseMap;"
		);
	}
} // namespace android::icu::text

