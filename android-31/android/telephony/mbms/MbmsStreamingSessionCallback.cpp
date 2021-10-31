#include "./MbmsStreamingSessionCallback.hpp"

namespace android::telephony::mbms
{
	// Fields
	
	// QAndroidJniObject forward
	MbmsStreamingSessionCallback::MbmsStreamingSessionCallback(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	MbmsStreamingSessionCallback::MbmsStreamingSessionCallback()
		: __JniBaseClass(
			"android.telephony.mbms.MbmsStreamingSessionCallback",
			"()V"
		) {}
	
	// Methods
	void MbmsStreamingSessionCallback::onError(jint arg0, jstring arg1)
	{
		callMethod<void>(
			"onError",
			"(ILjava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void MbmsStreamingSessionCallback::onMiddlewareReady()
	{
		callMethod<void>(
			"onMiddlewareReady",
			"()V"
		);
	}
	void MbmsStreamingSessionCallback::onStreamingServicesUpdated(__JniBaseClass arg0)
	{
		callMethod<void>(
			"onStreamingServicesUpdated",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
} // namespace android::telephony::mbms

