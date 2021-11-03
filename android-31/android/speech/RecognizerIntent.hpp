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

namespace android::speech
{
	class RecognizerIntent : public JObject
	{
	public:
		// Fields
		static jstring ACTION_GET_LANGUAGE_DETAILS();
		static jstring ACTION_RECOGNIZE_SPEECH();
		static jstring ACTION_VOICE_SEARCH_HANDS_FREE();
		static jstring ACTION_WEB_SEARCH();
		static jstring DETAILS_META_DATA();
		static jstring EXTRA_AUDIO_INJECT_SOURCE();
		static jstring EXTRA_CALLING_PACKAGE();
		static jstring EXTRA_CONFIDENCE_SCORES();
		static jstring EXTRA_LANGUAGE();
		static jstring EXTRA_LANGUAGE_MODEL();
		static jstring EXTRA_LANGUAGE_PREFERENCE();
		static jstring EXTRA_MAX_RESULTS();
		static jstring EXTRA_ONLY_RETURN_LANGUAGE_PREFERENCE();
		static jstring EXTRA_ORIGIN();
		static jstring EXTRA_PARTIAL_RESULTS();
		static jstring EXTRA_PREFER_OFFLINE();
		static jstring EXTRA_PROMPT();
		static jstring EXTRA_RESULTS();
		static jstring EXTRA_RESULTS_PENDINGINTENT();
		static jstring EXTRA_RESULTS_PENDINGINTENT_BUNDLE();
		static jstring EXTRA_SECURE();
		static jstring EXTRA_SPEECH_INPUT_COMPLETE_SILENCE_LENGTH_MILLIS();
		static jstring EXTRA_SPEECH_INPUT_MINIMUM_LENGTH_MILLIS();
		static jstring EXTRA_SPEECH_INPUT_POSSIBLY_COMPLETE_SILENCE_LENGTH_MILLIS();
		static jstring EXTRA_SUPPORTED_LANGUAGES();
		static jstring EXTRA_WEB_SEARCH_ONLY();
		static jstring LANGUAGE_MODEL_FREE_FORM();
		static jstring LANGUAGE_MODEL_WEB_SEARCH();
		static jint RESULT_AUDIO_ERROR();
		static jint RESULT_CLIENT_ERROR();
		static jint RESULT_NETWORK_ERROR();
		static jint RESULT_NO_MATCH();
		static jint RESULT_SERVER_ERROR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RecognizerIntent(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RecognizerIntent(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::content::Intent getVoiceDetailsIntent(android::content::Context arg0);
	};
} // namespace android::speech

