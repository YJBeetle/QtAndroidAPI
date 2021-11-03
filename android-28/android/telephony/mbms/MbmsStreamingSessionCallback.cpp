#include "../../../JString.hpp"
#include "./MbmsStreamingSessionCallback.hpp"

namespace android::telephony::mbms
{
	// Fields
	
	// QJniObject forward
	MbmsStreamingSessionCallback::MbmsStreamingSessionCallback(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	MbmsStreamingSessionCallback::MbmsStreamingSessionCallback()
		: JObject(
			"android.telephony.mbms.MbmsStreamingSessionCallback",
			"()V"
		) {}
	
	// Methods
	void MbmsStreamingSessionCallback::onError(jint arg0, JString arg1) const
	{
		callMethod<void>(
			"onError",
			"(ILjava/lang/String;)V",
			arg0,
			arg1.object<jstring>()
		);
	}
	void MbmsStreamingSessionCallback::onMiddlewareReady() const
	{
		callMethod<void>(
			"onMiddlewareReady",
			"()V"
		);
	}
	void MbmsStreamingSessionCallback::onStreamingServicesUpdated(JObject arg0) const
	{
		callMethod<void>(
			"onStreamingServicesUpdated",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
} // namespace android::telephony::mbms

