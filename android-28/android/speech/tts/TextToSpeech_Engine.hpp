#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::speech::tts
{
	class TextToSpeech;
}

namespace android::speech::tts
{
	class TextToSpeech_Engine : public __JniBaseClass
	{
	public:
		// Fields
		static jstring ACTION_CHECK_TTS_DATA();
		static jstring ACTION_GET_SAMPLE_TEXT();
		static jstring ACTION_INSTALL_TTS_DATA();
		static jstring ACTION_TTS_DATA_INSTALLED();
		static jint CHECK_VOICE_DATA_BAD_DATA();
		static jint CHECK_VOICE_DATA_FAIL();
		static jint CHECK_VOICE_DATA_MISSING_DATA();
		static jint CHECK_VOICE_DATA_MISSING_VOLUME();
		static jint CHECK_VOICE_DATA_PASS();
		static jint DEFAULT_STREAM();
		static jstring EXTRA_AVAILABLE_VOICES();
		static jstring EXTRA_CHECK_VOICE_DATA_FOR();
		static jstring EXTRA_SAMPLE_TEXT();
		static jstring EXTRA_TTS_DATA_INSTALLED();
		static jstring EXTRA_UNAVAILABLE_VOICES();
		static jstring EXTRA_VOICE_DATA_FILES();
		static jstring EXTRA_VOICE_DATA_FILES_INFO();
		static jstring EXTRA_VOICE_DATA_ROOT_DIRECTORY();
		static jstring INTENT_ACTION_TTS_SERVICE();
		static jstring KEY_FEATURE_EMBEDDED_SYNTHESIS();
		static jstring KEY_FEATURE_NETWORK_RETRIES_COUNT();
		static jstring KEY_FEATURE_NETWORK_SYNTHESIS();
		static jstring KEY_FEATURE_NETWORK_TIMEOUT_MS();
		static jstring KEY_FEATURE_NOT_INSTALLED();
		static jstring KEY_PARAM_PAN();
		static jstring KEY_PARAM_SESSION_ID();
		static jstring KEY_PARAM_STREAM();
		static jstring KEY_PARAM_UTTERANCE_ID();
		static jstring KEY_PARAM_VOLUME();
		static jstring SERVICE_META_DATA();
		
		// QJniObject forward
		template<typename ...Ts> explicit TextToSpeech_Engine(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		TextToSpeech_Engine(QJniObject obj);
		
		// Constructors
		TextToSpeech_Engine(android::speech::tts::TextToSpeech arg0);
		
		// Methods
	};
} // namespace android::speech::tts

