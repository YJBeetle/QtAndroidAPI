#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::telephony::mbms
{
	class MbmsStreamingSessionCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MbmsStreamingSessionCallback(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MbmsStreamingSessionCallback(QAndroidJniObject obj);
		
		// Constructors
		MbmsStreamingSessionCallback();
		
		// Methods
		void onError(jint arg0, jstring arg1);
		void onMiddlewareReady();
		void onStreamingServicesUpdated(__JniBaseClass arg0);
	};
} // namespace android::telephony::mbms

