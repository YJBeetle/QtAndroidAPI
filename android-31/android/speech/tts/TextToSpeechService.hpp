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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TextToSpeechService(const char *className, const char *sig, Ts...agv) : android::app::Service(className, sig, std::forward<Ts>(agv)...) {}
		TextToSpeechService(QAndroidJniObject obj);
		
		// Constructors
		TextToSpeechService();
		
		// Methods
		JObject onBind(android::content::Intent arg0);
		void onCreate();
		void onDestroy();
		JString onGetDefaultVoiceNameFor(JString arg0, JString arg1, JString arg2);
		JObject onGetVoices();
		jint onIsValidVoiceName(JString arg0);
		jint onLoadVoice(JString arg0);
	};
} // namespace android::speech::tts

