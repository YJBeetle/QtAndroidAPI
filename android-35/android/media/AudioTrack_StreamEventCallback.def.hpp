#pragma once

#include "../../JObject.hpp"

namespace android::media
{
	class AudioTrack;
}

namespace android::media
{
	class AudioTrack_StreamEventCallback : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AudioTrack_StreamEventCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AudioTrack_StreamEventCallback(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		AudioTrack_StreamEventCallback();
		
		// Methods
		void onDataRequest(android::media::AudioTrack arg0, jint arg1) const;
		void onPresentationEnded(android::media::AudioTrack arg0) const;
		void onTearDown(android::media::AudioTrack arg0) const;
	};
} // namespace android::media

