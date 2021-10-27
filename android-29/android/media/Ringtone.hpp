#pragma once

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
		QAndroidJniObject getAudioAttributes();
		jint getStreamType();
		jstring getTitle(__jni_impl::android::content::Context arg0);
		jfloat getVolume();
		jboolean isLooping();
		jboolean isPlaying();
		void play();
		void setAudioAttributes(__jni_impl::android::media::AudioAttributes arg0);
		void setLooping(jboolean arg0);
		void setStreamType(jint arg0);
		void setVolume(jfloat arg0);
		void stop();
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
	QAndroidJniObject Ringtone::getAudioAttributes()
	{
		return __thiz.callObjectMethod(
			"getAudioAttributes",
			"()Landroid/media/AudioAttributes;"
		);
	}
	jint Ringtone::getStreamType()
	{
		return __thiz.callMethod<jint>(
			"getStreamType",
			"()I"
		);
	}
	jstring Ringtone::getTitle(__jni_impl::android::content::Context arg0)
	{
		return __thiz.callObjectMethod(
			"getTitle",
			"(Landroid/content/Context;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jfloat Ringtone::getVolume()
	{
		return __thiz.callMethod<jfloat>(
			"getVolume",
			"()F"
		);
	}
	jboolean Ringtone::isLooping()
	{
		return __thiz.callMethod<jboolean>(
			"isLooping",
			"()Z"
		);
	}
	jboolean Ringtone::isPlaying()
	{
		return __thiz.callMethod<jboolean>(
			"isPlaying",
			"()Z"
		);
	}
	void Ringtone::play()
	{
		__thiz.callMethod<void>(
			"play",
			"()V"
		);
	}
	void Ringtone::setAudioAttributes(__jni_impl::android::media::AudioAttributes arg0)
	{
		__thiz.callMethod<void>(
			"setAudioAttributes",
			"(Landroid/media/AudioAttributes;)V",
			arg0.__jniObject().object()
		);
	}
	void Ringtone::setLooping(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setLooping",
			"(Z)V",
			arg0
		);
	}
	void Ringtone::setStreamType(jint arg0)
	{
		__thiz.callMethod<void>(
			"setStreamType",
			"(I)V",
			arg0
		);
	}
	void Ringtone::setVolume(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setVolume",
			"(F)V",
			arg0
		);
	}
	void Ringtone::stop()
	{
		__thiz.callMethod<void>(
			"stop",
			"()V"
		);
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

