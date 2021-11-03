#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Bundle;
}
class JString;
class JString;

namespace android::speech::tts
{
	class SynthesisRequest : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SynthesisRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SynthesisRequest(QAndroidJniObject obj);
		
		// Constructors
		SynthesisRequest(JString arg0, android::os::Bundle arg1);
		
		// Methods
		jint getCallerUid();
		JString getCharSequenceText();
		JString getCountry();
		JString getLanguage();
		android::os::Bundle getParams();
		jint getPitch();
		jint getSpeechRate();
		JString getText();
		JString getVariant();
		JString getVoiceName();
	};
} // namespace android::speech::tts

