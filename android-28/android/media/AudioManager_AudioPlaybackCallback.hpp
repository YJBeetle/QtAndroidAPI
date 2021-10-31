#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::media
{
	class AudioManager_AudioPlaybackCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AudioManager_AudioPlaybackCallback(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AudioManager_AudioPlaybackCallback(QAndroidJniObject obj);
		
		// Constructors
		AudioManager_AudioPlaybackCallback();
		
		// Methods
		void onPlaybackConfigChanged(__JniBaseClass arg0);
	};
} // namespace android::media

