#include "../../../JByteArray.hpp"
#include "../../media/AudioFormat.hpp"
#include "./AlwaysOnHotwordDetector_EventPayload.hpp"

namespace android::service::voice
{
	// Fields
	
	// Constructors
	
	// Methods
	android::media::AudioFormat AlwaysOnHotwordDetector_EventPayload::getCaptureAudioFormat() const
	{
		return callObjectMethod(
			"getCaptureAudioFormat",
			"()Landroid/media/AudioFormat;"
		);
	}
	JByteArray AlwaysOnHotwordDetector_EventPayload::getTriggerAudio() const
	{
		return callObjectMethod(
			"getTriggerAudio",
			"()[B"
		);
	}
} // namespace android::service::voice

