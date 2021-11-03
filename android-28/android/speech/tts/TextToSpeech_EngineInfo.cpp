#include "../../../JString.hpp"
#include "./TextToSpeech_EngineInfo.hpp"

namespace android::speech::tts
{
	// Fields
	jint TextToSpeech_EngineInfo::icon()
	{
		return getField<jint>(
			"icon"
		);
	}
	JString TextToSpeech_EngineInfo::label()
	{
		return getObjectField(
			"label",
			"Ljava/lang/String;"
		);
	}
	JString TextToSpeech_EngineInfo::name()
	{
		return getObjectField(
			"name",
			"Ljava/lang/String;"
		);
	}
	
	// QAndroidJniObject forward
	TextToSpeech_EngineInfo::TextToSpeech_EngineInfo(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	TextToSpeech_EngineInfo::TextToSpeech_EngineInfo()
		: JObject(
			"android.speech.tts.TextToSpeech$EngineInfo",
			"()V"
		) {}
	
	// Methods
	JString TextToSpeech_EngineInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::speech::tts

