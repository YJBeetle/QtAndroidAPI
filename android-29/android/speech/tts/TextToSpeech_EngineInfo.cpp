#include "./TextToSpeech_EngineInfo.hpp"

namespace android::speech::tts
{
	// Fields
	jint TextToSpeech_EngineInfo::icon()
	{
		return __thiz.getField<jint>(
			"icon"
		);
	}
	jstring TextToSpeech_EngineInfo::label()
	{
		return __thiz.getObjectField(
			"label",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TextToSpeech_EngineInfo::name()
	{
		return __thiz.getObjectField(
			"name",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	TextToSpeech_EngineInfo::TextToSpeech_EngineInfo(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	TextToSpeech_EngineInfo::TextToSpeech_EngineInfo()
	{
		__thiz = QAndroidJniObject(
			"android.speech.tts.TextToSpeech$EngineInfo",
			"()V"
		);
	}
	
	// Methods
	jstring TextToSpeech_EngineInfo::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::speech::tts

