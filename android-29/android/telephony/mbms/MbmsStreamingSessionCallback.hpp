#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::telephony::mbms
{
	class MbmsStreamingSessionCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		MbmsStreamingSessionCallback(QAndroidJniObject obj);
		// Constructors
		MbmsStreamingSessionCallback();
		
		// Methods
		void onError(jint arg0, jstring arg1);
		void onMiddlewareReady();
		void onStreamingServicesUpdated(__JniBaseClass arg0);
	};
} // namespace android::telephony::mbms

