#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::service::voice
{
	class AlwaysOnHotwordDetector_EventPayload;
}

namespace android::service::voice
{
	class AlwaysOnHotwordDetector_Callback : public __JniBaseClass
	{
	public:
		// Fields
		
		AlwaysOnHotwordDetector_Callback(QAndroidJniObject obj);
		// Constructors
		AlwaysOnHotwordDetector_Callback();
		
		// Methods
		void onAvailabilityChanged(jint arg0);
		void onDetected(android::service::voice::AlwaysOnHotwordDetector_EventPayload arg0);
		void onError();
		void onRecognitionPaused();
		void onRecognitionResumed();
	};
} // namespace android::service::voice

