#include "../content/ComponentName.hpp"
#include "../content/Context.hpp"
#include "../content/Intent.hpp"
#include "../../JString.hpp"
#include "./SpeechRecognizer.hpp"

namespace android::speech
{
	// Fields
	JString SpeechRecognizer::CONFIDENCE_SCORES()
	{
		return getStaticObjectField(
			"android.speech.SpeechRecognizer",
			"CONFIDENCE_SCORES",
			"Ljava/lang/String;"
		);
	}
	jint SpeechRecognizer::ERROR_AUDIO()
	{
		return getStaticField<jint>(
			"android.speech.SpeechRecognizer",
			"ERROR_AUDIO"
		);
	}
	jint SpeechRecognizer::ERROR_CLIENT()
	{
		return getStaticField<jint>(
			"android.speech.SpeechRecognizer",
			"ERROR_CLIENT"
		);
	}
	jint SpeechRecognizer::ERROR_INSUFFICIENT_PERMISSIONS()
	{
		return getStaticField<jint>(
			"android.speech.SpeechRecognizer",
			"ERROR_INSUFFICIENT_PERMISSIONS"
		);
	}
	jint SpeechRecognizer::ERROR_LANGUAGE_NOT_SUPPORTED()
	{
		return getStaticField<jint>(
			"android.speech.SpeechRecognizer",
			"ERROR_LANGUAGE_NOT_SUPPORTED"
		);
	}
	jint SpeechRecognizer::ERROR_LANGUAGE_UNAVAILABLE()
	{
		return getStaticField<jint>(
			"android.speech.SpeechRecognizer",
			"ERROR_LANGUAGE_UNAVAILABLE"
		);
	}
	jint SpeechRecognizer::ERROR_NETWORK()
	{
		return getStaticField<jint>(
			"android.speech.SpeechRecognizer",
			"ERROR_NETWORK"
		);
	}
	jint SpeechRecognizer::ERROR_NETWORK_TIMEOUT()
	{
		return getStaticField<jint>(
			"android.speech.SpeechRecognizer",
			"ERROR_NETWORK_TIMEOUT"
		);
	}
	jint SpeechRecognizer::ERROR_NO_MATCH()
	{
		return getStaticField<jint>(
			"android.speech.SpeechRecognizer",
			"ERROR_NO_MATCH"
		);
	}
	jint SpeechRecognizer::ERROR_RECOGNIZER_BUSY()
	{
		return getStaticField<jint>(
			"android.speech.SpeechRecognizer",
			"ERROR_RECOGNIZER_BUSY"
		);
	}
	jint SpeechRecognizer::ERROR_SERVER()
	{
		return getStaticField<jint>(
			"android.speech.SpeechRecognizer",
			"ERROR_SERVER"
		);
	}
	jint SpeechRecognizer::ERROR_SERVER_DISCONNECTED()
	{
		return getStaticField<jint>(
			"android.speech.SpeechRecognizer",
			"ERROR_SERVER_DISCONNECTED"
		);
	}
	jint SpeechRecognizer::ERROR_SPEECH_TIMEOUT()
	{
		return getStaticField<jint>(
			"android.speech.SpeechRecognizer",
			"ERROR_SPEECH_TIMEOUT"
		);
	}
	jint SpeechRecognizer::ERROR_TOO_MANY_REQUESTS()
	{
		return getStaticField<jint>(
			"android.speech.SpeechRecognizer",
			"ERROR_TOO_MANY_REQUESTS"
		);
	}
	JString SpeechRecognizer::RESULTS_RECOGNITION()
	{
		return getStaticObjectField(
			"android.speech.SpeechRecognizer",
			"RESULTS_RECOGNITION",
			"Ljava/lang/String;"
		);
	}
	
	// QJniObject forward
	SpeechRecognizer::SpeechRecognizer(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::speech::SpeechRecognizer SpeechRecognizer::createOnDeviceSpeechRecognizer(android::content::Context arg0)
	{
		return callStaticObjectMethod(
			"android.speech.SpeechRecognizer",
			"createOnDeviceSpeechRecognizer",
			"(Landroid/content/Context;)Landroid/speech/SpeechRecognizer;",
			arg0.object()
		);
	}
	android::speech::SpeechRecognizer SpeechRecognizer::createSpeechRecognizer(android::content::Context arg0)
	{
		return callStaticObjectMethod(
			"android.speech.SpeechRecognizer",
			"createSpeechRecognizer",
			"(Landroid/content/Context;)Landroid/speech/SpeechRecognizer;",
			arg0.object()
		);
	}
	android::speech::SpeechRecognizer SpeechRecognizer::createSpeechRecognizer(android::content::Context arg0, android::content::ComponentName arg1)
	{
		return callStaticObjectMethod(
			"android.speech.SpeechRecognizer",
			"createSpeechRecognizer",
			"(Landroid/content/Context;Landroid/content/ComponentName;)Landroid/speech/SpeechRecognizer;",
			arg0.object(),
			arg1.object()
		);
	}
	jboolean SpeechRecognizer::isOnDeviceRecognitionAvailable(android::content::Context arg0)
	{
		return callStaticMethod<jboolean>(
			"android.speech.SpeechRecognizer",
			"isOnDeviceRecognitionAvailable",
			"(Landroid/content/Context;)Z",
			arg0.object()
		);
	}
	jboolean SpeechRecognizer::isRecognitionAvailable(android::content::Context arg0)
	{
		return callStaticMethod<jboolean>(
			"android.speech.SpeechRecognizer",
			"isRecognitionAvailable",
			"(Landroid/content/Context;)Z",
			arg0.object()
		);
	}
	void SpeechRecognizer::cancel()
	{
		callMethod<void>(
			"cancel",
			"()V"
		);
	}
	void SpeechRecognizer::destroy()
	{
		callMethod<void>(
			"destroy",
			"()V"
		);
	}
	void SpeechRecognizer::setRecognitionListener(JObject arg0)
	{
		callMethod<void>(
			"setRecognitionListener",
			"(Landroid/speech/RecognitionListener;)V",
			arg0.object()
		);
	}
	void SpeechRecognizer::startListening(android::content::Intent arg0)
	{
		callMethod<void>(
			"startListening",
			"(Landroid/content/Intent;)V",
			arg0.object()
		);
	}
	void SpeechRecognizer::stopListening()
	{
		callMethod<void>(
			"stopListening",
			"()V"
		);
	}
} // namespace android::speech

