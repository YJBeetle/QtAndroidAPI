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
	QAndroidJniObject VoiceInteractionSession_Insets::contentInsets()
	{
		return __thiz.getObjectField(
			"contentInsets",
			"Landroid/graphics/Rect;"
		);
	}
	jint VoiceInteractionSession_Insets::touchableInsets()
	{
		return __thiz.getField<jint>(
			"touchableInsets"
		);
	}
	QAndroidJniObject VoiceInteractionSession_Insets::touchableRegion()
	{
		return __thiz.getObjectField(
			"touchableRegion",
			"Landroid/graphics/Region;"
		);
	}
	
	VoiceInteractionSession_Insets::VoiceInteractionSession_Insets(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	VoiceInteractionSession_Insets::VoiceInteractionSession_Insets()
	{
		__thiz = QAndroidJniObject(
			"android.service.voice.VoiceInteractionSession$Insets",
			"()V"
		);
	}
	
	// Methods
} // namespace android::service::voice

