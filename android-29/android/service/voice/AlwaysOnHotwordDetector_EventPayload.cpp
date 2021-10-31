#include "../../media/AudioFormat.hpp"
#include "./AlwaysOnHotwordDetector_EventPayload.hpp"

namespace android::service::voice
{
	// Fields
	
	// QAndroidJniObject forward
	AlwaysOnHotwordDetector_EventPayload::AlwaysOnHotwordDetector_EventPayload(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject AlwaysOnHotwordDetector_EventPayload::getCaptureAudioFormat()
	{
		return callObjectMethod(
			"getCaptureAudioFormat",
			"()Landroid/media/AudioFormat;"
		);
	}
	jbyteArray AlwaysOnHotwordDetector_EventPayload::getTriggerAudio()
	{
		return callObjectMethod(
			"getTriggerAudio",
			"()[B"
		).object<jbyteArray>();
	}
} // namespace android::service::voice

