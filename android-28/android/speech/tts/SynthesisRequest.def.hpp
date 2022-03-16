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
		
		// QJniObject forward
		template<typename ...Ts> explicit SynthesisRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SynthesisRequest(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		SynthesisRequest(JString arg0, android::os::Bundle arg1);
		
		// Methods
		jint getCallerUid() const;
		JString getCharSequenceText() const;
		JString getCountry() const;
		JString getLanguage() const;
		android::os::Bundle getParams() const;
		jint getPitch() const;
		jint getSpeechRate() const;
		JString getText() const;
		JString getVariant() const;
		JString getVoiceName() const;
	};
} // namespace android::speech::tts

