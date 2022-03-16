#include "../../content/Intent.hpp"
#include "./AlwaysOnHotwordDetector.hpp"

namespace android::service::voice
{
	// Fields
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
	
	// Constructors
	
	// Methods
	android::content::Intent AlwaysOnHotwordDetector::createEnrollIntent() const
	{
		return callObjectMethod(
			"createEnrollIntent",
			"()Landroid/content/Intent;"
		);
	}
	android::content::Intent AlwaysOnHotwordDetector::createReEnrollIntent() const
	{
		return callObjectMethod(
			"createReEnrollIntent",
			"()Landroid/content/Intent;"
		);
	}
	android::content::Intent AlwaysOnHotwordDetector::createUnEnrollIntent() const
	{
		return callObjectMethod(
			"createUnEnrollIntent",
			"()Landroid/content/Intent;"
		);
	}
	jint AlwaysOnHotwordDetector::getSupportedRecognitionModes() const
	{
		return callMethod<jint>(
			"getSupportedRecognitionModes",
			"()I"
		);
	}
	jboolean AlwaysOnHotwordDetector::startRecognition(jint arg0) const
	{
		return callMethod<jboolean>(
			"startRecognition",
			"(I)Z",
			arg0
		);
	}
	jboolean AlwaysOnHotwordDetector::stopRecognition() const
	{
		return callMethod<jboolean>(
			"stopRecognition",
			"()Z"
		);
	}
} // namespace android::service::voice

