#pragma once

#ifndef ANDROID_SPEECH_RECOGNIZERINTENT
#define ANDROID_SPEECH_RECOGNIZERINTENT

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Intent;
}
namespace __jni_impl::android::content
{
	class Context;
}

namespace __jni_impl::android::speech
{
	class RecognizerIntent : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject ACTION_GET_LANGUAGE_DETAILS();
		static QAndroidJniObject ACTION_RECOGNIZE_SPEECH();
		static QAndroidJniObject ACTION_VOICE_SEARCH_HANDS_FREE();
		static QAndroidJniObject ACTION_WEB_SEARCH();
		static QAndroidJniObject DETAILS_META_DATA();
		static QAndroidJniObject EXTRA_CALLING_PACKAGE();
		static QAndroidJniObject EXTRA_CONFIDENCE_SCORES();
		static QAndroidJniObject EXTRA_LANGUAGE();
		static QAndroidJniObject EXTRA_LANGUAGE_MODEL();
		static QAndroidJniObject EXTRA_LANGUAGE_PREFERENCE();
		static QAndroidJniObject EXTRA_MAX_RESULTS();
		static QAndroidJniObject EXTRA_ONLY_RETURN_LANGUAGE_PREFERENCE();
		static QAndroidJniObject EXTRA_ORIGIN();
		static QAndroidJniObject EXTRA_PARTIAL_RESULTS();
		static QAndroidJniObject EXTRA_PREFER_OFFLINE();
		static QAndroidJniObject EXTRA_PROMPT();
		static QAndroidJniObject EXTRA_RESULTS();
		static QAndroidJniObject EXTRA_RESULTS_PENDINGINTENT();
		static QAndroidJniObject EXTRA_RESULTS_PENDINGINTENT_BUNDLE();
		static QAndroidJniObject EXTRA_SECURE();
		static QAndroidJniObject EXTRA_SPEECH_INPUT_COMPLETE_SILENCE_LENGTH_MILLIS();
		static QAndroidJniObject EXTRA_SPEECH_INPUT_MINIMUM_LENGTH_MILLIS();
		static QAndroidJniObject EXTRA_SPEECH_INPUT_POSSIBLY_COMPLETE_SILENCE_LENGTH_MILLIS();
		static QAndroidJniObject EXTRA_SUPPORTED_LANGUAGES();
		static QAndroidJniObject EXTRA_WEB_SEARCH_ONLY();
		static QAndroidJniObject LANGUAGE_MODEL_FREE_FORM();
		static QAndroidJniObject LANGUAGE_MODEL_WEB_SEARCH();
		static jint RESULT_AUDIO_ERROR();
		static jint RESULT_CLIENT_ERROR();
		static jint RESULT_NETWORK_ERROR();
		static jint RESULT_NO_MATCH();
		static jint RESULT_SERVER_ERROR();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject getVoiceDetailsIntent(__jni_impl::android::content::Context arg0);
	};
} // namespace __jni_impl::android::speech

#include "../content/Intent.hpp"
#include "../content/Context.hpp"

