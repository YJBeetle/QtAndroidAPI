#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::media
{
	class AudioManager_AudioRecordingCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		AudioManager_AudioRecordingCallback(QAndroidJniObject obj);
		// Constructors
		AudioManager_AudioRecordingCallback();
		
		// Methods
		void onRecordingConfigChanged(__JniBaseClass arg0);
	};
} // namespace android::media

