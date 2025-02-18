#pragma once

#include "../../../JArray.hpp"
#include "../../content/Intent.def.hpp"
#include "./SynthesisRequest.def.hpp"
#include "../../../JString.hpp"
#include "./TextToSpeechService.def.hpp"

namespace android::speech::tts
{
	// Fields
	
	// Constructors
	inline TextToSpeechService::TextToSpeechService()
		: android::app::Service(
			"android.speech.tts.TextToSpeechService",
			"()V"
		) {}
	
	// Methods
	inline JObject TextToSpeechService::onBind(android::content::Intent arg0) const
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
	inline void TextToSpeechService::onCreate() const
	{
		callMethod<void>(
			"onCreate",
			"()V"
		);
	}
	inline void TextToSpeechService::onDestroy() const
	{
		callMethod<void>(
			"onDestroy",
			"()V"
		);
	}
	inline JString TextToSpeechService::onGetDefaultVoiceNameFor(JString arg0, JString arg1, JString arg2) const
	{
		return callObjectMethod(
			"onGetDefaultVoiceNameFor",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		);
	}
	inline JObject TextToSpeechService::onGetVoices() const
	{
		return callObjectMethod(
			"onGetVoices",
			"()Ljava/util/List;"
		);
	}
	inline jint TextToSpeechService::onIsValidVoiceName(JString arg0) const
	{
		return callMethod<jint>(
			"onIsValidVoiceName",
			"(Ljava/lang/String;)I",
			arg0.object<jstring>()
		);
	}
	inline jint TextToSpeechService::onLoadVoice(JString arg0) const
	{
		return callMethod<jint>(
			"onLoadVoice",
			"(Ljava/lang/String;)I",
			arg0.object<jstring>()
		);
	}
} // namespace android::speech::tts

// Base class headers
#include "../../content/Context.hpp"
#include "../../content/ContextWrapper.hpp"
#include "../../app/Service.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::speech::tts;
#endif
