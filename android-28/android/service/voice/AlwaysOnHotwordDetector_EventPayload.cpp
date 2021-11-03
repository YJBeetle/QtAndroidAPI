#include "../../../JByteArray.hpp"
#include "../../media/AudioFormat.hpp"
#include "./AlwaysOnHotwordDetector_EventPayload.hpp"

namespace android::service::voice
{
	// Fields
	
	// QAndroidJniObject forward
	AlwaysOnHotwordDetector_EventPayload::AlwaysOnHotwordDetector_EventPayload(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::media::AudioFormat AlwaysOnHotwordDetector_EventPayload::getCaptureAudioFormat()
	{
		return callObjectMethod(
			"getCaptureAudioFormat",
			"()Landroid/media/AudioFormat;"
		);
	}
	JByteArray AlwaysOnHotwordDetector_EventPayload::getTriggerAudio()
	{
		return callObjectMethod(
			"getTriggerAudio",
			"()[B"
		);
	}
} // namespace android::service::voice

