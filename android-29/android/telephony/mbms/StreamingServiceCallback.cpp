#include "../../../JString.hpp"
#include "./StreamingServiceCallback.hpp"

namespace android::telephony::mbms
{
	// Fields
	jint StreamingServiceCallback::SIGNAL_STRENGTH_UNAVAILABLE()
	{
		return getStaticField<jint>(
			"android.telephony.mbms.StreamingServiceCallback",
			"SIGNAL_STRENGTH_UNAVAILABLE"
		);
	}
	
	// QJniObject forward
	StreamingServiceCallback::StreamingServiceCallback(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	StreamingServiceCallback::StreamingServiceCallback()
		: JObject(
			"android.telephony.mbms.StreamingServiceCallback",
			"()V"
		) {}
	
	// Methods
	void StreamingServiceCallback::onBroadcastSignalStrengthUpdated(jint arg0) const
	{
		callMethod<void>(
			"onBroadcastSignalStrengthUpdated",
			"(I)V",
			arg0
		);
	}
	void StreamingServiceCallback::onError(jint arg0, JString arg1) const
	{
		callMethod<void>(
			"onError",
			"(ILjava/lang/String;)V",
			arg0,
			arg1.object<jstring>()
		);
	}
	void StreamingServiceCallback::onMediaDescriptionUpdated() const
	{
		callMethod<void>(
			"onMediaDescriptionUpdated",
			"()V"
		);
	}
	void StreamingServiceCallback::onStreamMethodUpdated(jint arg0) const
	{
		callMethod<void>(
			"onStreamMethodUpdated",
			"(I)V",
			arg0
		);
	}
	void StreamingServiceCallback::onStreamStateUpdated(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"onStreamStateUpdated",
			"(II)V",
			arg0,
			arg1
		);
	}
} // namespace android::telephony::mbms

