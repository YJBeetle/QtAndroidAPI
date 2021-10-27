#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::telephony::mbms
{
	class MbmsStreamingSessionCallback;
}
namespace __jni_impl::android::telephony::mbms
{
	class StreamingService;
}
namespace __jni_impl::android::telephony::mbms
{
	class StreamingServiceCallback;
}
namespace __jni_impl::android::telephony::mbms
{
	class StreamingServiceInfo;
}

namespace __jni_impl::android::telephony
{
	class MbmsStreamingSession : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject create(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::telephony::mbms::MbmsStreamingSessionCallback arg2);
		static QAndroidJniObject create(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, __jni_impl::android::telephony::mbms::MbmsStreamingSessionCallback arg3);
		void close();
		void requestUpdateStreamingServices(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject startStreaming(__jni_impl::android::telephony::mbms::StreamingServiceInfo arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::telephony::mbms::StreamingServiceCallback arg2);
	};
} // namespace __jni_impl::android::telephony

#include "../content/Context.hpp"
#include "mbms/MbmsStreamingSessionCallback.hpp"
#include "mbms/StreamingService.hpp"
#include "mbms/StreamingServiceCallback.hpp"
#include "mbms/StreamingServiceInfo.hpp"

namespace __jni_impl::android::telephony
{
	// Fields
	
	// Constructors
	void MbmsStreamingSession::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.MbmsStreamingSession",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject MbmsStreamingSession::create(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::telephony::mbms::MbmsStreamingSessionCallback arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.telephony.MbmsStreamingSession",
			"create",
			"(Landroid/content/Context;Ljava/util/concurrent/Executor;Landroid/telephony/mbms/MbmsStreamingSessionCallback;)Landroid/telephony/MbmsStreamingSession;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject MbmsStreamingSession::create(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, __jni_impl::android::telephony::mbms::MbmsStreamingSessionCallback arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.telephony.MbmsStreamingSession",
			"create",
			"(Landroid/content/Context;Ljava/util/concurrent/Executor;ILandroid/telephony/mbms/MbmsStreamingSessionCallback;)Landroid/telephony/MbmsStreamingSession;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object()
		);
	}
	void MbmsStreamingSession::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	void MbmsStreamingSession::requestUpdateStreamingServices(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"requestUpdateStreamingServices",
			"(Ljava/util/List;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject MbmsStreamingSession::startStreaming(__jni_impl::android::telephony::mbms::StreamingServiceInfo arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::telephony::mbms::StreamingServiceCallback arg2)
	{
		return __thiz.callObjectMethod(
			"startStreaming",
			"(Landroid/telephony/mbms/StreamingServiceInfo;Ljava/util/concurrent/Executor;Landroid/telephony/mbms/StreamingServiceCallback;)Landroid/telephony/mbms/StreamingService;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::telephony

namespace android::telephony
{
	class MbmsStreamingSession : public __jni_impl::android::telephony::MbmsStreamingSession
	{
	public:
		MbmsStreamingSession(QAndroidJniObject obj) { __thiz = obj; }
		MbmsStreamingSession()
		{
			__constructor();
		}
	};
} // namespace android::telephony

