#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::media
{
	class AudioManager_AudioPlaybackCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		AudioManager_AudioPlaybackCallback(QAndroidJniObject obj);
		// Constructors
		AudioManager_AudioPlaybackCallback();
		
		// Methods
		void onPlaybackConfigChanged(__JniBaseClass arg0);
	};
} // namespace android::media

