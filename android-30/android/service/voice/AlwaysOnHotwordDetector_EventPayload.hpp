#pragma once

#include "../../../JByteArray.hpp"
#include "../../media/AudioFormat.def.hpp"
#include "./AlwaysOnHotwordDetector_EventPayload.def.hpp"

namespace android::service::voice
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::media::AudioFormat AlwaysOnHotwordDetector_EventPayload::getCaptureAudioFormat() const
	{
		return callObjectMethod(
			"getCaptureAudioFormat",
			"()Landroid/media/AudioFormat;"
		);
	}
	inline JByteArray AlwaysOnHotwordDetector_EventPayload::getTriggerAudio() const
	{
		return callObjectMethod(
			"getTriggerAudio",
			"()[B"
		);
	}
} // namespace android::service::voice

// Base class headers

