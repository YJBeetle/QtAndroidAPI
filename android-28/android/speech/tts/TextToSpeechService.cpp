#include "../../content/Intent.hpp"
#include "./SynthesisRequest.hpp"
#include "./TextToSpeechService.hpp"

namespace android::speech::tts
{
	// Fields
	
	// QAndroidJniObject forward
	TextToSpeechService::TextToSpeechService(QAndroidJniObject obj) : android::app::Service(obj) {}
	
	// Constructors
	TextToSpeechService::TextToSpeechService()
		: android::app::Service(
			"android.speech.tts.TextToSpeechService",
			"()V"
		) {}
	
	// Methods
	__JniBaseClass TextToSpeechService::onBind(android::content::Intent arg0)
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
	void TextToSpeechService::onCreate()
	{
		callMethod<void>(
			"onCreate",
			"()V"
		);
	}
	void TextToSpeechService::onDestroy()
	{
		callMethod<void>(
			"onDestroy",
			"()V"
		);
	}
	jstring TextToSpeechService::onGetDefaultVoiceNameFor(jstring arg0, jstring arg1, jstring arg2)
	{
		return callObjectMethod(
			"onGetDefaultVoiceNameFor",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1,
			arg2
		).object<jstring>();
	}
	__JniBaseClass TextToSpeechService::onGetVoices()
	{
		return callObjectMethod(
			"onGetVoices",
			"()Ljava/util/List;"
		);
	}
	jint TextToSpeechService::onIsValidVoiceName(jstring arg0)
	{
		return callMethod<jint>(
			"onIsValidVoiceName",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
	jint TextToSpeechService::onLoadVoice(jstring arg0)
	{
		return callMethod<jint>(
			"onLoadVoice",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
} // namespace android::speech::tts

