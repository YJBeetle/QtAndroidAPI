#pragma once

#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./DisplayOptions_DisplayLength.def.hpp"

namespace android::icu::text
{
	// Fields
	inline android::icu::text::DisplayOptions_DisplayLength DisplayOptions_DisplayLength::LENGTH_FULL()
	{
		return getStaticObjectField(
			"android.icu.text.DisplayOptions$DisplayLength",
			"LENGTH_FULL",
			"Landroid/icu/text/DisplayOptions$DisplayLength;"
		);
	}
	inline android::icu::text::DisplayOptions_DisplayLength DisplayOptions_DisplayLength::LENGTH_SHORT()
	{
		return getStaticObjectField(
			"android.icu.text.DisplayOptions$DisplayLength",
			"LENGTH_SHORT",
			"Landroid/icu/text/DisplayOptions$DisplayLength;"
		);
	}
	inline android::icu::text::DisplayOptions_DisplayLength DisplayOptions_DisplayLength::UNDEFINED()
	{
		return getStaticObjectField(
			"android.icu.text.DisplayOptions$DisplayLength",
			"UNDEFINED",
			"Landroid/icu/text/DisplayOptions$DisplayLength;"
		);
	}
	inline JObject DisplayOptions_DisplayLength::VALUES()
	{
		return getStaticObjectField(
			"android.icu.text.DisplayOptions$DisplayLength",
			"VALUES",
			"Ljava/util/List;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::icu::text::DisplayOptions_DisplayLength DisplayOptions_DisplayLength::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.DisplayOptions$DisplayLength",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/DisplayOptions$DisplayLength;",
			arg0.object<jstring>()
		);
	}
	inline JArray DisplayOptions_DisplayLength::values()
	{
		return callStaticObjectMethod(
			"android.icu.text.DisplayOptions$DisplayLength",
			"values",
			"()[Landroid/icu/text/DisplayOptions$DisplayLength;"
		);
	}
} // namespace android::icu::text

// Base class headers
#include "../../../java/lang/Enum.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::icu::text;
#endif
