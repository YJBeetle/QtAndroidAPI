#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::media
{
	class AudioManager_AudioRecordingCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AudioManager_AudioRecordingCallback(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AudioManager_AudioRecordingCallback(QAndroidJniObject obj);
		
		// Constructors
		AudioManager_AudioRecordingCallback();
		
		// Methods
		void onRecordingConfigChanged(__JniBaseClass arg0);
	};
} // namespace android::media

