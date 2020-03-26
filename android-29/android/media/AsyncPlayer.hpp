#pragma once

#ifndef ANDROID_MEDIA_ASYNCPLAYER
#define ANDROID_MEDIA_ASYNCPLAYER

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

namespace __jni_impl::android::media
{
	class AsyncPlayer : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		
		// Methods
		void stop();
		void play(__jni_impl::android::content::Context arg0, __jni_impl::android::net::Uri arg1, jboolean arg2, jint arg3);
		void play(__jni_impl::android::content::Context arg0, __jni_impl::android::net::Uri arg1, jboolean arg2, __jni_impl::android::media::AudioAttributes arg3);
	};
} // namespace __jni_impl::android::media

#include "../content/Context.hpp"
#include "../net/Uri.hpp"
#include "AudioAttributes.hpp"

namespace __jni_impl::android::media
{
	// Fields
	
	// Constructors
	void AsyncPlayer::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.AsyncPlayer",
			"(Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
	void AsyncPlayer::stop()
	{
		__thiz.callMethod<void>(
			"stop",
			"()V"
		);
	}
	void AsyncPlayer::play(__jni_impl::android::content::Context arg0, __jni_impl::android::net::Uri arg1, jboolean arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"play",
			"(Landroid/content/Context;Landroid/net/Uri;ZI)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	void AsyncPlayer::play(__jni_impl::android::content::Context arg0, __jni_impl::android::net::Uri arg1, jboolean arg2, __jni_impl::android::media::AudioAttributes arg3)
	{
		__thiz.callMethod<void>(
			"play",
			"(Landroid/content/Context;Landroid/net/Uri;ZLandroid/media/AudioAttributes;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::media

namespace android::media
{
	class AsyncPlayer : public __jni_impl::android::media::AsyncPlayer
	{
	public:
		AsyncPlayer(QAndroidJniObject obj) { __thiz = obj; }
		AsyncPlayer(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::media

#endif // ANDROID_MEDIA_ASYNCPLAYER

