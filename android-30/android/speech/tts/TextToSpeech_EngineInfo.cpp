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
	jstring TextToSpeech_EngineInfo::label()
	{
		return getObjectField(
			"label",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TextToSpeech_EngineInfo::name()
	{
		return getObjectField(
			"name",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	TextToSpeech_EngineInfo::TextToSpeech_EngineInfo(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	TextToSpeech_EngineInfo::TextToSpeech_EngineInfo()
		: __JniBaseClass(
			"android.speech.tts.TextToSpeech$EngineInfo",
			"()V"
		) {}
	
	// Methods
	jstring TextToSpeech_EngineInfo::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::speech::tts

