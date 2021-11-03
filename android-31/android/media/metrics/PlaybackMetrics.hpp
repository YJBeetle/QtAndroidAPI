#pragma once

#include "../../../JObject.hpp"

class JByteArray;
class JLongArray;
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
	class PlaybackMetrics : public JObject
	{
	public:
		// Fields
		static jint CONTENT_TYPE_AD();
		static jint CONTENT_TYPE_MAIN();
		static jint CONTENT_TYPE_OTHER();
		static jint CONTENT_TYPE_UNKNOWN();
		static JObject CREATOR();
		static jint DRM_TYPE_CLEARKEY();
		static jint DRM_TYPE_NONE();
		static jint DRM_TYPE_OTHER();
		static jint DRM_TYPE_PLAY_READY();
		static jint DRM_TYPE_WIDEVINE_L1();
		static jint DRM_TYPE_WIDEVINE_L3();
		static jint DRM_TYPE_WV_L3_FALLBACK();
		static jint PLAYBACK_TYPE_LIVE();
		static jint PLAYBACK_TYPE_OTHER();
		static jint PLAYBACK_TYPE_UNKNOWN();
		static jint PLAYBACK_TYPE_VOD();
		static jint STREAM_SOURCE_DEVICE();
		static jint STREAM_SOURCE_MIXED();
		static jint STREAM_SOURCE_NETWORK();
		static jint STREAM_SOURCE_UNKNOWN();
		static jint STREAM_TYPE_DASH();
		static jint STREAM_TYPE_HLS();
		static jint STREAM_TYPE_OTHER();
		static jint STREAM_TYPE_PROGRESSIVE();
		static jint STREAM_TYPE_SS();
		static jint STREAM_TYPE_UNKNOWN();
		
		// QJniObject forward
		template<typename ...Ts> explicit PlaybackMetrics(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PlaybackMetrics(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(JObject arg0);
		jint getAudioUnderrunCount();
		jint getContentType();
		JByteArray getDrmSessionId();
		jint getDrmType();
		JLongArray getExperimentIds();
		jlong getLocalBytesRead();
		jlong getMediaDurationMillis();
		android::os::Bundle getMetricsBundle();
		jlong getNetworkBytesRead();
		jlong getNetworkTransferDurationMillis();
		jint getPlaybackType();
		JString getPlayerName();
		JString getPlayerVersion();
		jint getStreamSource();
		jint getStreamType();
		jint getVideoFramesDropped();
		jint getVideoFramesPlayed();
		jint hashCode();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::media::metrics

