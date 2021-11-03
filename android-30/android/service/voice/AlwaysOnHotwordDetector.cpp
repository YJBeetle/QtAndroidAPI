#include "../../content/Intent.hpp"
#include "./AlwaysOnHotwordDetector_ModelParamRange.hpp"
#include "./AlwaysOnHotwordDetector.hpp"

namespace android::service::voice
{
	// Fields
	jint AlwaysOnHotwordDetector::AUDIO_CAPABILITY_ECHO_CANCELLATION()
	{
		return getStaticField<jint>(
			"android.service.voice.AlwaysOnHotwordDetector",
			"AUDIO_CAPABILITY_ECHO_CANCELLATION"
		);
	}
	jint AlwaysOnHotwordDetector::AUDIO_CAPABILITY_NOISE_SUPPRESSION()
	{
		return getStaticField<jint>(
			"android.service.voice.AlwaysOnHotwordDetector",
			"AUDIO_CAPABILITY_NOISE_SUPPRESSION"
		);
	}
	jint AlwaysOnHotwordDetector::MODEL_PARAM_THRESHOLD_FACTOR()
	{
		return getStaticField<jint>(
			"android.service.voice.AlwaysOnHotwordDetector",
			"MODEL_PARAM_THRESHOLD_FACTOR"
		);
	}
	jint AlwaysOnHotwordDetector::RECOGNITION_FLAG_ALLOW_MULTIPLE_TRIGGERS()
	{
		return getStaticField<jint>(
			"android.service.voice.AlwaysOnHotwordDetector",
			"RECOGNITION_FLAG_ALLOW_MULTIPLE_TRIGGERS"
		);
	}
	jint AlwaysOnHotwordDetector::RECOGNITION_FLAG_CAPTURE_TRIGGER_AUDIO()
	{
		return getStaticField<jint>(
			"android.service.voice.AlwaysOnHotwordDetector",
			"RECOGNITION_FLAG_CAPTURE_TRIGGER_AUDIO"
		);
	}
	jint AlwaysOnHotwordDetector::RECOGNITION_FLAG_ENABLE_AUDIO_ECHO_CANCELLATION()
	{
		return getStaticField<jint>(
			"android.service.voice.AlwaysOnHotwordDetector",
			"RECOGNITION_FLAG_ENABLE_AUDIO_ECHO_CANCELLATION"
		);
	}
	jint AlwaysOnHotwordDetector::RECOGNITION_FLAG_ENABLE_AUDIO_NOISE_SUPPRESSION()
	{
		return getStaticField<jint>(
			"android.service.voice.AlwaysOnHotwordDetector",
			"RECOGNITION_FLAG_ENABLE_AUDIO_NOISE_SUPPRESSION"
		);
	}
	jint AlwaysOnHotwordDetector::RECOGNITION_MODE_USER_IDENTIFICATION()
	{
		return getStaticField<jint>(
			"android.service.voice.AlwaysOnHotwordDetector",
			"RECOGNITION_MODE_USER_IDENTIFICATION"
		);
	}
	jint AlwaysOnHotwordDetector::RECOGNITION_MODE_VOICE_TRIGGER()
	{
		return getStaticField<jint>(
			"android.service.voice.AlwaysOnHotwordDetector",
			"RECOGNITION_MODE_VOICE_TRIGGER"
		);
	}
	jint AlwaysOnHotwordDetector::STATE_HARDWARE_UNAVAILABLE()
	{
		return getStaticField<jint>(
			"android.service.voice.AlwaysOnHotwordDetector",
			"STATE_HARDWARE_UNAVAILABLE"
		);
	}
	jint AlwaysOnHotwordDetector::STATE_KEYPHRASE_ENROLLED()
	{
		return getStaticField<jint>(
			"android.service.voice.AlwaysOnHotwordDetector",
			"STATE_KEYPHRASE_ENROLLED"
		);
	}
	jint AlwaysOnHotwordDetector::STATE_KEYPHRASE_UNENROLLED()
	{
		return getStaticField<jint>(
			"android.service.voice.AlwaysOnHotwordDetector",
			"STATE_KEYPHRASE_UNENROLLED"
		);
	}
	jint AlwaysOnHotwordDetector::STATE_KEYPHRASE_UNSUPPORTED()
	{
		return getStaticField<jint>(
			"android.service.voice.AlwaysOnHotwordDetector",
			"STATE_KEYPHRASE_UNSUPPORTED"
		);
	}
	
	// QJniObject forward
	AlwaysOnHotwordDetector::AlwaysOnHotwordDetector(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::content::Intent AlwaysOnHotwordDetector::createEnrollIntent()
	{
		return callObjectMethod(
			"createEnrollIntent",
			"()Landroid/content/Intent;"
		);
	}
	android::content::Intent AlwaysOnHotwordDetector::createReEnrollIntent()
	{
		return callObjectMethod(
			"createReEnrollIntent",
			"()Landroid/content/Intent;"
		);
	}
	android::content::Intent AlwaysOnHotwordDetector::createUnEnrollIntent()
	{
		return callObjectMethod(
			"createUnEnrollIntent",
			"()Landroid/content/Intent;"
		);
	}
	jint AlwaysOnHotwordDetector::getParameter(jint arg0)
	{
		return callMethod<jint>(
			"getParameter",
			"(I)I",
			arg0
		);
	}
	jint AlwaysOnHotwordDetector::getSupportedAudioCapabilities()
	{
		return callMethod<jint>(
			"getSupportedAudioCapabilities",
			"()I"
		);
	}
	jint AlwaysOnHotwordDetector::getSupportedRecognitionModes()
	{
		return callMethod<jint>(
			"getSupportedRecognitionModes",
			"()I"
		);
	}
	android::service::voice::AlwaysOnHotwordDetector_ModelParamRange AlwaysOnHotwordDetector::queryParameter(jint arg0)
	{
		return callObjectMethod(
			"queryParameter",
			"(I)Landroid/service/voice/AlwaysOnHotwordDetector$ModelParamRange;",
			arg0
		);
	}
	jint AlwaysOnHotwordDetector::setParameter(jint arg0, jint arg1)
	{
		return callMethod<jint>(
			"setParameter",
			"(II)I",
			arg0,
			arg1
		);
	}
	jboolean AlwaysOnHotwordDetector::startRecognition(jint arg0)
	{
		return callMethod<jboolean>(
			"startRecognition",
			"(I)Z",
			arg0
		);
	}
	jboolean AlwaysOnHotwordDetector::stopRecognition()
	{
		return callMethod<jboolean>(
			"stopRecognition",
			"()Z"
		);
	}
} // namespace android::service::voice

