#include "../../content/Intent.hpp"
#include "./AlwaysOnHotwordDetector.hpp"

namespace android::service::voice
{
	// Fields
	jint AlwaysOnHotwordDetector::RECOGNITION_FLAG_ALLOW_MULTIPLE_TRIGGERS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.voice.AlwaysOnHotwordDetector",
			"RECOGNITION_FLAG_ALLOW_MULTIPLE_TRIGGERS"
		);
	}
	jint AlwaysOnHotwordDetector::RECOGNITION_FLAG_CAPTURE_TRIGGER_AUDIO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.voice.AlwaysOnHotwordDetector",
			"RECOGNITION_FLAG_CAPTURE_TRIGGER_AUDIO"
		);
	}
	jint AlwaysOnHotwordDetector::RECOGNITION_MODE_USER_IDENTIFICATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.voice.AlwaysOnHotwordDetector",
			"RECOGNITION_MODE_USER_IDENTIFICATION"
		);
	}
	jint AlwaysOnHotwordDetector::RECOGNITION_MODE_VOICE_TRIGGER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.voice.AlwaysOnHotwordDetector",
			"RECOGNITION_MODE_VOICE_TRIGGER"
		);
	}
	jint AlwaysOnHotwordDetector::STATE_HARDWARE_UNAVAILABLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.voice.AlwaysOnHotwordDetector",
			"STATE_HARDWARE_UNAVAILABLE"
		);
	}
	jint AlwaysOnHotwordDetector::STATE_KEYPHRASE_ENROLLED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.voice.AlwaysOnHotwordDetector",
			"STATE_KEYPHRASE_ENROLLED"
		);
	}
	jint AlwaysOnHotwordDetector::STATE_KEYPHRASE_UNENROLLED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.voice.AlwaysOnHotwordDetector",
			"STATE_KEYPHRASE_UNENROLLED"
		);
	}
	jint AlwaysOnHotwordDetector::STATE_KEYPHRASE_UNSUPPORTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.voice.AlwaysOnHotwordDetector",
			"STATE_KEYPHRASE_UNSUPPORTED"
		);
	}
	
	AlwaysOnHotwordDetector::AlwaysOnHotwordDetector(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject AlwaysOnHotwordDetector::createEnrollIntent()
	{
		return __thiz.callObjectMethod(
			"createEnrollIntent",
			"()Landroid/content/Intent;"
		);
	}
	QAndroidJniObject AlwaysOnHotwordDetector::createReEnrollIntent()
	{
		return __thiz.callObjectMethod(
			"createReEnrollIntent",
			"()Landroid/content/Intent;"
		);
	}
	QAndroidJniObject AlwaysOnHotwordDetector::createUnEnrollIntent()
	{
		return __thiz.callObjectMethod(
			"createUnEnrollIntent",
			"()Landroid/content/Intent;"
		);
	}
	jint AlwaysOnHotwordDetector::getSupportedRecognitionModes()
	{
		return __thiz.callMethod<jint>(
			"getSupportedRecognitionModes",
			"()I"
		);
	}
	jboolean AlwaysOnHotwordDetector::startRecognition(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"startRecognition",
			"(I)Z",
			arg0
		);
	}
	jboolean AlwaysOnHotwordDetector::stopRecognition()
	{
		return __thiz.callMethod<jboolean>(
			"stopRecognition",
			"()Z"
		);
	}
} // namespace android::service::voice

