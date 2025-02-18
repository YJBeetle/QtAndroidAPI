#pragma once

#include "./Event.def.hpp"

namespace android::media::metrics
{
	class MediaItemInfo;
}
namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::media::metrics
{
	class EditingEndedEvent : public android::media::metrics::Event
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint ERROR_CODE_AUDIO_PROCESSING_FAILED();
		static jint ERROR_CODE_DECODER_INIT_FAILED();
		static jint ERROR_CODE_DECODING_FAILED();
		static jint ERROR_CODE_DECODING_FORMAT_UNSUPPORTED();
		static jint ERROR_CODE_ENCODER_INIT_FAILED();
		static jint ERROR_CODE_ENCODING_FAILED();
		static jint ERROR_CODE_ENCODING_FORMAT_UNSUPPORTED();
		static jint ERROR_CODE_FAILED_RUNTIME_CHECK();
		static jint ERROR_CODE_IO_BAD_HTTP_STATUS();
		static jint ERROR_CODE_IO_CLEARTEXT_NOT_PERMITTED();
		static jint ERROR_CODE_IO_FILE_NOT_FOUND();
		static jint ERROR_CODE_IO_NETWORK_CONNECTION_FAILED();
		static jint ERROR_CODE_IO_NETWORK_CONNECTION_TIMEOUT();
		static jint ERROR_CODE_IO_NO_PERMISSION();
		static jint ERROR_CODE_IO_READ_POSITION_OUT_OF_RANGE();
		static jint ERROR_CODE_IO_UNSPECIFIED();
		static jint ERROR_CODE_MUXING_FAILED();
		static jint ERROR_CODE_NONE();
		static jint ERROR_CODE_VIDEO_FRAME_PROCESSING_FAILED();
		static jint FINAL_STATE_CANCELED();
		static jint FINAL_STATE_ERROR();
		static jint FINAL_STATE_SUCCEEDED();
		static jlong OPERATION_TYPE_AUDIO_EDIT();
		static jlong OPERATION_TYPE_AUDIO_TRANSCODE();
		static jlong OPERATION_TYPE_AUDIO_TRANSMUX();
		static jlong OPERATION_TYPE_PAUSED();
		static jlong OPERATION_TYPE_RESUMED();
		static jlong OPERATION_TYPE_VIDEO_EDIT();
		static jlong OPERATION_TYPE_VIDEO_TRANSCODE();
		static jlong OPERATION_TYPE_VIDEO_TRANSMUX();
		static jint PROGRESS_PERCENT_UNKNOWN();
		static jint TIME_SINCE_CREATED_UNKNOWN();
		
		// QJniObject forward
		template<typename ...Ts> explicit EditingEndedEvent(const char *className, const char *sig, Ts...agv) : android::media::metrics::Event(className, sig, std::forward<Ts>(agv)...) {}
		EditingEndedEvent(QJniObject obj) : android::media::metrics::Event(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		jint getErrorCode() const;
		JString getExporterName() const;
		jfloat getFinalProgressPercent() const;
		jint getFinalState() const;
		JObject getInputMediaItemInfos() const;
		android::os::Bundle getMetricsBundle() const;
		JString getMuxerName() const;
		jlong getOperationTypes() const;
		android::media::metrics::MediaItemInfo getOutputMediaItemInfo() const;
		jlong getTimeSinceCreatedMillis() const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::media::metrics

