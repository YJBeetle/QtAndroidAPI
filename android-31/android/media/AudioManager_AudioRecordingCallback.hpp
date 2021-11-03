#pragma once

#include "../../JObject.hpp"

namespace android::media
{
	class AudioManager_AudioRecordingCallback : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AudioManager_AudioRecordingCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AudioManager_AudioRecordingCallback(QJniObject obj);
		
		// Constructors
		AudioManager_AudioRecordingCallback();
		
		// Methods
		void onRecordingConfigChanged(JObject arg0);
	};
} // namespace android::media

