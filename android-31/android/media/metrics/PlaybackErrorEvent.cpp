#include "../../os/Bundle.hpp"
#include "../../os/Parcel.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./PlaybackErrorEvent.hpp"

namespace android::media::metrics
{
	// Fields
	JObject PlaybackErrorEvent::CREATOR()
	{
		return getStaticObjectField(
			"android.media.metrics.PlaybackErrorEvent",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint PlaybackErrorEvent::ERROR_AUDIO_TRACK_INIT_FAILED()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackErrorEvent",
			"ERROR_AUDIO_TRACK_INIT_FAILED"
		);
	}
	jint PlaybackErrorEvent::ERROR_AUDIO_TRACK_OTHER()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackErrorEvent",
			"ERROR_AUDIO_TRACK_OTHER"
		);
	}
	jint PlaybackErrorEvent::ERROR_AUDIO_TRACK_WRITE_FAILED()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackErrorEvent",
			"ERROR_AUDIO_TRACK_WRITE_FAILED"
		);
	}
	jint PlaybackErrorEvent::ERROR_DECODER_INIT_FAILED()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackErrorEvent",
			"ERROR_DECODER_INIT_FAILED"
		);
	}
	jint PlaybackErrorEvent::ERROR_DECODING_FAILED()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackErrorEvent",
			"ERROR_DECODING_FAILED"
		);
	}
	jint PlaybackErrorEvent::ERROR_DECODING_FORMAT_EXCEEDS_CAPABILITIES()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackErrorEvent",
			"ERROR_DECODING_FORMAT_EXCEEDS_CAPABILITIES"
		);
	}
	jint PlaybackErrorEvent::ERROR_DECODING_FORMAT_UNSUPPORTED()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackErrorEvent",
			"ERROR_DECODING_FORMAT_UNSUPPORTED"
		);
	}
	jint PlaybackErrorEvent::ERROR_DECODING_OTHER()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackErrorEvent",
			"ERROR_DECODING_OTHER"
		);
	}
	jint PlaybackErrorEvent::ERROR_DRM_CONTENT_ERROR()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackErrorEvent",
			"ERROR_DRM_CONTENT_ERROR"
		);
	}
	jint PlaybackErrorEvent::ERROR_DRM_DEVICE_REVOKED()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackErrorEvent",
			"ERROR_DRM_DEVICE_REVOKED"
		);
	}
	jint PlaybackErrorEvent::ERROR_DRM_DISALLOWED_OPERATION()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackErrorEvent",
			"ERROR_DRM_DISALLOWED_OPERATION"
		);
	}
	jint PlaybackErrorEvent::ERROR_DRM_LICENSE_ACQUISITION_FAILED()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackErrorEvent",
			"ERROR_DRM_LICENSE_ACQUISITION_FAILED"
		);
	}
	jint PlaybackErrorEvent::ERROR_DRM_OTHER()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackErrorEvent",
			"ERROR_DRM_OTHER"
		);
	}
	jint PlaybackErrorEvent::ERROR_DRM_PROVISIONING_FAILED()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackErrorEvent",
			"ERROR_DRM_PROVISIONING_FAILED"
		);
	}
	jint PlaybackErrorEvent::ERROR_DRM_SCHEME_UNSUPPORTED()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackErrorEvent",
			"ERROR_DRM_SCHEME_UNSUPPORTED"
		);
	}
	jint PlaybackErrorEvent::ERROR_DRM_SYSTEM_ERROR()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackErrorEvent",
			"ERROR_DRM_SYSTEM_ERROR"
		);
	}
	jint PlaybackErrorEvent::ERROR_IO_BAD_HTTP_STATUS()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackErrorEvent",
			"ERROR_IO_BAD_HTTP_STATUS"
		);
	}
	jint PlaybackErrorEvent::ERROR_IO_CONNECTION_CLOSED()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackErrorEvent",
			"ERROR_IO_CONNECTION_CLOSED"
		);
	}
	jint PlaybackErrorEvent::ERROR_IO_CONNECTION_TIMEOUT()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackErrorEvent",
			"ERROR_IO_CONNECTION_TIMEOUT"
		);
	}
	jint PlaybackErrorEvent::ERROR_IO_DNS_FAILED()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackErrorEvent",
			"ERROR_IO_DNS_FAILED"
		);
	}
	jint PlaybackErrorEvent::ERROR_IO_FILE_NOT_FOUND()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackErrorEvent",
			"ERROR_IO_FILE_NOT_FOUND"
		);
	}
	jint PlaybackErrorEvent::ERROR_IO_NETWORK_CONNECTION_FAILED()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackErrorEvent",
			"ERROR_IO_NETWORK_CONNECTION_FAILED"
		);
	}
	jint PlaybackErrorEvent::ERROR_IO_NETWORK_UNAVAILABLE()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackErrorEvent",
			"ERROR_IO_NETWORK_UNAVAILABLE"
		);
	}
	jint PlaybackErrorEvent::ERROR_IO_NO_PERMISSION()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackErrorEvent",
			"ERROR_IO_NO_PERMISSION"
		);
	}
	jint PlaybackErrorEvent::ERROR_IO_OTHER()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackErrorEvent",
			"ERROR_IO_OTHER"
		);
	}
	jint PlaybackErrorEvent::ERROR_OTHER()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackErrorEvent",
			"ERROR_OTHER"
		);
	}
	jint PlaybackErrorEvent::ERROR_PARSING_CONTAINER_MALFORMED()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackErrorEvent",
			"ERROR_PARSING_CONTAINER_MALFORMED"
		);
	}
	jint PlaybackErrorEvent::ERROR_PARSING_CONTAINER_UNSUPPORTED()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackErrorEvent",
			"ERROR_PARSING_CONTAINER_UNSUPPORTED"
		);
	}
	jint PlaybackErrorEvent::ERROR_PARSING_MANIFEST_MALFORMED()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackErrorEvent",
			"ERROR_PARSING_MANIFEST_MALFORMED"
		);
	}
	jint PlaybackErrorEvent::ERROR_PARSING_MANIFEST_UNSUPPORTED()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackErrorEvent",
			"ERROR_PARSING_MANIFEST_UNSUPPORTED"
		);
	}
	jint PlaybackErrorEvent::ERROR_PARSING_OTHER()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackErrorEvent",
			"ERROR_PARSING_OTHER"
		);
	}
	jint PlaybackErrorEvent::ERROR_PLAYER_BEHIND_LIVE_WINDOW()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackErrorEvent",
			"ERROR_PLAYER_BEHIND_LIVE_WINDOW"
		);
	}
	jint PlaybackErrorEvent::ERROR_PLAYER_OTHER()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackErrorEvent",
			"ERROR_PLAYER_OTHER"
		);
	}
	jint PlaybackErrorEvent::ERROR_PLAYER_REMOTE()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackErrorEvent",
			"ERROR_PLAYER_REMOTE"
		);
	}
	jint PlaybackErrorEvent::ERROR_RUNTIME()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackErrorEvent",
			"ERROR_RUNTIME"
		);
	}
	jint PlaybackErrorEvent::ERROR_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.media.metrics.PlaybackErrorEvent",
			"ERROR_UNKNOWN"
		);
	}
	
	// QJniObject forward
	PlaybackErrorEvent::PlaybackErrorEvent(QJniObject obj) : android::media::metrics::Event(obj) {}
	
	// Constructors
	
	// Methods
	jint PlaybackErrorEvent::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean PlaybackErrorEvent::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint PlaybackErrorEvent::getErrorCode() const
	{
		return callMethod<jint>(
			"getErrorCode",
			"()I"
		);
	}
	android::os::Bundle PlaybackErrorEvent::getMetricsBundle() const
	{
		return callObjectMethod(
			"getMetricsBundle",
			"()Landroid/os/Bundle;"
		);
	}
	jint PlaybackErrorEvent::getSubErrorCode() const
	{
		return callMethod<jint>(
			"getSubErrorCode",
			"()I"
		);
	}
	jlong PlaybackErrorEvent::getTimeSinceCreatedMillis() const
	{
		return callMethod<jlong>(
			"getTimeSinceCreatedMillis",
			"()J"
		);
	}
	jint PlaybackErrorEvent::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString PlaybackErrorEvent::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void PlaybackErrorEvent::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::media::metrics

