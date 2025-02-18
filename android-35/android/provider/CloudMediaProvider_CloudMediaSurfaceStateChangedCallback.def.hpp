#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Bundle;
}

namespace android::provider
{
	class CloudMediaProvider_CloudMediaSurfaceStateChangedCallback : public JObject
	{
	public:
		// Fields
		static jint PLAYBACK_STATE_BUFFERING();
		static jint PLAYBACK_STATE_COMPLETED();
		static jint PLAYBACK_STATE_ERROR_PERMANENT_FAILURE();
		static jint PLAYBACK_STATE_ERROR_RETRIABLE_FAILURE();
		static jint PLAYBACK_STATE_MEDIA_SIZE_CHANGED();
		static jint PLAYBACK_STATE_PAUSED();
		static jint PLAYBACK_STATE_READY();
		static jint PLAYBACK_STATE_STARTED();
		
		// QJniObject forward
		template<typename ...Ts> explicit CloudMediaProvider_CloudMediaSurfaceStateChangedCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CloudMediaProvider_CloudMediaSurfaceStateChangedCallback(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		void setPlaybackState(jint arg0, jint arg1, android::os::Bundle arg2) const;
	};
} // namespace android::provider

