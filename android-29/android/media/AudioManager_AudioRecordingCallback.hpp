#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::media
{
	class AudioManager_AudioRecordingCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AudioManager_AudioRecordingCallback(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AudioManager_AudioRecordingCallback(QJniObject obj);
		
		// Constructors
		AudioManager_AudioRecordingCallback();
		
		// Methods
		void onRecordingConfigChanged(__JniBaseClass arg0);
	};
} // namespace android::media

