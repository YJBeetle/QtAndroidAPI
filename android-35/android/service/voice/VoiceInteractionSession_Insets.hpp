#pragma once

#include "../../graphics/Rect.def.hpp"
#include "../../graphics/Region.def.hpp"
#include "./VoiceInteractionSession_Insets.def.hpp"

namespace android::service::voice
{
	// Fields
	inline jint VoiceInteractionSession_Insets::TOUCHABLE_INSETS_CONTENT()
	{
		return getStaticField<jint>(
			"android.service.voice.VoiceInteractionSession$Insets",
			"TOUCHABLE_INSETS_CONTENT"
		);
	}
	inline jint VoiceInteractionSession_Insets::TOUCHABLE_INSETS_FRAME()
	{
		return getStaticField<jint>(
			"android.service.voice.VoiceInteractionSession$Insets",
			"TOUCHABLE_INSETS_FRAME"
		);
	}
	inline jint VoiceInteractionSession_Insets::TOUCHABLE_INSETS_REGION()
	{
		return getStaticField<jint>(
			"android.service.voice.VoiceInteractionSession$Insets",
			"TOUCHABLE_INSETS_REGION"
		);
	}
	inline android::graphics::Rect VoiceInteractionSession_Insets::contentInsets()
	{
		return getObjectField(
			"contentInsets",
			"Landroid/graphics/Rect;"
		);
	}
	inline jint VoiceInteractionSession_Insets::touchableInsets()
	{
		return getField<jint>(
			"touchableInsets"
		);
	}
	inline android::graphics::Region VoiceInteractionSession_Insets::touchableRegion()
	{
		return getObjectField(
			"touchableRegion",
			"Landroid/graphics/Region;"
		);
	}
	
	// Constructors
	inline VoiceInteractionSession_Insets::VoiceInteractionSession_Insets()
		: JObject(
			"android.service.voice.VoiceInteractionSession$Insets",
			"()V"
		) {}
	
	// Methods
} // namespace android::service::voice

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::service::voice;
#endif
