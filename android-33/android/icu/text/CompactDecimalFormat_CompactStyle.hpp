#pragma once

#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./CompactDecimalFormat_CompactStyle.def.hpp"

namespace android::icu::text
{
	// Fields
	inline android::icu::text::CompactDecimalFormat_CompactStyle CompactDecimalFormat_CompactStyle::LONG()
	{
		return getStaticObjectField(
			"android.icu.text.CompactDecimalFormat$CompactStyle",
			"LONG",
			"Landroid/icu/text/CompactDecimalFormat$CompactStyle;"
		);
	}
	inline android::icu::text::CompactDecimalFormat_CompactStyle CompactDecimalFormat_CompactStyle::SHORT()
	{
		return getStaticObjectField(
			"android.icu.text.CompactDecimalFormat$CompactStyle",
			"SHORT",
			"Landroid/icu/text/CompactDecimalFormat$CompactStyle;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::icu::text::CompactDecimalFormat_CompactStyle CompactDecimalFormat_CompactStyle::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.CompactDecimalFormat$CompactStyle",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/CompactDecimalFormat$CompactStyle;",
			arg0.object<jstring>()
		);
	}
	inline JArray CompactDecimalFormat_CompactStyle::values()
	{
		return callStaticObjectMethod(
			"android.icu.text.CompactDecimalFormat$CompactStyle",
			"values",
			"()[Landroid/icu/text/CompactDecimalFormat$CompactStyle;"
		);
	}
} // namespace android::icu::text

// Base class headers
#include "../../../java/lang/Enum.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::icu::text;
#endif