namespace __jni_impl::android::speech
{
	// Fields
	QAndroidJniObject RecognizerIntent::ACTION_GET_LANGUAGE_DETAILS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.RecognizerIntent",
			"ACTION_GET_LANGUAGE_DETAILS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject RecognizerIntent::ACTION_RECOGNIZE_SPEECH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.RecognizerIntent",
			"ACTION_RECOGNIZE_SPEECH",
			"Ljava/lang/String;");
	}
	QAndroidJniObject RecognizerIntent::ACTION_VOICE_SEARCH_HANDS_FREE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.RecognizerIntent",
			"ACTION_VOICE_SEARCH_HANDS_FREE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject RecognizerIntent::ACTION_WEB_SEARCH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.RecognizerIntent",
			"ACTION_WEB_SEARCH",
			"Ljava/lang/String;");
	}
	QAndroidJniObject RecognizerIntent::DETAILS_META_DATA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.RecognizerIntent",
			"DETAILS_META_DATA",
			"Ljava/lang/String;");
	}
	QAndroidJniObject RecognizerIntent::EXTRA_CALLING_PACKAGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.RecognizerIntent",
			"EXTRA_CALLING_PACKAGE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject RecognizerIntent::EXTRA_CONFIDENCE_SCORES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.RecognizerIntent",
			"EXTRA_CONFIDENCE_SCORES",
			"Ljava/lang/String;");
	}
	QAndroidJniObject RecognizerIntent::EXTRA_LANGUAGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.RecognizerIntent",
			"EXTRA_LANGUAGE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject RecognizerIntent::EXTRA_LANGUAGE_MODEL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.RecognizerIntent",
			"EXTRA_LANGUAGE_MODEL",
			"Ljava/lang/String;");
	}
	QAndroidJniObject RecognizerIntent::EXTRA_LANGUAGE_PREFERENCE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.RecognizerIntent",
			"EXTRA_LANGUAGE_PREFERENCE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject RecognizerIntent::EXTRA_MAX_RESULTS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.RecognizerIntent",
			"EXTRA_MAX_RESULTS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject RecognizerIntent::EXTRA_ONLY_RETURN_LANGUAGE_PREFERENCE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.RecognizerIntent",
			"EXTRA_ONLY_RETURN_LANGUAGE_PREFERENCE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject RecognizerIntent::EXTRA_ORIGIN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.RecognizerIntent",
			"EXTRA_ORIGIN",
			"Ljava/lang/String;");
	}
	QAndroidJniObject RecognizerIntent::EXTRA_PARTIAL_RESULTS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.RecognizerIntent",
			"EXTRA_PARTIAL_RESULTS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject RecognizerIntent::EXTRA_PREFER_OFFLINE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.RecognizerIntent",
			"EXTRA_PREFER_OFFLINE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject RecognizerIntent::EXTRA_PROMPT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.RecognizerIntent",
			"EXTRA_PROMPT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject RecognizerIntent::EXTRA_RESULTS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.RecognizerIntent",
			"EXTRA_RESULTS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject RecognizerIntent::EXTRA_RESULTS_PENDINGINTENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.RecognizerIntent",
			"EXTRA_RESULTS_PENDINGINTENT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject RecognizerIntent::EXTRA_RESULTS_PENDINGINTENT_BUNDLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.RecognizerIntent",
			"EXTRA_RESULTS_PENDINGINTENT_BUNDLE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject RecognizerIntent::EXTRA_SECURE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.RecognizerIntent",
			"EXTRA_SECURE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject RecognizerIntent::EXTRA_SPEECH_INPUT_COMPLETE_SILENCE_LENGTH_MILLIS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.RecognizerIntent",
			"EXTRA_SPEECH_INPUT_COMPLETE_SILENCE_LENGTH_MILLIS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject RecognizerIntent::EXTRA_SPEECH_INPUT_MINIMUM_LENGTH_MILLIS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.RecognizerIntent",
			"EXTRA_SPEECH_INPUT_MINIMUM_LENGTH_MILLIS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject RecognizerIntent::EXTRA_SPEECH_INPUT_POSSIBLY_COMPLETE_SILENCE_LENGTH_MILLIS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.RecognizerIntent",
			"EXTRA_SPEECH_INPUT_POSSIBLY_COMPLETE_SILENCE_LENGTH_MILLIS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject RecognizerIntent::EXTRA_SUPPORTED_LANGUAGES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.RecognizerIntent",
			"EXTRA_SUPPORTED_LANGUAGES",
			"Ljava/lang/String;");
	}
	QAndroidJniObject RecognizerIntent::EXTRA_WEB_SEARCH_ONLY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.RecognizerIntent",
			"EXTRA_WEB_SEARCH_ONLY",
			"Ljava/lang/String;");
	}
	QAndroidJniObject RecognizerIntent::LANGUAGE_MODEL_FREE_FORM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.RecognizerIntent",
			"LANGUAGE_MODEL_FREE_FORM",
			"Ljava/lang/String;");
	}
	QAndroidJniObject RecognizerIntent::LANGUAGE_MODEL_WEB_SEARCH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.RecognizerIntent",
			"LANGUAGE_MODEL_WEB_SEARCH",
			"Ljava/lang/String;");
	}
	jint RecognizerIntent::RESULT_AUDIO_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.speech.RecognizerIntent",
			"RESULT_AUDIO_ERROR");
	}
	jint RecognizerIntent::RESULT_CLIENT_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.speech.RecognizerIntent",
			"RESULT_CLIENT_ERROR");
	}
	jint RecognizerIntent::RESULT_NETWORK_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.speech.RecognizerIntent",
			"RESULT_NETWORK_ERROR");
	}
	jint RecognizerIntent::RESULT_NO_MATCH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.speech.RecognizerIntent",
			"RESULT_NO_MATCH");
	}
	jint RecognizerIntent::RESULT_SERVER_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.speech.RecognizerIntent",
			"RESULT_SERVER_ERROR");
	}
	
	// Constructors
	void RecognizerIntent::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.speech.RecognizerIntent",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject RecognizerIntent::getVoiceDetailsIntent(__jni_impl::android::content::Context arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.speech.RecognizerIntent",
			"getVoiceDetailsIntent",
			"(Landroid/content/Context;)Landroid/content/Intent;",
			arg0.__jniObject().object());
	}
} // namespace __jni_impl::android::speech

namespace android::speech
{
	class RecognizerIntent : public __jni_impl::android::speech::RecognizerIntent
	{
	public:
		RecognizerIntent(QAndroidJniObject obj) { __thiz = obj; }
		RecognizerIntent()
		{
			__constructor();
		}
	};
} // namespace android::speech

#endif // ANDROID_SPEECH_RECOGNIZERINTENT

