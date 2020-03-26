#pragma once

#ifndef ANDROID_MEDIA_JETPLAYER
#define ANDROID_MEDIA_JETPLAYER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Handler;
}
namespace __jni_impl::android::content::res
{
	class AssetFileDescriptor;
}

namespace __jni_impl::android::media
{
	class JetPlayer : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jobject clone();
		void release();
		void setEventListener(__jni_impl::__JniBaseClass arg0);
		void setEventListener(__jni_impl::__JniBaseClass arg0, __jni_impl::android::os::Handler arg1);
		static QAndroidJniObject getJetPlayer();
		static jint getMaxTracks();
		jboolean loadJetFile(jstring arg0);
		jboolean loadJetFile(__jni_impl::android::content::res::AssetFileDescriptor arg0);
		jboolean closeJetFile();
		jboolean queueJetSegment(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jbyte arg5);
		jboolean queueJetSegmentMuteArray(jint arg0, jint arg1, jint arg2, jint arg3, jbooleanArray arg4, jbyte arg5);
		jboolean setMuteFlags(jint arg0, jboolean arg1);
		jboolean setMuteArray(jbooleanArray arg0, jboolean arg1);
		jboolean setMuteFlag(jint arg0, jboolean arg1, jboolean arg2);
		jboolean triggerClip(jint arg0);
		jboolean clearQueue();
		jboolean pause();
		jboolean play();
	};
} // namespace __jni_impl::android::media

#include "../os/Handler.hpp"
#include "../content/res/AssetFileDescriptor.hpp"

namespace __jni_impl::android::media
{
	// Fields
	
	// Constructors
	void JetPlayer::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.JetPlayer",
			"(V)V");
	}
	
	// Methods
	jobject JetPlayer::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	void JetPlayer::release()
	{
		__thiz.callMethod<void>(
			"release",
			"()V"
		);
	}
	void JetPlayer::setEventListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setEventListener",
			"(Landroid/media/JetPlayer$OnJetEventListener;)V",
			arg0.__jniObject().object()
		);
	}
	void JetPlayer::setEventListener(__jni_impl::__JniBaseClass arg0, __jni_impl::android::os::Handler arg1)
	{
		__thiz.callMethod<void>(
			"setEventListener",
			"(Landroid/media/JetPlayer$OnJetEventListener;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
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
	jboolean JetPlayer::loadJetFile(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"loadJetFile",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean JetPlayer::loadJetFile(__jni_impl::android::content::res::AssetFileDescriptor arg0)
	{
		return __thiz.callMethod<jboolean>(
			"loadJetFile",
			"(Landroid/content/res/AssetFileDescriptor;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean JetPlayer::closeJetFile()
	{
		return __thiz.callMethod<jboolean>(
			"closeJetFile",
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
	jboolean JetPlayer::setMuteFlags(jint arg0, jboolean arg1)
	{
		return __thiz.callMethod<jboolean>(
			"setMuteFlags",
			"(IZ)Z",
			arg0,
			arg1
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
	jboolean JetPlayer::triggerClip(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"triggerClip",
			"(I)Z",
			arg0
		);
	}
	jboolean JetPlayer::clearQueue()
	{
		return __thiz.callMethod<jboolean>(
			"clearQueue",
			"()Z"
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
} // namespace __jni_impl::android::media

namespace android::media
{
	class JetPlayer : public __jni_impl::android::media::JetPlayer
	{
	public:
		JetPlayer(QAndroidJniObject obj) { __thiz = obj; }
		JetPlayer()
		{
			__constructor();
		}
	};
} // namespace android::media

#endif // ANDROID_MEDIA_JETPLAYER

