#pragma once

#ifndef ANDROID_MEDIA_RINGTONE
#define ANDROID_MEDIA_RINGTONE

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::media
{
	class AudioAttributes;
}

namespace __jni_impl::android::media
{
	class Ringtone : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void stop();
		void setAudioAttributes(__jni_impl::android::media::AudioAttributes arg0);
		QAndroidJniObject getTitle(__jni_impl::android::content::Context arg0);
		QAndroidJniObject getAudioAttributes();
		void setLooping(jboolean arg0);
		jboolean isLooping();
		void setVolume(jfloat arg0);
		jfloat getVolume();
		void play();
		jboolean isPlaying();
		void setStreamType(jint arg0);
		jint getStreamType();
	};
} // namespace __jni_impl::android::media

#include "../content/Context.hpp"
#include "AudioAttributes.hpp"

namespace __jni_impl::android::media
{
	// Fields
	
	// Constructors
	void Ringtone::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.Ringtone",
			"(V)V");
	}
	
	// Methods
	void Ringtone::stop()
	{
		__thiz.callMethod<void>(
			"stop",
			"()V");
	}
	void Ringtone::setAudioAttributes(__jni_impl::android::media::AudioAttributes arg0)
	{
		__thiz.callMethod<void>(
			"setAudioAttributes",
			"(Landroid/media/AudioAttributes;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Ringtone::getTitle(__jni_impl::android::content::Context arg0)
	{
		return __thiz.callObjectMethod(
			"getTitle",
			"(Landroid/content/Context;)Ljava/lang/String;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Ringtone::getAudioAttributes()
	{
		return __thiz.callObjectMethod(
			"getAudioAttributes",
			"()Landroid/media/AudioAttributes;");
	}
	void Ringtone::setLooping(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setLooping",
			"(Z)V",
			arg0);
	}
	jboolean Ringtone::isLooping()
	{
		return __thiz.callMethod<jboolean>(
			"isLooping",
			"()Z");
	}
	void Ringtone::setVolume(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setVolume",
			"(F)V",
			arg0);
	}
	jfloat Ringtone::getVolume()
	{
		return __thiz.callMethod<jfloat>(
			"getVolume",
			"()F");
	}
	void Ringtone::play()
	{
		__thiz.callMethod<void>(
			"play",
			"()V");
	}
	jboolean Ringtone::isPlaying()
	{
		return __thiz.callMethod<jboolean>(
			"isPlaying",
			"()Z");
	}
	void Ringtone::setStreamType(jint arg0)
	{
		__thiz.callMethod<void>(
			"setStreamType",
			"(I)V",
			arg0);
	}
	jint Ringtone::getStreamType()
	{
		return __thiz.callMethod<jint>(
			"getStreamType",
			"()I");
	}
} // namespace __jni_impl::android::media

namespace android::media
{
	class Ringtone : public __jni_impl::android::media::Ringtone
	{
	public:
		Ringtone(QAndroidJniObject obj) { __thiz = obj; }
		Ringtone()
		{
			__constructor();
		}
	};
} // namespace android::media

#endif // ANDROID_MEDIA_RINGTONE

