#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::media
{
	class AudioFormat;
}

namespace android::service::voice
{
	class AlwaysOnHotwordDetector_EventPayload : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AlwaysOnHotwordDetector_EventPayload(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AlwaysOnHotwordDetector_EventPayload(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		android::media::AudioFormat getCaptureAudioFormat();
		jbyteArray getTriggerAudio();
	};
} // namespace android::service::voice

