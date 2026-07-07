#pragma once

#include "../os/Bundle.def.hpp"
#include "./CloudMediaProvider_CloudMediaSurfaceStateChangedCallback.def.hpp"

namespace android::provider
{
	// Fields
	inline jint CloudMediaProvider_CloudMediaSurfaceStateChangedCallback::PLAYBACK_STATE_BUFFERING()
	{
		return getStaticField<jint>(
			"android.provider.CloudMediaProvider$CloudMediaSurfaceStateChangedCallback",
			"PLAYBACK_STATE_BUFFERING"
		);
	}
	inline jint CloudMediaProvider_CloudMediaSurfaceStateChangedCallback::PLAYBACK_STATE_COMPLETED()
	{
		return getStaticField<jint>(
			"android.provider.CloudMediaProvider$CloudMediaSurfaceStateChangedCallback",
			"PLAYBACK_STATE_COMPLETED"
		);
	}
	inline jint CloudMediaProvider_CloudMediaSurfaceStateChangedCallback::PLAYBACK_STATE_ERROR_PERMANENT_FAILURE()
	{
		return getStaticField<jint>(
			"android.provider.CloudMediaProvider$CloudMediaSurfaceStateChangedCallback",
			"PLAYBACK_STATE_ERROR_PERMANENT_FAILURE"
		);
	}
	inline jint CloudMediaProvider_CloudMediaSurfaceStateChangedCallback::PLAYBACK_STATE_ERROR_RETRIABLE_FAILURE()
	{
		return getStaticField<jint>(
			"android.provider.CloudMediaProvider$CloudMediaSurfaceStateChangedCallback",
			"PLAYBACK_STATE_ERROR_RETRIABLE_FAILURE"
		);
	}
	inline jint CloudMediaProvider_CloudMediaSurfaceStateChangedCallback::PLAYBACK_STATE_MEDIA_SIZE_CHANGED()
	{
		return getStaticField<jint>(
			"android.provider.CloudMediaProvider$CloudMediaSurfaceStateChangedCallback",
			"PLAYBACK_STATE_MEDIA_SIZE_CHANGED"
		);
	}
	inline jint CloudMediaProvider_CloudMediaSurfaceStateChangedCallback::PLAYBACK_STATE_PAUSED()
	{
		return getStaticField<jint>(
			"android.provider.CloudMediaProvider$CloudMediaSurfaceStateChangedCallback",
			"PLAYBACK_STATE_PAUSED"
		);
	}
	inline jint CloudMediaProvider_CloudMediaSurfaceStateChangedCallback::PLAYBACK_STATE_READY()
	{
		return getStaticField<jint>(
			"android.provider.CloudMediaProvider$CloudMediaSurfaceStateChangedCallback",
			"PLAYBACK_STATE_READY"
		);
	}
	inline jint CloudMediaProvider_CloudMediaSurfaceStateChangedCallback::PLAYBACK_STATE_STARTED()
	{
		return getStaticField<jint>(
			"android.provider.CloudMediaProvider$CloudMediaSurfaceStateChangedCallback",
			"PLAYBACK_STATE_STARTED"
		);
	}
	
	// Constructors
	
	// Methods
	inline void CloudMediaProvider_CloudMediaSurfaceStateChangedCallback::setPlaybackState(jint arg0, jint arg1, android::os::Bundle arg2) const
	{
		callMethod<void>(
			"setPlaybackState",
			"(IILandroid/os/Bundle;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
} // namespace android::provider

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::provider;
#endif
