#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class Context;
}
namespace android::content
{
	class Intent;
}
class JString;

namespace android::speech
{
	class RecognizerIntent : public JObject
	{
	public:
		// Fields
		static JString ACTION_GET_LANGUAGE_DETAILS();
		static JString ACTION_RECOGNIZE_SPEECH();
		static JString ACTION_VOICE_SEARCH_HANDS_FREE();
		static JString ACTION_WEB_SEARCH();
		static JString DETAILS_META_DATA();
		static JString EXTRA_AUDIO_INJECT_SOURCE();
		static JString EXTRA_AUDIO_SOURCE();
		static JString EXTRA_AUDIO_SOURCE_CHANNEL_COUNT();
		static JString EXTRA_AUDIO_SOURCE_ENCODING();
		static JString EXTRA_AUDIO_SOURCE_SAMPLING_RATE();
		static JString EXTRA_BIASING_STRINGS();
		static JString EXTRA_CALLING_PACKAGE();
		static JString EXTRA_CONFIDENCE_SCORES();
		static JString EXTRA_ENABLE_BIASING_DEVICE_CONTEXT();
		static JString EXTRA_ENABLE_FORMATTING();
		static JString EXTRA_ENABLE_LANGUAGE_DETECTION();
		static JString EXTRA_ENABLE_LANGUAGE_SWITCH();
		static JString EXTRA_HIDE_PARTIAL_TRAILING_PUNCTUATION();
		static JString EXTRA_LANGUAGE();
		static JString EXTRA_LANGUAGE_DETECTION_ALLOWED_LANGUAGES();
		static JString EXTRA_LANGUAGE_MODEL();
		static JString EXTRA_LANGUAGE_PREFERENCE();
		static JString EXTRA_LANGUAGE_SWITCH_ALLOWED_LANGUAGES();
		static JString EXTRA_MASK_OFFENSIVE_WORDS();
		static JString EXTRA_MAX_RESULTS();
		static JString EXTRA_ONLY_RETURN_LANGUAGE_PREFERENCE();
		static JString EXTRA_ORIGIN();
		static JString EXTRA_PARTIAL_RESULTS();
		static JString EXTRA_PREFER_OFFLINE();
		static JString EXTRA_PROMPT();
		static JString EXTRA_REQUEST_WORD_CONFIDENCE();
		static JString EXTRA_REQUEST_WORD_TIMING();
		static JString EXTRA_RESULTS();
		static JString EXTRA_RESULTS_PENDINGINTENT();
		static JString EXTRA_RESULTS_PENDINGINTENT_BUNDLE();
		static JString EXTRA_SECURE();
		static JString EXTRA_SEGMENTED_SESSION();
		static JString EXTRA_SPEECH_INPUT_COMPLETE_SILENCE_LENGTH_MILLIS();
		static JString EXTRA_SPEECH_INPUT_MINIMUM_LENGTH_MILLIS();
		static JString EXTRA_SPEECH_INPUT_POSSIBLY_COMPLETE_SILENCE_LENGTH_MILLIS();
		static JString EXTRA_SUPPORTED_LANGUAGES();
		static JString EXTRA_WEB_SEARCH_ONLY();
		static JString FORMATTING_OPTIMIZE_LATENCY();
		static JString FORMATTING_OPTIMIZE_QUALITY();
		static JString LANGUAGE_MODEL_FREE_FORM();
		static JString LANGUAGE_MODEL_WEB_SEARCH();
		static JString LANGUAGE_SWITCH_BALANCED();
		static JString LANGUAGE_SWITCH_HIGH_PRECISION();
		static JString LANGUAGE_SWITCH_QUICK_RESPONSE();
		static jint RESULT_AUDIO_ERROR();
		static jint RESULT_CLIENT_ERROR();
		static jint RESULT_NETWORK_ERROR();
		static jint RESULT_NO_MATCH();
		static jint RESULT_SERVER_ERROR();
		
		// QJniObject forward
		template<typename ...Ts> explicit RecognizerIntent(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RecognizerIntent(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static android::content::Intent getVoiceDetailsIntent(android::content::Context arg0);
	};
} // namespace android::speech

