#include "./TextToSpeech.hpp"
#include "./TextToSpeech_Engine.hpp"

namespace android::speech::tts
{
	// Fields
	jstring TextToSpeech_Engine::ACTION_CHECK_TTS_DATA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.tts.TextToSpeech$Engine",
			"ACTION_CHECK_TTS_DATA",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TextToSpeech_Engine::ACTION_GET_SAMPLE_TEXT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.tts.TextToSpeech$Engine",
			"ACTION_GET_SAMPLE_TEXT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TextToSpeech_Engine::ACTION_INSTALL_TTS_DATA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.tts.TextToSpeech$Engine",
			"ACTION_INSTALL_TTS_DATA",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TextToSpeech_Engine::ACTION_TTS_DATA_INSTALLED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.tts.TextToSpeech$Engine",
			"ACTION_TTS_DATA_INSTALLED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint TextToSpeech_Engine::CHECK_VOICE_DATA_BAD_DATA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.speech.tts.TextToSpeech$Engine",
			"CHECK_VOICE_DATA_BAD_DATA"
		);
	}
	jint TextToSpeech_Engine::CHECK_VOICE_DATA_FAIL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.speech.tts.TextToSpeech$Engine",
			"CHECK_VOICE_DATA_FAIL"
		);
	}
	jint TextToSpeech_Engine::CHECK_VOICE_DATA_MISSING_DATA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.speech.tts.TextToSpeech$Engine",
			"CHECK_VOICE_DATA_MISSING_DATA"
		);
	}
	jint TextToSpeech_Engine::CHECK_VOICE_DATA_MISSING_VOLUME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.speech.tts.TextToSpeech$Engine",
			"CHECK_VOICE_DATA_MISSING_VOLUME"
		);
	}
	jint TextToSpeech_Engine::CHECK_VOICE_DATA_PASS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.speech.tts.TextToSpeech$Engine",
			"CHECK_VOICE_DATA_PASS"
		);
	}
	jint TextToSpeech_Engine::DEFAULT_STREAM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.speech.tts.TextToSpeech$Engine",
			"DEFAULT_STREAM"
		);
	}
	jstring TextToSpeech_Engine::EXTRA_AVAILABLE_VOICES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.tts.TextToSpeech$Engine",
			"EXTRA_AVAILABLE_VOICES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TextToSpeech_Engine::EXTRA_CHECK_VOICE_DATA_FOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.tts.TextToSpeech$Engine",
			"EXTRA_CHECK_VOICE_DATA_FOR",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TextToSpeech_Engine::EXTRA_SAMPLE_TEXT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.tts.TextToSpeech$Engine",
			"EXTRA_SAMPLE_TEXT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TextToSpeech_Engine::EXTRA_TTS_DATA_INSTALLED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.tts.TextToSpeech$Engine",
			"EXTRA_TTS_DATA_INSTALLED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TextToSpeech_Engine::EXTRA_UNAVAILABLE_VOICES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.tts.TextToSpeech$Engine",
			"EXTRA_UNAVAILABLE_VOICES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TextToSpeech_Engine::EXTRA_VOICE_DATA_FILES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.tts.TextToSpeech$Engine",
			"EXTRA_VOICE_DATA_FILES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TextToSpeech_Engine::EXTRA_VOICE_DATA_FILES_INFO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.tts.TextToSpeech$Engine",
			"EXTRA_VOICE_DATA_FILES_INFO",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TextToSpeech_Engine::EXTRA_VOICE_DATA_ROOT_DIRECTORY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.tts.TextToSpeech$Engine",
			"EXTRA_VOICE_DATA_ROOT_DIRECTORY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TextToSpeech_Engine::INTENT_ACTION_TTS_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.tts.TextToSpeech$Engine",
			"INTENT_ACTION_TTS_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TextToSpeech_Engine::KEY_FEATURE_EMBEDDED_SYNTHESIS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.tts.TextToSpeech$Engine",
			"KEY_FEATURE_EMBEDDED_SYNTHESIS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TextToSpeech_Engine::KEY_FEATURE_NETWORK_RETRIES_COUNT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.tts.TextToSpeech$Engine",
			"KEY_FEATURE_NETWORK_RETRIES_COUNT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TextToSpeech_Engine::KEY_FEATURE_NETWORK_SYNTHESIS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.tts.TextToSpeech$Engine",
			"KEY_FEATURE_NETWORK_SYNTHESIS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TextToSpeech_Engine::KEY_FEATURE_NETWORK_TIMEOUT_MS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.tts.TextToSpeech$Engine",
			"KEY_FEATURE_NETWORK_TIMEOUT_MS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TextToSpeech_Engine::KEY_FEATURE_NOT_INSTALLED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.tts.TextToSpeech$Engine",
			"KEY_FEATURE_NOT_INSTALLED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TextToSpeech_Engine::KEY_PARAM_PAN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.tts.TextToSpeech$Engine",
			"KEY_PARAM_PAN",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TextToSpeech_Engine::KEY_PARAM_SESSION_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.tts.TextToSpeech$Engine",
			"KEY_PARAM_SESSION_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TextToSpeech_Engine::KEY_PARAM_STREAM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.tts.TextToSpeech$Engine",
			"KEY_PARAM_STREAM",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TextToSpeech_Engine::KEY_PARAM_UTTERANCE_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.tts.TextToSpeech$Engine",
			"KEY_PARAM_UTTERANCE_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TextToSpeech_Engine::KEY_PARAM_VOLUME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.tts.TextToSpeech$Engine",
			"KEY_PARAM_VOLUME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TextToSpeech_Engine::SERVICE_META_DATA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.tts.TextToSpeech$Engine",
			"SERVICE_META_DATA",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	TextToSpeech_Engine::TextToSpeech_Engine(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	TextToSpeech_Engine::TextToSpeech_Engine(android::speech::tts::TextToSpeech arg0)
		: __JniBaseClass(
			"android.speech.tts.TextToSpeech$Engine",
			"(Landroid/speech/tts/TextToSpeech;)V",
			arg0.object()
		) {}
	
	// Methods
} // namespace android::speech::tts

