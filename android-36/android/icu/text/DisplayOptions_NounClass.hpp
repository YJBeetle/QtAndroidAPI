#pragma once

#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./DisplayOptions_NounClass.def.hpp"

namespace android::icu::text
{
	// Fields
	inline android::icu::text::DisplayOptions_NounClass DisplayOptions_NounClass::ANIMATE()
	{
		return getStaticObjectField(
			"android.icu.text.DisplayOptions$NounClass",
			"ANIMATE",
			"Landroid/icu/text/DisplayOptions$NounClass;"
		);
	}
	inline android::icu::text::DisplayOptions_NounClass DisplayOptions_NounClass::COMMON()
	{
		return getStaticObjectField(
			"android.icu.text.DisplayOptions$NounClass",
			"COMMON",
			"Landroid/icu/text/DisplayOptions$NounClass;"
		);
	}
	inline android::icu::text::DisplayOptions_NounClass DisplayOptions_NounClass::FEMININE()
	{
		return getStaticObjectField(
			"android.icu.text.DisplayOptions$NounClass",
			"FEMININE",
			"Landroid/icu/text/DisplayOptions$NounClass;"
		);
	}
	inline android::icu::text::DisplayOptions_NounClass DisplayOptions_NounClass::INANIMATE()
	{
		return getStaticObjectField(
			"android.icu.text.DisplayOptions$NounClass",
			"INANIMATE",
			"Landroid/icu/text/DisplayOptions$NounClass;"
		);
	}
	inline android::icu::text::DisplayOptions_NounClass DisplayOptions_NounClass::MASCULINE()
	{
		return getStaticObjectField(
			"android.icu.text.DisplayOptions$NounClass",
			"MASCULINE",
			"Landroid/icu/text/DisplayOptions$NounClass;"
		);
	}
	inline android::icu::text::DisplayOptions_NounClass DisplayOptions_NounClass::NEUTER()
	{
		return getStaticObjectField(
			"android.icu.text.DisplayOptions$NounClass",
			"NEUTER",
			"Landroid/icu/text/DisplayOptions$NounClass;"
		);
	}
	inline android::icu::text::DisplayOptions_NounClass DisplayOptions_NounClass::OTHER()
	{
		return getStaticObjectField(
			"android.icu.text.DisplayOptions$NounClass",
			"OTHER",
			"Landroid/icu/text/DisplayOptions$NounClass;"
		);
	}
	inline android::icu::text::DisplayOptions_NounClass DisplayOptions_NounClass::PERSONAL()
	{
		return getStaticObjectField(
			"android.icu.text.DisplayOptions$NounClass",
			"PERSONAL",
			"Landroid/icu/text/DisplayOptions$NounClass;"
		);
	}
	inline android::icu::text::DisplayOptions_NounClass DisplayOptions_NounClass::UNDEFINED()
	{
		return getStaticObjectField(
			"android.icu.text.DisplayOptions$NounClass",
			"UNDEFINED",
			"Landroid/icu/text/DisplayOptions$NounClass;"
		);
	}
	inline JObject DisplayOptions_NounClass::VALUES()
	{
		return getStaticObjectField(
			"android.icu.text.DisplayOptions$NounClass",
			"VALUES",
			"Ljava/util/List;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::icu::text::DisplayOptions_NounClass DisplayOptions_NounClass::fromIdentifier(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.DisplayOptions$NounClass",
			"fromIdentifier",
			"(Ljava/lang/String;)Landroid/icu/text/DisplayOptions$NounClass;",
			arg0.object<jstring>()
		);
	}
	inline android::icu::text::DisplayOptions_NounClass DisplayOptions_NounClass::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.DisplayOptions$NounClass",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/DisplayOptions$NounClass;",
			arg0.object<jstring>()
		);
	}
	inline JArray DisplayOptions_NounClass::values()
	{
		return callStaticObjectMethod(
			"android.icu.text.DisplayOptions$NounClass",
			"values",
			"()[Landroid/icu/text/DisplayOptions$NounClass;"
		);
	}
	inline JString DisplayOptions_NounClass::getIdentifier() const
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
