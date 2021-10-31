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
		
		// QJniObject forward
		template<typename ...Ts> explicit AlwaysOnHotwordDetector_Callback(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AlwaysOnHotwordDetector_Callback(QJniObject obj);
		
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

