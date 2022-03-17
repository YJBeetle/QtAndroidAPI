#pragma once

#include "../content/ComponentName.def.hpp"
#include "../content/Context.def.hpp"
#include "../content/Intent.def.hpp"
#include "../../JString.hpp"
#include "./SpeechRecognizer.def.hpp"

namespace android::speech
{
	// Fields
	inline JString SpeechRecognizer::CONFIDENCE_SCORES()
	{
		return getStaticObjectField(
			"android.speech.SpeechRecognizer",
			"CONFIDENCE_SCORES",
			"Ljava/lang/String;"
		);
	}
	inline jint SpeechRecognizer::ERROR_AUDIO()
	{
		return getStaticField<jint>(
			"android.speech.SpeechRecognizer",
			"ERROR_AUDIO"
		);
	}
	inline jint SpeechRecognizer::ERROR_CLIENT()
	{
		return getStaticField<jint>(
			"android.speech.SpeechRecognizer",
			"ERROR_CLIENT"
		);
	}
	inline jint SpeechRecognizer::ERROR_INSUFFICIENT_PERMISSIONS()
	{
		return getStaticField<jint>(
			"android.speech.SpeechRecognizer",
			"ERROR_INSUFFICIENT_PERMISSIONS"
		);
	}
	inline jint SpeechRecognizer::ERROR_NETWORK()
	{
		return getStaticField<jint>(
			"android.speech.SpeechRecognizer",
			"ERROR_NETWORK"
		);
	}
	inline jint SpeechRecognizer::ERROR_NETWORK_TIMEOUT()
	{
		return getStaticField<jint>(
			"android.speech.SpeechRecognizer",
			"ERROR_NETWORK_TIMEOUT"
		);
	}
	inline jint SpeechRecognizer::ERROR_NO_MATCH()
	{
		return getStaticField<jint>(
			"android.speech.SpeechRecognizer",
			"ERROR_NO_MATCH"
		);
	}
	inline jint SpeechRecognizer::ERROR_RECOGNIZER_BUSY()
	{
		return getStaticField<jint>(
			"android.speech.SpeechRecognizer",
			"ERROR_RECOGNIZER_BUSY"
		);
	}
	inline jint SpeechRecognizer::ERROR_SERVER()
	{
		return getStaticField<jint>(
			"android.speech.SpeechRecognizer",
			"ERROR_SERVER"
		);
	}
	inline jint SpeechRecognizer::ERROR_SPEECH_TIMEOUT()
	{
		return getStaticField<jint>(
			"android.speech.SpeechRecognizer",
			"ERROR_SPEECH_TIMEOUT"
		);
	}
	inline JString SpeechRecognizer::RESULTS_RECOGNITION()
	{
		return getStaticObjectField(
			"android.speech.SpeechRecognizer",
			"RESULTS_RECOGNITION",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::speech::SpeechRecognizer SpeechRecognizer::createSpeechRecognizer(android::content::Context arg0)
	{
		return callStaticObjectMethod(
			"android.speech.SpeechRecognizer",
			"createSpeechRecognizer",
			"(Landroid/content/Context;)Landroid/speech/SpeechRecognizer;",
			arg0.object()
		);
	}
	inline android::speech::SpeechRecognizer SpeechRecognizer::createSpeechRecognizer(android::content::Context arg0, android::content::ComponentName arg1)
	{
		return callStaticObjectMethod(
			"android.speech.SpeechRecognizer",
			"createSpeechRecognizer",
			"(Landroid/content/Context;Landroid/content/ComponentName;)Landroid/speech/SpeechRecognizer;",
			arg0.object(),
			arg1.object()
		);
	}
	inline jboolean SpeechRecognizer::isRecognitionAvailable(android::content::Context arg0)
	{
		return callStaticMethod<jboolean>(
			"android.speech.SpeechRecognizer",
			"isRecognitionAvailable",
			"(Landroid/content/Context;)Z",
			arg0.object()
		);
	}
	inline void SpeechRecognizer::cancel() const
	{
		callMethod<void>(
			"cancel",
			"()V"
		);
	}
	inline void SpeechRecognizer::destroy() const
	{
		callMethod<void>(
			"destroy",
			"()V"
		);
	}
	inline void SpeechRecognizer::setRecognitionListener(JObject arg0) const
	{
		callMethod<void>(
			"setRecognitionListener",
			"(Landroid/speech/RecognitionListener;)V",
			arg0.object()
		);
	}
	inline void SpeechRecognizer::startListening(android::content::Intent arg0) const
	{
		callMethod<void>(
			"startListening",
			"(Landroid/content/Intent;)V",
			arg0.object()
		);
	}
	inline void SpeechRecognizer::stopListening() const
	{
		callMethod<void>(
			"stopListening",
			"()V"
		);
	}
} // namespace android::speech

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::speech;
#endif
