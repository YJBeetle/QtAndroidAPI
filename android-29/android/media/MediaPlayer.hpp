#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::content::res
{
	class AssetFileDescriptor;
}
namespace __jni_impl::android::media
{
	class AudioAttributes;
}
namespace __jni_impl::android::media
{
	class AudioDeviceInfo;
}
namespace __jni_impl::android::media
{
	class MediaDataSource;
}
namespace __jni_impl::android::media
{
	class MediaDrm_KeyRequest;
}
namespace __jni_impl::android::media
{
	class MediaPlayer_DrmInfo;
}
namespace __jni_impl::android::media
{
	class MediaTimestamp;
}
namespace __jni_impl::android::media
{
	class PlaybackParams;
}
namespace __jni_impl::android::media
{
	class SyncParams;
}
namespace __jni_impl::android::media
{
	class VolumeShaper;
}
namespace __jni_impl::android::media
{
	class VolumeShaper_Configuration;
}
namespace __jni_impl::android::net
{
	class Uri;
}
namespace __jni_impl::android::os
{
	class Handler;
}
namespace __jni_impl::android::os
{
	class PersistableBundle;
}
namespace __jni_impl::android::view
{
	class Surface;
}
namespace __jni_impl::java::io
{
	class FileDescriptor;
}
namespace __jni_impl::java::util
{
	class UUID;
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
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject create(__jni_impl::android::content::Context arg0, __jni_impl::android::net::Uri arg1);
		static QAndroidJniObject create(__jni_impl::android::content::Context arg0, jint arg1);
		static QAndroidJniObject create(__jni_impl::android::content::Context arg0, __jni_impl::android::net::Uri arg1, __jni_impl::__JniBaseClass arg2);
		static QAndroidJniObject create(__jni_impl::android::content::Context arg0, jint arg1, __jni_impl::android::media::AudioAttributes arg2, jint arg3);
		static QAndroidJniObject create(__jni_impl::android::content::Context arg0, __jni_impl::android::net::Uri arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::android::media::AudioAttributes arg3, jint arg4);
		void addOnRoutingChangedListener(__jni_impl::__JniBaseClass arg0, __jni_impl::android::os::Handler arg1);
		void addTimedTextSource(__jni_impl::java::io::FileDescriptor arg0, jstring arg1);
		void addTimedTextSource(__jni_impl::java::io::FileDescriptor arg0, const QString &arg1);
		void addTimedTextSource(jstring arg0, jstring arg1);
		void addTimedTextSource(const QString &arg0, const QString &arg1);
		void addTimedTextSource(__jni_impl::android::content::Context arg0, __jni_impl::android::net::Uri arg1, jstring arg2);
		void addTimedTextSource(__jni_impl::android::content::Context arg0, __jni_impl::android::net::Uri arg1, const QString &arg2);
		void addTimedTextSource(__jni_impl::java::io::FileDescriptor arg0, jlong arg1, jlong arg2, jstring arg3);
		void addTimedTextSource(__jni_impl::java::io::FileDescriptor arg0, jlong arg1, jlong arg2, const QString &arg3);
		void attachAuxEffect(jint arg0);
		void clearOnMediaTimeDiscontinuityListener();
		void clearOnSubtitleDataListener();
		QAndroidJniObject createVolumeShaper(__jni_impl::android::media::VolumeShaper_Configuration arg0);
		void deselectTrack(jint arg0);
		jint getAudioSessionId();
		jint getCurrentPosition();
		QAndroidJniObject getDrmInfo();
		jstring getDrmPropertyString(jstring arg0);
		jstring getDrmPropertyString(const QString &arg0);
		jint getDuration();
		QAndroidJniObject getKeyRequest(jbyteArray arg0, jbyteArray arg1, jstring arg2, jint arg3, __jni_impl::__JniBaseClass arg4);
		QAndroidJniObject getKeyRequest(jbyteArray arg0, jbyteArray arg1, const QString &arg2, jint arg3, __jni_impl::__JniBaseClass arg4);
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
		void prepareDrm(__jni_impl::java::util::UUID arg0);
		jbyteArray provideKeyResponse(jbyteArray arg0, jbyteArray arg1);
		void release();
		void releaseDrm();
		void removeOnRoutingChangedListener(__jni_impl::__JniBaseClass arg0);
		void reset();
		void restoreKeys(jbyteArray arg0);
		void seekTo(jint arg0);
		void seekTo(jlong arg0, jint arg1);
		void selectTrack(jint arg0);
		void setAudioAttributes(__jni_impl::android::media::AudioAttributes arg0);
		void setAudioSessionId(jint arg0);
		void setAudioStreamType(jint arg0);
		void setAuxEffectSendLevel(jfloat arg0);
		void setDataSource(__jni_impl::android::content::res::AssetFileDescriptor arg0);
		void setDataSource(__jni_impl::android::media::MediaDataSource arg0);
		void setDataSource(__jni_impl::java::io::FileDescriptor arg0);
		void setDataSource(jstring arg0);
		void setDataSource(const QString &arg0);
		void setDataSource(__jni_impl::android::content::Context arg0, __jni_impl::android::net::Uri arg1);
		void setDataSource(__jni_impl::android::content::Context arg0, __jni_impl::android::net::Uri arg1, __jni_impl::__JniBaseClass arg2);
		void setDataSource(__jni_impl::java::io::FileDescriptor arg0, jlong arg1, jlong arg2);
		void setDataSource(__jni_impl::android::content::Context arg0, __jni_impl::android::net::Uri arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::__JniBaseClass arg3);
		void setDisplay(__jni_impl::__JniBaseClass arg0);
		void setDrmPropertyString(jstring arg0, jstring arg1);
		void setDrmPropertyString(const QString &arg0, const QString &arg1);
		void setLooping(jboolean arg0);
		void setNextMediaPlayer(__jni_impl::android::media::MediaPlayer arg0);
		void setOnBufferingUpdateListener(__jni_impl::__JniBaseClass arg0);
		void setOnCompletionListener(__jni_impl::__JniBaseClass arg0);
		void setOnDrmConfigHelper(__jni_impl::__JniBaseClass arg0);
		void setOnDrmInfoListener(__jni_impl::__JniBaseClass arg0);
		void setOnDrmInfoListener(__jni_impl::__JniBaseClass arg0, __jni_impl::android::os::Handler arg1);
		void setOnDrmPreparedListener(__jni_impl::__JniBaseClass arg0);
		void setOnDrmPreparedListener(__jni_impl::__JniBaseClass arg0, __jni_impl::android::os::Handler arg1);
		void setOnErrorListener(__jni_impl::__JniBaseClass arg0);
		void setOnInfoListener(__jni_impl::__JniBaseClass arg0);
		void setOnMediaTimeDiscontinuityListener(__jni_impl::__JniBaseClass arg0);
		void setOnMediaTimeDiscontinuityListener(__jni_impl::__JniBaseClass arg0, __jni_impl::android::os::Handler arg1);
		void setOnPreparedListener(__jni_impl::__JniBaseClass arg0);
		void setOnSeekCompleteListener(__jni_impl::__JniBaseClass arg0);
		void setOnSubtitleDataListener(__jni_impl::__JniBaseClass arg0);
		void setOnSubtitleDataListener(__jni_impl::__JniBaseClass arg0, __jni_impl::android::os::Handler arg1);
		void setOnTimedMetaDataAvailableListener(__jni_impl::__JniBaseClass arg0);
		void setOnTimedTextListener(__jni_impl::__JniBaseClass arg0);
		void setOnVideoSizeChangedListener(__jni_impl::__JniBaseClass arg0);
		void setPlaybackParams(__jni_impl::android::media::PlaybackParams arg0);
		jboolean setPreferredDevice(__jni_impl::android::media::AudioDeviceInfo arg0);
		void setScreenOnWhilePlaying(jboolean arg0);
		void setSurface(__jni_impl::android::view::Surface arg0);
		void setSyncParams(__jni_impl::android::media::SyncParams arg0);
		void setVideoScalingMode(jint arg0);
		void setVolume(jfloat arg0, jfloat arg1);
		void setWakeMode(__jni_impl::android::content::Context arg0, jint arg1);
		void start();
		void stop();
	};
} // namespace __jni_impl::android::media

