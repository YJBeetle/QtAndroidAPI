#pragma once

#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./DisplayContext_Type.def.hpp"

namespace android::icu::text
{
	// Fields
	inline android::icu::text::DisplayContext_Type DisplayContext_Type::CAPITALIZATION()
	{
		return getStaticObjectField(
			"android.icu.text.DisplayContext$Type",
			"CAPITALIZATION",
			"Landroid/icu/text/DisplayContext$Type;"
		);
	}
	inline android::icu::text::DisplayContext_Type DisplayContext_Type::DIALECT_HANDLING()
	{
		return getStaticObjectField(
			"android.icu.text.DisplayContext$Type",
			"DIALECT_HANDLING",
			"Landroid/icu/text/DisplayContext$Type;"
		);
	}
	inline android::icu::text::DisplayContext_Type DisplayContext_Type::DISPLAY_LENGTH()
	{
		return getStaticObjectField(
			"android.icu.text.DisplayContext$Type",
			"DISPLAY_LENGTH",
			"Landroid/icu/text/DisplayContext$Type;"
		);
	}
	inline android::icu::text::DisplayContext_Type DisplayContext_Type::SUBSTITUTE_HANDLING()
	{
		return getStaticObjectField(
			"android.icu.text.DisplayContext$Type",
			"SUBSTITUTE_HANDLING",
			"Landroid/icu/text/DisplayContext$Type;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::icu::text::DisplayContext_Type DisplayContext_Type::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.DisplayContext$Type",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/DisplayContext$Type;",
			arg0.object<jstring>()
		);
	}
	inline JArray DisplayContext_Type::values()
	{
		return callStaticObjectMethod(
			"android.icu.text.DisplayContext$Type",
			"values",
			"()[Landroid/icu/text/DisplayContext$Type;"
		);
	}
} // namespace android::icu::text

// Base class headers
#include "../../../java/lang/Enum.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::icu::text;
#endif
