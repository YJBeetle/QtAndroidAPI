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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AudioTrack_StreamEventCallback(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AudioTrack_StreamEventCallback(QAndroidJniObject obj);
		
		// Constructors
		AudioTrack_StreamEventCallback();
		
		// Methods
		void onDataRequest(android::media::AudioTrack arg0, jint arg1);
		void onPresentationEnded(android::media::AudioTrack arg0);
		void onTearDown(android::media::AudioTrack arg0);
	};
} // namespace android::media

