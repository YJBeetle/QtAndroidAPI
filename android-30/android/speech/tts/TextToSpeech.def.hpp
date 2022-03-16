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
class JString;
class JString;
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
		static JString ACTION_TTS_QUEUE_PROCESSING_COMPLETED();
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
		
		// QJniObject forward
		template<typename ...Ts> explicit TextToSpeech(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TextToSpeech(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		TextToSpeech(android::content::Context arg0, JObject arg1);
		TextToSpeech(android::content::Context arg0, JObject arg1, JString arg2);
		
		// Methods
		static jint getMaxSpeechInputLength();
		jint addEarcon(JString arg0, java::io::File arg1) const;
		jint addEarcon(JString arg0, JString arg1) const;
		jint addEarcon(JString arg0, JString arg1, jint arg2) const;
		jint addSpeech(JString arg0, java::io::File arg1) const;
		jint addSpeech(JString arg0, JString arg1) const;
		jint addSpeech(JString arg0, JString arg1, jint arg2) const;
		jboolean areDefaultsEnforced() const;
		JObject getAvailableLanguages() const;
		JString getDefaultEngine() const;
		java::util::Locale getDefaultLanguage() const;
		android::speech::tts::Voice getDefaultVoice() const;
		JObject getEngines() const;
		JObject getFeatures(java::util::Locale arg0) const;
		java::util::Locale getLanguage() const;
		android::speech::tts::Voice getVoice() const;
		JObject getVoices() const;
		jint isLanguageAvailable(java::util::Locale arg0) const;
		jboolean isSpeaking() const;
		jint playEarcon(JString arg0, jint arg1, java::util::HashMap arg2) const;
		jint playEarcon(JString arg0, jint arg1, android::os::Bundle arg2, JString arg3) const;
		jint playSilence(jlong arg0, jint arg1, java::util::HashMap arg2) const;
		jint playSilentUtterance(jlong arg0, jint arg1, JString arg2) const;
		jint setAudioAttributes(android::media::AudioAttributes arg0) const;
		jint setEngineByPackageName(JString arg0) const;
		jint setLanguage(java::util::Locale arg0) const;
		jint setOnUtteranceCompletedListener(JObject arg0) const;
		jint setOnUtteranceProgressListener(android::speech::tts::UtteranceProgressListener arg0) const;
		jint setPitch(jfloat arg0) const;
		jint setSpeechRate(jfloat arg0) const;
		jint setVoice(android::speech::tts::Voice arg0) const;
		void shutdown() const;
		jint speak(JString arg0, jint arg1, java::util::HashMap arg2) const;
		jint speak(JString arg0, jint arg1, android::os::Bundle arg2, JString arg3) const;
		jint stop() const;
		jint synthesizeToFile(JString arg0, java::util::HashMap arg1, JString arg2) const;
		jint synthesizeToFile(JString arg0, android::os::Bundle arg1, android::os::ParcelFileDescriptor arg2, JString arg3) const;
		jint synthesizeToFile(JString arg0, android::os::Bundle arg1, java::io::File arg2, JString arg3) const;
	};
} // namespace android::speech::tts

