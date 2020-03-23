#pragma once

#ifndef ANDROID_SPEECH_TTS_TEXTTOSPEECHSERVICE
#define ANDROID_SPEECH_TTS_TEXTTOSPEECHSERVICE

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
		QAndroidJniObject onGetDefaultVoiceNameFor(jstring arg0, jstring arg1, jstring arg2);
		jint onLoadVoice(jstring arg0);
		jint onIsValidVoiceName(jstring arg0);
		QAndroidJniObject onBind(__jni_impl::android::content::Intent arg0);
		void onCreate();
		void onDestroy();
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
			"()V");
	}
	
	// Methods
	QAndroidJniObject TextToSpeechService::onGetVoices()
	{
		return __thiz.callObjectMethod(
			"onGetVoices",
			"()Ljava/util/List;");
	}
	QAndroidJniObject TextToSpeechService::onGetDefaultVoiceNameFor(jstring arg0, jstring arg1, jstring arg2)
	{
		return __thiz.callObjectMethod(
			"onGetDefaultVoiceNameFor",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1,
			arg2);
	}
	jint TextToSpeechService::onLoadVoice(jstring arg0)
	{
		return __thiz.callMethod<jint>(
			"onLoadVoice",
			"(Ljava/lang/String;)I",
			arg0);
	}
	jint TextToSpeechService::onIsValidVoiceName(jstring arg0)
	{
		return __thiz.callMethod<jint>(
			"onIsValidVoiceName",
			"(Ljava/lang/String;)I",
			arg0);
	}
	QAndroidJniObject TextToSpeechService::onBind(__jni_impl::android::content::Intent arg0)
	{
		return __thiz.callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.__jniObject().object());
	}
	void TextToSpeechService::onCreate()
	{
		__thiz.callMethod<void>(
			"onCreate",
			"()V");
	}
	void TextToSpeechService::onDestroy()
	{
		__thiz.callMethod<void>(
			"onDestroy",
			"()V");
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

