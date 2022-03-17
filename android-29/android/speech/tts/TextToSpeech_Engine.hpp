#pragma once

#include "./TextToSpeech.def.hpp"
#include "../../../JString.hpp"
#include "./TextToSpeech_Engine.def.hpp"

namespace android::speech::tts
{
	// Fields
	inline JString TextToSpeech_Engine::ACTION_CHECK_TTS_DATA()
	{
		return getStaticObjectField(
			"android.speech.tts.TextToSpeech$Engine",
			"ACTION_CHECK_TTS_DATA",
			"Ljava/lang/String;"
		);
	}
	inline JString TextToSpeech_Engine::ACTION_GET_SAMPLE_TEXT()
	{
		return getStaticObjectField(
			"android.speech.tts.TextToSpeech$Engine",
			"ACTION_GET_SAMPLE_TEXT",
			"Ljava/lang/String;"
		);
	}
	inline JString TextToSpeech_Engine::ACTION_INSTALL_TTS_DATA()
	{
		return getStaticObjectField(
			"android.speech.tts.TextToSpeech$Engine",
			"ACTION_INSTALL_TTS_DATA",
			"Ljava/lang/String;"
		);
	}
	inline JString TextToSpeech_Engine::ACTION_TTS_DATA_INSTALLED()
	{
		return getStaticObjectField(
			"android.speech.tts.TextToSpeech$Engine",
			"ACTION_TTS_DATA_INSTALLED",
			"Ljava/lang/String;"
		);
	}
	inline jint TextToSpeech_Engine::CHECK_VOICE_DATA_BAD_DATA()
	{
		return getStaticField<jint>(
			"android.speech.tts.TextToSpeech$Engine",
			"CHECK_VOICE_DATA_BAD_DATA"
		);
	}
	inline jint TextToSpeech_Engine::CHECK_VOICE_DATA_FAIL()
	{
		return getStaticField<jint>(
			"android.speech.tts.TextToSpeech$Engine",
			"CHECK_VOICE_DATA_FAIL"
		);
	}
	inline jint TextToSpeech_Engine::CHECK_VOICE_DATA_MISSING_DATA()
	{
		return getStaticField<jint>(
			"android.speech.tts.TextToSpeech$Engine",
			"CHECK_VOICE_DATA_MISSING_DATA"
		);
	}
	inline jint TextToSpeech_Engine::CHECK_VOICE_DATA_MISSING_VOLUME()
	{
		return getStaticField<jint>(
			"android.speech.tts.TextToSpeech$Engine",
			"CHECK_VOICE_DATA_MISSING_VOLUME"
		);
	}
	inline jint TextToSpeech_Engine::CHECK_VOICE_DATA_PASS()
	{
		return getStaticField<jint>(
			"android.speech.tts.TextToSpeech$Engine",
			"CHECK_VOICE_DATA_PASS"
		);
	}
	inline jint TextToSpeech_Engine::DEFAULT_STREAM()
	{
		return getStaticField<jint>(
			"android.speech.tts.TextToSpeech$Engine",
			"DEFAULT_STREAM"
		);
	}
	inline JString TextToSpeech_Engine::EXTRA_AVAILABLE_VOICES()
	{
		return getStaticObjectField(
			"android.speech.tts.TextToSpeech$Engine",
			"EXTRA_AVAILABLE_VOICES",
			"Ljava/lang/String;"
		);
	}
	inline JString TextToSpeech_Engine::EXTRA_CHECK_VOICE_DATA_FOR()
	{
		return getStaticObjectField(
			"android.speech.tts.TextToSpeech$Engine",
			"EXTRA_CHECK_VOICE_DATA_FOR",
			"Ljava/lang/String;"
		);
	}
	inline JString TextToSpeech_Engine::EXTRA_SAMPLE_TEXT()
	{
		return getStaticObjectField(
			"android.speech.tts.TextToSpeech$Engine",
			"EXTRA_SAMPLE_TEXT",
			"Ljava/lang/String;"
		);
	}
	inline JString TextToSpeech_Engine::EXTRA_TTS_DATA_INSTALLED()
	{
		return getStaticObjectField(
			"android.speech.tts.TextToSpeech$Engine",
			"EXTRA_TTS_DATA_INSTALLED",
			"Ljava/lang/String;"
		);
	}
	inline JString TextToSpeech_Engine::EXTRA_UNAVAILABLE_VOICES()
	{
		return getStaticObjectField(
			"android.speech.tts.TextToSpeech$Engine",
			"EXTRA_UNAVAILABLE_VOICES",
			"Ljava/lang/String;"
		);
	}
	inline JString TextToSpeech_Engine::EXTRA_VOICE_DATA_FILES()
	{
		return getStaticObjectField(
			"android.speech.tts.TextToSpeech$Engine",
			"EXTRA_VOICE_DATA_FILES",
			"Ljava/lang/String;"
		);
	}
	inline JString TextToSpeech_Engine::EXTRA_VOICE_DATA_FILES_INFO()
	{
		return getStaticObjectField(
			"android.speech.tts.TextToSpeech$Engine",
			"EXTRA_VOICE_DATA_FILES_INFO",
			"Ljava/lang/String;"
		);
	}
	inline JString TextToSpeech_Engine::EXTRA_VOICE_DATA_ROOT_DIRECTORY()
	{
		return getStaticObjectField(
			"android.speech.tts.TextToSpeech$Engine",
			"EXTRA_VOICE_DATA_ROOT_DIRECTORY",
			"Ljava/lang/String;"
		);
	}
	inline JString TextToSpeech_Engine::INTENT_ACTION_TTS_SERVICE()
	{
		return getStaticObjectField(
			"android.speech.tts.TextToSpeech$Engine",
			"INTENT_ACTION_TTS_SERVICE",
			"Ljava/lang/String;"
		);
	}
	inline JString TextToSpeech_Engine::KEY_FEATURE_EMBEDDED_SYNTHESIS()
	{
		return getStaticObjectField(
			"android.speech.tts.TextToSpeech$Engine",
			"KEY_FEATURE_EMBEDDED_SYNTHESIS",
			"Ljava/lang/String;"
		);
	}
	inline JString TextToSpeech_Engine::KEY_FEATURE_NETWORK_RETRIES_COUNT()
	{
		return getStaticObjectField(
			"android.speech.tts.TextToSpeech$Engine",
			"KEY_FEATURE_NETWORK_RETRIES_COUNT",
			"Ljava/lang/String;"
		);
	}
	inline JString TextToSpeech_Engine::KEY_FEATURE_NETWORK_SYNTHESIS()
	{
		return getStaticObjectField(
			"android.speech.tts.TextToSpeech$Engine",
			"KEY_FEATURE_NETWORK_SYNTHESIS",
			"Ljava/lang/String;"
		);
	}
	inline JString TextToSpeech_Engine::KEY_FEATURE_NETWORK_TIMEOUT_MS()
	{
		return getStaticObjectField(
			"android.speech.tts.TextToSpeech$Engine",
			"KEY_FEATURE_NETWORK_TIMEOUT_MS",
			"Ljava/lang/String;"
		);
	}
	inline JString TextToSpeech_Engine::KEY_FEATURE_NOT_INSTALLED()
	{
		return getStaticObjectField(
			"android.speech.tts.TextToSpeech$Engine",
			"KEY_FEATURE_NOT_INSTALLED",
			"Ljava/lang/String;"
		);
	}
	inline JString TextToSpeech_Engine::KEY_PARAM_PAN()
	{
		return getStaticObjectField(
			"android.speech.tts.TextToSpeech$Engine",
			"KEY_PARAM_PAN",
			"Ljava/lang/String;"
		);
	}
	inline JString TextToSpeech_Engine::KEY_PARAM_SESSION_ID()
	{
		return getStaticObjectField(
			"android.speech.tts.TextToSpeech$Engine",
			"KEY_PARAM_SESSION_ID",
			"Ljava/lang/String;"
		);
	}
	inline JString TextToSpeech_Engine::KEY_PARAM_STREAM()
	{
		return getStaticObjectField(
			"android.speech.tts.TextToSpeech$Engine",
			"KEY_PARAM_STREAM",
			"Ljava/lang/String;"
		);
	}
	inline JString TextToSpeech_Engine::KEY_PARAM_UTTERANCE_ID()
	{
		return getStaticObjectField(
			"android.speech.tts.TextToSpeech$Engine",
			"KEY_PARAM_UTTERANCE_ID",
			"Ljava/lang/String;"
		);
	}
	inline JString TextToSpeech_Engine::KEY_PARAM_VOLUME()
	{
		return getStaticObjectField(
			"android.speech.tts.TextToSpeech$Engine",
			"KEY_PARAM_VOLUME",
			"Ljava/lang/String;"
		);
	}
	inline JString TextToSpeech_Engine::SERVICE_META_DATA()
	{
		return getStaticObjectField(
			"android.speech.tts.TextToSpeech$Engine",
			"SERVICE_META_DATA",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline TextToSpeech_Engine::TextToSpeech_Engine(android::speech::tts::TextToSpeech arg0)
		: JObject(
			"android.speech.tts.TextToSpeech$Engine",
			"(Landroid/speech/tts/TextToSpeech;)V",
			arg0.object()
		) {}
	
	// Methods
} // namespace android::speech::tts

// Base class headers

