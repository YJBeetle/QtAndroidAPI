#include "./StreamingServiceCallback.hpp"

namespace android::telephony::mbms
{
	// Fields
	jint StreamingServiceCallback::SIGNAL_STRENGTH_UNAVAILABLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.mbms.StreamingServiceCallback",
			"SIGNAL_STRENGTH_UNAVAILABLE"
		);
	}
	
	StreamingServiceCallback::StreamingServiceCallback(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	StreamingServiceCallback::StreamingServiceCallback()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.mbms.StreamingServiceCallback",
			"()V"
		);
	}
	
	// Methods
	void StreamingServiceCallback::onBroadcastSignalStrengthUpdated(jint arg0)
	{
		__thiz.callMethod<void>(
			"onBroadcastSignalStrengthUpdated",
			"(I)V",
			arg0
		);
	}
	void StreamingServiceCallback::onError(jint arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"onError",
			"(ILjava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void StreamingServiceCallback::onMediaDescriptionUpdated()
	{
		__thiz.callMethod<void>(
			"onMediaDescriptionUpdated",
			"()V"
		);
	}
	void StreamingServiceCallback::onStreamMethodUpdated(jint arg0)
	{
		__thiz.callMethod<void>(
			"onStreamMethodUpdated",
			"(I)V",
			arg0
		);
	}
	void StreamingServiceCallback::onStreamStateUpdated(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onStreamStateUpdated",
			"(II)V",
			arg0,
			arg1
		);
	}
} // namespace android::telephony::mbms

