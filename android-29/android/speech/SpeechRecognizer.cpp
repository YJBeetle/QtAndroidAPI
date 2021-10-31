#include "../content/ComponentName.hpp"
#include "../content/Context.hpp"
#include "../content/Intent.hpp"
#include "./SpeechRecognizer.hpp"

namespace android::speech
{
	// Fields
	jstring SpeechRecognizer::CONFIDENCE_SCORES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.SpeechRecognizer",
			"CONFIDENCE_SCORES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint SpeechRecognizer::ERROR_AUDIO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.speech.SpeechRecognizer",
			"ERROR_AUDIO"
		);
	}
	jint SpeechRecognizer::ERROR_CLIENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.speech.SpeechRecognizer",
			"ERROR_CLIENT"
		);
	}
	jint SpeechRecognizer::ERROR_INSUFFICIENT_PERMISSIONS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.speech.SpeechRecognizer",
			"ERROR_INSUFFICIENT_PERMISSIONS"
		);
	}
	jint SpeechRecognizer::ERROR_NETWORK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.speech.SpeechRecognizer",
			"ERROR_NETWORK"
		);
	}
	jint SpeechRecognizer::ERROR_NETWORK_TIMEOUT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.speech.SpeechRecognizer",
			"ERROR_NETWORK_TIMEOUT"
		);
	}
	jint SpeechRecognizer::ERROR_NO_MATCH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.speech.SpeechRecognizer",
			"ERROR_NO_MATCH"
		);
	}
	jint SpeechRecognizer::ERROR_RECOGNIZER_BUSY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.speech.SpeechRecognizer",
			"ERROR_RECOGNIZER_BUSY"
		);
	}
	jint SpeechRecognizer::ERROR_SERVER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.speech.SpeechRecognizer",
			"ERROR_SERVER"
		);
	}
	jint SpeechRecognizer::ERROR_SPEECH_TIMEOUT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.speech.SpeechRecognizer",
			"ERROR_SPEECH_TIMEOUT"
		);
	}
	jstring SpeechRecognizer::RESULTS_RECOGNITION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.speech.SpeechRecognizer",
			"RESULTS_RECOGNITION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	SpeechRecognizer::SpeechRecognizer(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	android::speech::SpeechRecognizer SpeechRecognizer::createSpeechRecognizer(android::content::Context arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.speech.SpeechRecognizer",
			"createSpeechRecognizer",
			"(Landroid/content/Context;)Landroid/speech/SpeechRecognizer;",
			arg0.object()
		);
	}
	android::speech::SpeechRecognizer SpeechRecognizer::createSpeechRecognizer(android::content::Context arg0, android::content::ComponentName arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.speech.SpeechRecognizer",
			"createSpeechRecognizer",
			"(Landroid/content/Context;Landroid/content/ComponentName;)Landroid/speech/SpeechRecognizer;",
			arg0.object(),
			arg1.object()
		);
	}
	jboolean SpeechRecognizer::isRecognitionAvailable(android::content::Context arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
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
	void SpeechRecognizer::setRecognitionListener(__JniBaseClass arg0)
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

