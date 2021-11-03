#pragma once

#include "./Event.hpp"

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
	class PlaybackErrorEvent : public android::media::metrics::Event
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint ERROR_AUDIO_TRACK_INIT_FAILED();
		static jint ERROR_AUDIO_TRACK_OTHER();
		static jint ERROR_AUDIO_TRACK_WRITE_FAILED();
		static jint ERROR_DECODER_INIT_FAILED();
		static jint ERROR_DECODING_FAILED();
		static jint ERROR_DECODING_FORMAT_EXCEEDS_CAPABILITIES();
		static jint ERROR_DECODING_FORMAT_UNSUPPORTED();
		static jint ERROR_DECODING_OTHER();
		static jint ERROR_DRM_CONTENT_ERROR();
		static jint ERROR_DRM_DEVICE_REVOKED();
		static jint ERROR_DRM_DISALLOWED_OPERATION();
		static jint ERROR_DRM_LICENSE_ACQUISITION_FAILED();
		static jint ERROR_DRM_OTHER();
		static jint ERROR_DRM_PROVISIONING_FAILED();
		static jint ERROR_DRM_SCHEME_UNSUPPORTED();
		static jint ERROR_DRM_SYSTEM_ERROR();
		static jint ERROR_IO_BAD_HTTP_STATUS();
		static jint ERROR_IO_CONNECTION_CLOSED();
		static jint ERROR_IO_CONNECTION_TIMEOUT();
		static jint ERROR_IO_DNS_FAILED();
		static jint ERROR_IO_FILE_NOT_FOUND();
		static jint ERROR_IO_NETWORK_CONNECTION_FAILED();
		static jint ERROR_IO_NETWORK_UNAVAILABLE();
		static jint ERROR_IO_NO_PERMISSION();
		static jint ERROR_IO_OTHER();
		static jint ERROR_OTHER();
		static jint ERROR_PARSING_CONTAINER_MALFORMED();
		static jint ERROR_PARSING_CONTAINER_UNSUPPORTED();
		static jint ERROR_PARSING_MANIFEST_MALFORMED();
		static jint ERROR_PARSING_MANIFEST_UNSUPPORTED();
		static jint ERROR_PARSING_OTHER();
		static jint ERROR_PLAYER_BEHIND_LIVE_WINDOW();
		static jint ERROR_PLAYER_OTHER();
		static jint ERROR_PLAYER_REMOTE();
		static jint ERROR_RUNTIME();
		static jint ERROR_UNKNOWN();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PlaybackErrorEvent(const char *className, const char *sig, Ts...agv) : android::media::metrics::Event(className, sig, std::forward<Ts>(agv)...) {}
		PlaybackErrorEvent(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(JObject arg0);
		jint getErrorCode();
		android::os::Bundle getMetricsBundle();
		jint getSubErrorCode();
		jlong getTimeSinceCreatedMillis();
		jint hashCode();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::media::metrics

