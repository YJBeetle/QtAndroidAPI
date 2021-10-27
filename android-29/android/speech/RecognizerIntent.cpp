#include "../content/Context.hpp"
#include "../content/Intent.hpp"
#include "./RecognizerIntent.hpp"

namespace android::speech
{
	// Fields
	jstring RecognizerIntent::ACTION_GET_LANGUAGE_DETAILS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.RecognizerIntent",
			"ACTION_GET_LANGUAGE_DETAILS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring RecognizerIntent::ACTION_RECOGNIZE_SPEECH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.RecognizerIntent",
			"ACTION_RECOGNIZE_SPEECH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring RecognizerIntent::ACTION_VOICE_SEARCH_HANDS_FREE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.RecognizerIntent",
			"ACTION_VOICE_SEARCH_HANDS_FREE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring RecognizerIntent::ACTION_WEB_SEARCH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.RecognizerIntent",
			"ACTION_WEB_SEARCH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring RecognizerIntent::DETAILS_META_DATA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.RecognizerIntent",
			"DETAILS_META_DATA",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring RecognizerIntent::EXTRA_CALLING_PACKAGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.RecognizerIntent",
			"EXTRA_CALLING_PACKAGE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring RecognizerIntent::EXTRA_CONFIDENCE_SCORES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.RecognizerIntent",
			"EXTRA_CONFIDENCE_SCORES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring RecognizerIntent::EXTRA_LANGUAGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.RecognizerIntent",
			"EXTRA_LANGUAGE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring RecognizerIntent::EXTRA_LANGUAGE_MODEL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.RecognizerIntent",
			"EXTRA_LANGUAGE_MODEL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring RecognizerIntent::EXTRA_LANGUAGE_PREFERENCE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.RecognizerIntent",
			"EXTRA_LANGUAGE_PREFERENCE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring RecognizerIntent::EXTRA_MAX_RESULTS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.RecognizerIntent",
			"EXTRA_MAX_RESULTS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring RecognizerIntent::EXTRA_ONLY_RETURN_LANGUAGE_PREFERENCE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.RecognizerIntent",
			"EXTRA_ONLY_RETURN_LANGUAGE_PREFERENCE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring RecognizerIntent::EXTRA_ORIGIN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.RecognizerIntent",
			"EXTRA_ORIGIN",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring RecognizerIntent::EXTRA_PARTIAL_RESULTS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.RecognizerIntent",
			"EXTRA_PARTIAL_RESULTS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring RecognizerIntent::EXTRA_PREFER_OFFLINE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.RecognizerIntent",
			"EXTRA_PREFER_OFFLINE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring RecognizerIntent::EXTRA_PROMPT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.RecognizerIntent",
			"EXTRA_PROMPT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring RecognizerIntent::EXTRA_RESULTS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.RecognizerIntent",
			"EXTRA_RESULTS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring RecognizerIntent::EXTRA_RESULTS_PENDINGINTENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.RecognizerIntent",
			"EXTRA_RESULTS_PENDINGINTENT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring RecognizerIntent::EXTRA_RESULTS_PENDINGINTENT_BUNDLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.RecognizerIntent",
			"EXTRA_RESULTS_PENDINGINTENT_BUNDLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring RecognizerIntent::EXTRA_SECURE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.RecognizerIntent",
			"EXTRA_SECURE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring RecognizerIntent::EXTRA_SPEECH_INPUT_COMPLETE_SILENCE_LENGTH_MILLIS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.RecognizerIntent",
			"EXTRA_SPEECH_INPUT_COMPLETE_SILENCE_LENGTH_MILLIS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring RecognizerIntent::EXTRA_SPEECH_INPUT_MINIMUM_LENGTH_MILLIS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.RecognizerIntent",
			"EXTRA_SPEECH_INPUT_MINIMUM_LENGTH_MILLIS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring RecognizerIntent::EXTRA_SPEECH_INPUT_POSSIBLY_COMPLETE_SILENCE_LENGTH_MILLIS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.RecognizerIntent",
			"EXTRA_SPEECH_INPUT_POSSIBLY_COMPLETE_SILENCE_LENGTH_MILLIS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring RecognizerIntent::EXTRA_SUPPORTED_LANGUAGES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.RecognizerIntent",
			"EXTRA_SUPPORTED_LANGUAGES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring RecognizerIntent::EXTRA_WEB_SEARCH_ONLY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.RecognizerIntent",
			"EXTRA_WEB_SEARCH_ONLY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring RecognizerIntent::LANGUAGE_MODEL_FREE_FORM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.RecognizerIntent",
			"LANGUAGE_MODEL_FREE_FORM",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring RecognizerIntent::LANGUAGE_MODEL_WEB_SEARCH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.RecognizerIntent",
			"LANGUAGE_MODEL_WEB_SEARCH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint RecognizerIntent::RESULT_AUDIO_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.speech.RecognizerIntent",
			"RESULT_AUDIO_ERROR"
		);
	}
	jint RecognizerIntent::RESULT_CLIENT_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.speech.RecognizerIntent",
			"RESULT_CLIENT_ERROR"
		);
	}
	jint RecognizerIntent::RESULT_NETWORK_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.speech.RecognizerIntent",
			"RESULT_NETWORK_ERROR"
		);
	}
	jint RecognizerIntent::RESULT_NO_MATCH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.speech.RecognizerIntent",
			"RESULT_NO_MATCH"
		);
	}
	jint RecognizerIntent::RESULT_SERVER_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.speech.RecognizerIntent",
			"RESULT_SERVER_ERROR"
		);
	}
	
	RecognizerIntent::RecognizerIntent(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject RecognizerIntent::getVoiceDetailsIntent(android::content::Context arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.speech.RecognizerIntent",
			"getVoiceDetailsIntent",
			"(Landroid/content/Context;)Landroid/content/Intent;",
			arg0.__jniObject().object()
		);
	}
} // namespace android::speech

