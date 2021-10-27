#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::telephony::mbms
{
	class MbmsDownloadSessionCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		MbmsDownloadSessionCallback(QAndroidJniObject obj);
		// Constructors
		MbmsDownloadSessionCallback();
		
		// Methods
		void onError(jint arg0, jstring arg1);
		void onError(jint arg0, const QString &arg1);
		void onFileServicesUpdated(__JniBaseClass arg0);
		void onMiddlewareReady();
	};
} // namespace android::telephony::mbms

