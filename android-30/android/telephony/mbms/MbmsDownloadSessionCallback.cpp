#include "./MbmsDownloadSessionCallback.hpp"

namespace android::telephony::mbms
{
	// Fields
	
	// QJniObject forward
	MbmsDownloadSessionCallback::MbmsDownloadSessionCallback(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	MbmsDownloadSessionCallback::MbmsDownloadSessionCallback()
		: __JniBaseClass(
			"android.telephony.mbms.MbmsDownloadSessionCallback",
			"()V"
		) {}
	
	// Methods
	void MbmsDownloadSessionCallback::onError(jint arg0, jstring arg1)
	{
		callMethod<void>(
			"onError",
			"(ILjava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void MbmsDownloadSessionCallback::onFileServicesUpdated(__JniBaseClass arg0)
	{
		callMethod<void>(
			"onFileServicesUpdated",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	void MbmsDownloadSessionCallback::onMiddlewareReady()
	{
		callMethod<void>(
			"onMiddlewareReady",
			"()V"
		);
	}
} // namespace android::telephony::mbms

