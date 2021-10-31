#include "./MbmsDownloadSessionCallback.hpp"

namespace android::telephony::mbms
{
	// Fields
	
	MbmsDownloadSessionCallback::MbmsDownloadSessionCallback(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	MbmsDownloadSessionCallback::MbmsDownloadSessionCallback()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.mbms.MbmsDownloadSessionCallback",
			"()V"
		);
	}
	
	// Methods
	void MbmsDownloadSessionCallback::onError(jint arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"onError",
			"(ILjava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void MbmsDownloadSessionCallback::onFileServicesUpdated(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"onFileServicesUpdated",
			"(Ljava/util/List;)V",
			arg0.__jniObject().object()
		);
	}
	void MbmsDownloadSessionCallback::onMiddlewareReady()
	{
		__thiz.callMethod<void>(
			"onMiddlewareReady",
			"()V"
		);
	}
} // namespace android::telephony::mbms

