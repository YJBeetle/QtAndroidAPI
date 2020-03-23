#pragma once

#ifndef ANDROID_SPEECH_TTS_TEXTTOSPEECH_ENGINE
#define ANDROID_SPEECH_TTS_TEXTTOSPEECH_ENGINE

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::speech::tts
{
	class TextToSpeech;
}

namespace __jni_impl::android::speech::tts
{
	class TextToSpeech_Engine : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject ACTION_CHECK_TTS_DATA();
		static QAndroidJniObject ACTION_GET_SAMPLE_TEXT();
		static QAndroidJniObject ACTION_INSTALL_TTS_DATA();
		static QAndroidJniObject ACTION_TTS_DATA_INSTALLED();
		static jint CHECK_VOICE_DATA_BAD_DATA();
		static jint CHECK_VOICE_DATA_FAIL();
		static jint CHECK_VOICE_DATA_MISSING_DATA();
		static jint CHECK_VOICE_DATA_MISSING_VOLUME();
		static jint CHECK_VOICE_DATA_PASS();
		static jint DEFAULT_STREAM();
		static QAndroidJniObject EXTRA_AVAILABLE_VOICES();
		static QAndroidJniObject EXTRA_CHECK_VOICE_DATA_FOR();
		static QAndroidJniObject EXTRA_SAMPLE_TEXT();
		static QAndroidJniObject EXTRA_TTS_DATA_INSTALLED();
		static QAndroidJniObject EXTRA_UNAVAILABLE_VOICES();
		static QAndroidJniObject EXTRA_VOICE_DATA_FILES();
		static QAndroidJniObject EXTRA_VOICE_DATA_FILES_INFO();
		static QAndroidJniObject EXTRA_VOICE_DATA_ROOT_DIRECTORY();
		static QAndroidJniObject INTENT_ACTION_TTS_SERVICE();
		static QAndroidJniObject KEY_FEATURE_EMBEDDED_SYNTHESIS();
		static QAndroidJniObject KEY_FEATURE_NETWORK_RETRIES_COUNT();
		static QAndroidJniObject KEY_FEATURE_NETWORK_SYNTHESIS();
		static QAndroidJniObject KEY_FEATURE_NETWORK_TIMEOUT_MS();
		static QAndroidJniObject KEY_FEATURE_NOT_INSTALLED();
		static QAndroidJniObject KEY_PARAM_PAN();
		static QAndroidJniObject KEY_PARAM_SESSION_ID();
		static QAndroidJniObject KEY_PARAM_STREAM();
		static QAndroidJniObject KEY_PARAM_UTTERANCE_ID();
		static QAndroidJniObject KEY_PARAM_VOLUME();
		static QAndroidJniObject SERVICE_META_DATA();
		
		// Constructors
		void __constructor(__jni_impl::android::speech::tts::TextToSpeech arg0);
		
		// Methods
	};
} // namespace __jni_impl::android::speech::tts

#include "TextToSpeech.hpp"

