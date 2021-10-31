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
	StreamingServiceCallback::StreamingServiceCallback(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	StreamingServiceCallback::StreamingServiceCallback()
		: __JniBaseClass(
			"android.telephony.mbms.StreamingServiceCallback",
			"()V"
		) {}
	
	// Methods
	void StreamingServiceCallback::onBroadcastSignalStrengthUpdated(jint arg0)
	{
		callMethod<void>(
			"onBroadcastSignalStrengthUpdated",
			"(I)V",
			arg0
		);
	}
	void StreamingServiceCallback::onError(jint arg0, jstring arg1)
	{
		callMethod<void>(
			"onError",
			"(ILjava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void StreamingServiceCallback::onMediaDescriptionUpdated()
	{
		callMethod<void>(
			"onMediaDescriptionUpdated",
			"()V"
		);
	}
	void StreamingServiceCallback::onStreamMethodUpdated(jint arg0)
	{
		callMethod<void>(
			"onStreamMethodUpdated",
			"(I)V",
			arg0
		);
	}
	void StreamingServiceCallback::onStreamStateUpdated(jint arg0, jint arg1)
	{
		callMethod<void>(
			"onStreamStateUpdated",
			"(II)V",
			arg0,
			arg1
		);
	}
} // namespace android::telephony::mbms

