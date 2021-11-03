#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Bundle;
}

namespace android::speech::tts
{
	class SynthesisRequest : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SynthesisRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SynthesisRequest(QJniObject obj);
		
		// Constructors
		SynthesisRequest(jstring arg0, android::os::Bundle arg1);
		
		// Methods
		jint getCallerUid();
		jstring getCharSequenceText();
		jstring getCountry();
		jstring getLanguage();
		android::os::Bundle getParams();
		jint getPitch();
		jint getSpeechRate();
		jstring getText();
		jstring getVariant();
		jstring getVoiceName();
	};
} // namespace android::speech::tts

