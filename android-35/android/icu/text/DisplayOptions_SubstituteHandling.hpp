#pragma once

#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./DisplayOptions_SubstituteHandling.def.hpp"

namespace android::icu::text
{
	// Fields
	inline android::icu::text::DisplayOptions_SubstituteHandling DisplayOptions_SubstituteHandling::NO_SUBSTITUTE()
	{
		return getStaticObjectField(
			"android.icu.text.DisplayOptions$SubstituteHandling",
			"NO_SUBSTITUTE",
			"Landroid/icu/text/DisplayOptions$SubstituteHandling;"
		);
	}
	inline android::icu::text::DisplayOptions_SubstituteHandling DisplayOptions_SubstituteHandling::SUBSTITUTE()
	{
		return getStaticObjectField(
			"android.icu.text.DisplayOptions$SubstituteHandling",
			"SUBSTITUTE",
			"Landroid/icu/text/DisplayOptions$SubstituteHandling;"
		);
	}
	inline android::icu::text::DisplayOptions_SubstituteHandling DisplayOptions_SubstituteHandling::UNDEFINED()
	{
		return getStaticObjectField(
			"android.icu.text.DisplayOptions$SubstituteHandling",
			"UNDEFINED",
			"Landroid/icu/text/DisplayOptions$SubstituteHandling;"
		);
	}
	inline JObject DisplayOptions_SubstituteHandling::VALUES()
	{
		return getStaticObjectField(
			"android.icu.text.DisplayOptions$SubstituteHandling",
			"VALUES",
			"Ljava/util/List;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::icu::text::DisplayOptions_SubstituteHandling DisplayOptions_SubstituteHandling::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.DisplayOptions$SubstituteHandling",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/DisplayOptions$SubstituteHandling;",
			arg0.object<jstring>()
		);
	}
	inline JArray DisplayOptions_SubstituteHandling::values()
	{
		return callStaticObjectMethod(
			"android.icu.text.DisplayOptions$SubstituteHandling",
			"values",
			"()[Landroid/icu/text/DisplayOptions$SubstituteHandling;"
		);
	}
} // namespace android::icu::text

// Base class headers
#include "../../../java/lang/Enum.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::icu::text;
#endif
