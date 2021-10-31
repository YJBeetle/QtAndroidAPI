#include "../content/res/AssetFileDescriptor.hpp"
#include "../os/Handler.hpp"
#include "./JetPlayer.hpp"

namespace android::media
{
	// Fields
	
	JetPlayer::JetPlayer(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject JetPlayer::getJetPlayer()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.JetPlayer",
			"getJetPlayer",
			"()Landroid/media/JetPlayer;"
		);
	}
	jint JetPlayer::getMaxTracks()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.media.JetPlayer",
			"getMaxTracks",
			"()I"
		);
	}
	jboolean JetPlayer::clearQueue()
	{
		return __thiz.callMethod<jboolean>(
			"clearQueue",
			"()Z"
		);
	}
	jobject JetPlayer::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jboolean JetPlayer::closeJetFile()
	{
		return __thiz.callMethod<jboolean>(
			"closeJetFile",
			"()Z"
		);
	}
	jboolean JetPlayer::loadJetFile(android::content::res::AssetFileDescriptor arg0)
	{
		return __thiz.callMethod<jboolean>(
			"loadJetFile",
			"(Landroid/content/res/AssetFileDescriptor;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean JetPlayer::loadJetFile(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"loadJetFile",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean JetPlayer::pause()
	{
		return __thiz.callMethod<jboolean>(
			"pause",
			"()Z"
		);
	}
	jboolean JetPlayer::play()
	{
		return __thiz.callMethod<jboolean>(
			"play",
			"()Z"
		);
	}
	jboolean JetPlayer::queueJetSegment(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jbyte arg5)
	{
		return __thiz.callMethod<jboolean>(
			"queueJetSegment",
			"(IIIIIB)Z",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	jboolean JetPlayer::queueJetSegmentMuteArray(jint arg0, jint arg1, jint arg2, jint arg3, jbooleanArray arg4, jbyte arg5)
	{
		return __thiz.callMethod<jboolean>(
			"queueJetSegmentMuteArray",
			"(IIII[ZB)Z",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	void JetPlayer::release()
	{
		__thiz.callMethod<void>(
			"release",
			"()V"
		);
	}
	void JetPlayer::setEventListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setEventListener",
			"(Landroid/media/JetPlayer$OnJetEventListener;)V",
			arg0.__jniObject().object()
		);
	}
	void JetPlayer::setEventListener(__JniBaseClass arg0, android::os::Handler arg1)
	{
		__thiz.callMethod<void>(
			"setEventListener",
			"(Landroid/media/JetPlayer$OnJetEventListener;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean JetPlayer::setMuteArray(jbooleanArray arg0, jboolean arg1)
	{
		return __thiz.callMethod<jboolean>(
			"setMuteArray",
			"([ZZ)Z",
			arg0,
			arg1
		);
	}
	jboolean JetPlayer::setMuteFlag(jint arg0, jboolean arg1, jboolean arg2)
	{
		return __thiz.callMethod<jboolean>(
			"setMuteFlag",
			"(IZZ)Z",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean JetPlayer::setMuteFlags(jint arg0, jboolean arg1)
	{
		return __thiz.callMethod<jboolean>(
			"setMuteFlags",
			"(IZ)Z",
			arg0,
			arg1
		);
	}
	jboolean JetPlayer::triggerClip(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"triggerClip",
			"(I)Z",
			arg0
		);
	}
} // namespace android::media

