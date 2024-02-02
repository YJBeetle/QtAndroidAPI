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
	inline JString SpeechRecognizer::DETECTED_LANGUAGE()
	{
		return getStaticObjectField(
			"android.speech.SpeechRecognizer",
			"DETECTED_LANGUAGE",
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
	inline jint SpeechRecognizer::ERROR_CANNOT_CHECK_SUPPORT()
	{
		return getStaticField<jint>(
			"android.speech.SpeechRecognizer",
			"ERROR_CANNOT_CHECK_SUPPORT"
		);
	}
	inline jint SpeechRecognizer::ERROR_CANNOT_LISTEN_TO_DOWNLOAD_EVENTS()
	{
		return getStaticField<jint>(
			"android.speech.SpeechRecognizer",
			"ERROR_CANNOT_LISTEN_TO_DOWNLOAD_EVENTS"
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
	inline jint SpeechRecognizer::ERROR_LANGUAGE_NOT_SUPPORTED()
	{
		return getStaticField<jint>(
			"android.speech.SpeechRecognizer",
			"ERROR_LANGUAGE_NOT_SUPPORTED"
		);
	}
	inline jint SpeechRecognizer::ERROR_LANGUAGE_UNAVAILABLE()
	{
		return getStaticField<jint>(
			"android.speech.SpeechRecognizer",
			"ERROR_LANGUAGE_UNAVAILABLE"
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
	inline jint SpeechRecognizer::ERROR_SERVER_DISCONNECTED()
	{
		return getStaticField<jint>(
			"android.speech.SpeechRecognizer",
			"ERROR_SERVER_DISCONNECTED"
		);
	}
	inline jint SpeechRecognizer::ERROR_SPEECH_TIMEOUT()
	{
		return getStaticField<jint>(
			"android.speech.SpeechRecognizer",
			"ERROR_SPEECH_TIMEOUT"
		);
	}
	inline jint SpeechRecognizer::ERROR_TOO_MANY_REQUESTS()
	{
		return getStaticField<jint>(
			"android.speech.SpeechRecognizer",
			"ERROR_TOO_MANY_REQUESTS"
		);
	}
	inline JString SpeechRecognizer::LANGUAGE_DETECTION_CONFIDENCE_LEVEL()
	{
		return getStaticObjectField(
			"android.speech.SpeechRecognizer",
			"LANGUAGE_DETECTION_CONFIDENCE_LEVEL",
			"Ljava/lang/String;"
		);
	}
	inline jint SpeechRecognizer::LANGUAGE_DETECTION_CONFIDENCE_LEVEL_CONFIDENT()
	{
		return getStaticField<jint>(
			"android.speech.SpeechRecognizer",
			"LANGUAGE_DETECTION_CONFIDENCE_LEVEL_CONFIDENT"
		);
	}
	inline jint SpeechRecognizer::LANGUAGE_DETECTION_CONFIDENCE_LEVEL_HIGHLY_CONFIDENT()
	{
		return getStaticField<jint>(
			"android.speech.SpeechRecognizer",
			"LANGUAGE_DETECTION_CONFIDENCE_LEVEL_HIGHLY_CONFIDENT"
		);
	}
	inline jint SpeechRecognizer::LANGUAGE_DETECTION_CONFIDENCE_LEVEL_NOT_CONFIDENT()
	{
		return getStaticField<jint>(
			"android.speech.SpeechRecognizer",
			"LANGUAGE_DETECTION_CONFIDENCE_LEVEL_NOT_CONFIDENT"
		);
	}
	inline jint SpeechRecognizer::LANGUAGE_DETECTION_CONFIDENCE_LEVEL_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.speech.SpeechRecognizer",
			"LANGUAGE_DETECTION_CONFIDENCE_LEVEL_UNKNOWN"
		);
	}
	inline JString SpeechRecognizer::LANGUAGE_SWITCH_RESULT()
	{
		return getStaticObjectField(
			"android.speech.SpeechRecognizer",
			"LANGUAGE_SWITCH_RESULT",
			"Ljava/lang/String;"
		);
	}
	inline jint SpeechRecognizer::LANGUAGE_SWITCH_RESULT_FAILED()
	{
		return getStaticField<jint>(
			"android.speech.SpeechRecognizer",
			"LANGUAGE_SWITCH_RESULT_FAILED"
		);
	}
	inline jint SpeechRecognizer::LANGUAGE_SWITCH_RESULT_NOT_ATTEMPTED()
	{
		return getStaticField<jint>(
			"android.speech.SpeechRecognizer",
			"LANGUAGE_SWITCH_RESULT_NOT_ATTEMPTED"
		);
	}
	inline jint SpeechRecognizer::LANGUAGE_SWITCH_RESULT_SKIPPED_NO_MODEL()
	{
		return getStaticField<jint>(
			"android.speech.SpeechRecognizer",
			"LANGUAGE_SWITCH_RESULT_SKIPPED_NO_MODEL"
		);
	}
	inline jint SpeechRecognizer::LANGUAGE_SWITCH_RESULT_SUCCEEDED()
	{
		return getStaticField<jint>(
			"android.speech.SpeechRecognizer",
			"LANGUAGE_SWITCH_RESULT_SUCCEEDED"
		);
	}
	inline JString SpeechRecognizer::RECOGNITION_PARTS()
	{
		return getStaticObjectField(
			"android.speech.SpeechRecognizer",
			"RECOGNITION_PARTS",
			"Ljava/lang/String;"
		);
	}
	inline JString SpeechRecognizer::RESULTS_ALTERNATIVES()
	{
		return getStaticObjectField(
			"android.speech.SpeechRecognizer",
			"RESULTS_ALTERNATIVES",
			"Ljava/lang/String;"
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
	inline JString SpeechRecognizer::TOP_LOCALE_ALTERNATIVES()
	{
		return getStaticObjectField(
			"android.speech.SpeechRecognizer",
			"TOP_LOCALE_ALTERNATIVES",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::speech::SpeechRecognizer SpeechRecognizer::createOnDeviceSpeechRecognizer(android::content::Context arg0)
	{
		return callStaticObjectMethod(
			"android.speech.SpeechRecognizer",
			"createOnDeviceSpeechRecognizer",
			"(Landroid/content/Context;)Landroid/speech/SpeechRecognizer;",
			arg0.object()
		);
	}
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
	inline jboolean SpeechRecognizer::isOnDeviceRecognitionAvailable(android::content::Context arg0)
	{
		return callStaticMethod<jboolean>(
			"android.speech.SpeechRecognizer",
			"isOnDeviceRecognitionAvailable",
			"(Landroid/content/Context;)Z",
			arg0.object()
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
	inline void SpeechRecognizer::checkRecognitionSupport(android::content::Intent arg0, JObject arg1, JObject arg2) const
	{
		callMethod<void>(
			"checkRecognitionSupport",
			"(Landroid/content/Intent;Ljava/util/concurrent/Executor;Landroid/speech/RecognitionSupportCallback;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
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
	inline void SpeechRecognizer::triggerModelDownload(android::content::Intent arg0) const
	{
		callMethod<void>(
			"triggerModelDownload",
			"(Landroid/content/Intent;)V",
			arg0.object()
		);
	}
	inline void SpeechRecognizer::triggerModelDownload(android::content::Intent arg0, JObject arg1, JObject arg2) const
	{
		callMethod<void>(
			"triggerModelDownload",
			"(Landroid/content/Intent;Ljava/util/concurrent/Executor;Landroid/speech/ModelDownloadListener;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
} // namespace android::speech

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::speech;
#endif
