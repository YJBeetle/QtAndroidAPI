#pragma once

#include "../../../JObject.hpp"

namespace android::service::voice
{
	class AlwaysOnHotwordDetector_EventPayload;
}

namespace android::service::voice
{
	class AlwaysOnHotwordDetector_Callback : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AlwaysOnHotwordDetector_Callback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AlwaysOnHotwordDetector_Callback(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		AlwaysOnHotwordDetector_Callback();
		
		// Methods
		void onAvailabilityChanged(jint arg0) const;
		void onDetected(android::service::voice::AlwaysOnHotwordDetector_EventPayload arg0) const;
		void onError() const;
		void onRecognitionPaused() const;
		void onRecognitionResumed() const;
	};
} // namespace android::service::voice

