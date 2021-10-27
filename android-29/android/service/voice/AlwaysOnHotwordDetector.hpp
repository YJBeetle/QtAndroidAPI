#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::content
{
	class Intent;
}

namespace android::service::voice
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
		
		AlwaysOnHotwordDetector(QAndroidJniObject obj);
		// Constructors
		AlwaysOnHotwordDetector() = default;
		
		// Methods
		QAndroidJniObject createEnrollIntent();
		QAndroidJniObject createReEnrollIntent();
		QAndroidJniObject createUnEnrollIntent();
		jint getSupportedRecognitionModes();
		jboolean startRecognition(jint arg0);
		jboolean stopRecognition();
	};
} // namespace android::service::voice

