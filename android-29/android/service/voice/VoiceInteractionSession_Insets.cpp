#include "../../graphics/Rect.hpp"
#include "../../graphics/Region.hpp"
#include "./VoiceInteractionSession_Insets.hpp"

namespace android::service::voice
{
	// Fields
	jint VoiceInteractionSession_Insets::TOUCHABLE_INSETS_CONTENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.voice.VoiceInteractionSession$Insets",
			"TOUCHABLE_INSETS_CONTENT"
		);
	}
	jint VoiceInteractionSession_Insets::TOUCHABLE_INSETS_FRAME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.voice.VoiceInteractionSession$Insets",
			"TOUCHABLE_INSETS_FRAME"
		);
	}
	jint VoiceInteractionSession_Insets::TOUCHABLE_INSETS_REGION()
	{
		return QAndroidJniObject::getStaticField<jint>(
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
	
	// QAndroidJniObject forward
	VoiceInteractionSession_Insets::VoiceInteractionSession_Insets(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	VoiceInteractionSession_Insets::VoiceInteractionSession_Insets()
		: __JniBaseClass(
			"android.service.voice.VoiceInteractionSession$Insets",
			"()V"
		) {}
	
	// Methods
} // namespace android::service::voice

