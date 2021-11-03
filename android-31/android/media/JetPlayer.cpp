#include "../content/res/AssetFileDescriptor.hpp"
#include "../os/Handler.hpp"
#include "./JetPlayer.hpp"

namespace android::media
{
	// Fields
	
	// QJniObject forward
	JetPlayer::JetPlayer(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::media::JetPlayer JetPlayer::getJetPlayer()
	{
		return callStaticObjectMethod(
			"android.media.JetPlayer",
			"getJetPlayer",
			"()Landroid/media/JetPlayer;"
		);
	}
	jint JetPlayer::getMaxTracks()
	{
		return callStaticMethod<jint>(
			"android.media.JetPlayer",
			"getMaxTracks",
			"()I"
		);
	}
	jboolean JetPlayer::clearQueue()
	{
		return callMethod<jboolean>(
			"clearQueue",
			"()Z"
		);
	}
	jobject JetPlayer::clone()
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jboolean JetPlayer::closeJetFile()
	{
		return callMethod<jboolean>(
			"closeJetFile",
			"()Z"
		);
	}
	jboolean JetPlayer::loadJetFile(android::content::res::AssetFileDescriptor arg0)
	{
		return callMethod<jboolean>(
			"loadJetFile",
			"(Landroid/content/res/AssetFileDescriptor;)Z",
			arg0.object()
		);
	}
	jboolean JetPlayer::loadJetFile(jstring arg0)
	{
		return callMethod<jboolean>(
			"loadJetFile",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean JetPlayer::pause()
	{
		return callMethod<jboolean>(
			"pause",
			"()Z"
		);
	}
	jboolean JetPlayer::play()
	{
		return callMethod<jboolean>(
			"play",
			"()Z"
		);
	}
	jboolean JetPlayer::queueJetSegment(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jbyte arg5)
	{
		return callMethod<jboolean>(
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
		return callMethod<jboolean>(
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
		callMethod<void>(
			"release",
			"()V"
		);
	}
	void JetPlayer::setEventListener(JObject arg0)
	{
		callMethod<void>(
			"setEventListener",
			"(Landroid/media/JetPlayer$OnJetEventListener;)V",
			arg0.object()
		);
	}
	void JetPlayer::setEventListener(JObject arg0, android::os::Handler arg1)
	{
		callMethod<void>(
			"setEventListener",
			"(Landroid/media/JetPlayer$OnJetEventListener;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	jboolean JetPlayer::setMuteArray(jbooleanArray arg0, jboolean arg1)
	{
		return callMethod<jboolean>(
			"setMuteArray",
			"([ZZ)Z",
			arg0,
			arg1
		);
	}
	jboolean JetPlayer::setMuteFlag(jint arg0, jboolean arg1, jboolean arg2)
	{
		return callMethod<jboolean>(
			"setMuteFlag",
			"(IZZ)Z",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean JetPlayer::setMuteFlags(jint arg0, jboolean arg1)
	{
		return callMethod<jboolean>(
			"setMuteFlags",
			"(IZ)Z",
			arg0,
			arg1
		);
	}
	jboolean JetPlayer::triggerClip(jint arg0)
	{
		return callMethod<jboolean>(
			"triggerClip",
			"(I)Z",
			arg0
		);
	}
} // namespace android::media

