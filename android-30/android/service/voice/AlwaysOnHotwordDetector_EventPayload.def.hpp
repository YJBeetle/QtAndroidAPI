#pragma once

#include "../../../JObject.hpp"

class JByteArray;
namespace android::media
{
	class AudioFormat;
}

namespace android::service::voice
{
	class AlwaysOnHotwordDetector_EventPayload : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AlwaysOnHotwordDetector_EventPayload(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AlwaysOnHotwordDetector_EventPayload(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		android::media::AudioFormat getCaptureAudioFormat() const;
		JByteArray getTriggerAudio() const;
	};
} // namespace android::service::voice

