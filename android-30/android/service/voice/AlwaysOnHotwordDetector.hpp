#pragma once

#include "../../../JObject.hpp"

namespace android::content
{
	class Intent;
}
namespace android::service::voice
{
	class AlwaysOnHotwordDetector_ModelParamRange;
}

namespace android::service::voice
{
	class AlwaysOnHotwordDetector : public JObject
	{
	public:
		// Fields
		static jint AUDIO_CAPABILITY_ECHO_CANCELLATION();
		static jint AUDIO_CAPABILITY_NOISE_SUPPRESSION();
		static jint MODEL_PARAM_THRESHOLD_FACTOR();
		static jint RECOGNITION_FLAG_ALLOW_MULTIPLE_TRIGGERS();
		static jint RECOGNITION_FLAG_CAPTURE_TRIGGER_AUDIO();
		static jint RECOGNITION_FLAG_ENABLE_AUDIO_ECHO_CANCELLATION();
		static jint RECOGNITION_FLAG_ENABLE_AUDIO_NOISE_SUPPRESSION();
		static jint RECOGNITION_MODE_USER_IDENTIFICATION();
		static jint RECOGNITION_MODE_VOICE_TRIGGER();
		static jint STATE_HARDWARE_UNAVAILABLE();
		static jint STATE_KEYPHRASE_ENROLLED();
		static jint STATE_KEYPHRASE_UNENROLLED();
		static jint STATE_KEYPHRASE_UNSUPPORTED();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AlwaysOnHotwordDetector(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AlwaysOnHotwordDetector(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		android::content::Intent createEnrollIntent();
		android::content::Intent createReEnrollIntent();
		android::content::Intent createUnEnrollIntent();
		jint getParameter(jint arg0);
		jint getSupportedAudioCapabilities();
		jint getSupportedRecognitionModes();
		android::service::voice::AlwaysOnHotwordDetector_ModelParamRange queryParameter(jint arg0);
		jint setParameter(jint arg0, jint arg1);
		jboolean startRecognition(jint arg0);
		jboolean stopRecognition();
	};
} // namespace android::service::voice

