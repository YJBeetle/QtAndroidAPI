#include "../../content/Intent.hpp"
#include "./SynthesisRequest.hpp"
#include "./TextToSpeechService.hpp"

namespace android::speech::tts
{
	// Fields
	
	TextToSpeechService::TextToSpeechService(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	TextToSpeechService::TextToSpeechService()
	{
		__thiz = QAndroidJniObject(
			"android.speech.tts.TextToSpeechService",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject TextToSpeechService::onBind(android::content::Intent arg0)
	{
		return __thiz.callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.__jniObject().object()
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
	QAndroidJniObject TextToSpeechService::onGetVoices()
	{
		return __thiz.callObjectMethod(
			"onGetVoices",
			"()Ljava/util/List;"
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
	jint TextToSpeechService::onLoadVoice(jstring arg0)
	{
		return __thiz.callMethod<jint>(
			"onLoadVoice",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
} // namespace android::speech::tts

