#include "../../../JArray.hpp"
#include "../../content/Intent.hpp"
#include "./SynthesisRequest.hpp"
#include "../../../JString.hpp"
#include "./TextToSpeechService.hpp"

namespace android::speech::tts
{
	// Fields
	
	// QJniObject forward
	TextToSpeechService::TextToSpeechService(QJniObject obj) : android::app::Service(obj) {}
	
	// Constructors
	TextToSpeechService::TextToSpeechService()
		: android::app::Service(
			"android.speech.tts.TextToSpeechService",
			"()V"
		) {}
	
	// Methods
	JObject TextToSpeechService::onBind(android::content::Intent arg0) const
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
	void TextToSpeechService::onCreate() const
	{
		callMethod<void>(
			"onCreate",
			"()V"
		);
	}
	void TextToSpeechService::onDestroy() const
	{
		callMethod<void>(
			"onDestroy",
			"()V"
		);
	}
	JString TextToSpeechService::onGetDefaultVoiceNameFor(JString arg0, JString arg1, JString arg2) const
	{
		return callObjectMethod(
			"onGetDefaultVoiceNameFor",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		);
	}
	JObject TextToSpeechService::onGetVoices() const
	{
		return callObjectMethod(
			"onGetVoices",
			"()Ljava/util/List;"
		);
	}
	jint TextToSpeechService::onIsValidVoiceName(JString arg0) const
	{
		return callMethod<jint>(
			"onIsValidVoiceName",
			"(Ljava/lang/String;)I",
			arg0.object<jstring>()
		);
	}
	jint TextToSpeechService::onLoadVoice(JString arg0) const
	{
		return callMethod<jint>(
			"onLoadVoice",
			"(Ljava/lang/String;)I",
			arg0.object<jstring>()
		);
	}
} // namespace android::speech::tts

