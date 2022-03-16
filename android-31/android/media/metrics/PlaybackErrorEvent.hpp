#pragma once

#include "../../os/Bundle.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./PlaybackErrorEvent.def.hpp"

namespace android::media::metrics
{
	// Fields
	inline JObject PlaybackErrorEvent::CREATOR()
	{
		return getStaticObjectField(
			"android.media.metrics.PlaybackErrorEvent",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint PlaybackErrorEvent::ERROR_AUDIO_TRACK_INIT_FAILED()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackErrorEvent",
			"ERROR_AUDIO_TRACK_INIT_FAILED"
		);
	}
	inline jint PlaybackErrorEvent::ERROR_AUDIO_TRACK_OTHER()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackErrorEvent",
			"ERROR_AUDIO_TRACK_OTHER"
		);
	}
	inline jint PlaybackErrorEvent::ERROR_AUDIO_TRACK_WRITE_FAILED()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackErrorEvent",
			"ERROR_AUDIO_TRACK_WRITE_FAILED"
		);
	}
	inline jint PlaybackErrorEvent::ERROR_DECODER_INIT_FAILED()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackErrorEvent",
			"ERROR_DECODER_INIT_FAILED"
		);
	}
	inline jint PlaybackErrorEvent::ERROR_DECODING_FAILED()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackErrorEvent",
			"ERROR_DECODING_FAILED"
		);
	}
	inline jint PlaybackErrorEvent::ERROR_DECODING_FORMAT_EXCEEDS_CAPABILITIES()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackErrorEvent",
			"ERROR_DECODING_FORMAT_EXCEEDS_CAPABILITIES"
		);
	}
	inline jint PlaybackErrorEvent::ERROR_DECODING_FORMAT_UNSUPPORTED()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackErrorEvent",
			"ERROR_DECODING_FORMAT_UNSUPPORTED"
		);
	}
	inline jint PlaybackErrorEvent::ERROR_DECODING_OTHER()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackErrorEvent",
			"ERROR_DECODING_OTHER"
		);
	}
	inline jint PlaybackErrorEvent::ERROR_DRM_CONTENT_ERROR()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackErrorEvent",
			"ERROR_DRM_CONTENT_ERROR"
		);
	}
	inline jint PlaybackErrorEvent::ERROR_DRM_DEVICE_REVOKED()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackErrorEvent",
			"ERROR_DRM_DEVICE_REVOKED"
		);
	}
	inline jint PlaybackErrorEvent::ERROR_DRM_DISALLOWED_OPERATION()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackErrorEvent",
			"ERROR_DRM_DISALLOWED_OPERATION"
		);
	}
	inline jint PlaybackErrorEvent::ERROR_DRM_LICENSE_ACQUISITION_FAILED()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackErrorEvent",
			"ERROR_DRM_LICENSE_ACQUISITION_FAILED"
		);
	}
	inline jint PlaybackErrorEvent::ERROR_DRM_OTHER()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackErrorEvent",
			"ERROR_DRM_OTHER"
		);
	}
	inline jint PlaybackErrorEvent::ERROR_DRM_PROVISIONING_FAILED()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackErrorEvent",
			"ERROR_DRM_PROVISIONING_FAILED"
		);
	}
	inline jint PlaybackErrorEvent::ERROR_DRM_SCHEME_UNSUPPORTED()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackErrorEvent",
			"ERROR_DRM_SCHEME_UNSUPPORTED"
		);
	}
	inline jint PlaybackErrorEvent::ERROR_DRM_SYSTEM_ERROR()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackErrorEvent",
			"ERROR_DRM_SYSTEM_ERROR"
		);
	}
	inline jint PlaybackErrorEvent::ERROR_IO_BAD_HTTP_STATUS()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackErrorEvent",
			"ERROR_IO_BAD_HTTP_STATUS"
		);
	}
	inline jint PlaybackErrorEvent::ERROR_IO_CONNECTION_CLOSED()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackErrorEvent",
			"ERROR_IO_CONNECTION_CLOSED"
		);
	}
	inline jint PlaybackErrorEvent::ERROR_IO_CONNECTION_TIMEOUT()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackErrorEvent",
			"ERROR_IO_CONNECTION_TIMEOUT"
		);
	}
	inline jint PlaybackErrorEvent::ERROR_IO_DNS_FAILED()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackErrorEvent",
			"ERROR_IO_DNS_FAILED"
		);
	}
	inline jint PlaybackErrorEvent::ERROR_IO_FILE_NOT_FOUND()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackErrorEvent",
			"ERROR_IO_FILE_NOT_FOUND"
		);
	}
	inline jint PlaybackErrorEvent::ERROR_IO_NETWORK_CONNECTION_FAILED()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackErrorEvent",
			"ERROR_IO_NETWORK_CONNECTION_FAILED"
		);
	}
	inline jint PlaybackErrorEvent::ERROR_IO_NETWORK_UNAVAILABLE()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackErrorEvent",
			"ERROR_IO_NETWORK_UNAVAILABLE"
		);
	}
	inline jint PlaybackErrorEvent::ERROR_IO_NO_PERMISSION()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackErrorEvent",
			"ERROR_IO_NO_PERMISSION"
		);
	}
	inline jint PlaybackErrorEvent::ERROR_IO_OTHER()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackErrorEvent",
			"ERROR_IO_OTHER"
		);
	}
	inline jint PlaybackErrorEvent::ERROR_OTHER()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackErrorEvent",
			"ERROR_OTHER"
		);
	}
	inline jint PlaybackErrorEvent::ERROR_PARSING_CONTAINER_MALFORMED()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackErrorEvent",
			"ERROR_PARSING_CONTAINER_MALFORMED"
		);
	}
	inline jint PlaybackErrorEvent::ERROR_PARSING_CONTAINER_UNSUPPORTED()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackErrorEvent",
			"ERROR_PARSING_CONTAINER_UNSUPPORTED"
		);
	}
	inline jint PlaybackErrorEvent::ERROR_PARSING_MANIFEST_MALFORMED()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackErrorEvent",
			"ERROR_PARSING_MANIFEST_MALFORMED"
		);
	}
	inline jint PlaybackErrorEvent::ERROR_PARSING_MANIFEST_UNSUPPORTED()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackErrorEvent",
			"ERROR_PARSING_MANIFEST_UNSUPPORTED"
		);
	}
	inline jint PlaybackErrorEvent::ERROR_PARSING_OTHER()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackErrorEvent",
			"ERROR_PARSING_OTHER"
		);
	}
	inline jint PlaybackErrorEvent::ERROR_PLAYER_BEHIND_LIVE_WINDOW()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackErrorEvent",
			"ERROR_PLAYER_BEHIND_LIVE_WINDOW"
		);
	}
	inline jint PlaybackErrorEvent::ERROR_PLAYER_OTHER()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackErrorEvent",
			"ERROR_PLAYER_OTHER"
		);
	}
	inline jint PlaybackErrorEvent::ERROR_PLAYER_REMOTE()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackErrorEvent",
			"ERROR_PLAYER_REMOTE"
		);
	}
	inline jint PlaybackErrorEvent::ERROR_RUNTIME()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackErrorEvent",
			"ERROR_RUNTIME"
		);
	}
	inline jint PlaybackErrorEvent::ERROR_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackErrorEvent",
			"ERROR_UNKNOWN"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint PlaybackErrorEvent::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean PlaybackErrorEvent::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint PlaybackErrorEvent::getErrorCode() const
	{
		return callMethod<jint>(
			"getErrorCode",
			"()I"
		);
	}
	inline android::os::Bundle PlaybackErrorEvent::getMetricsBundle() const
	{
		return callObjectMethod(
			"getMetricsBundle",
			"()Landroid/os/Bundle;"
		);
	}
	inline jint PlaybackErrorEvent::getSubErrorCode() const
	{
		return callMethod<jint>(
			"getSubErrorCode",
			"()I"
		);
	}
	inline jlong PlaybackErrorEvent::getTimeSinceCreatedMillis() const
	{
		return callMethod<jlong>(
			"getTimeSinceCreatedMillis",
			"()J"
		);
	}
	inline jint PlaybackErrorEvent::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString PlaybackErrorEvent::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void PlaybackErrorEvent::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::media::metrics

// Base class headers
#include "./Event.hpp"

