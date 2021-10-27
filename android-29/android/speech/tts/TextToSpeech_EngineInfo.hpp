#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::speech::tts
{
	class TextToSpeech_EngineInfo : public __JniBaseClass
	{
	public:
		// Fields
		jint icon();
		jstring label();
		jstring name();
		
		TextToSpeech_EngineInfo(QAndroidJniObject obj);
		// Constructors
		TextToSpeech_EngineInfo();
		
		// Methods
		jstring toString();
	};
} // namespace android::speech::tts

