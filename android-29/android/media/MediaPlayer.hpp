#pragma once

#ifndef ANDROID_MEDIA_MEDIAPLAYER
#define ANDROID_MEDIA_MEDIAPLAYER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::net
{
	class Uri;
}
namespace __jni_impl::android::media
{
	class AudioAttributes;
}
namespace __jni_impl::android::view
{
	class Surface;
}
namespace __jni_impl::java::io
{
	class FileDescriptor;
}
namespace __jni_impl::android::content::res
{
	class AssetFileDescriptor;
}
namespace __jni_impl::android::media
{
	class MediaDataSource;
}
namespace __jni_impl::android::media
{
	class SyncParams;
}
namespace __jni_impl::android::os
{
	class Handler;
}
namespace __jni_impl::android::media
{
	class MediaPlayer_DrmInfo;
}
namespace __jni_impl::java::util
{
	class UUID;
}
namespace __jni_impl::android::media
{
	class MediaDrm_KeyRequest;
}
namespace __jni_impl::android::media
{
	class PlaybackParams;
}
namespace __jni_impl::android::media
{
	class AudioDeviceInfo;
}
namespace __jni_impl::android::os
{
	class PersistableBundle;
}
namespace __jni_impl::android::media
{
	class MediaTimestamp;
}
namespace __jni_impl::android::media
{
	class VolumeShaper;
}
namespace __jni_impl::android::media
{
	class VolumeShaper_Configuration;
}

