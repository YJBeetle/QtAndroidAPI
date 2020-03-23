#pragma once

#ifndef ANDROID_SERVICE_VOICE_ALWAYSONHOTWORDDETECTOR
#define ANDROID_SERVICE_VOICE_ALWAYSONHOTWORDDETECTOR

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Intent;
}

namespace __jni_impl::android::service::voice
{
	class AlwaysOnHotwordDetector : public __JniBaseClass
	{
	public:
		// Fields
		static jint RECOGNITION_FLAG_ALLOW_MULTIPLE_TRIGGERS();
		static jint RECOGNITION_FLAG_CAPTURE_TRIGGER_AUDIO();
		static jint RECOGNITION_MODE_USER_IDENTIFICATION();
		static jint RECOGNITION_MODE_VOICE_TRIGGER();
		static jint STATE_HARDWARE_UNAVAILABLE();
		static jint STATE_KEYPHRASE_ENROLLED();
		static jint STATE_KEYPHRASE_UNENROLLED();
		static jint STATE_KEYPHRASE_UNSUPPORTED();
		
		// Constructors
		void __constructor();
		
		// Methods
		jint getSupportedRecognitionModes();
		jboolean startRecognition(jint arg0);
		jboolean stopRecognition();
		QAndroidJniObject createEnrollIntent();
		QAndroidJniObject createUnEnrollIntent();
		QAndroidJniObject createReEnrollIntent();
	};
} // namespace __jni_impl::android::service::voice

#include "../../content/Intent.hpp"

namespace __jni_impl::android::service::voice
{
	// Fields
	jint AlwaysOnHotwordDetector::RECOGNITION_FLAG_ALLOW_MULTIPLE_TRIGGERS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.voice.AlwaysOnHotwordDetector",
			"RECOGNITION_FLAG_ALLOW_MULTIPLE_TRIGGERS");
	}
	jint AlwaysOnHotwordDetector::RECOGNITION_FLAG_CAPTURE_TRIGGER_AUDIO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.voice.AlwaysOnHotwordDetector",
			"RECOGNITION_FLAG_CAPTURE_TRIGGER_AUDIO");
	}
	jint AlwaysOnHotwordDetector::RECOGNITION_MODE_USER_IDENTIFICATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.voice.AlwaysOnHotwordDetector",
			"RECOGNITION_MODE_USER_IDENTIFICATION");
	}
	jint AlwaysOnHotwordDetector::RECOGNITION_MODE_VOICE_TRIGGER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.voice.AlwaysOnHotwordDetector",
			"RECOGNITION_MODE_VOICE_TRIGGER");
	}
	jint AlwaysOnHotwordDetector::STATE_HARDWARE_UNAVAILABLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.voice.AlwaysOnHotwordDetector",
			"STATE_HARDWARE_UNAVAILABLE");
	}
	jint AlwaysOnHotwordDetector::STATE_KEYPHRASE_ENROLLED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.voice.AlwaysOnHotwordDetector",
			"STATE_KEYPHRASE_ENROLLED");
	}
	jint AlwaysOnHotwordDetector::STATE_KEYPHRASE_UNENROLLED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.voice.AlwaysOnHotwordDetector",
			"STATE_KEYPHRASE_UNENROLLED");
	}
	jint AlwaysOnHotwordDetector::STATE_KEYPHRASE_UNSUPPORTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.voice.AlwaysOnHotwordDetector",
			"STATE_KEYPHRASE_UNSUPPORTED");
	}
	
	// Constructors
	void AlwaysOnHotwordDetector::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.service.voice.AlwaysOnHotwordDetector",
			"(V)V");
	}
	
	// Methods
	jint AlwaysOnHotwordDetector::getSupportedRecognitionModes()
	{
		return __thiz.callMethod<jint>(
			"getSupportedRecognitionModes",
			"()I");
	}
	jboolean AlwaysOnHotwordDetector::startRecognition(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"startRecognition",
			"(I)Z",
			arg0);
	}
	jboolean AlwaysOnHotwordDetector::stopRecognition()
	{
		return __thiz.callMethod<jboolean>(
			"stopRecognition",
			"()Z");
	}
	QAndroidJniObject AlwaysOnHotwordDetector::createEnrollIntent()
	{
		return __thiz.callObjectMethod(
			"createEnrollIntent",
			"()Landroid/content/Intent;");
	}
	QAndroidJniObject AlwaysOnHotwordDetector::createUnEnrollIntent()
	{
		return __thiz.callObjectMethod(
			"createUnEnrollIntent",
			"()Landroid/content/Intent;");
	}
	QAndroidJniObject AlwaysOnHotwordDetector::createReEnrollIntent()
	{
		return __thiz.callObjectMethod(
			"createReEnrollIntent",
			"()Landroid/content/Intent;");
	}
} // namespace __jni_impl::android::service::voice

namespace android::service::voice
{
	class AlwaysOnHotwordDetector : public __jni_impl::android::service::voice::AlwaysOnHotwordDetector
	{
	public:
		AlwaysOnHotwordDetector(QAndroidJniObject obj) { __thiz = obj; }
		AlwaysOnHotwordDetector()
		{
			__constructor();
		}
	};
} // namespace android::service::voice

#endif // ANDROID_SERVICE_VOICE_ALWAYSONHOTWORDDETECTOR

