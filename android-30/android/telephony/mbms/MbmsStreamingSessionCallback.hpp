#pragma once

#include "../../../JObject.hpp"


namespace android::telephony::mbms
{
	class MbmsStreamingSessionCallback : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MbmsStreamingSessionCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MbmsStreamingSessionCallback(QAndroidJniObject obj);
		
		// Constructors
		MbmsStreamingSessionCallback();
		
		// Methods
		void onError(jint arg0, jstring arg1);
		void onMiddlewareReady();
		void onStreamingServicesUpdated(JObject arg0);
	};
} // namespace android::telephony::mbms