namespace __jni_impl::android::media
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
		static QAndroidJniObject MEDIA_MIMETYPE_TEXT_SUBRIP();
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
		
		// Constructors
		void __constructor();
		
		// Methods
		void start();
		void stop();
		void prepare();
		void reset();
		static QAndroidJniObject create(__jni_impl::android::content::Context arg0, __jni_impl::android::net::Uri arg1);
		static QAndroidJniObject create(__jni_impl::android::content::Context arg0, jint arg1, __jni_impl::android::media::AudioAttributes arg2, jint arg3);
		static QAndroidJniObject create(__jni_impl::android::content::Context arg0, __jni_impl::android::net::Uri arg1, __jni_impl::__JniBaseClass arg2);
		static QAndroidJniObject create(__jni_impl::android::content::Context arg0, __jni_impl::android::net::Uri arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::android::media::AudioAttributes arg3, jint arg4);
		static QAndroidJniObject create(__jni_impl::android::content::Context arg0, jint arg1);
		void release();
		jint getDuration();
		void setSurface(__jni_impl::android::view::Surface arg0);
		jint getVideoWidth();
		jint getVideoHeight();
		void setDataSource(__jni_impl::android::content::Context arg0, __jni_impl::android::net::Uri arg1);
		void setDataSource(__jni_impl::java::io::FileDescriptor arg0, jlong arg1, jlong arg2);
		void setDataSource(jstring arg0);
		void setDataSource(__jni_impl::android::content::res::AssetFileDescriptor arg0);
		void setDataSource(__jni_impl::java::io::FileDescriptor arg0);
		void setDataSource(__jni_impl::android::content::Context arg0, __jni_impl::android::net::Uri arg1, __jni_impl::__JniBaseClass arg2);
		void setDataSource(__jni_impl::android::media::MediaDataSource arg0);
		void setDataSource(__jni_impl::android::content::Context arg0, __jni_impl::android::net::Uri arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::__JniBaseClass arg3);
		void setDisplay(__jni_impl::__JniBaseClass arg0);
		void setVideoScalingMode(jint arg0);
		void prepareAsync();
		void setWakeMode(__jni_impl::android::content::Context arg0, jint arg1);
		void setScreenOnWhilePlaying(jboolean arg0);
		void setSyncParams(__jni_impl::android::media::SyncParams arg0);
		QAndroidJniObject getSyncParams();
		jint getCurrentPosition();
		void setNextMediaPlayer(__jni_impl::android::media::MediaPlayer arg0);
		void setAudioStreamType(jint arg0);
		QAndroidJniObject getTrackInfo();
		void addTimedTextSource(__jni_impl::java::io::FileDescriptor arg0, jlong arg1, jlong arg2, jstring arg3);
		void addTimedTextSource(jstring arg0, jstring arg1);
		void addTimedTextSource(__jni_impl::android::content::Context arg0, __jni_impl::android::net::Uri arg1, jstring arg2);
		void addTimedTextSource(__jni_impl::java::io::FileDescriptor arg0, jstring arg1);
		void deselectTrack(jint arg0);
		void setOnPreparedListener(__jni_impl::__JniBaseClass arg0);
		void setOnCompletionListener(__jni_impl::__JniBaseClass arg0);
		void setOnBufferingUpdateListener(__jni_impl::__JniBaseClass arg0);
		void setOnSeekCompleteListener(__jni_impl::__JniBaseClass arg0);
		void setOnVideoSizeChangedListener(__jni_impl::__JniBaseClass arg0);
		void setOnTimedTextListener(__jni_impl::__JniBaseClass arg0);
		void setOnSubtitleDataListener(__jni_impl::__JniBaseClass arg0);
		void setOnSubtitleDataListener(__jni_impl::__JniBaseClass arg0, __jni_impl::android::os::Handler arg1);
		void clearOnSubtitleDataListener();
		void setOnMediaTimeDiscontinuityListener(__jni_impl::__JniBaseClass arg0);
		void setOnMediaTimeDiscontinuityListener(__jni_impl::__JniBaseClass arg0, __jni_impl::android::os::Handler arg1);
		void clearOnMediaTimeDiscontinuityListener();
		void setOnTimedMetaDataAvailableListener(__jni_impl::__JniBaseClass arg0);
		void setOnDrmConfigHelper(__jni_impl::__JniBaseClass arg0);
		void setOnDrmInfoListener(__jni_impl::__JniBaseClass arg0, __jni_impl::android::os::Handler arg1);
		void setOnDrmInfoListener(__jni_impl::__JniBaseClass arg0);
		void setOnDrmPreparedListener(__jni_impl::__JniBaseClass arg0);
		void setOnDrmPreparedListener(__jni_impl::__JniBaseClass arg0, __jni_impl::android::os::Handler arg1);
		QAndroidJniObject getDrmInfo();
		void prepareDrm(__jni_impl::java::util::UUID arg0);
		void releaseDrm();
		QAndroidJniObject getKeyRequest(jbyteArray arg0, jbyteArray arg1, jstring arg2, jint arg3, __jni_impl::__JniBaseClass arg4);
		QAndroidJniObject provideKeyResponse(jbyteArray arg0, jbyteArray arg1);
		void restoreKeys(jbyteArray arg0);
		QAndroidJniObject getDrmPropertyString(jstring arg0);
		void setDrmPropertyString(jstring arg0, jstring arg1);
		void setAudioAttributes(__jni_impl::android::media::AudioAttributes arg0);
		QAndroidJniObject getPlaybackParams();
		void setPlaybackParams(__jni_impl::android::media::PlaybackParams arg0);
		void attachAuxEffect(jint arg0);
		void setAuxEffectSendLevel(jfloat arg0);
		jboolean setPreferredDevice(__jni_impl::android::media::AudioDeviceInfo arg0);
		QAndroidJniObject getPreferredDevice();
		QAndroidJniObject getRoutedDevice();
		void addOnRoutingChangedListener(__jni_impl::__JniBaseClass arg0, __jni_impl::android::os::Handler arg1);
		void removeOnRoutingChangedListener(__jni_impl::__JniBaseClass arg0);
		void setAudioSessionId(jint arg0);
		jint getAudioSessionId();
		QAndroidJniObject getMetrics();
		QAndroidJniObject getTimestamp();
		void pause();
		QAndroidJniObject createVolumeShaper(__jni_impl::android::media::VolumeShaper_Configuration arg0);
		void setLooping(jboolean arg0);
		jboolean isLooping();
		void setVolume(jfloat arg0, jfloat arg1);
		jboolean isPlaying();
		void seekTo(jlong arg0, jint arg1);
		void seekTo(jint arg0);
		void setOnInfoListener(__jni_impl::__JniBaseClass arg0);
		void setOnErrorListener(__jni_impl::__JniBaseClass arg0);
		void selectTrack(jint arg0);
		jint getSelectedTrack(jint arg0);
	};
} // namespace __jni_impl::android::media

