#include "../../graphics/Rect.hpp"
#include "../../graphics/Region.hpp"
#include "./VoiceInteractionSession_Insets.hpp"

namespace android::service::voice
{
	// Fields
	jint VoiceInteractionSession_Insets::TOUCHABLE_INSETS_CONTENT()
	{
		return getStaticField<jint>(
			"android.service.voice.VoiceInteractionSession$Insets",
			"TOUCHABLE_INSETS_CONTENT"
		);
	}
	jint VoiceInteractionSession_Insets::TOUCHABLE_INSETS_FRAME()
	{
		return getStaticField<jint>(
			"android.service.voice.VoiceInteractionSession$Insets",
			"TOUCHABLE_INSETS_FRAME"
		);
	}
	jint VoiceInteractionSession_Insets::TOUCHABLE_INSETS_REGION()
	{
		return getStaticField<jint>(
			"android.service.voice.VoiceInteractionSession$Insets",
			"TOUCHABLE_INSETS_REGION"
		);
	}
	android::graphics::Rect VoiceInteractionSession_Insets::contentInsets()
	{
		return getObjectField(
			"contentInsets",
			"Landroid/graphics/Rect;"
		);
	}
	jint VoiceInteractionSession_Insets::touchableInsets()
	{
		return getField<jint>(
			"touchableInsets"
		);
	}
	android::graphics::Region VoiceInteractionSession_Insets::touchableRegion()
	{
		return getObjectField(
			"touchableRegion",
			"Landroid/graphics/Region;"
		);
	}
	
	// Constructors
	VoiceInteractionSession_Insets::VoiceInteractionSession_Insets()
		: JObject(
			"android.service.voice.VoiceInteractionSession$Insets",
			"()V"
		) {}
	
	// Methods
} // namespace android::service::voice

