#include "../../media/AudioFormat.hpp"
#include "./AlwaysOnHotwordDetector_EventPayload.hpp"

namespace android::service::voice
{
	// Fields
	
	AlwaysOnHotwordDetector_EventPayload::AlwaysOnHotwordDetector_EventPayload(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject AlwaysOnHotwordDetector_EventPayload::getCaptureAudioFormat()
	{
		return __thiz.callObjectMethod(
			"getCaptureAudioFormat",
			"()Landroid/media/AudioFormat;"
		);
	}
	jbyteArray AlwaysOnHotwordDetector_EventPayload::getTriggerAudio()
	{
		return __thiz.callObjectMethod(
			"getTriggerAudio",
			"()[B"
		).object<jbyteArray>();
	}
} // namespace android::service::voice

