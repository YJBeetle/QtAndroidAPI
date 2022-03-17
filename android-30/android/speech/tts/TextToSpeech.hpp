#pragma once

#include "../../content/Context.def.hpp"
#include "../../media/AudioAttributes.def.hpp"
#include "../../os/Bundle.def.hpp"
#include "../../os/ParcelFileDescriptor.def.hpp"
#include "./UtteranceProgressListener.def.hpp"
#include "./Voice.def.hpp"
#include "../../../java/io/File.def.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "../../../java/util/HashMap.def.hpp"
#include "../../../java/util/Locale.def.hpp"
#include "./TextToSpeech.def.hpp"

namespace android::speech::tts
{
	// Fields
	inline JString TextToSpeech::ACTION_TTS_QUEUE_PROCESSING_COMPLETED()
	{
		return getStaticObjectField(
			"android.speech.tts.TextToSpeech",
			"ACTION_TTS_QUEUE_PROCESSING_COMPLETED",
			"Ljava/lang/String;"
		);
	}
	inline jint TextToSpeech::ERROR()
	{
		return getStaticField<jint>(
			"android.speech.tts.TextToSpeech",
			"ERROR"
		);
	}
	inline jint TextToSpeech::ERROR_INVALID_REQUEST()
	{
		return getStaticField<jint>(
			"android.speech.tts.TextToSpeech",
			"ERROR_INVALID_REQUEST"
		);
	}
	inline jint TextToSpeech::ERROR_NETWORK()
	{
		return getStaticField<jint>(
			"android.speech.tts.TextToSpeech",
			"ERROR_NETWORK"
		);
	}
	inline jint TextToSpeech::ERROR_NETWORK_TIMEOUT()
	{
		return getStaticField<jint>(
			"android.speech.tts.TextToSpeech",
			"ERROR_NETWORK_TIMEOUT"
		);
	}
	inline jint TextToSpeech::ERROR_NOT_INSTALLED_YET()
	{
		return getStaticField<jint>(
			"android.speech.tts.TextToSpeech",
			"ERROR_NOT_INSTALLED_YET"
		);
	}
	inline jint TextToSpeech::ERROR_OUTPUT()
	{
		return getStaticField<jint>(
			"android.speech.tts.TextToSpeech",
			"ERROR_OUTPUT"
		);
	}
	inline jint TextToSpeech::ERROR_SERVICE()
	{
		return getStaticField<jint>(
			"android.speech.tts.TextToSpeech",
			"ERROR_SERVICE"
		);
	}
	inline jint TextToSpeech::ERROR_SYNTHESIS()
	{
		return getStaticField<jint>(
			"android.speech.tts.TextToSpeech",
			"ERROR_SYNTHESIS"
		);
	}
	inline jint TextToSpeech::LANG_AVAILABLE()
	{
		return getStaticField<jint>(
			"android.speech.tts.TextToSpeech",
			"LANG_AVAILABLE"
		);
	}
	inline jint TextToSpeech::LANG_COUNTRY_AVAILABLE()
	{
		return getStaticField<jint>(
			"android.speech.tts.TextToSpeech",
			"LANG_COUNTRY_AVAILABLE"
		);
	}
	inline jint TextToSpeech::LANG_COUNTRY_VAR_AVAILABLE()
	{
		return getStaticField<jint>(
			"android.speech.tts.TextToSpeech",
			"LANG_COUNTRY_VAR_AVAILABLE"
		);
	}
	inline jint TextToSpeech::LANG_MISSING_DATA()
	{
		return getStaticField<jint>(
			"android.speech.tts.TextToSpeech",
			"LANG_MISSING_DATA"
		);
	}
	inline jint TextToSpeech::LANG_NOT_SUPPORTED()
	{
		return getStaticField<jint>(
			"android.speech.tts.TextToSpeech",
			"LANG_NOT_SUPPORTED"
		);
	}
	inline jint TextToSpeech::QUEUE_ADD()
	{
		return getStaticField<jint>(
			"android.speech.tts.TextToSpeech",
			"QUEUE_ADD"
		);
	}
	inline jint TextToSpeech::QUEUE_FLUSH()
	{
		return getStaticField<jint>(
			"android.speech.tts.TextToSpeech",
			"QUEUE_FLUSH"
		);
	}
	inline jint TextToSpeech::STOPPED()
	{
		return getStaticField<jint>(
			"android.speech.tts.TextToSpeech",
			"STOPPED"
		);
	}
	inline jint TextToSpeech::SUCCESS()
	{
		return getStaticField<jint>(
			"android.speech.tts.TextToSpeech",
			"SUCCESS"
		);
	}
	
