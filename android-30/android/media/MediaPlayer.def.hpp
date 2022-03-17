#pragma once

#include "../../JObject.hpp"

class JByteArray;
class JArray;
namespace android::content
{
	class Context;
}
namespace android::content::res
{
	class AssetFileDescriptor;
}
namespace android::media
{
	class AudioAttributes;
}
namespace android::media
{
	class AudioDeviceInfo;
}
namespace android::media
{
	class MediaDataSource;
}
namespace android::media
{
	class MediaDrm_KeyRequest;
}
namespace android::media
{
	class MediaPlayer_DrmInfo;
}
namespace android::media
{
	class MediaTimestamp;
}
namespace android::media
{
	class PlaybackParams;
}
namespace android::media
{
	class SyncParams;
}
namespace android::media
{
	class VolumeShaper;
}
namespace android::media
{
	class VolumeShaper_Configuration;
}
namespace android::net
{
	class Uri;
}
namespace android::os
{
	class Handler;
}
namespace android::os
{
	class PersistableBundle;
}
namespace android::view
{
	class Surface;
}
namespace java::io
{
	class FileDescriptor;
}
class JString;
namespace java::util
{
	class UUID;
}

namespace android::media
{
	class MediaPlayer : public JObject
	{
	public:
		// Fields
		static jint MEDIA_ERROR_IO();
		static jint MEDIA_ERROR_MALFORMED();
		static jint MEDIA_ERROR_NOT_VALID_FOR_PROGRESSIVE_PLAYBACK();
		static jint MEDIA_ERROR_SERVER_DIED();
		static jint MEDIA_ERROR_TIMED_OUT();
		static jint MEDIA_ERROR_UNKNOWN();
		static jint MEDIA_ERROR_UNSUPPORTED();
		static jint MEDIA_INFO_AUDIO_NOT_PLAYING();
		static jint MEDIA_INFO_BAD_INTERLEAVING();
		static jint MEDIA_INFO_BUFFERING_END();
		static jint MEDIA_INFO_BUFFERING_START();
		static jint MEDIA_INFO_METADATA_UPDATE();
		static jint MEDIA_INFO_NOT_SEEKABLE();
		static jint MEDIA_INFO_STARTED_AS_NEXT();
		static jint MEDIA_INFO_SUBTITLE_TIMED_OUT();
		static jint MEDIA_INFO_UNKNOWN();
		static jint MEDIA_INFO_UNSUPPORTED_SUBTITLE();
		static jint MEDIA_INFO_VIDEO_NOT_PLAYING();
		static jint MEDIA_INFO_VIDEO_RENDERING_START();
		static jint MEDIA_INFO_VIDEO_TRACK_LAGGING();
		static JString MEDIA_MIMETYPE_TEXT_SUBRIP();
		static jint PREPARE_DRM_STATUS_PREPARATION_ERROR();
		static jint PREPARE_DRM_STATUS_PROVISIONING_NETWORK_ERROR();
		static jint PREPARE_DRM_STATUS_PROVISIONING_SERVER_ERROR();
		static jint PREPARE_DRM_STATUS_SUCCESS();
		static jint SEEK_CLOSEST();
		static jint SEEK_CLOSEST_SYNC();
		static jint SEEK_NEXT_SYNC();
		static jint SEEK_PREVIOUS_SYNC();
		static jint VIDEO_SCALING_MODE_SCALE_TO_FIT();
		static jint VIDEO_SCALING_MODE_SCALE_TO_FIT_WITH_CROPPING();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaPlayer(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaPlayer(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		MediaPlayer();
		
		// Methods
		static android::media::MediaPlayer create(android::content::Context arg0, android::net::Uri arg1);
		static android::media::MediaPlayer create(android::content::Context arg0, jint arg1);
		static android::media::MediaPlayer create(android::content::Context arg0, android::net::Uri arg1, JObject arg2);
		static android::media::MediaPlayer create(android::content::Context arg0, jint arg1, android::media::AudioAttributes arg2, jint arg3);
		static android::media::MediaPlayer create(android::content::Context arg0, android::net::Uri arg1, JObject arg2, android::media::AudioAttributes arg3, jint arg4);
		void addOnRoutingChangedListener(JObject arg0, android::os::Handler arg1) const;
		void addTimedTextSource(java::io::FileDescriptor arg0, JString arg1) const;
		void addTimedTextSource(JString arg0, JString arg1) const;
		void addTimedTextSource(android::content::Context arg0, android::net::Uri arg1, JString arg2) const;
		void addTimedTextSource(java::io::FileDescriptor arg0, jlong arg1, jlong arg2, JString arg3) const;
		void attachAuxEffect(jint arg0) const;
		void clearOnMediaTimeDiscontinuityListener() const;
		void clearOnSubtitleDataListener() const;
		android::media::VolumeShaper createVolumeShaper(android::media::VolumeShaper_Configuration arg0) const;
		void deselectTrack(jint arg0) const;
		jint getAudioSessionId() const;
		jint getCurrentPosition() const;
		android::media::MediaPlayer_DrmInfo getDrmInfo() const;
		JString getDrmPropertyString(JString arg0) const;
		jint getDuration() const;
		android::media::MediaDrm_KeyRequest getKeyRequest(JByteArray arg0, JByteArray arg1, JString arg2, jint arg3, JObject arg4) const;
		android::os::PersistableBundle getMetrics() const;
		android::media::PlaybackParams getPlaybackParams() const;
		android::media::AudioDeviceInfo getPreferredDevice() const;
		android::media::AudioDeviceInfo getRoutedDevice() const;
		jint getSelectedTrack(jint arg0) const;
		android::media::SyncParams getSyncParams() const;
		android::media::MediaTimestamp getTimestamp() const;
		JArray getTrackInfo() const;
		jint getVideoHeight() const;
		jint getVideoWidth() const;
		jboolean isLooping() const;
		jboolean isPlaying() const;
		void pause() const;
		void prepare() const;
		void prepareAsync() const;
		void prepareDrm(java::util::UUID arg0) const;
		JByteArray provideKeyResponse(JByteArray arg0, JByteArray arg1) const;
		void release() const;
		void releaseDrm() const;
		void removeOnRoutingChangedListener(JObject arg0) const;
		void reset() const;
		void restoreKeys(JByteArray arg0) const;
		void seekTo(jint arg0) const;
		void seekTo(jlong arg0, jint arg1) const;
		void selectTrack(jint arg0) const;
		void setAudioAttributes(android::media::AudioAttributes arg0) const;
		void setAudioSessionId(jint arg0) const;
		void setAudioStreamType(jint arg0) const;
		void setAuxEffectSendLevel(jfloat arg0) const;
		void setDataSource(android::content::res::AssetFileDescriptor arg0) const;
		void setDataSource(android::media::MediaDataSource arg0) const;
		void setDataSource(java::io::FileDescriptor arg0) const;
		void setDataSource(JString arg0) const;
		void setDataSource(android::content::Context arg0, android::net::Uri arg1) const;
		void setDataSource(android::content::Context arg0, android::net::Uri arg1, JObject arg2) const;
		void setDataSource(java::io::FileDescriptor arg0, jlong arg1, jlong arg2) const;
		void setDataSource(android::content::Context arg0, android::net::Uri arg1, JObject arg2, JObject arg3) const;
		void setDisplay(JObject arg0) const;
		void setDrmPropertyString(JString arg0, JString arg1) const;
		void setLooping(jboolean arg0) const;
		void setNextMediaPlayer(android::media::MediaPlayer arg0) const;
		void setOnBufferingUpdateListener(JObject arg0) const;
		void setOnCompletionListener(JObject arg0) const;
		void setOnDrmConfigHelper(JObject arg0) const;
		void setOnDrmInfoListener(JObject arg0) const;
		void setOnDrmInfoListener(JObject arg0, android::os::Handler arg1) const;
		void setOnDrmPreparedListener(JObject arg0) const;
		void setOnDrmPreparedListener(JObject arg0, android::os::Handler arg1) const;
		void setOnErrorListener(JObject arg0) const;
		void setOnInfoListener(JObject arg0) const;
		void setOnMediaTimeDiscontinuityListener(JObject arg0) const;
		void setOnMediaTimeDiscontinuityListener(JObject arg0, android::os::Handler arg1) const;
		void setOnPreparedListener(JObject arg0) const;
		void setOnSeekCompleteListener(JObject arg0) const;
		void setOnSubtitleDataListener(JObject arg0) const;
		void setOnSubtitleDataListener(JObject arg0, android::os::Handler arg1) const;
		void setOnTimedMetaDataAvailableListener(JObject arg0) const;
		void setOnTimedTextListener(JObject arg0) const;
		void setOnVideoSizeChangedListener(JObject arg0) const;
		void setPlaybackParams(android::media::PlaybackParams arg0) const;
		jboolean setPreferredDevice(android::media::AudioDeviceInfo arg0) const;
		void setScreenOnWhilePlaying(jboolean arg0) const;
		void setSurface(android::view::Surface arg0) const;
		void setSyncParams(android::media::SyncParams arg0) const;
		void setVideoScalingMode(jint arg0) const;
		void setVolume(jfloat arg0, jfloat arg1) const;
		void setWakeMode(android::content::Context arg0, jint arg1) const;
		void start() const;
		void stop() const;
	};
} // namespace android::media

