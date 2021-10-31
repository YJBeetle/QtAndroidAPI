#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../content/Context.hpp"
#include "../../content/ContextWrapper.hpp"
#include "../../app/Service.hpp"

namespace android::content
{
	class Intent;
}
namespace android::speech::tts
{
	class SynthesisRequest;
}

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
		QAndroidJniObject onBind(android::content::Intent arg0);
		void onCreate();
		void onDestroy();
		jstring onGetDefaultVoiceNameFor(jstring arg0, jstring arg1, jstring arg2);
		QAndroidJniObject onGetVoices();
		jint onIsValidVoiceName(jstring arg0);
		jint onLoadVoice(jstring arg0);
	};
} // namespace android::speech::tts

