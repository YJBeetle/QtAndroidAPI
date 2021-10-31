#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::telephony::mbms
{
	class MbmsDownloadSessionCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MbmsDownloadSessionCallback(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MbmsDownloadSessionCallback(QAndroidJniObject obj);
		
		// Constructors
		MbmsDownloadSessionCallback();
		
		// Methods
		void onError(jint arg0, jstring arg1);
		void onFileServicesUpdated(__JniBaseClass arg0);
		void onMiddlewareReady();
	};
} // namespace android::telephony::mbms

