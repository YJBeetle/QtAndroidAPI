#pragma once

#include "../../JObject.hpp"

namespace android::media
{
	class MediaRecorder;
}

namespace android::media
{
	class MediaRecorder_AudioSource : public JObject
	{
	public:
		// Fields
		static jint CAMCORDER();
		static jint DEFAULT();
		static jint MIC();
		static jint REMOTE_SUBMIX();
		static jint UNPROCESSED();
		static jint VOICE_CALL();
		static jint VOICE_COMMUNICATION();
		static jint VOICE_DOWNLINK();
		static jint VOICE_PERFORMANCE();
		static jint VOICE_RECOGNITION();
		static jint VOICE_UPLINK();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaRecorder_AudioSource(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaRecorder_AudioSource(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::media

