#pragma once

#include "../../../JObject.hpp"


namespace android::speech::tts
{
	class TextToSpeech_EngineInfo : public JObject
	{
	public:
		// Fields
		jint icon();
		jstring label();
		jstring name();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TextToSpeech_EngineInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TextToSpeech_EngineInfo(QAndroidJniObject obj);
		
		// Constructors
		TextToSpeech_EngineInfo();
		
		// Methods
		jstring toString();
	};
} // namespace android::speech::tts

