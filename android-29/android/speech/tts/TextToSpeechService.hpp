#pragma once

#ifndef ANDROID_SPEECH_TTS_TEXTTOSPEECHSERVICE
#define ANDROID_SPEECH_TTS_TEXTTOSPEECHSERVICE

#include "../../../__JniBaseClass.hpp"
#include "../../content/Context.hpp"
#include "../../content/ContextWrapper.hpp"
#include "../../app/Service.hpp"

namespace __jni_impl::android::speech::tts
{
	class SynthesisRequest;
}
namespace __jni_impl::android::content
{
	class Intent;
}

namespace __jni_impl::android::speech::tts
{
	class TextToSpeechService : public __jni_impl::android::app::Service
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject onGetVoices();
		jstring onGetDefaultVoiceNameFor(jstring arg0, jstring arg1, jstring arg2);
		jstring onGetDefaultVoiceNameFor(const QString &arg0, const QString &arg1, const QString &arg2);
		jint onLoadVoice(jstring arg0);
		jint onLoadVoice(const QString &arg0);
		jint onIsValidVoiceName(jstring arg0);
		jint onIsValidVoiceName(const QString &arg0);
		void onCreate();
		void onDestroy();
		QAndroidJniObject onBind(__jni_impl::android::content::Intent arg0);
	};
} // namespace __jni_impl::android::speech::tts

#include "SynthesisRequest.hpp"
#include "../../content/Intent.hpp"

namespace __jni_impl::android::speech::tts
{
	// Fields
	
	// Constructors
	void TextToSpeechService::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.speech.tts.TextToSpeechService",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject TextToSpeechService::onGetVoices()
	{
		return __thiz.callObjectMethod(
			"onGetVoices",
			"()Ljava/util/List;"
		);
	}
	jstring TextToSpeechService::onGetDefaultVoiceNameFor(jstring arg0, jstring arg1, jstring arg2)
	{
		return __thiz.callObjectMethod(
			"onGetDefaultVoiceNameFor",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1,
			arg2
		).object<jstring>();
	}
	jstring TextToSpeechService::onGetDefaultVoiceNameFor(const QString &arg0, const QString &arg1, const QString &arg2)
	{
		return __thiz.callObjectMethod(
			"onGetDefaultVoiceNameFor",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>()
		).object<jstring>();
	}
	jint TextToSpeechService::onLoadVoice(jstring arg0)
	{
		return __thiz.callMethod<jint>(
			"onLoadVoice",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
	jint TextToSpeechService::onLoadVoice(const QString &arg0)
	{
		return __thiz.callMethod<jint>(
			"onLoadVoice",
			"(Ljava/lang/String;)I",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jint TextToSpeechService::onIsValidVoiceName(jstring arg0)
	{
		return __thiz.callMethod<jint>(
			"onIsValidVoiceName",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
	jint TextToSpeechService::onIsValidVoiceName(const QString &arg0)
	{
		return __thiz.callMethod<jint>(
			"onIsValidVoiceName",
			"(Ljava/lang/String;)I",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void TextToSpeechService::onCreate()
	{
		__thiz.callMethod<void>(
			"onCreate",
			"()V"
		);
	}
	void TextToSpeechService::onDestroy()
	{
		__thiz.callMethod<void>(
			"onDestroy",
			"()V"
		);
	}
	QAndroidJniObject TextToSpeechService::onBind(__jni_impl::android::content::Intent arg0)
	{
		return __thiz.callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::speech::tts

namespace android::speech::tts
{
	class TextToSpeechService : public __jni_impl::android::speech::tts::TextToSpeechService
	{
	public:
		TextToSpeechService(QAndroidJniObject obj) { __thiz = obj; }
		TextToSpeechService()
		{
			__constructor();
		}
	};
} // namespace android::speech::tts

#endif // ANDROID_SPEECH_TTS_TEXTTOSPEECHSERVICE

