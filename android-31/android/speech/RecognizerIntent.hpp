#pragma once

#include "../content/Context.def.hpp"
#include "../content/Intent.def.hpp"
#include "../../JString.hpp"
#include "./RecognizerIntent.def.hpp"

namespace android::speech
{
	// Fields
	inline JString RecognizerIntent::ACTION_GET_LANGUAGE_DETAILS()
	{
		return getStaticObjectField(
			"android.speech.RecognizerIntent",
			"ACTION_GET_LANGUAGE_DETAILS",
			"Ljava/lang/String;"
		);
	}
	inline JString RecognizerIntent::ACTION_RECOGNIZE_SPEECH()
	{
		return getStaticObjectField(
			"android.speech.RecognizerIntent",
			"ACTION_RECOGNIZE_SPEECH",
			"Ljava/lang/String;"
		);
	}
	inline JString RecognizerIntent::ACTION_VOICE_SEARCH_HANDS_FREE()
	{
		return getStaticObjectField(
			"android.speech.RecognizerIntent",
			"ACTION_VOICE_SEARCH_HANDS_FREE",
			"Ljava/lang/String;"
		);
	}
	inline JString RecognizerIntent::ACTION_WEB_SEARCH()
	{
		return getStaticObjectField(
			"android.speech.RecognizerIntent",
			"ACTION_WEB_SEARCH",
			"Ljava/lang/String;"
		);
	}
	inline JString RecognizerIntent::DETAILS_META_DATA()
	{
		return getStaticObjectField(
			"android.speech.RecognizerIntent",
			"DETAILS_META_DATA",
			"Ljava/lang/String;"
		);
	}
	inline JString RecognizerIntent::EXTRA_AUDIO_INJECT_SOURCE()
	{
		return getStaticObjectField(
			"android.speech.RecognizerIntent",
			"EXTRA_AUDIO_INJECT_SOURCE",
			"Ljava/lang/String;"
		);
	}
	inline JString RecognizerIntent::EXTRA_CALLING_PACKAGE()
	{
		return getStaticObjectField(
			"android.speech.RecognizerIntent",
			"EXTRA_CALLING_PACKAGE",
			"Ljava/lang/String;"
		);
	}
	inline JString RecognizerIntent::EXTRA_CONFIDENCE_SCORES()
	{
		return getStaticObjectField(
			"android.speech.RecognizerIntent",
			"EXTRA_CONFIDENCE_SCORES",
			"Ljava/lang/String;"
		);
	}
	inline JString RecognizerIntent::EXTRA_LANGUAGE()
	{
		return getStaticObjectField(
			"android.speech.RecognizerIntent",
			"EXTRA_LANGUAGE",
			"Ljava/lang/String;"
		);
	}
	inline JString RecognizerIntent::EXTRA_LANGUAGE_MODEL()
	{
		return getStaticObjectField(
			"android.speech.RecognizerIntent",
			"EXTRA_LANGUAGE_MODEL",
			"Ljava/lang/String;"
		);
	}
	inline JString RecognizerIntent::EXTRA_LANGUAGE_PREFERENCE()
	{
		return getStaticObjectField(
			"android.speech.RecognizerIntent",
			"EXTRA_LANGUAGE_PREFERENCE",
			"Ljava/lang/String;"
		);
	}
	inline JString RecognizerIntent::EXTRA_MAX_RESULTS()
	{
		return getStaticObjectField(
			"android.speech.RecognizerIntent",
			"EXTRA_MAX_RESULTS",
			"Ljava/lang/String;"
		);
	}
	inline JString RecognizerIntent::EXTRA_ONLY_RETURN_LANGUAGE_PREFERENCE()
	{
		return getStaticObjectField(
			"android.speech.RecognizerIntent",
			"EXTRA_ONLY_RETURN_LANGUAGE_PREFERENCE",
			"Ljava/lang/String;"
		);
	}
	inline JString RecognizerIntent::EXTRA_ORIGIN()
	{
		return getStaticObjectField(
			"android.speech.RecognizerIntent",
			"EXTRA_ORIGIN",
			"Ljava/lang/String;"
		);
	}
	inline JString RecognizerIntent::EXTRA_PARTIAL_RESULTS()
	{
		return getStaticObjectField(
			"android.speech.RecognizerIntent",
			"EXTRA_PARTIAL_RESULTS",
			"Ljava/lang/String;"
		);
	}
	inline JString RecognizerIntent::EXTRA_PREFER_OFFLINE()
	{
		return getStaticObjectField(
			"android.speech.RecognizerIntent",
			"EXTRA_PREFER_OFFLINE",
			"Ljava/lang/String;"
		);
	}
	inline JString RecognizerIntent::EXTRA_PROMPT()
	{
		return getStaticObjectField(
			"android.speech.RecognizerIntent",
			"EXTRA_PROMPT",
			"Ljava/lang/String;"
		);
	}
	inline JString RecognizerIntent::EXTRA_RESULTS()
	{
		return getStaticObjectField(
			"android.speech.RecognizerIntent",
			"EXTRA_RESULTS",
			"Ljava/lang/String;"
		);
	}
	inline JString RecognizerIntent::EXTRA_RESULTS_PENDINGINTENT()
	{
		return getStaticObjectField(
			"android.speech.RecognizerIntent",
			"EXTRA_RESULTS_PENDINGINTENT",
			"Ljava/lang/String;"
		);
	}
	inline JString RecognizerIntent::EXTRA_RESULTS_PENDINGINTENT_BUNDLE()
	{
		return getStaticObjectField(
			"android.speech.RecognizerIntent",
			"EXTRA_RESULTS_PENDINGINTENT_BUNDLE",
			"Ljava/lang/String;"
		);
	}
	inline JString RecognizerIntent::EXTRA_SECURE()
	{
		return getStaticObjectField(
			"android.speech.RecognizerIntent",
			"EXTRA_SECURE",
			"Ljava/lang/String;"
		);
	}
	inline JString RecognizerIntent::EXTRA_SPEECH_INPUT_COMPLETE_SILENCE_LENGTH_MILLIS()
	{
		return getStaticObjectField(
			"android.speech.RecognizerIntent",
			"EXTRA_SPEECH_INPUT_COMPLETE_SILENCE_LENGTH_MILLIS",
			"Ljava/lang/String;"
		);
	}
	inline JString RecognizerIntent::EXTRA_SPEECH_INPUT_MINIMUM_LENGTH_MILLIS()
	{
		return getStaticObjectField(
			"android.speech.RecognizerIntent",
			"EXTRA_SPEECH_INPUT_MINIMUM_LENGTH_MILLIS",
			"Ljava/lang/String;"
		);
	}
	inline JString RecognizerIntent::EXTRA_SPEECH_INPUT_POSSIBLY_COMPLETE_SILENCE_LENGTH_MILLIS()
	{
		return getStaticObjectField(
			"android.speech.RecognizerIntent",
			"EXTRA_SPEECH_INPUT_POSSIBLY_COMPLETE_SILENCE_LENGTH_MILLIS",
			"Ljava/lang/String;"
		);
	}
	inline JString RecognizerIntent::EXTRA_SUPPORTED_LANGUAGES()
	{
		return getStaticObjectField(
			"android.speech.RecognizerIntent",
			"EXTRA_SUPPORTED_LANGUAGES",
			"Ljava/lang/String;"
		);
	}
	inline JString RecognizerIntent::EXTRA_WEB_SEARCH_ONLY()
	{
		return getStaticObjectField(
			"android.speech.RecognizerIntent",
			"EXTRA_WEB_SEARCH_ONLY",
			"Ljava/lang/String;"
		);
	}
	inline JString RecognizerIntent::LANGUAGE_MODEL_FREE_FORM()
	{
		return getStaticObjectField(
			"android.speech.RecognizerIntent",
			"LANGUAGE_MODEL_FREE_FORM",
			"Ljava/lang/String;"
		);
	}
	inline JString RecognizerIntent::LANGUAGE_MODEL_WEB_SEARCH()
	{
		return getStaticObjectField(
			"android.speech.RecognizerIntent",
			"LANGUAGE_MODEL_WEB_SEARCH",
			"Ljava/lang/String;"
		);
	}
	inline jint RecognizerIntent::RESULT_AUDIO_ERROR()
	{
		return getStaticField<jint>(
			"android.speech.RecognizerIntent",
			"RESULT_AUDIO_ERROR"
		);
	}
	inline jint RecognizerIntent::RESULT_CLIENT_ERROR()
	{
		return getStaticField<jint>(
			"android.speech.RecognizerIntent",
			"RESULT_CLIENT_ERROR"
		);
	}
	inline jint RecognizerIntent::RESULT_NETWORK_ERROR()
	{
		return getStaticField<jint>(
			"android.speech.RecognizerIntent",
			"RESULT_NETWORK_ERROR"
		);
	}
	inline jint RecognizerIntent::RESULT_NO_MATCH()
	{
		return getStaticField<jint>(
			"android.speech.RecognizerIntent",
			"RESULT_NO_MATCH"
		);
	}
	inline jint RecognizerIntent::RESULT_SERVER_ERROR()
	{
		return getStaticField<jint>(
			"android.speech.RecognizerIntent",
			"RESULT_SERVER_ERROR"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::content::Intent RecognizerIntent::getVoiceDetailsIntent(android::content::Context arg0)
	{
		return callStaticObjectMethod(
			"android.speech.RecognizerIntent",
			"getVoiceDetailsIntent",
			"(Landroid/content/Context;)Landroid/content/Intent;",
			arg0.object()
		);
	}
} // namespace android::speech

// Base class headers

