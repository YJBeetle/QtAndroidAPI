#pragma once

#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./DisplayOptions_NameStyle.def.hpp"

namespace android::icu::text
{
	// Fields
	inline android::icu::text::DisplayOptions_NameStyle DisplayOptions_NameStyle::DIALECT_NAMES()
	{
		return getStaticObjectField(
			"android.icu.text.DisplayOptions$NameStyle",
			"DIALECT_NAMES",
			"Landroid/icu/text/DisplayOptions$NameStyle;"
		);
	}
	inline android::icu::text::DisplayOptions_NameStyle DisplayOptions_NameStyle::STANDARD_NAMES()
	{
		return getStaticObjectField(
			"android.icu.text.DisplayOptions$NameStyle",
			"STANDARD_NAMES",
			"Landroid/icu/text/DisplayOptions$NameStyle;"
		);
	}
	inline android::icu::text::DisplayOptions_NameStyle DisplayOptions_NameStyle::UNDEFINED()
	{
		return getStaticObjectField(
			"android.icu.text.DisplayOptions$NameStyle",
			"UNDEFINED",
			"Landroid/icu/text/DisplayOptions$NameStyle;"
		);
	}
	inline JObject DisplayOptions_NameStyle::VALUES()
	{
		return getStaticObjectField(
			"android.icu.text.DisplayOptions$NameStyle",
			"VALUES",
			"Ljava/util/List;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::icu::text::DisplayOptions_NameStyle DisplayOptions_NameStyle::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.DisplayOptions$NameStyle",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/DisplayOptions$NameStyle;",
			arg0.object<jstring>()
		);
	}
	inline JArray DisplayOptions_NameStyle::values()
	{
		return callStaticObjectMethod(
			"android.icu.text.DisplayOptions$NameStyle",
			"values",
			"()[Landroid/icu/text/DisplayOptions$NameStyle;"
		);
	}
} // namespace android::icu::text

// Base class headers
#include "../../../java/lang/Enum.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::icu::text;
#endif
