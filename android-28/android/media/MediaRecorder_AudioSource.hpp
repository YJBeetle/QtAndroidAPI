#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::media
{
	class MediaRecorder;
}

namespace android::media
{
	class MediaRecorder_AudioSource : public __JniBaseClass
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
		static jint VOICE_RECOGNITION();
		static jint VOICE_UPLINK();
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaRecorder_AudioSource(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MediaRecorder_AudioSource(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::media

