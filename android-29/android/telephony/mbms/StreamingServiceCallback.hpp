#pragma once

#ifndef ANDROID_TELEPHONY_MBMS_STREAMINGSERVICECALLBACK
#define ANDROID_TELEPHONY_MBMS_STREAMINGSERVICECALLBACK

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::telephony::mbms
{
	class StreamingServiceCallback : public __JniBaseClass
	{
	public:
		// Fields
		static jint SIGNAL_STRENGTH_UNAVAILABLE();
		
		// Constructors
		void __constructor();
		
		// Methods
		void onMediaDescriptionUpdated();
		void onStreamStateUpdated(jint arg0, jint arg1);
		void onStreamMethodUpdated(jint arg0);
		void onError(jint arg0, jstring arg1);
		void onBroadcastSignalStrengthUpdated(jint arg0);
	};
} // namespace __jni_impl::android::telephony::mbms


namespace __jni_impl::android::telephony::mbms
{
	// Fields
	jint StreamingServiceCallback::SIGNAL_STRENGTH_UNAVAILABLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.mbms.StreamingServiceCallback",
			"SIGNAL_STRENGTH_UNAVAILABLE");
	}
	
	// Constructors
	void StreamingServiceCallback::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.mbms.StreamingServiceCallback",
			"()V");
	}
	
	// Methods
	void StreamingServiceCallback::onMediaDescriptionUpdated()
	{
		__thiz.callMethod<void>(
			"onMediaDescriptionUpdated",
			"()V");
	}
	void StreamingServiceCallback::onStreamStateUpdated(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onStreamStateUpdated",
			"(II)V",
			arg0,
			arg1);
	}
	void StreamingServiceCallback::onStreamMethodUpdated(jint arg0)
	{
		__thiz.callMethod<void>(
			"onStreamMethodUpdated",
			"(I)V",
			arg0);
	}
	void StreamingServiceCallback::onError(jint arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"onError",
			"(ILjava/lang/String;)V",
			arg0,
			arg1);
	}
	void StreamingServiceCallback::onBroadcastSignalStrengthUpdated(jint arg0)
	{
		__thiz.callMethod<void>(
			"onBroadcastSignalStrengthUpdated",
			"(I)V",
			arg0);
	}
} // namespace __jni_impl::android::telephony::mbms

namespace android::telephony::mbms
{
	class StreamingServiceCallback : public __jni_impl::android::telephony::mbms::StreamingServiceCallback
	{
	public:
		StreamingServiceCallback(QAndroidJniObject obj) { __thiz = obj; }
		StreamingServiceCallback()
		{
			__constructor();
		}
	};
} // namespace android::telephony::mbms

#endif // ANDROID_TELEPHONY_MBMS_STREAMINGSERVICECALLBACK

