#pragma once

#include "../../../JObject.hpp"

namespace android::content
{
	class Context;
}
namespace android::media
{
	class AudioAttributes;
}
namespace android::net
{
	class Uri;
}
namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class ParcelFileDescriptor;
}
namespace android::speech::tts
{
	class UtteranceProgressListener;
}
namespace android::speech::tts
{
	class Voice;
}
namespace java::io
{
	class File;
}
namespace java::util
{
	class HashMap;
}
namespace java::util
{
	class Locale;
}

namespace android::speech::tts
{
	class TextToSpeech : public JObject
	{
	public:
		// Fields
		static jstring ACTION_TTS_QUEUE_PROCESSING_COMPLETED();
		static jint ERROR();
		static jint ERROR_INVALID_REQUEST();
		static jint ERROR_NETWORK();
		static jint ERROR_NETWORK_TIMEOUT();
		static jint ERROR_NOT_INSTALLED_YET();
		static jint ERROR_OUTPUT();
		static jint ERROR_SERVICE();
		static jint ERROR_SYNTHESIS();
		static jint LANG_AVAILABLE();
		static jint LANG_COUNTRY_AVAILABLE();
		static jint LANG_COUNTRY_VAR_AVAILABLE();
		static jint LANG_MISSING_DATA();
		static jint LANG_NOT_SUPPORTED();
		static jint QUEUE_ADD();
		static jint QUEUE_FLUSH();
		static jint STOPPED();
		static jint SUCCESS();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TextToSpeech(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TextToSpeech(QAndroidJniObject obj);
		
		// Constructors
		TextToSpeech(android::content::Context arg0, JObject arg1);
		TextToSpeech(android::content::Context arg0, JObject arg1, jstring arg2);
		
		// Methods
		static jint getMaxSpeechInputLength();
		jint addEarcon(jstring arg0, android::net::Uri arg1);
		jint addEarcon(jstring arg0, java::io::File arg1);
		jint addEarcon(jstring arg0, jstring arg1);
		jint addEarcon(jstring arg0, jstring arg1, jint arg2);
		jint addSpeech(jstring arg0, android::net::Uri arg1);
		jint addSpeech(jstring arg0, java::io::File arg1);
		jint addSpeech(jstring arg0, jstring arg1);
		jint addSpeech(jstring arg0, jstring arg1, jint arg2);
		jboolean areDefaultsEnforced();
		JObject getAvailableLanguages();
		jstring getDefaultEngine();
		java::util::Locale getDefaultLanguage();
		android::speech::tts::Voice getDefaultVoice();
		JObject getEngines();
		JObject getFeatures(java::util::Locale arg0);
		java::util::Locale getLanguage();
		android::speech::tts::Voice getVoice();
		JObject getVoices();
		jint isLanguageAvailable(java::util::Locale arg0);
		jboolean isSpeaking();
		jint playEarcon(jstring arg0, jint arg1, java::util::HashMap arg2);
		jint playEarcon(jstring arg0, jint arg1, android::os::Bundle arg2, jstring arg3);
		jint playSilence(jlong arg0, jint arg1, java::util::HashMap arg2);
		jint playSilentUtterance(jlong arg0, jint arg1, jstring arg2);
		jint setAudioAttributes(android::media::AudioAttributes arg0);
		jint setEngineByPackageName(jstring arg0);
		jint setLanguage(java::util::Locale arg0);
		jint setOnUtteranceCompletedListener(JObject arg0);
		jint setOnUtteranceProgressListener(android::speech::tts::UtteranceProgressListener arg0);
		jint setPitch(jfloat arg0);
		jint setSpeechRate(jfloat arg0);
		jint setVoice(android::speech::tts::Voice arg0);
		void shutdown();
		jint speak(jstring arg0, jint arg1, java::util::HashMap arg2);
		jint speak(jstring arg0, jint arg1, android::os::Bundle arg2, jstring arg3);
		jint stop();
		jint synthesizeToFile(jstring arg0, java::util::HashMap arg1, jstring arg2);
		jint synthesizeToFile(jstring arg0, android::os::Bundle arg1, android::os::ParcelFileDescriptor arg2, jstring arg3);
		jint synthesizeToFile(jstring arg0, android::os::Bundle arg1, java::io::File arg2, jstring arg3);
	};
} // namespace android::speech::tts

