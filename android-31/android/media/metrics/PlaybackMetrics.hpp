#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class Parcel;
}

namespace android::media::metrics
{
	class PlaybackMetrics : public __JniBaseClass
	{
	public:
		// Fields
		static jint CONTENT_TYPE_AD();
		static jint CONTENT_TYPE_MAIN();
		static jint CONTENT_TYPE_OTHER();
		static jint CONTENT_TYPE_UNKNOWN();
		static __JniBaseClass CREATOR();
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
		template<typename ...Ts> explicit PlaybackMetrics(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		PlaybackMetrics(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jint getAudioUnderrunCount();
		jint getContentType();
		jbyteArray getDrmSessionId();
		jint getDrmType();
		jlongArray getExperimentIds();
		jlong getLocalBytesRead();
		jlong getMediaDurationMillis();
		android::os::Bundle getMetricsBundle();
		jlong getNetworkBytesRead();
		jlong getNetworkTransferDurationMillis();
		jint getPlaybackType();
		jstring getPlayerName();
		jstring getPlayerVersion();
		jint getStreamSource();
		jint getStreamType();
		jint getVideoFramesDropped();
		jint getVideoFramesPlayed();
		jint hashCode();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::media::metrics

