#pragma once

#include "../../JObject.hpp"

namespace android::media
{
	class AudioManager_AudioRecordingCallback : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AudioManager_AudioRecordingCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AudioManager_AudioRecordingCallback(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		AudioManager_AudioRecordingCallback();
		
		// Methods
		void onRecordingConfigChanged(JObject arg0) const;
	};
} // namespace android::media

