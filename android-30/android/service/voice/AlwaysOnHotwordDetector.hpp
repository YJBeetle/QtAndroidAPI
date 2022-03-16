#pragma once

#include "../../content/Intent.def.hpp"
#include "./AlwaysOnHotwordDetector_ModelParamRange.def.hpp"
#include "./AlwaysOnHotwordDetector.def.hpp"

namespace android::service::voice
{
	// Fields
	inline jint AlwaysOnHotwordDetector::AUDIO_CAPABILITY_ECHO_CANCELLATION()
	{
		return getStaticField<jint>(
			"android.service.voice.AlwaysOnHotwordDetector",
			"AUDIO_CAPABILITY_ECHO_CANCELLATION"
		);
	}
	inline jint AlwaysOnHotwordDetector::AUDIO_CAPABILITY_NOISE_SUPPRESSION()
	{
		return getStaticField<jint>(
			"android.service.voice.AlwaysOnHotwordDetector",
			"AUDIO_CAPABILITY_NOISE_SUPPRESSION"
		);
	}
	inline jint AlwaysOnHotwordDetector::MODEL_PARAM_THRESHOLD_FACTOR()
	{
		return getStaticField<jint>(
			"android.service.voice.AlwaysOnHotwordDetector",
			"MODEL_PARAM_THRESHOLD_FACTOR"
		);
	}
	inline jint AlwaysOnHotwordDetector::RECOGNITION_FLAG_ALLOW_MULTIPLE_TRIGGERS()
	{
		return getStaticField<jint>(
			"android.service.voice.AlwaysOnHotwordDetector",
			"RECOGNITION_FLAG_ALLOW_MULTIPLE_TRIGGERS"
		);
	}
	inline jint AlwaysOnHotwordDetector::RECOGNITION_FLAG_CAPTURE_TRIGGER_AUDIO()
	{
		return getStaticField<jint>(
			"android.service.voice.AlwaysOnHotwordDetector",
			"RECOGNITION_FLAG_CAPTURE_TRIGGER_AUDIO"
		);
	}
	inline jint AlwaysOnHotwordDetector::RECOGNITION_FLAG_ENABLE_AUDIO_ECHO_CANCELLATION()
	{
		return getStaticField<jint>(
			"android.service.voice.AlwaysOnHotwordDetector",
			"RECOGNITION_FLAG_ENABLE_AUDIO_ECHO_CANCELLATION"
		);
	}
	inline jint AlwaysOnHotwordDetector::RECOGNITION_FLAG_ENABLE_AUDIO_NOISE_SUPPRESSION()
	{
		return getStaticField<jint>(
			"android.service.voice.AlwaysOnHotwordDetector",
			"RECOGNITION_FLAG_ENABLE_AUDIO_NOISE_SUPPRESSION"
		);
	}
	inline jint AlwaysOnHotwordDetector::RECOGNITION_MODE_USER_IDENTIFICATION()
	{
		return getStaticField<jint>(
			"android.service.voice.AlwaysOnHotwordDetector",
			"RECOGNITION_MODE_USER_IDENTIFICATION"
		);
	}
	inline jint AlwaysOnHotwordDetector::RECOGNITION_MODE_VOICE_TRIGGER()
	{
		return getStaticField<jint>(
			"android.service.voice.AlwaysOnHotwordDetector",
			"RECOGNITION_MODE_VOICE_TRIGGER"
		);
	}
	inline jint AlwaysOnHotwordDetector::STATE_HARDWARE_UNAVAILABLE()
	{
		return getStaticField<jint>(
			"android.service.voice.AlwaysOnHotwordDetector",
			"STATE_HARDWARE_UNAVAILABLE"
		);
	}
	inline jint AlwaysOnHotwordDetector::STATE_KEYPHRASE_ENROLLED()
	{
		return getStaticField<jint>(
			"android.service.voice.AlwaysOnHotwordDetector",
			"STATE_KEYPHRASE_ENROLLED"
		);
	}
	inline jint AlwaysOnHotwordDetector::STATE_KEYPHRASE_UNENROLLED()
	{
		return getStaticField<jint>(
			"android.service.voice.AlwaysOnHotwordDetector",
			"STATE_KEYPHRASE_UNENROLLED"
		);
	}
	inline jint AlwaysOnHotwordDetector::STATE_KEYPHRASE_UNSUPPORTED()
	{
		return getStaticField<jint>(
			"android.service.voice.AlwaysOnHotwordDetector",
			"STATE_KEYPHRASE_UNSUPPORTED"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::content::Intent AlwaysOnHotwordDetector::createEnrollIntent() const
	{
		return callObjectMethod(
			"createEnrollIntent",
			"()Landroid/content/Intent;"
		);
	}
	inline android::content::Intent AlwaysOnHotwordDetector::createReEnrollIntent() const
	{
		return callObjectMethod(
			"createReEnrollIntent",
			"()Landroid/content/Intent;"
		);
	}
	inline android::content::Intent AlwaysOnHotwordDetector::createUnEnrollIntent() const
	{
		return callObjectMethod(
			"createUnEnrollIntent",
			"()Landroid/content/Intent;"
		);
	}
	inline jint AlwaysOnHotwordDetector::getParameter(jint arg0) const
	{
		return callMethod<jint>(
			"getParameter",
			"(I)I",
			arg0
		);
	}
	inline jint AlwaysOnHotwordDetector::getSupportedAudioCapabilities() const
	{
		return callMethod<jint>(
			"getSupportedAudioCapabilities",
			"()I"
		);
	}
	inline jint AlwaysOnHotwordDetector::getSupportedRecognitionModes() const
	{
		return callMethod<jint>(
			"getSupportedRecognitionModes",
			"()I"
		);
	}
	inline android::service::voice::AlwaysOnHotwordDetector_ModelParamRange AlwaysOnHotwordDetector::queryParameter(jint arg0) const
	{
		return callObjectMethod(
			"queryParameter",
			"(I)Landroid/service/voice/AlwaysOnHotwordDetector$ModelParamRange;",
			arg0
		);
	}
	inline jint AlwaysOnHotwordDetector::setParameter(jint arg0, jint arg1) const
	{
		return callMethod<jint>(
			"setParameter",
			"(II)I",
			arg0,
			arg1
		);
	}
	inline jboolean AlwaysOnHotwordDetector::startRecognition(jint arg0) const
	{
		return callMethod<jboolean>(
			"startRecognition",
			"(I)Z",
			arg0
		);
	}
	inline jboolean AlwaysOnHotwordDetector::stopRecognition() const
	{
		return callMethod<jboolean>(
			"stopRecognition",
			"()Z"
		);
	}
} // namespace android::service::voice

// Base class headers

