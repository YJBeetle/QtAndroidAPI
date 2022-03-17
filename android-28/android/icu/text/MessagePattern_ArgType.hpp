#pragma once

#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./MessagePattern_ArgType.def.hpp"

namespace android::icu::text
{
	// Fields
	inline android::icu::text::MessagePattern_ArgType MessagePattern_ArgType::CHOICE()
	{
		return getStaticObjectField(
			"android.icu.text.MessagePattern$ArgType",
			"CHOICE",
			"Landroid/icu/text/MessagePattern$ArgType;"
		);
	}
	inline android::icu::text::MessagePattern_ArgType MessagePattern_ArgType::NONE()
	{
		return getStaticObjectField(
			"android.icu.text.MessagePattern$ArgType",
			"NONE",
			"Landroid/icu/text/MessagePattern$ArgType;"
		);
	}
	inline android::icu::text::MessagePattern_ArgType MessagePattern_ArgType::PLURAL()
	{
		return getStaticObjectField(
			"android.icu.text.MessagePattern$ArgType",
			"PLURAL",
			"Landroid/icu/text/MessagePattern$ArgType;"
		);
	}
	inline android::icu::text::MessagePattern_ArgType MessagePattern_ArgType::SELECT()
	{
		return getStaticObjectField(
			"android.icu.text.MessagePattern$ArgType",
			"SELECT",
			"Landroid/icu/text/MessagePattern$ArgType;"
		);
	}
	inline android::icu::text::MessagePattern_ArgType MessagePattern_ArgType::SELECTORDINAL()
	{
		return getStaticObjectField(
			"android.icu.text.MessagePattern$ArgType",
			"SELECTORDINAL",
			"Landroid/icu/text/MessagePattern$ArgType;"
		);
	}
	inline android::icu::text::MessagePattern_ArgType MessagePattern_ArgType::SIMPLE()
	{
		return getStaticObjectField(
			"android.icu.text.MessagePattern$ArgType",
			"SIMPLE",
			"Landroid/icu/text/MessagePattern$ArgType;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::icu::text::MessagePattern_ArgType MessagePattern_ArgType::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.MessagePattern$ArgType",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/MessagePattern$ArgType;",
			arg0.object<jstring>()
		);
	}
	inline JArray MessagePattern_ArgType::values()
	{
		return callStaticObjectMethod(
			"android.icu.text.MessagePattern$ArgType",
			"values",
			"()[Landroid/icu/text/MessagePattern$ArgType;"
		);
	}
	inline jboolean MessagePattern_ArgType::hasPluralStyle() const
	{
		return callMethod<jboolean>(
			"hasPluralStyle",
			"()Z"
		);
	}
} // namespace android::icu::text

// Base class headers
#include "../../../java/lang/Enum.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::icu::text;
#endif
