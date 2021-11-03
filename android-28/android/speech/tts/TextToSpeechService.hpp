#pragma once

#include "../../app/Service.hpp"

class JArray;
namespace android::content
{
	class Intent;
}
namespace android::speech::tts
{
	class SynthesisRequest;
}
class JString;

namespace android::speech::tts
{
	class TextToSpeechService : public android::app::Service
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TextToSpeechService(const char *className, const char *sig, Ts...agv) : android::app::Service(className, sig, std::forward<Ts>(agv)...) {}
		TextToSpeechService(QJniObject obj);
		
		// Constructors
		TextToSpeechService();
		
		// Methods
		JObject onBind(android::content::Intent arg0) const;
		void onCreate() const;
		void onDestroy() const;
		JString onGetDefaultVoiceNameFor(JString arg0, JString arg1, JString arg2) const;
		JObject onGetVoices() const;
		jint onIsValidVoiceName(JString arg0) const;
		jint onLoadVoice(JString arg0) const;
	};
} // namespace android::speech::tts