	// Constructors
	inline TextToSpeech::TextToSpeech(android::content::Context arg0, JObject arg1)
		: JObject(
			"android.speech.tts.TextToSpeech",
			"(Landroid/content/Context;Landroid/speech/tts/TextToSpeech$OnInitListener;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline TextToSpeech::TextToSpeech(android::content::Context arg0, JObject arg1, JString arg2)
		: JObject(
			"android.speech.tts.TextToSpeech",
			"(Landroid/content/Context;Landroid/speech/tts/TextToSpeech$OnInitListener;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object(),
			arg2.object<jstring>()
		) {}
	
	// Methods
	inline jint TextToSpeech::getMaxSpeechInputLength()
	{
		return callStaticMethod<jint>(
			"android.speech.tts.TextToSpeech",
			"getMaxSpeechInputLength",
			"()I"
		);
	}
	inline jint TextToSpeech::addEarcon(JString arg0, java::io::File arg1) const
	{
		return callMethod<jint>(
			"addEarcon",
			"(Ljava/lang/String;Ljava/io/File;)I",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline jint TextToSpeech::addEarcon(JString arg0, JString arg1) const
	{
		return callMethod<jint>(
			"addEarcon",
			"(Ljava/lang/String;Ljava/lang/String;)I",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline jint TextToSpeech::addEarcon(JString arg0, JString arg1, jint arg2) const
	{
		return callMethod<jint>(
			"addEarcon",
			"(Ljava/lang/String;Ljava/lang/String;I)I",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2
		);
	}
	inline jint TextToSpeech::addSpeech(JString arg0, java::io::File arg1) const
	{
		return callMethod<jint>(
			"addSpeech",
			"(Ljava/lang/CharSequence;Ljava/io/File;)I",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline jint TextToSpeech::addSpeech(JString arg0, JString arg1) const
	{
		return callMethod<jint>(
			"addSpeech",
			"(Ljava/lang/String;Ljava/lang/String;)I",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline jint TextToSpeech::addSpeech(JString arg0, JString arg1, jint arg2) const
	{
		return callMethod<jint>(
			"addSpeech",
			"(Ljava/lang/CharSequence;Ljava/lang/String;I)I",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2
		);
	}
	inline jboolean TextToSpeech::areDefaultsEnforced() const
	{
		return callMethod<jboolean>(
			"areDefaultsEnforced",
			"()Z"
		);
	}
	inline JObject TextToSpeech::getAvailableLanguages() const
	{
		return callObjectMethod(
			"getAvailableLanguages",
			"()Ljava/util/Set;"
		);
	}
	inline JString TextToSpeech::getDefaultEngine() const
	{
		return callObjectMethod(
			"getDefaultEngine",
			"()Ljava/lang/String;"
		);
	}
	inline java::util::Locale TextToSpeech::getDefaultLanguage() const
	{
		return callObjectMethod(
			"getDefaultLanguage",
			"()Ljava/util/Locale;"
		);
	}
	inline android::speech::tts::Voice TextToSpeech::getDefaultVoice() const
	{
		return callObjectMethod(
			"getDefaultVoice",
			"()Landroid/speech/tts/Voice;"
		);
	}
	inline JObject TextToSpeech::getEngines() const
	{
		return callObjectMethod(
			"getEngines",
			"()Ljava/util/List;"
		);
	}
	inline JObject TextToSpeech::getFeatures(java::util::Locale arg0) const
	{
		return callObjectMethod(
			"getFeatures",
			"(Ljava/util/Locale;)Ljava/util/Set;",
			arg0.object()
		);
	}
	inline java::util::Locale TextToSpeech::getLanguage() const
	{
		return callObjectMethod(
			"getLanguage",
			"()Ljava/util/Locale;"
		);
	}
	inline android::speech::tts::Voice TextToSpeech::getVoice() const
	{
		return callObjectMethod(
			"getVoice",
			"()Landroid/speech/tts/Voice;"
		);
	}
	inline JObject TextToSpeech::getVoices() const
	{
		return callObjectMethod(
			"getVoices",
			"()Ljava/util/Set;"
		);
	}
	inline jint TextToSpeech::isLanguageAvailable(java::util::Locale arg0) const
	{
		return callMethod<jint>(
			"isLanguageAvailable",
			"(Ljava/util/Locale;)I",
			arg0.object()
		);
	}
	inline jboolean TextToSpeech::isSpeaking() const
	{
		return callMethod<jboolean>(
			"isSpeaking",
			"()Z"
		);
	}
	inline jint TextToSpeech::playEarcon(JString arg0, jint arg1, java::util::HashMap arg2) const
	{
		return callMethod<jint>(
			"playEarcon",
			"(Ljava/lang/String;ILjava/util/HashMap;)I",
			arg0.object<jstring>(),
			arg1,
			arg2.object()
		);
	}
	inline jint TextToSpeech::playEarcon(JString arg0, jint arg1, android::os::Bundle arg2, JString arg3) const
	{
		return callMethod<jint>(
			"playEarcon",
			"(Ljava/lang/String;ILandroid/os/Bundle;Ljava/lang/String;)I",
			arg0.object<jstring>(),
			arg1,
			arg2.object(),
			arg3.object<jstring>()
		);
	}
	inline jint TextToSpeech::playSilence(jlong arg0, jint arg1, java::util::HashMap arg2) const
	{
		return callMethod<jint>(
			"playSilence",
			"(JILjava/util/HashMap;)I",
			arg0,
			arg1,
			arg2.object()
		);
	}
	inline jint TextToSpeech::playSilentUtterance(jlong arg0, jint arg1, JString arg2) const
	{
		return callMethod<jint>(
			"playSilentUtterance",
			"(JILjava/lang/String;)I",
			arg0,
			arg1,
			arg2.object<jstring>()
		);
	}
	inline jint TextToSpeech::setAudioAttributes(android::media::AudioAttributes arg0) const
	{
		return callMethod<jint>(
			"setAudioAttributes",
			"(Landroid/media/AudioAttributes;)I",
			arg0.object()
		);
	}
	inline jint TextToSpeech::setEngineByPackageName(JString arg0) const
	{
		return callMethod<jint>(
			"setEngineByPackageName",
			"(Ljava/lang/String;)I",
			arg0.object<jstring>()
		);
	}
	inline jint TextToSpeech::setLanguage(java::util::Locale arg0) const
	{
		return callMethod<jint>(
			"setLanguage",
			"(Ljava/util/Locale;)I",
			arg0.object()
		);
	}
	inline jint TextToSpeech::setOnUtteranceCompletedListener(JObject arg0) const
	{
		return callMethod<jint>(
			"setOnUtteranceCompletedListener",
			"(Landroid/speech/tts/TextToSpeech$OnUtteranceCompletedListener;)I",
			arg0.object()
		);
	}
	inline jint TextToSpeech::setOnUtteranceProgressListener(android::speech::tts::UtteranceProgressListener arg0) const
	{
		return callMethod<jint>(
			"setOnUtteranceProgressListener",
			"(Landroid/speech/tts/UtteranceProgressListener;)I",
			arg0.object()
		);
	}
	inline jint TextToSpeech::setPitch(jfloat arg0) const
	{
		return callMethod<jint>(
			"setPitch",
			"(F)I",
			arg0
		);
	}
	inline jint TextToSpeech::setSpeechRate(jfloat arg0) const
	{
		return callMethod<jint>(
			"setSpeechRate",
			"(F)I",
			arg0
		);
	}
	inline jint TextToSpeech::setVoice(android::speech::tts::Voice arg0) const
	{
		return callMethod<jint>(
			"setVoice",
			"(Landroid/speech/tts/Voice;)I",
			arg0.object()
		);
	}
	inline void TextToSpeech::shutdown() const
	{
		callMethod<void>(
			"shutdown",
			"()V"
		);
	}
	inline jint TextToSpeech::speak(JString arg0, jint arg1, java::util::HashMap arg2) const
	{
		return callMethod<jint>(
			"speak",
			"(Ljava/lang/String;ILjava/util/HashMap;)I",
			arg0.object<jstring>(),
			arg1,
			arg2.object()
		);
	}
	inline jint TextToSpeech::speak(JString arg0, jint arg1, android::os::Bundle arg2, JString arg3) const
	{
		return callMethod<jint>(
			"speak",
			"(Ljava/lang/CharSequence;ILandroid/os/Bundle;Ljava/lang/String;)I",
			arg0.object<jstring>(),
			arg1,
			arg2.object(),
			arg3.object<jstring>()
		);
	}
	inline jint TextToSpeech::stop() const
	{
		return callMethod<jint>(
			"stop",
			"()I"
		);
	}
	inline jint TextToSpeech::synthesizeToFile(JString arg0, java::util::HashMap arg1, JString arg2) const
	{
		return callMethod<jint>(
			"synthesizeToFile",
			"(Ljava/lang/String;Ljava/util/HashMap;Ljava/lang/String;)I",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object<jstring>()
		);
	}
	inline jint TextToSpeech::synthesizeToFile(JString arg0, android::os::Bundle arg1, android::os::ParcelFileDescriptor arg2, JString arg3) const
	{
		return callMethod<jint>(
			"synthesizeToFile",
			"(Ljava/lang/CharSequence;Landroid/os/Bundle;Landroid/os/ParcelFileDescriptor;Ljava/lang/String;)I",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object(),
			arg3.object<jstring>()
		);
	}
	inline jint TextToSpeech::synthesizeToFile(JString arg0, android::os::Bundle arg1, java::io::File arg2, JString arg3) const
	{
		return callMethod<jint>(
			"synthesizeToFile",
			"(Ljava/lang/CharSequence;Landroid/os/Bundle;Ljava/io/File;Ljava/lang/String;)I",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object(),
			arg3.object<jstring>()
		);
	}
} // namespace android::speech::tts

// Base class headers

