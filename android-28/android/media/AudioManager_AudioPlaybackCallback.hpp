#pragma once

#include "../../JObject.hpp"


namespace android::media
{
	class AudioManager_AudioPlaybackCallback : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AudioManager_AudioPlaybackCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AudioManager_AudioPlaybackCallback(QJniObject obj);
		
		// Constructors
		AudioManager_AudioPlaybackCallback();
		
		// Methods
		void onPlaybackConfigChanged(JObject arg0);
	};
} // namespace android::media

