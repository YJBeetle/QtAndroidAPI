#include "../content/Context.hpp"
#include "../content/res/AssetFileDescriptor.hpp"
#include "./AudioAttributes.hpp"
#include "./AudioDeviceInfo.hpp"
#include "./MediaDataSource.hpp"
#include "./MediaDrm_KeyRequest.hpp"
#include "./MediaPlayer_DrmInfo.hpp"
#include "./MediaTimestamp.hpp"
#include "./PlaybackParams.hpp"
#include "./SyncParams.hpp"
#include "./VolumeShaper.hpp"
#include "./VolumeShaper_Configuration.hpp"
#include "../net/Uri.hpp"
#include "../os/Handler.hpp"
#include "../os/PersistableBundle.hpp"
#include "../view/Surface.hpp"
#include "../../java/io/FileDescriptor.hpp"
#include "../../java/util/UUID.hpp"
#include "./MediaPlayer.hpp"

namespace android::media
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
	
	MediaPlayer::MediaPlayer(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	MediaPlayer::MediaPlayer()
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaPlayer",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject MediaPlayer::create(android::content::Context arg0, android::net::Uri arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.MediaPlayer",
			"create",
			"(Landroid/content/Context;Landroid/net/Uri;)Landroid/media/MediaPlayer;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject MediaPlayer::create(android::content::Context arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.MediaPlayer",
			"create",
			"(Landroid/content/Context;I)Landroid/media/MediaPlayer;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject MediaPlayer::create(android::content::Context arg0, android::net::Uri arg1, __JniBaseClass arg2)
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
	QAndroidJniObject MediaPlayer::create(android::content::Context arg0, jint arg1, android::media::AudioAttributes arg2, jint arg3)
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
	QAndroidJniObject MediaPlayer::create(android::content::Context arg0, android::net::Uri arg1, __JniBaseClass arg2, android::media::AudioAttributes arg3, jint arg4)
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
	void MediaPlayer::addOnRoutingChangedListener(__JniBaseClass arg0, android::os::Handler arg1)
	{
		__thiz.callMethod<void>(
			"addOnRoutingChangedListener",
			"(Landroid/media/AudioRouting$OnRoutingChangedListener;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void MediaPlayer::addTimedTextSource(java::io::FileDescriptor arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"addTimedTextSource",
			"(Ljava/io/FileDescriptor;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
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
	void MediaPlayer::addTimedTextSource(android::content::Context arg0, android::net::Uri arg1, jstring arg2)
	{
		__thiz.callMethod<void>(
			"addTimedTextSource",
			"(Landroid/content/Context;Landroid/net/Uri;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void MediaPlayer::addTimedTextSource(java::io::FileDescriptor arg0, jlong arg1, jlong arg2, jstring arg3)
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
	QAndroidJniObject MediaPlayer::createVolumeShaper(android::media::VolumeShaper_Configuration arg0)
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
	jint MediaPlayer::getDuration()
	{
		return __thiz.callMethod<jint>(
			"getDuration",
			"()I"
		);
	}
	QAndroidJniObject MediaPlayer::getKeyRequest(jbyteArray arg0, jbyteArray arg1, jstring arg2, jint arg3, __JniBaseClass arg4)
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
	void MediaPlayer::prepareDrm(java::util::UUID arg0)
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
	void MediaPlayer::removeOnRoutingChangedListener(__JniBaseClass arg0)
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
	void MediaPlayer::setAudioAttributes(android::media::AudioAttributes arg0)
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
	void MediaPlayer::setDataSource(android::content::res::AssetFileDescriptor arg0)
	{
		__thiz.callMethod<void>(
			"setDataSource",
			"(Landroid/content/res/AssetFileDescriptor;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaPlayer::setDataSource(android::media::MediaDataSource arg0)
	{
		__thiz.callMethod<void>(
			"setDataSource",
			"(Landroid/media/MediaDataSource;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaPlayer::setDataSource(java::io::FileDescriptor arg0)
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
	void MediaPlayer::setDataSource(android::content::Context arg0, android::net::Uri arg1)
	{
		__thiz.callMethod<void>(
			"setDataSource",
			"(Landroid/content/Context;Landroid/net/Uri;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void MediaPlayer::setDataSource(android::content::Context arg0, android::net::Uri arg1, __JniBaseClass arg2)
	{
		__thiz.callMethod<void>(
			"setDataSource",
			"(Landroid/content/Context;Landroid/net/Uri;Ljava/util/Map;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void MediaPlayer::setDataSource(java::io::FileDescriptor arg0, jlong arg1, jlong arg2)
	{
		__thiz.callMethod<void>(
			"setDataSource",
			"(Ljava/io/FileDescriptor;JJ)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void MediaPlayer::setDataSource(android::content::Context arg0, android::net::Uri arg1, __JniBaseClass arg2, __JniBaseClass arg3)
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
	void MediaPlayer::setDisplay(__JniBaseClass arg0)
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
	void MediaPlayer::setLooping(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setLooping",
			"(Z)V",
			arg0
		);
	}
	void MediaPlayer::setNextMediaPlayer(android::media::MediaPlayer arg0)
	{
		__thiz.callMethod<void>(
			"setNextMediaPlayer",
			"(Landroid/media/MediaPlayer;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaPlayer::setOnBufferingUpdateListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnBufferingUpdateListener",
			"(Landroid/media/MediaPlayer$OnBufferingUpdateListener;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaPlayer::setOnCompletionListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnCompletionListener",
			"(Landroid/media/MediaPlayer$OnCompletionListener;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaPlayer::setOnDrmConfigHelper(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnDrmConfigHelper",
			"(Landroid/media/MediaPlayer$OnDrmConfigHelper;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaPlayer::setOnDrmInfoListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnDrmInfoListener",
			"(Landroid/media/MediaPlayer$OnDrmInfoListener;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaPlayer::setOnDrmInfoListener(__JniBaseClass arg0, android::os::Handler arg1)
	{
		__thiz.callMethod<void>(
			"setOnDrmInfoListener",
			"(Landroid/media/MediaPlayer$OnDrmInfoListener;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void MediaPlayer::setOnDrmPreparedListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnDrmPreparedListener",
			"(Landroid/media/MediaPlayer$OnDrmPreparedListener;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaPlayer::setOnDrmPreparedListener(__JniBaseClass arg0, android::os::Handler arg1)
	{
		__thiz.callMethod<void>(
			"setOnDrmPreparedListener",
			"(Landroid/media/MediaPlayer$OnDrmPreparedListener;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void MediaPlayer::setOnErrorListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnErrorListener",
			"(Landroid/media/MediaPlayer$OnErrorListener;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaPlayer::setOnInfoListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnInfoListener",
			"(Landroid/media/MediaPlayer$OnInfoListener;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaPlayer::setOnMediaTimeDiscontinuityListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnMediaTimeDiscontinuityListener",
			"(Landroid/media/MediaPlayer$OnMediaTimeDiscontinuityListener;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaPlayer::setOnMediaTimeDiscontinuityListener(__JniBaseClass arg0, android::os::Handler arg1)
	{
		__thiz.callMethod<void>(
			"setOnMediaTimeDiscontinuityListener",
			"(Landroid/media/MediaPlayer$OnMediaTimeDiscontinuityListener;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void MediaPlayer::setOnPreparedListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnPreparedListener",
			"(Landroid/media/MediaPlayer$OnPreparedListener;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaPlayer::setOnSeekCompleteListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnSeekCompleteListener",
			"(Landroid/media/MediaPlayer$OnSeekCompleteListener;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaPlayer::setOnSubtitleDataListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnSubtitleDataListener",
			"(Landroid/media/MediaPlayer$OnSubtitleDataListener;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaPlayer::setOnSubtitleDataListener(__JniBaseClass arg0, android::os::Handler arg1)
	{
		__thiz.callMethod<void>(
			"setOnSubtitleDataListener",
			"(Landroid/media/MediaPlayer$OnSubtitleDataListener;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void MediaPlayer::setOnTimedMetaDataAvailableListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnTimedMetaDataAvailableListener",
			"(Landroid/media/MediaPlayer$OnTimedMetaDataAvailableListener;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaPlayer::setOnTimedTextListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnTimedTextListener",
			"(Landroid/media/MediaPlayer$OnTimedTextListener;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaPlayer::setOnVideoSizeChangedListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnVideoSizeChangedListener",
			"(Landroid/media/MediaPlayer$OnVideoSizeChangedListener;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaPlayer::setPlaybackParams(android::media::PlaybackParams arg0)
	{
		__thiz.callMethod<void>(
			"setPlaybackParams",
			"(Landroid/media/PlaybackParams;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean MediaPlayer::setPreferredDevice(android::media::AudioDeviceInfo arg0)
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
	void MediaPlayer::setSurface(android::view::Surface arg0)
	{
		__thiz.callMethod<void>(
			"setSurface",
			"(Landroid/view/Surface;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaPlayer::setSyncParams(android::media::SyncParams arg0)
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
	void MediaPlayer::setWakeMode(android::content::Context arg0, jint arg1)
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
} // namespace android::media