#include "../content/Context.hpp"
#include "../content/res/AssetFileDescriptor.hpp"
#include "AudioAttributes.hpp"
#include "AudioDeviceInfo.hpp"
#include "MediaDataSource.hpp"
#include "MediaDrm_KeyRequest.hpp"
#include "MediaPlayer_DrmInfo.hpp"
#include "MediaTimestamp.hpp"
#include "PlaybackParams.hpp"
#include "SyncParams.hpp"
#include "VolumeShaper.hpp"
#include "VolumeShaper_Configuration.hpp"
#include "../net/Uri.hpp"
#include "../os/Handler.hpp"
#include "../os/PersistableBundle.hpp"
#include "../view/Surface.hpp"
#include "../../java/io/FileDescriptor.hpp"
#include "../../java/util/UUID.hpp"

namespace __jni_impl::android::media
{
	// Fields
	jint MediaPlayer::MEDIA_ERROR_IO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaPlayer",
			"MEDIA_ERROR_IO"
		);
	}
	jint MediaPlayer::MEDIA_ERROR_MALFORMED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaPlayer",
			"MEDIA_ERROR_MALFORMED"
		);
	}
	jint MediaPlayer::MEDIA_ERROR_NOT_VALID_FOR_PROGRESSIVE_PLAYBACK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaPlayer",
			"MEDIA_ERROR_NOT_VALID_FOR_PROGRESSIVE_PLAYBACK"
		);
	}
	jint MediaPlayer::MEDIA_ERROR_SERVER_DIED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaPlayer",
			"MEDIA_ERROR_SERVER_DIED"
		);
	}
	jint MediaPlayer::MEDIA_ERROR_TIMED_OUT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaPlayer",
			"MEDIA_ERROR_TIMED_OUT"
		);
	}
	jint MediaPlayer::MEDIA_ERROR_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaPlayer",
			"MEDIA_ERROR_UNKNOWN"
		);
	}
	jint MediaPlayer::MEDIA_ERROR_UNSUPPORTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaPlayer",
			"MEDIA_ERROR_UNSUPPORTED"
		);
	}
	jint MediaPlayer::MEDIA_INFO_AUDIO_NOT_PLAYING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaPlayer",
			"MEDIA_INFO_AUDIO_NOT_PLAYING"
		);
	}
	jint MediaPlayer::MEDIA_INFO_BAD_INTERLEAVING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaPlayer",
			"MEDIA_INFO_BAD_INTERLEAVING"
		);
	}
	jint MediaPlayer::MEDIA_INFO_BUFFERING_END()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaPlayer",
			"MEDIA_INFO_BUFFERING_END"
		);
	}
	jint MediaPlayer::MEDIA_INFO_BUFFERING_START()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaPlayer",
			"MEDIA_INFO_BUFFERING_START"
		);
	}
	jint MediaPlayer::MEDIA_INFO_METADATA_UPDATE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaPlayer",
			"MEDIA_INFO_METADATA_UPDATE"
		);
	}
	jint MediaPlayer::MEDIA_INFO_NOT_SEEKABLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaPlayer",
			"MEDIA_INFO_NOT_SEEKABLE"
		);
	}
	jint MediaPlayer::MEDIA_INFO_STARTED_AS_NEXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaPlayer",
			"MEDIA_INFO_STARTED_AS_NEXT"
		);
	}
	jint MediaPlayer::MEDIA_INFO_SUBTITLE_TIMED_OUT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaPlayer",
			"MEDIA_INFO_SUBTITLE_TIMED_OUT"
		);
	}
	jint MediaPlayer::MEDIA_INFO_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaPlayer",
			"MEDIA_INFO_UNKNOWN"
		);
	}
	jint MediaPlayer::MEDIA_INFO_UNSUPPORTED_SUBTITLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaPlayer",
			"MEDIA_INFO_UNSUPPORTED_SUBTITLE"
		);
	}
	jint MediaPlayer::MEDIA_INFO_VIDEO_NOT_PLAYING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaPlayer",
			"MEDIA_INFO_VIDEO_NOT_PLAYING"
		);
	}
	jint MediaPlayer::MEDIA_INFO_VIDEO_RENDERING_START()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaPlayer",
			"MEDIA_INFO_VIDEO_RENDERING_START"
		);
	}
	jint MediaPlayer::MEDIA_INFO_VIDEO_TRACK_LAGGING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaPlayer",
			"MEDIA_INFO_VIDEO_TRACK_LAGGING"
		);
	}
	jstring MediaPlayer::MEDIA_MIMETYPE_TEXT_SUBRIP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaPlayer",
			"MEDIA_MIMETYPE_TEXT_SUBRIP",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint MediaPlayer::PREPARE_DRM_STATUS_PREPARATION_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaPlayer",
			"PREPARE_DRM_STATUS_PREPARATION_ERROR"
		);
	}
	jint MediaPlayer::PREPARE_DRM_STATUS_PROVISIONING_NETWORK_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaPlayer",
			"PREPARE_DRM_STATUS_PROVISIONING_NETWORK_ERROR"
		);
	}
	jint MediaPlayer::PREPARE_DRM_STATUS_PROVISIONING_SERVER_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaPlayer",
			"PREPARE_DRM_STATUS_PROVISIONING_SERVER_ERROR"
		);
	}
	jint MediaPlayer::PREPARE_DRM_STATUS_SUCCESS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaPlayer",
			"PREPARE_DRM_STATUS_SUCCESS"
		);
	}
	jint MediaPlayer::SEEK_CLOSEST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaPlayer",
			"SEEK_CLOSEST"
		);
	}
	jint MediaPlayer::SEEK_CLOSEST_SYNC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaPlayer",
			"SEEK_CLOSEST_SYNC"
		);
	}
	jint MediaPlayer::SEEK_NEXT_SYNC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaPlayer",
			"SEEK_NEXT_SYNC"
		);
	}
	jint MediaPlayer::SEEK_PREVIOUS_SYNC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaPlayer",
			"SEEK_PREVIOUS_SYNC"
		);
	}
	jint MediaPlayer::VIDEO_SCALING_MODE_SCALE_TO_FIT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaPlayer",
			"VIDEO_SCALING_MODE_SCALE_TO_FIT"
		);
	}
	jint MediaPlayer::VIDEO_SCALING_MODE_SCALE_TO_FIT_WITH_CROPPING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaPlayer",
			"VIDEO_SCALING_MODE_SCALE_TO_FIT_WITH_CROPPING"
		);
	}
	
	// Constructors
	void MediaPlayer::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaPlayer",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject MediaPlayer::create(__jni_impl::android::content::Context arg0, __jni_impl::android::net::Uri arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.MediaPlayer",
			"create",
			"(Landroid/content/Context;Landroid/net/Uri;)Landroid/media/MediaPlayer;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject MediaPlayer::create(__jni_impl::android::content::Context arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.MediaPlayer",
			"create",
			"(Landroid/content/Context;I)Landroid/media/MediaPlayer;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject MediaPlayer::create(__jni_impl::android::content::Context arg0, __jni_impl::android::net::Uri arg1, __jni_impl::__JniBaseClass arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.MediaPlayer",
			"create",
			"(Landroid/content/Context;Landroid/net/Uri;Landroid/view/SurfaceHolder;)Landroid/media/MediaPlayer;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
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
			arg3
		);
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
			arg4
		);
	}
	void MediaPlayer::addOnRoutingChangedListener(__jni_impl::__JniBaseClass arg0, __jni_impl::android::os::Handler arg1)
	{
		__thiz.callMethod<void>(
			"addOnRoutingChangedListener",
			"(Landroid/media/AudioRouting$OnRoutingChangedListener;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void MediaPlayer::addTimedTextSource(__jni_impl::java::io::FileDescriptor arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"addTimedTextSource",
			"(Ljava/io/FileDescriptor;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void MediaPlayer::addTimedTextSource(__jni_impl::java::io::FileDescriptor arg0, const QString &arg1)
	{
		__thiz.callMethod<void>(
			"addTimedTextSource",
			"(Ljava/io/FileDescriptor;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void MediaPlayer::addTimedTextSource(jstring arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"addTimedTextSource",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void MediaPlayer::addTimedTextSource(const QString &arg0, const QString &arg1)
	{
		__thiz.callMethod<void>(
			"addTimedTextSource",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void MediaPlayer::addTimedTextSource(__jni_impl::android::content::Context arg0, __jni_impl::android::net::Uri arg1, jstring arg2)
	{
		__thiz.callMethod<void>(
			"addTimedTextSource",
			"(Landroid/content/Context;Landroid/net/Uri;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void MediaPlayer::addTimedTextSource(__jni_impl::android::content::Context arg0, __jni_impl::android::net::Uri arg1, const QString &arg2)
	{
		__thiz.callMethod<void>(
			"addTimedTextSource",
			"(Landroid/content/Context;Landroid/net/Uri;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
	void MediaPlayer::addTimedTextSource(__jni_impl::java::io::FileDescriptor arg0, jlong arg1, jlong arg2, jstring arg3)
	{
		__thiz.callMethod<void>(
			"addTimedTextSource",
			"(Ljava/io/FileDescriptor;JJLjava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3
		);
	}
	void MediaPlayer::addTimedTextSource(__jni_impl::java::io::FileDescriptor arg0, jlong arg1, jlong arg2, const QString &arg3)
	{
		__thiz.callMethod<void>(
			"addTimedTextSource",
			"(Ljava/io/FileDescriptor;JJLjava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			QAndroidJniObject::fromString(arg3).object<jstring>()
		);
	}
	void MediaPlayer::attachAuxEffect(jint arg0)
	{
		__thiz.callMethod<void>(
			"attachAuxEffect",
			"(I)V",
			arg0
		);
	}
	void MediaPlayer::clearOnMediaTimeDiscontinuityListener()
	{
		__thiz.callMethod<void>(
			"clearOnMediaTimeDiscontinuityListener",
			"()V"
		);
	}
	void MediaPlayer::clearOnSubtitleDataListener()
	{
		__thiz.callMethod<void>(
			"clearOnSubtitleDataListener",
			"()V"
		);
	}
	QAndroidJniObject MediaPlayer::createVolumeShaper(__jni_impl::android::media::VolumeShaper_Configuration arg0)
	{
		return __thiz.callObjectMethod(
			"createVolumeShaper",
			"(Landroid/media/VolumeShaper$Configuration;)Landroid/media/VolumeShaper;",
			arg0.__jniObject().object()
		);
	}
	void MediaPlayer::deselectTrack(jint arg0)
	{
		__thiz.callMethod<void>(
			"deselectTrack",
			"(I)V",
			arg0
		);
	}
	jint MediaPlayer::getAudioSessionId()
	{
		return __thiz.callMethod<jint>(
			"getAudioSessionId",
			"()I"
		);
	}
	jint MediaPlayer::getCurrentPosition()
	{
		return __thiz.callMethod<jint>(
			"getCurrentPosition",
			"()I"
		);
	}
	QAndroidJniObject MediaPlayer::getDrmInfo()
	{
		return __thiz.callObjectMethod(
			"getDrmInfo",
			"()Landroid/media/MediaPlayer$DrmInfo;"
		);
	}
	jstring MediaPlayer::getDrmPropertyString(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getDrmPropertyString",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring MediaPlayer::getDrmPropertyString(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getDrmPropertyString",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
	jint MediaPlayer::getDuration()
	{
		return __thiz.callMethod<jint>(
			"getDuration",
			"()I"
		);
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
			arg4.__jniObject().object()
		);
	}
	QAndroidJniObject MediaPlayer::getKeyRequest(jbyteArray arg0, jbyteArray arg1, const QString &arg2, jint arg3, __jni_impl::__JniBaseClass arg4)
	{
		return __thiz.callObjectMethod(
			"getKeyRequest",
			"([B[BLjava/lang/String;ILjava/util/Map;)Landroid/media/MediaDrm$KeyRequest;",
			arg0,
			arg1,
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			arg3,
			arg4.__jniObject().object()
		);
	}
	QAndroidJniObject MediaPlayer::getMetrics()
	{
		return __thiz.callObjectMethod(
			"getMetrics",
			"()Landroid/os/PersistableBundle;"
		);
	}
	QAndroidJniObject MediaPlayer::getPlaybackParams()
	{
		return __thiz.callObjectMethod(
			"getPlaybackParams",
			"()Landroid/media/PlaybackParams;"
		);
	}
	QAndroidJniObject MediaPlayer::getPreferredDevice()
	{
		return __thiz.callObjectMethod(
			"getPreferredDevice",
			"()Landroid/media/AudioDeviceInfo;"
		);
	}
	QAndroidJniObject MediaPlayer::getRoutedDevice()
	{
		return __thiz.callObjectMethod(
			"getRoutedDevice",
			"()Landroid/media/AudioDeviceInfo;"
		);
	}
	jint MediaPlayer::getSelectedTrack(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getSelectedTrack",
			"(I)I",
			arg0
		);
	}
	QAndroidJniObject MediaPlayer::getSyncParams()
	{
		return __thiz.callObjectMethod(
			"getSyncParams",
			"()Landroid/media/SyncParams;"
		);
	}
	QAndroidJniObject MediaPlayer::getTimestamp()
	{
		return __thiz.callObjectMethod(
			"getTimestamp",
			"()Landroid/media/MediaTimestamp;"
		);
	}
	jarray MediaPlayer::getTrackInfo()
	{
		return __thiz.callObjectMethod(
			"getTrackInfo",
			"()[Landroid/media/MediaPlayer$TrackInfo;"
		).object<jarray>();
	}
	jint MediaPlayer::getVideoHeight()
	{
		return __thiz.callMethod<jint>(
			"getVideoHeight",
			"()I"
		);
	}
	jint MediaPlayer::getVideoWidth()
	{
		return __thiz.callMethod<jint>(
			"getVideoWidth",
			"()I"
		);
	}
	jboolean MediaPlayer::isLooping()
	{
		return __thiz.callMethod<jboolean>(
			"isLooping",
			"()Z"
		);
	}
	jboolean MediaPlayer::isPlaying()
	{
		return __thiz.callMethod<jboolean>(
			"isPlaying",
			"()Z"
		);
	}
	void MediaPlayer::pause()
	{
		__thiz.callMethod<void>(
			"pause",
			"()V"
		);
	}
	void MediaPlayer::prepare()
	{
		__thiz.callMethod<void>(
			"prepare",
			"()V"
		);
	}
	void MediaPlayer::prepareAsync()
	{
		__thiz.callMethod<void>(
			"prepareAsync",
			"()V"
		);
	}
	void MediaPlayer::prepareDrm(__jni_impl::java::util::UUID arg0)
	{
		__thiz.callMethod<void>(
			"prepareDrm",
			"(Ljava/util/UUID;)V",
			arg0.__jniObject().object()
		);
	}
	jbyteArray MediaPlayer::provideKeyResponse(jbyteArray arg0, jbyteArray arg1)
	{
		return __thiz.callObjectMethod(
			"provideKeyResponse",
			"([B[B)[B",
			arg0,
			arg1
		).object<jbyteArray>();
	}
	void MediaPlayer::release()
	{
		__thiz.callMethod<void>(
			"release",
			"()V"
		);
	}
	void MediaPlayer::releaseDrm()
	{
		__thiz.callMethod<void>(
			"releaseDrm",
			"()V"
		);
	}
	void MediaPlayer::removeOnRoutingChangedListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"removeOnRoutingChangedListener",
			"(Landroid/media/AudioRouting$OnRoutingChangedListener;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaPlayer::reset()
	{
		__thiz.callMethod<void>(
			"reset",
			"()V"
		);
	}
	void MediaPlayer::restoreKeys(jbyteArray arg0)
	{
		__thiz.callMethod<void>(
			"restoreKeys",
			"([B)V",
			arg0
		);
	}
	void MediaPlayer::seekTo(jint arg0)
	{
		__thiz.callMethod<void>(
			"seekTo",
			"(I)V",
			arg0
		);
	}
	void MediaPlayer::seekTo(jlong arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"seekTo",
			"(JI)V",
			arg0,
			arg1
		);
	}
	void MediaPlayer::selectTrack(jint arg0)
	{
		__thiz.callMethod<void>(
			"selectTrack",
			"(I)V",
			arg0
		);
	}
	void MediaPlayer::setAudioAttributes(__jni_impl::android::media::AudioAttributes arg0)
	{
		__thiz.callMethod<void>(
			"setAudioAttributes",
			"(Landroid/media/AudioAttributes;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaPlayer::setAudioSessionId(jint arg0)
	{
		__thiz.callMethod<void>(
			"setAudioSessionId",
			"(I)V",
			arg0
		);
	}
	void MediaPlayer::setAudioStreamType(jint arg0)
	{
		__thiz.callMethod<void>(
			"setAudioStreamType",
			"(I)V",
			arg0
		);
	}
	void MediaPlayer::setAuxEffectSendLevel(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setAuxEffectSendLevel",
			"(F)V",
			arg0
		);
	}
	void MediaPlayer::setDataSource(__jni_impl::android::content::res::AssetFileDescriptor arg0)
	{
		__thiz.callMethod<void>(
			"setDataSource",
			"(Landroid/content/res/AssetFileDescriptor;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaPlayer::setDataSource(__jni_impl::android::media::MediaDataSource arg0)
	{
		__thiz.callMethod<void>(
			"setDataSource",
			"(Landroid/media/MediaDataSource;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaPlayer::setDataSource(__jni_impl::java::io::FileDescriptor arg0)
	{
		__thiz.callMethod<void>(
			"setDataSource",
			"(Ljava/io/FileDescriptor;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaPlayer::setDataSource(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setDataSource",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void MediaPlayer::setDataSource(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setDataSource",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void MediaPlayer::setDataSource(__jni_impl::android::content::Context arg0, __jni_impl::android::net::Uri arg1)
	{
		__thiz.callMethod<void>(
			"setDataSource",
			"(Landroid/content/Context;Landroid/net/Uri;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void MediaPlayer::setDataSource(__jni_impl::android::content::Context arg0, __jni_impl::android::net::Uri arg1, __jni_impl::__JniBaseClass arg2)
	{
		__thiz.callMethod<void>(
			"setDataSource",
			"(Landroid/content/Context;Landroid/net/Uri;Ljava/util/Map;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void MediaPlayer::setDataSource(__jni_impl::java::io::FileDescriptor arg0, jlong arg1, jlong arg2)
	{
		__thiz.callMethod<void>(
			"setDataSource",
			"(Ljava/io/FileDescriptor;JJ)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void MediaPlayer::setDataSource(__jni_impl::android::content::Context arg0, __jni_impl::android::net::Uri arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::__JniBaseClass arg3)
	{
		__thiz.callMethod<void>(
			"setDataSource",
			"(Landroid/content/Context;Landroid/net/Uri;Ljava/util/Map;Ljava/util/List;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	void MediaPlayer::setDisplay(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setDisplay",
			"(Landroid/view/SurfaceHolder;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaPlayer::setDrmPropertyString(jstring arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"setDrmPropertyString",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void MediaPlayer::setDrmPropertyString(const QString &arg0, const QString &arg1)
	{
		__thiz.callMethod<void>(
			"setDrmPropertyString",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void MediaPlayer::setLooping(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setLooping",
			"(Z)V",
			arg0
		);
	}
	void MediaPlayer::setNextMediaPlayer(__jni_impl::android::media::MediaPlayer arg0)
	{
		__thiz.callMethod<void>(
			"setNextMediaPlayer",
			"(Landroid/media/MediaPlayer;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaPlayer::setOnBufferingUpdateListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnBufferingUpdateListener",
			"(Landroid/media/MediaPlayer$OnBufferingUpdateListener;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaPlayer::setOnCompletionListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnCompletionListener",
			"(Landroid/media/MediaPlayer$OnCompletionListener;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaPlayer::setOnDrmConfigHelper(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnDrmConfigHelper",
			"(Landroid/media/MediaPlayer$OnDrmConfigHelper;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaPlayer::setOnDrmInfoListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnDrmInfoListener",
			"(Landroid/media/MediaPlayer$OnDrmInfoListener;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaPlayer::setOnDrmInfoListener(__jni_impl::__JniBaseClass arg0, __jni_impl::android::os::Handler arg1)
	{
		__thiz.callMethod<void>(
			"setOnDrmInfoListener",
			"(Landroid/media/MediaPlayer$OnDrmInfoListener;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void MediaPlayer::setOnDrmPreparedListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnDrmPreparedListener",
			"(Landroid/media/MediaPlayer$OnDrmPreparedListener;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaPlayer::setOnDrmPreparedListener(__jni_impl::__JniBaseClass arg0, __jni_impl::android::os::Handler arg1)
	{
		__thiz.callMethod<void>(
			"setOnDrmPreparedListener",
			"(Landroid/media/MediaPlayer$OnDrmPreparedListener;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void MediaPlayer::setOnErrorListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnErrorListener",
			"(Landroid/media/MediaPlayer$OnErrorListener;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaPlayer::setOnInfoListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnInfoListener",
			"(Landroid/media/MediaPlayer$OnInfoListener;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaPlayer::setOnMediaTimeDiscontinuityListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnMediaTimeDiscontinuityListener",
			"(Landroid/media/MediaPlayer$OnMediaTimeDiscontinuityListener;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaPlayer::setOnMediaTimeDiscontinuityListener(__jni_impl::__JniBaseClass arg0, __jni_impl::android::os::Handler arg1)
	{
		__thiz.callMethod<void>(
			"setOnMediaTimeDiscontinuityListener",
			"(Landroid/media/MediaPlayer$OnMediaTimeDiscontinuityListener;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void MediaPlayer::setOnPreparedListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnPreparedListener",
			"(Landroid/media/MediaPlayer$OnPreparedListener;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaPlayer::setOnSeekCompleteListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnSeekCompleteListener",
			"(Landroid/media/MediaPlayer$OnSeekCompleteListener;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaPlayer::setOnSubtitleDataListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnSubtitleDataListener",
			"(Landroid/media/MediaPlayer$OnSubtitleDataListener;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaPlayer::setOnSubtitleDataListener(__jni_impl::__JniBaseClass arg0, __jni_impl::android::os::Handler arg1)
	{
		__thiz.callMethod<void>(
			"setOnSubtitleDataListener",
			"(Landroid/media/MediaPlayer$OnSubtitleDataListener;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void MediaPlayer::setOnTimedMetaDataAvailableListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnTimedMetaDataAvailableListener",
			"(Landroid/media/MediaPlayer$OnTimedMetaDataAvailableListener;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaPlayer::setOnTimedTextListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnTimedTextListener",
			"(Landroid/media/MediaPlayer$OnTimedTextListener;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaPlayer::setOnVideoSizeChangedListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnVideoSizeChangedListener",
			"(Landroid/media/MediaPlayer$OnVideoSizeChangedListener;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaPlayer::setPlaybackParams(__jni_impl::android::media::PlaybackParams arg0)
	{
		__thiz.callMethod<void>(
			"setPlaybackParams",
			"(Landroid/media/PlaybackParams;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean MediaPlayer::setPreferredDevice(__jni_impl::android::media::AudioDeviceInfo arg0)
	{
		return __thiz.callMethod<jboolean>(
			"setPreferredDevice",
			"(Landroid/media/AudioDeviceInfo;)Z",
			arg0.__jniObject().object()
		);
	}
	void MediaPlayer::setScreenOnWhilePlaying(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setScreenOnWhilePlaying",
			"(Z)V",
			arg0
		);
	}
	void MediaPlayer::setSurface(__jni_impl::android::view::Surface arg0)
	{
		__thiz.callMethod<void>(
			"setSurface",
			"(Landroid/view/Surface;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaPlayer::setSyncParams(__jni_impl::android::media::SyncParams arg0)
	{
		__thiz.callMethod<void>(
			"setSyncParams",
			"(Landroid/media/SyncParams;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaPlayer::setVideoScalingMode(jint arg0)
	{
		__thiz.callMethod<void>(
			"setVideoScalingMode",
			"(I)V",
			arg0
		);
	}
	void MediaPlayer::setVolume(jfloat arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"setVolume",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void MediaPlayer::setWakeMode(__jni_impl::android::content::Context arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setWakeMode",
			"(Landroid/content/Context;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void MediaPlayer::start()
	{
		__thiz.callMethod<void>(
			"start",
			"()V"
		);
	}
	void MediaPlayer::stop()
	{
		__thiz.callMethod<void>(
			"stop",
			"()V"
		);
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