#include "../content/Context.hpp"
#include "../net/Uri.hpp"
#include "AudioAttributes.hpp"
#include "../view/Surface.hpp"
#include "../../java/io/FileDescriptor.hpp"
#include "../content/res/AssetFileDescriptor.hpp"
#include "MediaDataSource.hpp"
#include "SyncParams.hpp"
#include "../os/Handler.hpp"
#include "MediaPlayer_DrmInfo.hpp"
#include "../../java/util/UUID.hpp"
#include "MediaDrm_KeyRequest.hpp"
#include "PlaybackParams.hpp"
#include "AudioDeviceInfo.hpp"
#include "../os/PersistableBundle.hpp"
#include "MediaTimestamp.hpp"
#include "VolumeShaper.hpp"
#include "VolumeShaper_Configuration.hpp"

namespace __jni_impl::android::media
{
	// Fields
	jint MediaPlayer::MEDIA_ERROR_IO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaPlayer",
			"MEDIA_ERROR_IO");
	}
	jint MediaPlayer::MEDIA_ERROR_MALFORMED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaPlayer",
			"MEDIA_ERROR_MALFORMED");
	}
	jint MediaPlayer::MEDIA_ERROR_NOT_VALID_FOR_PROGRESSIVE_PLAYBACK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaPlayer",
			"MEDIA_ERROR_NOT_VALID_FOR_PROGRESSIVE_PLAYBACK");
	}
	jint MediaPlayer::MEDIA_ERROR_SERVER_DIED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaPlayer",
			"MEDIA_ERROR_SERVER_DIED");
	}
	jint MediaPlayer::MEDIA_ERROR_TIMED_OUT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaPlayer",
			"MEDIA_ERROR_TIMED_OUT");
	}
	jint MediaPlayer::MEDIA_ERROR_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaPlayer",
			"MEDIA_ERROR_UNKNOWN");
	}
	jint MediaPlayer::MEDIA_ERROR_UNSUPPORTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaPlayer",
			"MEDIA_ERROR_UNSUPPORTED");
	}
	jint MediaPlayer::MEDIA_INFO_AUDIO_NOT_PLAYING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaPlayer",
			"MEDIA_INFO_AUDIO_NOT_PLAYING");
	}
	jint MediaPlayer::MEDIA_INFO_BAD_INTERLEAVING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaPlayer",
			"MEDIA_INFO_BAD_INTERLEAVING");
	}
	jint MediaPlayer::MEDIA_INFO_BUFFERING_END()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaPlayer",
			"MEDIA_INFO_BUFFERING_END");
	}
	jint MediaPlayer::MEDIA_INFO_BUFFERING_START()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaPlayer",
			"MEDIA_INFO_BUFFERING_START");
	}
	jint MediaPlayer::MEDIA_INFO_METADATA_UPDATE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaPlayer",
			"MEDIA_INFO_METADATA_UPDATE");
	}
	jint MediaPlayer::MEDIA_INFO_NOT_SEEKABLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaPlayer",
			"MEDIA_INFO_NOT_SEEKABLE");
	}
	jint MediaPlayer::MEDIA_INFO_STARTED_AS_NEXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaPlayer",
			"MEDIA_INFO_STARTED_AS_NEXT");
	}
	jint MediaPlayer::MEDIA_INFO_SUBTITLE_TIMED_OUT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaPlayer",
			"MEDIA_INFO_SUBTITLE_TIMED_OUT");
	}
	jint MediaPlayer::MEDIA_INFO_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaPlayer",
			"MEDIA_INFO_UNKNOWN");
	}
	jint MediaPlayer::MEDIA_INFO_UNSUPPORTED_SUBTITLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaPlayer",
			"MEDIA_INFO_UNSUPPORTED_SUBTITLE");
	}
	jint MediaPlayer::MEDIA_INFO_VIDEO_NOT_PLAYING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaPlayer",
			"MEDIA_INFO_VIDEO_NOT_PLAYING");
	}
	jint MediaPlayer::MEDIA_INFO_VIDEO_RENDERING_START()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaPlayer",
			"MEDIA_INFO_VIDEO_RENDERING_START");
	}
	jint MediaPlayer::MEDIA_INFO_VIDEO_TRACK_LAGGING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaPlayer",
			"MEDIA_INFO_VIDEO_TRACK_LAGGING");
	}
	QAndroidJniObject MediaPlayer::MEDIA_MIMETYPE_TEXT_SUBRIP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaPlayer",
			"MEDIA_MIMETYPE_TEXT_SUBRIP",
			"Ljava/lang/String;");
	}
	jint MediaPlayer::PREPARE_DRM_STATUS_PREPARATION_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaPlayer",
			"PREPARE_DRM_STATUS_PREPARATION_ERROR");
	}
	jint MediaPlayer::PREPARE_DRM_STATUS_PROVISIONING_NETWORK_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaPlayer",
			"PREPARE_DRM_STATUS_PROVISIONING_NETWORK_ERROR");
	}
	jint MediaPlayer::PREPARE_DRM_STATUS_PROVISIONING_SERVER_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaPlayer",
			"PREPARE_DRM_STATUS_PROVISIONING_SERVER_ERROR");
	}
	jint MediaPlayer::PREPARE_DRM_STATUS_SUCCESS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaPlayer",
			"PREPARE_DRM_STATUS_SUCCESS");
	}
	jint MediaPlayer::SEEK_CLOSEST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaPlayer",
			"SEEK_CLOSEST");
	}
	jint MediaPlayer::SEEK_CLOSEST_SYNC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaPlayer",
			"SEEK_CLOSEST_SYNC");
	}
	jint MediaPlayer::SEEK_NEXT_SYNC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaPlayer",
			"SEEK_NEXT_SYNC");
	}
	jint MediaPlayer::SEEK_PREVIOUS_SYNC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaPlayer",
			"SEEK_PREVIOUS_SYNC");
	}
	jint MediaPlayer::VIDEO_SCALING_MODE_SCALE_TO_FIT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaPlayer",
			"VIDEO_SCALING_MODE_SCALE_TO_FIT");
	}
	jint MediaPlayer::VIDEO_SCALING_MODE_SCALE_TO_FIT_WITH_CROPPING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaPlayer",
			"VIDEO_SCALING_MODE_SCALE_TO_FIT_WITH_CROPPING");
	}
	
	// Constructors
	void MediaPlayer::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaPlayer",
			"()V");
	}
	
	// Methods
	void MediaPlayer::start()
	{
		__thiz.callMethod<void>(
			"start",
			"()V");
	}
	void MediaPlayer::stop()
	{
		__thiz.callMethod<void>(
			"stop",
			"()V");
	}
	void MediaPlayer::prepare()
	{
		__thiz.callMethod<void>(
			"prepare",
			"()V");
	}
	void MediaPlayer::reset()
	{
		__thiz.callMethod<void>(
			"reset",
			"()V");
	}
	QAndroidJniObject MediaPlayer::create(__jni_impl::android::content::Context arg0, __jni_impl::android::net::Uri arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.MediaPlayer",
			"create",
			"(Landroid/content/Context;Landroid/net/Uri;)Landroid/media/MediaPlayer;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	QAndroidJniObject MediaPlayer::create(__jni_impl::android::content::Context arg0, jint arg1, __jni_impl::android::media::AudioAttributes arg2, jint arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.MediaPlayer",
			"create",
			"(Landroid/content/Context;ILandroid/media/AudioAttributes;I)Landroid/media/MediaPlayer;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3);
	}
	QAndroidJniObject MediaPlayer::create(__jni_impl::android::content::Context arg0, __jni_impl::android::net::Uri arg1, __jni_impl::__JniBaseClass arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.MediaPlayer",
			"create",
			"(Landroid/content/Context;Landroid/net/Uri;Landroid/view/SurfaceHolder;)Landroid/media/MediaPlayer;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	QAndroidJniObject MediaPlayer::create(__jni_impl::android::content::Context arg0, __jni_impl::android::net::Uri arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::android::media::AudioAttributes arg3, jint arg4)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.MediaPlayer",
			"create",
			"(Landroid/content/Context;Landroid/net/Uri;Landroid/view/SurfaceHolder;Landroid/media/AudioAttributes;I)Landroid/media/MediaPlayer;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4);
	}
	QAndroidJniObject MediaPlayer::create(__jni_impl::android::content::Context arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.MediaPlayer",
			"create",
			"(Landroid/content/Context;I)Landroid/media/MediaPlayer;",
			arg0.__jniObject().object(),
			arg1);
	}
	void MediaPlayer::release()
	{
		__thiz.callMethod<void>(
			"release",
			"()V");
	}
	jint MediaPlayer::getDuration()
	{
		return __thiz.callMethod<jint>(
			"getDuration",
			"()I");
	}
	void MediaPlayer::setSurface(__jni_impl::android::view::Surface arg0)
	{
		__thiz.callMethod<void>(
			"setSurface",
			"(Landroid/view/Surface;)V",
			arg0.__jniObject().object());
	}
	jint MediaPlayer::getVideoWidth()
	{
		return __thiz.callMethod<jint>(
			"getVideoWidth",
			"()I");
	}
	jint MediaPlayer::getVideoHeight()
	{
		return __thiz.callMethod<jint>(
			"getVideoHeight",
			"()I");
	}
	void MediaPlayer::setDataSource(__jni_impl::android::content::Context arg0, __jni_impl::android::net::Uri arg1)
	{
		__thiz.callMethod<void>(
			"setDataSource",
			"(Landroid/content/Context;Landroid/net/Uri;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void MediaPlayer::setDataSource(__jni_impl::java::io::FileDescriptor arg0, jlong arg1, jlong arg2)
	{
		__thiz.callMethod<void>(
			"setDataSource",
			"(Ljava/io/FileDescriptor;JJ)V",
			arg0.__jniObject().object(),
			arg1,
			arg2);
	}
	void MediaPlayer::setDataSource(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setDataSource",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void MediaPlayer::setDataSource(__jni_impl::android::content::res::AssetFileDescriptor arg0)
	{
		__thiz.callMethod<void>(
			"setDataSource",
			"(Landroid/content/res/AssetFileDescriptor;)V",
			arg0.__jniObject().object());
	}
	void MediaPlayer::setDataSource(__jni_impl::java::io::FileDescriptor arg0)
	{
		__thiz.callMethod<void>(
			"setDataSource",
			"(Ljava/io/FileDescriptor;)V",
			arg0.__jniObject().object());
	}
	void MediaPlayer::setDataSource(__jni_impl::android::content::Context arg0, __jni_impl::android::net::Uri arg1, __jni_impl::__JniBaseClass arg2)
	{
		__thiz.callMethod<void>(
			"setDataSource",
			"(Landroid/content/Context;Landroid/net/Uri;Ljava/util/Map;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	void MediaPlayer::setDataSource(__jni_impl::android::media::MediaDataSource arg0)
	{
		__thiz.callMethod<void>(
			"setDataSource",
			"(Landroid/media/MediaDataSource;)V",
			arg0.__jniObject().object());
	}
	void MediaPlayer::setDataSource(__jni_impl::android::content::Context arg0, __jni_impl::android::net::Uri arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::__JniBaseClass arg3)
	{
		__thiz.callMethod<void>(
			"setDataSource",
			"(Landroid/content/Context;Landroid/net/Uri;Ljava/util/Map;Ljava/util/List;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object());
	}
	void MediaPlayer::setDisplay(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setDisplay",
			"(Landroid/view/SurfaceHolder;)V",
			arg0.__jniObject().object());
	}
	void MediaPlayer::setVideoScalingMode(jint arg0)
	{
		__thiz.callMethod<void>(
			"setVideoScalingMode",
			"(I)V",
			arg0);
	}
	void MediaPlayer::prepareAsync()
	{
		__thiz.callMethod<void>(
			"prepareAsync",
			"()V");
	}
	void MediaPlayer::setWakeMode(__jni_impl::android::content::Context arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setWakeMode",
			"(Landroid/content/Context;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	void MediaPlayer::setScreenOnWhilePlaying(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setScreenOnWhilePlaying",
			"(Z)V",
			arg0);
	}
	void MediaPlayer::setSyncParams(__jni_impl::android::media::SyncParams arg0)
	{
		__thiz.callMethod<void>(
			"setSyncParams",
			"(Landroid/media/SyncParams;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject MediaPlayer::getSyncParams()
	{
		return __thiz.callObjectMethod(
			"getSyncParams",
			"()Landroid/media/SyncParams;");
	}
	jint MediaPlayer::getCurrentPosition()
	{
		return __thiz.callMethod<jint>(
			"getCurrentPosition",
			"()I");
	}
	void MediaPlayer::setNextMediaPlayer(__jni_impl::android::media::MediaPlayer arg0)
	{
		__thiz.callMethod<void>(
			"setNextMediaPlayer",
			"(Landroid/media/MediaPlayer;)V",
			arg0.__jniObject().object());
	}
	void MediaPlayer::setAudioStreamType(jint arg0)
	{
		__thiz.callMethod<void>(
			"setAudioStreamType",
			"(I)V",
			arg0);
	}
	QAndroidJniObject MediaPlayer::getTrackInfo()
	{
		return __thiz.callObjectMethod(
			"getTrackInfo",
			"()[Landroid/media/MediaPlayer$TrackInfo;");
	}
	void MediaPlayer::addTimedTextSource(__jni_impl::java::io::FileDescriptor arg0, jlong arg1, jlong arg2, jstring arg3)
	{
		__thiz.callMethod<void>(
			"addTimedTextSource",
			"(Ljava/io/FileDescriptor;JJLjava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3);
	}
	void MediaPlayer::addTimedTextSource(jstring arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"addTimedTextSource",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1);
	}
	void MediaPlayer::addTimedTextSource(__jni_impl::android::content::Context arg0, __jni_impl::android::net::Uri arg1, jstring arg2)
	{
		__thiz.callMethod<void>(
			"addTimedTextSource",
			"(Landroid/content/Context;Landroid/net/Uri;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2);
	}
	void MediaPlayer::addTimedTextSource(__jni_impl::java::io::FileDescriptor arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"addTimedTextSource",
			"(Ljava/io/FileDescriptor;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1);
	}
	void MediaPlayer::deselectTrack(jint arg0)
	{
		__thiz.callMethod<void>(
			"deselectTrack",
			"(I)V",
			arg0);
	}
	void MediaPlayer::setOnPreparedListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnPreparedListener",
			"(Landroid/media/MediaPlayer$OnPreparedListener;)V",
			arg0.__jniObject().object());
	}
	void MediaPlayer::setOnCompletionListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnCompletionListener",
			"(Landroid/media/MediaPlayer$OnCompletionListener;)V",
			arg0.__jniObject().object());
	}
	void MediaPlayer::setOnBufferingUpdateListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnBufferingUpdateListener",
			"(Landroid/media/MediaPlayer$OnBufferingUpdateListener;)V",
			arg0.__jniObject().object());
	}
	void MediaPlayer::setOnSeekCompleteListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnSeekCompleteListener",
			"(Landroid/media/MediaPlayer$OnSeekCompleteListener;)V",
			arg0.__jniObject().object());
	}
	void MediaPlayer::setOnVideoSizeChangedListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnVideoSizeChangedListener",
			"(Landroid/media/MediaPlayer$OnVideoSizeChangedListener;)V",
			arg0.__jniObject().object());
	}
	void MediaPlayer::setOnTimedTextListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnTimedTextListener",
			"(Landroid/media/MediaPlayer$OnTimedTextListener;)V",
			arg0.__jniObject().object());
	}
	void MediaPlayer::setOnSubtitleDataListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnSubtitleDataListener",
			"(Landroid/media/MediaPlayer$OnSubtitleDataListener;)V",
			arg0.__jniObject().object());
	}
	void MediaPlayer::setOnSubtitleDataListener(__jni_impl::__JniBaseClass arg0, __jni_impl::android::os::Handler arg1)
	{
		__thiz.callMethod<void>(
			"setOnSubtitleDataListener",
			"(Landroid/media/MediaPlayer$OnSubtitleDataListener;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void MediaPlayer::clearOnSubtitleDataListener()
	{
		__thiz.callMethod<void>(
			"clearOnSubtitleDataListener",
			"()V");
	}
	void MediaPlayer::setOnMediaTimeDiscontinuityListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnMediaTimeDiscontinuityListener",
			"(Landroid/media/MediaPlayer$OnMediaTimeDiscontinuityListener;)V",
			arg0.__jniObject().object());
	}
	void MediaPlayer::setOnMediaTimeDiscontinuityListener(__jni_impl::__JniBaseClass arg0, __jni_impl::android::os::Handler arg1)
	{
		__thiz.callMethod<void>(
			"setOnMediaTimeDiscontinuityListener",
			"(Landroid/media/MediaPlayer$OnMediaTimeDiscontinuityListener;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void MediaPlayer::clearOnMediaTimeDiscontinuityListener()
	{
		__thiz.callMethod<void>(
			"clearOnMediaTimeDiscontinuityListener",
			"()V");
	}
	void MediaPlayer::setOnTimedMetaDataAvailableListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnTimedMetaDataAvailableListener",
			"(Landroid/media/MediaPlayer$OnTimedMetaDataAvailableListener;)V",
			arg0.__jniObject().object());
	}
	void MediaPlayer::setOnDrmConfigHelper(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnDrmConfigHelper",
			"(Landroid/media/MediaPlayer$OnDrmConfigHelper;)V",
			arg0.__jniObject().object());
	}
	void MediaPlayer::setOnDrmInfoListener(__jni_impl::__JniBaseClass arg0, __jni_impl::android::os::Handler arg1)
	{
		__thiz.callMethod<void>(
			"setOnDrmInfoListener",
			"(Landroid/media/MediaPlayer$OnDrmInfoListener;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void MediaPlayer::setOnDrmInfoListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnDrmInfoListener",
			"(Landroid/media/MediaPlayer$OnDrmInfoListener;)V",
			arg0.__jniObject().object());
	}
	void MediaPlayer::setOnDrmPreparedListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnDrmPreparedListener",
			"(Landroid/media/MediaPlayer$OnDrmPreparedListener;)V",
			arg0.__jniObject().object());
	}
	void MediaPlayer::setOnDrmPreparedListener(__jni_impl::__JniBaseClass arg0, __jni_impl::android::os::Handler arg1)
	{
		__thiz.callMethod<void>(
			"setOnDrmPreparedListener",
			"(Landroid/media/MediaPlayer$OnDrmPreparedListener;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	QAndroidJniObject MediaPlayer::getDrmInfo()
	{
		return __thiz.callObjectMethod(
			"getDrmInfo",
			"()Landroid/media/MediaPlayer$DrmInfo;");
	}
	void MediaPlayer::prepareDrm(__jni_impl::java::util::UUID arg0)
	{
		__thiz.callMethod<void>(
			"prepareDrm",
			"(Ljava/util/UUID;)V",
			arg0.__jniObject().object());
	}
	void MediaPlayer::releaseDrm()
	{
		__thiz.callMethod<void>(
			"releaseDrm",
			"()V");
	}
	QAndroidJniObject MediaPlayer::getKeyRequest(jbyteArray arg0, jbyteArray arg1, jstring arg2, jint arg3, __jni_impl::__JniBaseClass arg4)
	{
		return __thiz.callObjectMethod(
			"getKeyRequest",
			"([B[BLjava/lang/String;ILjava/util/Map;)Landroid/media/MediaDrm$KeyRequest;",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.__jniObject().object());
	}
	QAndroidJniObject MediaPlayer::provideKeyResponse(jbyteArray arg0, jbyteArray arg1)
	{
		return __thiz.callObjectMethod(
			"provideKeyResponse",
			"([B[B)[B",
			arg0,
			arg1);
	}
	void MediaPlayer::restoreKeys(jbyteArray arg0)
	{
		__thiz.callMethod<void>(
			"restoreKeys",
			"([B)V",
			arg0);
	}
	QAndroidJniObject MediaPlayer::getDrmPropertyString(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getDrmPropertyString",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0);
	}
	void MediaPlayer::setDrmPropertyString(jstring arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"setDrmPropertyString",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1);
	}
	void MediaPlayer::setAudioAttributes(__jni_impl::android::media::AudioAttributes arg0)
	{
		__thiz.callMethod<void>(
			"setAudioAttributes",
			"(Landroid/media/AudioAttributes;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject MediaPlayer::getPlaybackParams()
	{
		return __thiz.callObjectMethod(
			"getPlaybackParams",
			"()Landroid/media/PlaybackParams;");
	}
	void MediaPlayer::setPlaybackParams(__jni_impl::android::media::PlaybackParams arg0)
	{
		__thiz.callMethod<void>(
			"setPlaybackParams",
			"(Landroid/media/PlaybackParams;)V",
			arg0.__jniObject().object());
	}
	void MediaPlayer::attachAuxEffect(jint arg0)
	{
		__thiz.callMethod<void>(
			"attachAuxEffect",
			"(I)V",
			arg0);
	}
	void MediaPlayer::setAuxEffectSendLevel(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setAuxEffectSendLevel",
			"(F)V",
			arg0);
	}
	jboolean MediaPlayer::setPreferredDevice(__jni_impl::android::media::AudioDeviceInfo arg0)
	{
		return __thiz.callMethod<jboolean>(
			"setPreferredDevice",
			"(Landroid/media/AudioDeviceInfo;)Z",
			arg0.__jniObject().object());
	}
	QAndroidJniObject MediaPlayer::getPreferredDevice()
	{
		return __thiz.callObjectMethod(
			"getPreferredDevice",
			"()Landroid/media/AudioDeviceInfo;");
	}
	QAndroidJniObject MediaPlayer::getRoutedDevice()
	{
		return __thiz.callObjectMethod(
			"getRoutedDevice",
			"()Landroid/media/AudioDeviceInfo;");
	}
	void MediaPlayer::addOnRoutingChangedListener(__jni_impl::__JniBaseClass arg0, __jni_impl::android::os::Handler arg1)
	{
		__thiz.callMethod<void>(
			"addOnRoutingChangedListener",
			"(Landroid/media/AudioRouting$OnRoutingChangedListener;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void MediaPlayer::removeOnRoutingChangedListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"removeOnRoutingChangedListener",
			"(Landroid/media/AudioRouting$OnRoutingChangedListener;)V",
			arg0.__jniObject().object());
	}
	void MediaPlayer::setAudioSessionId(jint arg0)
	{
		__thiz.callMethod<void>(
			"setAudioSessionId",
			"(I)V",
			arg0);
	}
	jint MediaPlayer::getAudioSessionId()
	{
		return __thiz.callMethod<jint>(
			"getAudioSessionId",
			"()I");
	}
	QAndroidJniObject MediaPlayer::getMetrics()
	{
		return __thiz.callObjectMethod(
			"getMetrics",
			"()Landroid/os/PersistableBundle;");
	}
	QAndroidJniObject MediaPlayer::getTimestamp()
	{
		return __thiz.callObjectMethod(
			"getTimestamp",
			"()Landroid/media/MediaTimestamp;");
	}
	void MediaPlayer::pause()
	{
		__thiz.callMethod<void>(
			"pause",
			"()V");
	}
	QAndroidJniObject MediaPlayer::createVolumeShaper(__jni_impl::android::media::VolumeShaper_Configuration arg0)
	{
		return __thiz.callObjectMethod(
			"createVolumeShaper",
			"(Landroid/media/VolumeShaper$Configuration;)Landroid/media/VolumeShaper;",
			arg0.__jniObject().object());
	}
	void MediaPlayer::setLooping(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setLooping",
			"(Z)V",
			arg0);
	}
	jboolean MediaPlayer::isLooping()
	{
		return __thiz.callMethod<jboolean>(
			"isLooping",
			"()Z");
	}
	void MediaPlayer::setVolume(jfloat arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"setVolume",
			"(FF)V",
			arg0,
			arg1);
	}
	jboolean MediaPlayer::isPlaying()
	{
		return __thiz.callMethod<jboolean>(
			"isPlaying",
			"()Z");
	}
	void MediaPlayer::seekTo(jlong arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"seekTo",
			"(JI)V",
			arg0,
			arg1);
	}
	void MediaPlayer::seekTo(jint arg0)
	{
		__thiz.callMethod<void>(
			"seekTo",
			"(I)V",
			arg0);
	}
	void MediaPlayer::setOnInfoListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnInfoListener",
			"(Landroid/media/MediaPlayer$OnInfoListener;)V",
			arg0.__jniObject().object());
	}
	void MediaPlayer::setOnErrorListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnErrorListener",
			"(Landroid/media/MediaPlayer$OnErrorListener;)V",
			arg0.__jniObject().object());
	}
	void MediaPlayer::selectTrack(jint arg0)
	{
		__thiz.callMethod<void>(
			"selectTrack",
			"(I)V",
			arg0);
	}
	jint MediaPlayer::getSelectedTrack(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getSelectedTrack",
			"(I)I",
			arg0);
	}
} // namespace __jni_impl::android::media

namespace android::media
{
	class MediaPlayer : public __jni_impl::android::media::MediaPlayer
	{
	public:
		MediaPlayer(QAndroidJniObject obj) { __thiz = obj; }
		MediaPlayer()
		{
			__constructor();
		}
	};
} // namespace android::media

#endif // ANDROID_MEDIA_MEDIAPLAYER

