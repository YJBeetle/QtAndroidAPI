#pragma once

#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./MessagePattern_ApostropheMode.def.hpp"

namespace android::icu::text
{
	// Fields
	inline android::icu::text::MessagePattern_ApostropheMode MessagePattern_ApostropheMode::DOUBLE_OPTIONAL()
	{
		return getStaticObjectField(
			"android.icu.text.MessagePattern$ApostropheMode",
			"DOUBLE_OPTIONAL",
			"Landroid/icu/text/MessagePattern$ApostropheMode;"
		);
	}
	inline android::icu::text::MessagePattern_ApostropheMode MessagePattern_ApostropheMode::DOUBLE_REQUIRED()
	{
		return getStaticObjectField(
			"android.icu.text.MessagePattern$ApostropheMode",
			"DOUBLE_REQUIRED",
			"Landroid/icu/text/MessagePattern$ApostropheMode;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::icu::text::MessagePattern_ApostropheMode MessagePattern_ApostropheMode::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.MessagePattern$ApostropheMode",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/MessagePattern$ApostropheMode;",
			arg0.object<jstring>()
		);
	}
	inline JArray MessagePattern_ApostropheMode::values()
	{
		return callStaticObjectMethod(
			"android.icu.text.MessagePattern$ApostropheMode",
			"values",
			"()[Landroid/icu/text/MessagePattern$ApostropheMode;"
		);
	}
} // namespace android::icu::text

// Base class headers
#include "../../../java/lang/Enum.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::icu::text;
#endif
