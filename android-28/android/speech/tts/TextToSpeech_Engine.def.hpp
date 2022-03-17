#pragma once

#include "../../../JObject.hpp"

namespace android::speech::tts
{
	class TextToSpeech;
}
class JString;

namespace android::speech::tts
{
	class TextToSpeech_Engine : public JObject
	{
	public:
		// Fields
		static JString ACTION_CHECK_TTS_DATA();
		static JString ACTION_GET_SAMPLE_TEXT();
		static JString ACTION_INSTALL_TTS_DATA();
		static JString ACTION_TTS_DATA_INSTALLED();
		static jint CHECK_VOICE_DATA_BAD_DATA();
		static jint CHECK_VOICE_DATA_FAIL();
		static jint CHECK_VOICE_DATA_MISSING_DATA();
		static jint CHECK_VOICE_DATA_MISSING_VOLUME();
		static jint CHECK_VOICE_DATA_PASS();
		static jint DEFAULT_STREAM();
		static JString EXTRA_AVAILABLE_VOICES();
		static JString EXTRA_CHECK_VOICE_DATA_FOR();
		static JString EXTRA_SAMPLE_TEXT();
		static JString EXTRA_TTS_DATA_INSTALLED();
		static JString EXTRA_UNAVAILABLE_VOICES();
		static JString EXTRA_VOICE_DATA_FILES();
		static JString EXTRA_VOICE_DATA_FILES_INFO();
		static JString EXTRA_VOICE_DATA_ROOT_DIRECTORY();
		static JString INTENT_ACTION_TTS_SERVICE();
		static JString KEY_FEATURE_EMBEDDED_SYNTHESIS();
		static JString KEY_FEATURE_NETWORK_RETRIES_COUNT();
		static JString KEY_FEATURE_NETWORK_SYNTHESIS();
		static JString KEY_FEATURE_NETWORK_TIMEOUT_MS();
		static JString KEY_FEATURE_NOT_INSTALLED();
		static JString KEY_PARAM_PAN();
		static JString KEY_PARAM_SESSION_ID();
		static JString KEY_PARAM_STREAM();
		static JString KEY_PARAM_UTTERANCE_ID();
		static JString KEY_PARAM_VOLUME();
		static JString SERVICE_META_DATA();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TextToSpeech_Engine(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TextToSpeech_Engine(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		TextToSpeech_Engine(android::speech::tts::TextToSpeech arg0);
		
		// Methods
	};
} // namespace android::speech::tts