namespace __jni_impl::android::speech::tts
{
	// Fields
	QAndroidJniObject TextToSpeech_Engine::ACTION_CHECK_TTS_DATA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.tts.TextToSpeech$Engine",
			"ACTION_CHECK_TTS_DATA",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TextToSpeech_Engine::ACTION_GET_SAMPLE_TEXT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.tts.TextToSpeech$Engine",
			"ACTION_GET_SAMPLE_TEXT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TextToSpeech_Engine::ACTION_INSTALL_TTS_DATA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.tts.TextToSpeech$Engine",
			"ACTION_INSTALL_TTS_DATA",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TextToSpeech_Engine::ACTION_TTS_DATA_INSTALLED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.tts.TextToSpeech$Engine",
			"ACTION_TTS_DATA_INSTALLED",
			"Ljava/lang/String;");
	}
	jint TextToSpeech_Engine::CHECK_VOICE_DATA_BAD_DATA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.speech.tts.TextToSpeech$Engine",
			"CHECK_VOICE_DATA_BAD_DATA");
	}
	jint TextToSpeech_Engine::CHECK_VOICE_DATA_FAIL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.speech.tts.TextToSpeech$Engine",
			"CHECK_VOICE_DATA_FAIL");
	}
	jint TextToSpeech_Engine::CHECK_VOICE_DATA_MISSING_DATA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.speech.tts.TextToSpeech$Engine",
			"CHECK_VOICE_DATA_MISSING_DATA");
	}
	jint TextToSpeech_Engine::CHECK_VOICE_DATA_MISSING_VOLUME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.speech.tts.TextToSpeech$Engine",
			"CHECK_VOICE_DATA_MISSING_VOLUME");
	}
	jint TextToSpeech_Engine::CHECK_VOICE_DATA_PASS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.speech.tts.TextToSpeech$Engine",
			"CHECK_VOICE_DATA_PASS");
	}
	jint TextToSpeech_Engine::DEFAULT_STREAM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.speech.tts.TextToSpeech$Engine",
			"DEFAULT_STREAM");
	}
	QAndroidJniObject TextToSpeech_Engine::EXTRA_AVAILABLE_VOICES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.tts.TextToSpeech$Engine",
			"EXTRA_AVAILABLE_VOICES",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TextToSpeech_Engine::EXTRA_CHECK_VOICE_DATA_FOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.tts.TextToSpeech$Engine",
			"EXTRA_CHECK_VOICE_DATA_FOR",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TextToSpeech_Engine::EXTRA_SAMPLE_TEXT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.tts.TextToSpeech$Engine",
			"EXTRA_SAMPLE_TEXT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TextToSpeech_Engine::EXTRA_TTS_DATA_INSTALLED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.tts.TextToSpeech$Engine",
			"EXTRA_TTS_DATA_INSTALLED",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TextToSpeech_Engine::EXTRA_UNAVAILABLE_VOICES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.tts.TextToSpeech$Engine",
			"EXTRA_UNAVAILABLE_VOICES",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TextToSpeech_Engine::EXTRA_VOICE_DATA_FILES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.tts.TextToSpeech$Engine",
			"EXTRA_VOICE_DATA_FILES",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TextToSpeech_Engine::EXTRA_VOICE_DATA_FILES_INFO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.tts.TextToSpeech$Engine",
			"EXTRA_VOICE_DATA_FILES_INFO",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TextToSpeech_Engine::EXTRA_VOICE_DATA_ROOT_DIRECTORY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.tts.TextToSpeech$Engine",
			"EXTRA_VOICE_DATA_ROOT_DIRECTORY",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TextToSpeech_Engine::INTENT_ACTION_TTS_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.tts.TextToSpeech$Engine",
			"INTENT_ACTION_TTS_SERVICE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TextToSpeech_Engine::KEY_FEATURE_EMBEDDED_SYNTHESIS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.tts.TextToSpeech$Engine",
			"KEY_FEATURE_EMBEDDED_SYNTHESIS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TextToSpeech_Engine::KEY_FEATURE_NETWORK_RETRIES_COUNT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.tts.TextToSpeech$Engine",
			"KEY_FEATURE_NETWORK_RETRIES_COUNT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TextToSpeech_Engine::KEY_FEATURE_NETWORK_SYNTHESIS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.tts.TextToSpeech$Engine",
			"KEY_FEATURE_NETWORK_SYNTHESIS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TextToSpeech_Engine::KEY_FEATURE_NETWORK_TIMEOUT_MS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.tts.TextToSpeech$Engine",
			"KEY_FEATURE_NETWORK_TIMEOUT_MS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TextToSpeech_Engine::KEY_FEATURE_NOT_INSTALLED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.tts.TextToSpeech$Engine",
			"KEY_FEATURE_NOT_INSTALLED",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TextToSpeech_Engine::KEY_PARAM_PAN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.tts.TextToSpeech$Engine",
			"KEY_PARAM_PAN",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TextToSpeech_Engine::KEY_PARAM_SESSION_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.tts.TextToSpeech$Engine",
			"KEY_PARAM_SESSION_ID",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TextToSpeech_Engine::KEY_PARAM_STREAM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.tts.TextToSpeech$Engine",
			"KEY_PARAM_STREAM",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TextToSpeech_Engine::KEY_PARAM_UTTERANCE_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.tts.TextToSpeech$Engine",
			"KEY_PARAM_UTTERANCE_ID",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TextToSpeech_Engine::KEY_PARAM_VOLUME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.tts.TextToSpeech$Engine",
			"KEY_PARAM_VOLUME",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TextToSpeech_Engine::SERVICE_META_DATA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.tts.TextToSpeech$Engine",
			"SERVICE_META_DATA",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void TextToSpeech_Engine::__constructor(__jni_impl::android::speech::tts::TextToSpeech arg0)
	{
		__thiz = QAndroidJniObject(
			"android.speech.tts.TextToSpeech$Engine",
			"(Landroid/speech/tts/TextToSpeech;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
} // namespace __jni_impl::android::speech::tts

namespace android::speech::tts
{
	class TextToSpeech_Engine : public __jni_impl::android::speech::tts::TextToSpeech_Engine
	{
	public:
		TextToSpeech_Engine(QAndroidJniObject obj) { __thiz = obj; }
		TextToSpeech_Engine(__jni_impl::android::speech::tts::TextToSpeech arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::speech::tts

#endif // ANDROID_SPEECH_TTS_TEXTTOSPEECH_ENGINE

