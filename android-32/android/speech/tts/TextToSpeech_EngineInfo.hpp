#pragma once

#include "../../../JString.hpp"
#include "./TextToSpeech_EngineInfo.def.hpp"

namespace android::speech::tts
{
	// Fields
	inline jint TextToSpeech_EngineInfo::icon()
	{
		return getField<jint>(
			"icon"
		);
	}
	inline JString TextToSpeech_EngineInfo::label()
	{
		return getObjectField(
			"label",
			"Ljava/lang/String;"
		);
	}
	inline JString TextToSpeech_EngineInfo::name()
	{
		return getObjectField(
			"name",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline TextToSpeech_EngineInfo::TextToSpeech_EngineInfo()
		: JObject(
			"android.speech.tts.TextToSpeech$EngineInfo",
			"()V"
		) {}
	
	// Methods
	inline JString TextToSpeech_EngineInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::speech::tts

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::speech::tts;
#endif
