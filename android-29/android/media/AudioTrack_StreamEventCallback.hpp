#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::media
{
	class AudioTrack;
}

namespace android::media
{
	class AudioTrack_StreamEventCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		AudioTrack_StreamEventCallback(QAndroidJniObject obj);
		// Constructors
		AudioTrack_StreamEventCallback();
		
		// Methods
		void onDataRequest(android::media::AudioTrack arg0, jint arg1);
		void onPresentationEnded(android::media::AudioTrack arg0);
		void onTearDown(android::media::AudioTrack arg0);
	};
} // namespace android::media

