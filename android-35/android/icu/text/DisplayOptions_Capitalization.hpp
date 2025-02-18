#pragma once

#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./DisplayOptions_Capitalization.def.hpp"

namespace android::icu::text
{
	// Fields
	inline android::icu::text::DisplayOptions_Capitalization DisplayOptions_Capitalization::BEGINNING_OF_SENTENCE()
	{
		return getStaticObjectField(
			"android.icu.text.DisplayOptions$Capitalization",
			"BEGINNING_OF_SENTENCE",
			"Landroid/icu/text/DisplayOptions$Capitalization;"
		);
	}
	inline android::icu::text::DisplayOptions_Capitalization DisplayOptions_Capitalization::MIDDLE_OF_SENTENCE()
	{
		return getStaticObjectField(
			"android.icu.text.DisplayOptions$Capitalization",
			"MIDDLE_OF_SENTENCE",
			"Landroid/icu/text/DisplayOptions$Capitalization;"
		);
	}
	inline android::icu::text::DisplayOptions_Capitalization DisplayOptions_Capitalization::STANDALONE()
	{
		return getStaticObjectField(
			"android.icu.text.DisplayOptions$Capitalization",
			"STANDALONE",
			"Landroid/icu/text/DisplayOptions$Capitalization;"
		);
	}
	inline android::icu::text::DisplayOptions_Capitalization DisplayOptions_Capitalization::UI_LIST_OR_MENU()
	{
		return getStaticObjectField(
			"android.icu.text.DisplayOptions$Capitalization",
			"UI_LIST_OR_MENU",
			"Landroid/icu/text/DisplayOptions$Capitalization;"
		);
	}
	inline android::icu::text::DisplayOptions_Capitalization DisplayOptions_Capitalization::UNDEFINED()
	{
		return getStaticObjectField(
			"android.icu.text.DisplayOptions$Capitalization",
			"UNDEFINED",
			"Landroid/icu/text/DisplayOptions$Capitalization;"
		);
	}
	inline JObject DisplayOptions_Capitalization::VALUES()
	{
		return getStaticObjectField(
			"android.icu.text.DisplayOptions$Capitalization",
			"VALUES",
			"Ljava/util/List;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::icu::text::DisplayOptions_Capitalization DisplayOptions_Capitalization::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.DisplayOptions$Capitalization",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/DisplayOptions$Capitalization;",
			arg0.object<jstring>()
		);
	}
	inline JArray DisplayOptions_Capitalization::values()
	{
		return callStaticObjectMethod(
			"android.icu.text.DisplayOptions$Capitalization",
			"values",
			"()[Landroid/icu/text/DisplayOptions$Capitalization;"
		);
	}
} // namespace android::icu::text

// Base class headers
#include "../../../java/lang/Enum.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::icu::text;
#endif
