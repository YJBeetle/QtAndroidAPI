#include "../../content/Context.hpp"
#include "../../media/AudioAttributes.hpp"
#include "../../net/Uri.hpp"
#include "../../os/Bundle.hpp"
#include "../../os/ParcelFileDescriptor.hpp"
#include "./UtteranceProgressListener.hpp"
#include "./Voice.hpp"
#include "../../../java/io/File.hpp"
#include "../../../java/util/HashMap.hpp"
#include "../../../java/util/Locale.hpp"
#include "./TextToSpeech.hpp"

namespace android::speech::tts
{
	// Fields
	jstring TextToSpeech::ACTION_TTS_QUEUE_PROCESSING_COMPLETED()
	{
		return getStaticObjectField(
			"android.speech.tts.TextToSpeech",
			"ACTION_TTS_QUEUE_PROCESSING_COMPLETED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint TextToSpeech::ERROR()
	{
		return getStaticField<jint>(
			"android.speech.tts.TextToSpeech",
			"ERROR"
		);
	}
	jint TextToSpeech::ERROR_INVALID_REQUEST()
	{
		return getStaticField<jint>(
			"android.speech.tts.TextToSpeech",
			"ERROR_INVALID_REQUEST"
		);
	}
	jint TextToSpeech::ERROR_NETWORK()
	{
		return getStaticField<jint>(
			"android.speech.tts.TextToSpeech",
			"ERROR_NETWORK"
		);
	}
	jint TextToSpeech::ERROR_NETWORK_TIMEOUT()
	{
		return getStaticField<jint>(
			"android.speech.tts.TextToSpeech",
			"ERROR_NETWORK_TIMEOUT"
		);
	}
	jint TextToSpeech::ERROR_NOT_INSTALLED_YET()
	{
		return getStaticField<jint>(
			"android.speech.tts.TextToSpeech",
			"ERROR_NOT_INSTALLED_YET"
		);
	}
	jint TextToSpeech::ERROR_OUTPUT()
	{
		return getStaticField<jint>(
			"android.speech.tts.TextToSpeech",
			"ERROR_OUTPUT"
		);
	}
	jint TextToSpeech::ERROR_SERVICE()
	{
		return getStaticField<jint>(
			"android.speech.tts.TextToSpeech",
			"ERROR_SERVICE"
		);
	}
	jint TextToSpeech::ERROR_SYNTHESIS()
	{
		return getStaticField<jint>(
			"android.speech.tts.TextToSpeech",
			"ERROR_SYNTHESIS"
		);
	}
	jint TextToSpeech::LANG_AVAILABLE()
	{
		return getStaticField<jint>(
			"android.speech.tts.TextToSpeech",
			"LANG_AVAILABLE"
		);
	}
	jint TextToSpeech::LANG_COUNTRY_AVAILABLE()
	{
		return getStaticField<jint>(
			"android.speech.tts.TextToSpeech",
			"LANG_COUNTRY_AVAILABLE"
		);
	}
	jint TextToSpeech::LANG_COUNTRY_VAR_AVAILABLE()
	{
		return getStaticField<jint>(
			"android.speech.tts.TextToSpeech",
			"LANG_COUNTRY_VAR_AVAILABLE"
		);
	}
	jint TextToSpeech::LANG_MISSING_DATA()
	{
		return getStaticField<jint>(
			"android.speech.tts.TextToSpeech",
			"LANG_MISSING_DATA"
		);
	}
	jint TextToSpeech::LANG_NOT_SUPPORTED()
	{
		return getStaticField<jint>(
			"android.speech.tts.TextToSpeech",
			"LANG_NOT_SUPPORTED"
		);
	}
	jint TextToSpeech::QUEUE_ADD()
	{
		return getStaticField<jint>(
			"android.speech.tts.TextToSpeech",
			"QUEUE_ADD"
		);
	}
	jint TextToSpeech::QUEUE_FLUSH()
	{
		return getStaticField<jint>(
			"android.speech.tts.TextToSpeech",
			"QUEUE_FLUSH"
		);
	}
	jint TextToSpeech::STOPPED()
	{
		return getStaticField<jint>(
			"android.speech.tts.TextToSpeech",
			"STOPPED"
		);
	}
	jint TextToSpeech::SUCCESS()
	{
		return getStaticField<jint>(
			"android.speech.tts.TextToSpeech",
			"SUCCESS"
		);
	}
	
	// QJniObject forward
	TextToSpeech::TextToSpeech(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	TextToSpeech::TextToSpeech(android::content::Context arg0, JObject arg1)
		: JObject(
			"android.speech.tts.TextToSpeech",
			"(Landroid/content/Context;Landroid/speech/tts/TextToSpeech$OnInitListener;)V",
			arg0.object(),
			arg1.object()
		) {}
	TextToSpeech::TextToSpeech(android::content::Context arg0, JObject arg1, jstring arg2)
		: JObject(
			"android.speech.tts.TextToSpeech",
			"(Landroid/content/Context;Landroid/speech/tts/TextToSpeech$OnInitListener;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	
	// Methods
	jint TextToSpeech::getMaxSpeechInputLength()
	{
		return callStaticMethod<jint>(
			"android.speech.tts.TextToSpeech",
			"getMaxSpeechInputLength",
			"()I"
		);
	}
	jint TextToSpeech::addEarcon(jstring arg0, android::net::Uri arg1)
	{
		return callMethod<jint>(
			"addEarcon",
			"(Ljava/lang/String;Landroid/net/Uri;)I",
			arg0,
			arg1.object()
		);
	}
	jint TextToSpeech::addEarcon(jstring arg0, java::io::File arg1)
	{
		return callMethod<jint>(
			"addEarcon",
			"(Ljava/lang/String;Ljava/io/File;)I",
			arg0,
			arg1.object()
		);
	}
	jint TextToSpeech::addEarcon(jstring arg0, jstring arg1)
	{
		return callMethod<jint>(
			"addEarcon",
			"(Ljava/lang/String;Ljava/lang/String;)I",
			arg0,
			arg1
		);
	}
	jint TextToSpeech::addEarcon(jstring arg0, jstring arg1, jint arg2)
	{
		return callMethod<jint>(
			"addEarcon",
			"(Ljava/lang/String;Ljava/lang/String;I)I",
			arg0,
			arg1,
			arg2
		);
	}
	jint TextToSpeech::addSpeech(jstring arg0, android::net::Uri arg1)
	{
		return callMethod<jint>(
			"addSpeech",
			"(Ljava/lang/CharSequence;Landroid/net/Uri;)I",
			arg0,
			arg1.object()
		);
	}
	jint TextToSpeech::addSpeech(jstring arg0, java::io::File arg1)
	{
		return callMethod<jint>(
			"addSpeech",
			"(Ljava/lang/CharSequence;Ljava/io/File;)I",
			arg0,
			arg1.object()
		);
	}
	jint TextToSpeech::addSpeech(jstring arg0, jstring arg1)
	{
		return callMethod<jint>(
			"addSpeech",
			"(Ljava/lang/String;Ljava/lang/String;)I",
			arg0,
			arg1
		);
	}
	jint TextToSpeech::addSpeech(jstring arg0, jstring arg1, jint arg2)
	{
		return callMethod<jint>(
			"addSpeech",
			"(Ljava/lang/CharSequence;Ljava/lang/String;I)I",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean TextToSpeech::areDefaultsEnforced()
	{
		return callMethod<jboolean>(
			"areDefaultsEnforced",
			"()Z"
		);
	}
	JObject TextToSpeech::getAvailableLanguages()
	{
		return callObjectMethod(
			"getAvailableLanguages",
			"()Ljava/util/Set;"
		);
	}
	jstring TextToSpeech::getDefaultEngine()
	{
		return callObjectMethod(
			"getDefaultEngine",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	java::util::Locale TextToSpeech::getDefaultLanguage()
	{
		return callObjectMethod(
			"getDefaultLanguage",
			"()Ljava/util/Locale;"
		);
	}
	android::speech::tts::Voice TextToSpeech::getDefaultVoice()
	{
		return callObjectMethod(
			"getDefaultVoice",
			"()Landroid/speech/tts/Voice;"
		);
	}
	JObject TextToSpeech::getEngines()
	{
		return callObjectMethod(
			"getEngines",
			"()Ljava/util/List;"
		);
	}
	JObject TextToSpeech::getFeatures(java::util::Locale arg0)
	{
		return callObjectMethod(
			"getFeatures",
			"(Ljava/util/Locale;)Ljava/util/Set;",
			arg0.object()
		);
	}
	java::util::Locale TextToSpeech::getLanguage()
	{
		return callObjectMethod(
			"getLanguage",
			"()Ljava/util/Locale;"
		);
	}
	android::speech::tts::Voice TextToSpeech::getVoice()
	{
		return callObjectMethod(
			"getVoice",
			"()Landroid/speech/tts/Voice;"
		);
	}
	JObject TextToSpeech::getVoices()
	{
		return callObjectMethod(
			"getVoices",
			"()Ljava/util/Set;"
		);
	}
	jint TextToSpeech::isLanguageAvailable(java::util::Locale arg0)
	{
		return callMethod<jint>(
			"isLanguageAvailable",
			"(Ljava/util/Locale;)I",
			arg0.object()
		);
	}
	jboolean TextToSpeech::isSpeaking()
	{
		return callMethod<jboolean>(
			"isSpeaking",
			"()Z"
		);
	}
	jint TextToSpeech::playEarcon(jstring arg0, jint arg1, java::util::HashMap arg2)
	{
		return callMethod<jint>(
			"playEarcon",
			"(Ljava/lang/String;ILjava/util/HashMap;)I",
			arg0,
			arg1,
			arg2.object()
		);
	}
	jint TextToSpeech::playEarcon(jstring arg0, jint arg1, android::os::Bundle arg2, jstring arg3)
	{
		return callMethod<jint>(
			"playEarcon",
			"(Ljava/lang/String;ILandroid/os/Bundle;Ljava/lang/String;)I",
			arg0,
			arg1,
			arg2.object(),
			arg3
		);
	}
	jint TextToSpeech::playSilence(jlong arg0, jint arg1, java::util::HashMap arg2)
	{
		return callMethod<jint>(
			"playSilence",
			"(JILjava/util/HashMap;)I",
			arg0,
			arg1,
			arg2.object()
		);
	}
	jint TextToSpeech::playSilentUtterance(jlong arg0, jint arg1, jstring arg2)
	{
		return callMethod<jint>(
			"playSilentUtterance",
			"(JILjava/lang/String;)I",
			arg0,
			arg1,
			arg2
		);
	}
	jint TextToSpeech::setAudioAttributes(android::media::AudioAttributes arg0)
	{
		return callMethod<jint>(
			"setAudioAttributes",
			"(Landroid/media/AudioAttributes;)I",
			arg0.object()
		);
	}
	jint TextToSpeech::setEngineByPackageName(jstring arg0)
	{
		return callMethod<jint>(
			"setEngineByPackageName",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
	jint TextToSpeech::setLanguage(java::util::Locale arg0)
	{
		return callMethod<jint>(
			"setLanguage",
			"(Ljava/util/Locale;)I",
			arg0.object()
		);
	}
	jint TextToSpeech::setOnUtteranceCompletedListener(JObject arg0)
	{
		return callMethod<jint>(
			"setOnUtteranceCompletedListener",
			"(Landroid/speech/tts/TextToSpeech$OnUtteranceCompletedListener;)I",
			arg0.object()
		);
	}
	jint TextToSpeech::setOnUtteranceProgressListener(android::speech::tts::UtteranceProgressListener arg0)
	{
		return callMethod<jint>(
			"setOnUtteranceProgressListener",
			"(Landroid/speech/tts/UtteranceProgressListener;)I",
			arg0.object()
		);
	}
	jint TextToSpeech::setPitch(jfloat arg0)
	{
		return callMethod<jint>(
			"setPitch",
			"(F)I",
			arg0
		);
	}
	jint TextToSpeech::setSpeechRate(jfloat arg0)
	{
		return callMethod<jint>(
			"setSpeechRate",
			"(F)I",
			arg0
		);
	}
	jint TextToSpeech::setVoice(android::speech::tts::Voice arg0)
	{
		return callMethod<jint>(
			"setVoice",
			"(Landroid/speech/tts/Voice;)I",
			arg0.object()
		);
	}
	void TextToSpeech::shutdown()
	{
		callMethod<void>(
			"shutdown",
			"()V"
		);
	}
	jint TextToSpeech::speak(jstring arg0, jint arg1, java::util::HashMap arg2)
	{
		return callMethod<jint>(
			"speak",
			"(Ljava/lang/String;ILjava/util/HashMap;)I",
			arg0,
			arg1,
			arg2.object()
		);
	}
	jint TextToSpeech::speak(jstring arg0, jint arg1, android::os::Bundle arg2, jstring arg3)
	{
		return callMethod<jint>(
			"speak",
			"(Ljava/lang/CharSequence;ILandroid/os/Bundle;Ljava/lang/String;)I",
			arg0,
			arg1,
			arg2.object(),
			arg3
		);
	}
	jint TextToSpeech::stop()
	{
		return callMethod<jint>(
			"stop",
			"()I"
		);
	}
	jint TextToSpeech::synthesizeToFile(jstring arg0, java::util::HashMap arg1, jstring arg2)
	{
		return callMethod<jint>(
			"synthesizeToFile",
			"(Ljava/lang/String;Ljava/util/HashMap;Ljava/lang/String;)I",
			arg0,
			arg1.object(),
			arg2
		);
	}
	jint TextToSpeech::synthesizeToFile(jstring arg0, android::os::Bundle arg1, android::os::ParcelFileDescriptor arg2, jstring arg3)
	{
		return callMethod<jint>(
			"synthesizeToFile",
			"(Ljava/lang/CharSequence;Landroid/os/Bundle;Landroid/os/ParcelFileDescriptor;Ljava/lang/String;)I",
			arg0,
			arg1.object(),
			arg2.object(),
			arg3
		);
	}
	jint TextToSpeech::synthesizeToFile(jstring arg0, android::os::Bundle arg1, java::io::File arg2, jstring arg3)
	{
		return callMethod<jint>(
			"synthesizeToFile",
			"(Ljava/lang/CharSequence;Landroid/os/Bundle;Ljava/io/File;Ljava/lang/String;)I",
			arg0,
			arg1.object(),
			arg2.object(),
			arg3
		);
	}
} // namespace android::speech::tts

