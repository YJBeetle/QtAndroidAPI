#include "./MbmsStreamingSessionCallback.hpp"

namespace android::telephony::mbms
{
	// Fields
	
	MbmsStreamingSessionCallback::MbmsStreamingSessionCallback(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	MbmsStreamingSessionCallback::MbmsStreamingSessionCallback()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.mbms.MbmsStreamingSessionCallback",
			"()V"
		);
	}
	
	// Methods
	void MbmsStreamingSessionCallback::onError(jint arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"onError",
			"(ILjava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void MbmsStreamingSessionCallback::onMiddlewareReady()
	{
		__thiz.callMethod<void>(
			"onMiddlewareReady",
			"()V"
		);
	}
	void MbmsStreamingSessionCallback::onStreamingServicesUpdated(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"onStreamingServicesUpdated",
			"(Ljava/util/List;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::telephony::mbms

