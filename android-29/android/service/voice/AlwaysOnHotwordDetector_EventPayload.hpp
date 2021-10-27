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
		
		AlwaysOnHotwordDetector_EventPayload(QAndroidJniObject obj);
		// Constructors
		AlwaysOnHotwordDetector_EventPayload() = default;
		
		// Methods
		QAndroidJniObject getCaptureAudioFormat();
		jbyteArray getTriggerAudio();
	};
} // namespace android::service::voice

