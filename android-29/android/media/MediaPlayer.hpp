#pragma once

#include "../../__JniBaseClass.hpp"

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
namespace java::util
{
	class UUID;
}

namespace android::media
{
	class MediaPlayer : public __JniBaseClass
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
		static jstring MEDIA_MIMETYPE_TEXT_SUBRIP();
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
		
		MediaPlayer(QAndroidJniObject obj);
		// Constructors
		MediaPlayer();
		
		// Methods
		static QAndroidJniObject create(android::content::Context arg0, android::net::Uri arg1);
		static QAndroidJniObject create(android::content::Context arg0, jint arg1);
		static QAndroidJniObject create(android::content::Context arg0, android::net::Uri arg1, __JniBaseClass arg2);
		static QAndroidJniObject create(android::content::Context arg0, jint arg1, android::media::AudioAttributes arg2, jint arg3);
		static QAndroidJniObject create(android::content::Context arg0, android::net::Uri arg1, __JniBaseClass arg2, android::media::AudioAttributes arg3, jint arg4);
		void addOnRoutingChangedListener(__JniBaseClass arg0, android::os::Handler arg1);
		void addTimedTextSource(java::io::FileDescriptor arg0, jstring arg1);
		void addTimedTextSource(jstring arg0, jstring arg1);
		void addTimedTextSource(android::content::Context arg0, android::net::Uri arg1, jstring arg2);
		void addTimedTextSource(java::io::FileDescriptor arg0, jlong arg1, jlong arg2, jstring arg3);
		void attachAuxEffect(jint arg0);
		void clearOnMediaTimeDiscontinuityListener();
		void clearOnSubtitleDataListener();
		QAndroidJniObject createVolumeShaper(android::media::VolumeShaper_Configuration arg0);
		void deselectTrack(jint arg0);
		jint getAudioSessionId();
		jint getCurrentPosition();
		QAndroidJniObject getDrmInfo();
		jstring getDrmPropertyString(jstring arg0);
		jint getDuration();
		QAndroidJniObject getKeyRequest(jbyteArray arg0, jbyteArray arg1, jstring arg2, jint arg3, __JniBaseClass arg4);
		QAndroidJniObject getMetrics();
		QAndroidJniObject getPlaybackParams();
		QAndroidJniObject getPreferredDevice();
		QAndroidJniObject getRoutedDevice();
		jint getSelectedTrack(jint arg0);
		QAndroidJniObject getSyncParams();
		QAndroidJniObject getTimestamp();
		jarray getTrackInfo();
		jint getVideoHeight();
		jint getVideoWidth();
		jboolean isLooping();
		jboolean isPlaying();
		void pause();
		void prepare();
		void prepareAsync();
		void prepareDrm(java::util::UUID arg0);
		jbyteArray provideKeyResponse(jbyteArray arg0, jbyteArray arg1);
		void release();
		void releaseDrm();
		void removeOnRoutingChangedListener(__JniBaseClass arg0);
		void reset();
		void restoreKeys(jbyteArray arg0);
		void seekTo(jint arg0);
		void seekTo(jlong arg0, jint arg1);
		void selectTrack(jint arg0);
		void setAudioAttributes(android::media::AudioAttributes arg0);
		void setAudioSessionId(jint arg0);
		void setAudioStreamType(jint arg0);
		void setAuxEffectSendLevel(jfloat arg0);
		void setDataSource(android::content::res::AssetFileDescriptor arg0);
		void setDataSource(android::media::MediaDataSource arg0);
		void setDataSource(java::io::FileDescriptor arg0);
		void setDataSource(jstring arg0);
		void setDataSource(android::content::Context arg0, android::net::Uri arg1);
		void setDataSource(android::content::Context arg0, android::net::Uri arg1, __JniBaseClass arg2);
		void setDataSource(java::io::FileDescriptor arg0, jlong arg1, jlong arg2);
		void setDataSource(android::content::Context arg0, android::net::Uri arg1, __JniBaseClass arg2, __JniBaseClass arg3);
		void setDisplay(__JniBaseClass arg0);
		void setDrmPropertyString(jstring arg0, jstring arg1);
		void setLooping(jboolean arg0);
		void setNextMediaPlayer(android::media::MediaPlayer arg0);
		void setOnBufferingUpdateListener(__JniBaseClass arg0);
		void setOnCompletionListener(__JniBaseClass arg0);
		void setOnDrmConfigHelper(__JniBaseClass arg0);
		void setOnDrmInfoListener(__JniBaseClass arg0);
		void setOnDrmInfoListener(__JniBaseClass arg0, android::os::Handler arg1);
		void setOnDrmPreparedListener(__JniBaseClass arg0);
		void setOnDrmPreparedListener(__JniBaseClass arg0, android::os::Handler arg1);
		void setOnErrorListener(__JniBaseClass arg0);
		void setOnInfoListener(__JniBaseClass arg0);
		void setOnMediaTimeDiscontinuityListener(__JniBaseClass arg0);
		void setOnMediaTimeDiscontinuityListener(__JniBaseClass arg0, android::os::Handler arg1);
		void setOnPreparedListener(__JniBaseClass arg0);
		void setOnSeekCompleteListener(__JniBaseClass arg0);
		void setOnSubtitleDataListener(__JniBaseClass arg0);
		void setOnSubtitleDataListener(__JniBaseClass arg0, android::os::Handler arg1);
		void setOnTimedMetaDataAvailableListener(__JniBaseClass arg0);
		void setOnTimedTextListener(__JniBaseClass arg0);
		void setOnVideoSizeChangedListener(__JniBaseClass arg0);
		void setPlaybackParams(android::media::PlaybackParams arg0);
		jboolean setPreferredDevice(android::media::AudioDeviceInfo arg0);
		void setScreenOnWhilePlaying(jboolean arg0);
		void setSurface(android::view::Surface arg0);
		void setSyncParams(android::media::SyncParams arg0);
		void setVideoScalingMode(jint arg0);
		void setVolume(jfloat arg0, jfloat arg1);
		void setWakeMode(android::content::Context arg0, jint arg1);
		void start();
		void stop();
	};
} // namespace android::media

