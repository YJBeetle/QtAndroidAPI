#include "../../media/AudioFormat.hpp"
#include "./AlwaysOnHotwordDetector_EventPayload.hpp"

namespace android::service::voice
{
	// Fields
	
	// QJniObject forward
	AlwaysOnHotwordDetector_EventPayload::AlwaysOnHotwordDetector_EventPayload(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	android::media::AudioFormat AlwaysOnHotwordDetector_EventPayload::getCaptureAudioFormat()
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

