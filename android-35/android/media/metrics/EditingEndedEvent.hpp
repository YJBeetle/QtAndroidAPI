#pragma once

#include "./MediaItemInfo.def.hpp"
#include "../../os/Bundle.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./EditingEndedEvent.def.hpp"

namespace android::media::metrics
{
	// Fields
	inline JObject EditingEndedEvent::CREATOR()
	{
		return getStaticObjectField(
			"android.media.metrics.EditingEndedEvent",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint EditingEndedEvent::ERROR_CODE_AUDIO_PROCESSING_FAILED()
	{
		return getStaticField<jint>(
			"android.media.metrics.EditingEndedEvent",
			"ERROR_CODE_AUDIO_PROCESSING_FAILED"
		);
	}
	inline jint EditingEndedEvent::ERROR_CODE_DECODER_INIT_FAILED()
	{
		return getStaticField<jint>(
			"android.media.metrics.EditingEndedEvent",
			"ERROR_CODE_DECODER_INIT_FAILED"
		);
	}
	inline jint EditingEndedEvent::ERROR_CODE_DECODING_FAILED()
	{
		return getStaticField<jint>(
			"android.media.metrics.EditingEndedEvent",
			"ERROR_CODE_DECODING_FAILED"
		);
	}
	inline jint EditingEndedEvent::ERROR_CODE_DECODING_FORMAT_UNSUPPORTED()
	{
		return getStaticField<jint>(
			"android.media.metrics.EditingEndedEvent",
			"ERROR_CODE_DECODING_FORMAT_UNSUPPORTED"
		);
	}
	inline jint EditingEndedEvent::ERROR_CODE_ENCODER_INIT_FAILED()
	{
		return getStaticField<jint>(
			"android.media.metrics.EditingEndedEvent",
			"ERROR_CODE_ENCODER_INIT_FAILED"
		);
	}
	inline jint EditingEndedEvent::ERROR_CODE_ENCODING_FAILED()
	{
		return getStaticField<jint>(
			"android.media.metrics.EditingEndedEvent",
			"ERROR_CODE_ENCODING_FAILED"
		);
	}
	inline jint EditingEndedEvent::ERROR_CODE_ENCODING_FORMAT_UNSUPPORTED()
	{
		return getStaticField<jint>(
			"android.media.metrics.EditingEndedEvent",
			"ERROR_CODE_ENCODING_FORMAT_UNSUPPORTED"
		);
	}
	inline jint EditingEndedEvent::ERROR_CODE_FAILED_RUNTIME_CHECK()
	{
		return getStaticField<jint>(
			"android.media.metrics.EditingEndedEvent",
			"ERROR_CODE_FAILED_RUNTIME_CHECK"
		);
	}
	inline jint EditingEndedEvent::ERROR_CODE_IO_BAD_HTTP_STATUS()
	{
		return getStaticField<jint>(
			"android.media.metrics.EditingEndedEvent",
			"ERROR_CODE_IO_BAD_HTTP_STATUS"
		);
	}
	inline jint EditingEndedEvent::ERROR_CODE_IO_CLEARTEXT_NOT_PERMITTED()
	{
		return getStaticField<jint>(
			"android.media.metrics.EditingEndedEvent",
			"ERROR_CODE_IO_CLEARTEXT_NOT_PERMITTED"
		);
	}
	inline jint EditingEndedEvent::ERROR_CODE_IO_FILE_NOT_FOUND()
	{
		return getStaticField<jint>(
			"android.media.metrics.EditingEndedEvent",
			"ERROR_CODE_IO_FILE_NOT_FOUND"
		);
	}
	inline jint EditingEndedEvent::ERROR_CODE_IO_NETWORK_CONNECTION_FAILED()
	{
		return getStaticField<jint>(
			"android.media.metrics.EditingEndedEvent",
			"ERROR_CODE_IO_NETWORK_CONNECTION_FAILED"
		);
	}
	inline jint EditingEndedEvent::ERROR_CODE_IO_NETWORK_CONNECTION_TIMEOUT()
	{
		return getStaticField<jint>(
			"android.media.metrics.EditingEndedEvent",
			"ERROR_CODE_IO_NETWORK_CONNECTION_TIMEOUT"
		);
	}
	inline jint EditingEndedEvent::ERROR_CODE_IO_NO_PERMISSION()
	{
		return getStaticField<jint>(
			"android.media.metrics.EditingEndedEvent",
			"ERROR_CODE_IO_NO_PERMISSION"
		);
	}
	inline jint EditingEndedEvent::ERROR_CODE_IO_READ_POSITION_OUT_OF_RANGE()
	{
		return getStaticField<jint>(
			"android.media.metrics.EditingEndedEvent",
			"ERROR_CODE_IO_READ_POSITION_OUT_OF_RANGE"
		);
	}
	inline jint EditingEndedEvent::ERROR_CODE_IO_UNSPECIFIED()
	{
		return getStaticField<jint>(
			"android.media.metrics.EditingEndedEvent",
			"ERROR_CODE_IO_UNSPECIFIED"
		);
	}
	inline jint EditingEndedEvent::ERROR_CODE_MUXING_FAILED()
	{
		return getStaticField<jint>(
			"android.media.metrics.EditingEndedEvent",
			"ERROR_CODE_MUXING_FAILED"
		);
	}
	inline jint EditingEndedEvent::ERROR_CODE_NONE()
	{
		return getStaticField<jint>(
			"android.media.metrics.EditingEndedEvent",
			"ERROR_CODE_NONE"
		);
	}
	inline jint EditingEndedEvent::ERROR_CODE_VIDEO_FRAME_PROCESSING_FAILED()
	{
		return getStaticField<jint>(
			"android.media.metrics.EditingEndedEvent",
			"ERROR_CODE_VIDEO_FRAME_PROCESSING_FAILED"
		);
	}
	inline jint EditingEndedEvent::FINAL_STATE_CANCELED()
	{
		return getStaticField<jint>(
			"android.media.metrics.EditingEndedEvent",
			"FINAL_STATE_CANCELED"
		);
	}
	inline jint EditingEndedEvent::FINAL_STATE_ERROR()
	{
		return getStaticField<jint>(
			"android.media.metrics.EditingEndedEvent",
			"FINAL_STATE_ERROR"
		);
	}
	inline jint EditingEndedEvent::FINAL_STATE_SUCCEEDED()
	{
		return getStaticField<jint>(
			"android.media.metrics.EditingEndedEvent",
			"FINAL_STATE_SUCCEEDED"
		);
	}
	inline jlong EditingEndedEvent::OPERATION_TYPE_AUDIO_EDIT()
	{
		return getStaticField<jlong>(
			"android.media.metrics.EditingEndedEvent",
			"OPERATION_TYPE_AUDIO_EDIT"
		);
	}
	inline jlong EditingEndedEvent::OPERATION_TYPE_AUDIO_TRANSCODE()
	{
		return getStaticField<jlong>(
			"android.media.metrics.EditingEndedEvent",
			"OPERATION_TYPE_AUDIO_TRANSCODE"
		);
	}
	inline jlong EditingEndedEvent::OPERATION_TYPE_AUDIO_TRANSMUX()
	{
		return getStaticField<jlong>(
			"android.media.metrics.EditingEndedEvent",
			"OPERATION_TYPE_AUDIO_TRANSMUX"
		);
	}
	inline jlong EditingEndedEvent::OPERATION_TYPE_PAUSED()
	{
		return getStaticField<jlong>(
			"android.media.metrics.EditingEndedEvent",
			"OPERATION_TYPE_PAUSED"
		);
	}
	inline jlong EditingEndedEvent::OPERATION_TYPE_RESUMED()
	{
		return getStaticField<jlong>(
			"android.media.metrics.EditingEndedEvent",
			"OPERATION_TYPE_RESUMED"
		);
	}
	inline jlong EditingEndedEvent::OPERATION_TYPE_VIDEO_EDIT()
	{
		return getStaticField<jlong>(
			"android.media.metrics.EditingEndedEvent",
			"OPERATION_TYPE_VIDEO_EDIT"
		);
	}
	inline jlong EditingEndedEvent::OPERATION_TYPE_VIDEO_TRANSCODE()
	{
		return getStaticField<jlong>(
			"android.media.metrics.EditingEndedEvent",
			"OPERATION_TYPE_VIDEO_TRANSCODE"
		);
	}
	inline jlong EditingEndedEvent::OPERATION_TYPE_VIDEO_TRANSMUX()
	{
		return getStaticField<jlong>(
			"android.media.metrics.EditingEndedEvent",
			"OPERATION_TYPE_VIDEO_TRANSMUX"
		);
	}
	inline jint EditingEndedEvent::PROGRESS_PERCENT_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.media.metrics.EditingEndedEvent",
			"PROGRESS_PERCENT_UNKNOWN"
		);
	}
	inline jint EditingEndedEvent::TIME_SINCE_CREATED_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.media.metrics.EditingEndedEvent",
			"TIME_SINCE_CREATED_UNKNOWN"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint EditingEndedEvent::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean EditingEndedEvent::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint EditingEndedEvent::getErrorCode() const
	{
		return callMethod<jint>(
			"getErrorCode",
			"()I"
		);
	}
	inline JString EditingEndedEvent::getExporterName() const
	{
		return callObjectMethod(
			"getExporterName",
			"()Ljava/lang/String;"
		);
	}
	inline jfloat EditingEndedEvent::getFinalProgressPercent() const
	{
		return callMethod<jfloat>(
			"getFinalProgressPercent",
			"()F"
		);
	}
	inline jint EditingEndedEvent::getFinalState() const
	{
		return callMethod<jint>(
			"getFinalState",
			"()I"
		);
	}
	inline JObject EditingEndedEvent::getInputMediaItemInfos() const
	{
		return callObjectMethod(
			"getInputMediaItemInfos",
			"()Ljava/util/List;"
		);
	}
	inline android::os::Bundle EditingEndedEvent::getMetricsBundle() const
	{
		return callObjectMethod(
			"getMetricsBundle",
			"()Landroid/os/Bundle;"
		);
	}
	inline JString EditingEndedEvent::getMuxerName() const
	{
		return callObjectMethod(
			"getMuxerName",
			"()Ljava/lang/String;"
		);
	}
	inline jlong EditingEndedEvent::getOperationTypes() const
	{
		return callMethod<jlong>(
			"getOperationTypes",
			"()J"
		);
	}
	inline android::media::metrics::MediaItemInfo EditingEndedEvent::getOutputMediaItemInfo() const
	{
		return callObjectMethod(
			"getOutputMediaItemInfo",
			"()Landroid/media/metrics/MediaItemInfo;"
		);
	}
	inline jlong EditingEndedEvent::getTimeSinceCreatedMillis() const
	{
		return callMethod<jlong>(
			"getTimeSinceCreatedMillis",
			"()J"
		);
	}
	inline jint EditingEndedEvent::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString EditingEndedEvent::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void EditingEndedEvent::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media::metrics;
#endif
