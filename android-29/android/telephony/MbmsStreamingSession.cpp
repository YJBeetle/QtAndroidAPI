#include "../content/Context.hpp"
#include "./mbms/MbmsStreamingSessionCallback.hpp"
#include "./mbms/StreamingService.hpp"
#include "./mbms/StreamingServiceCallback.hpp"
#include "./mbms/StreamingServiceInfo.hpp"
#include "./MbmsStreamingSession.hpp"

namespace android::telephony
{
	// Fields
	
	MbmsStreamingSession::MbmsStreamingSession(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject MbmsStreamingSession::create(android::content::Context arg0, __JniBaseClass arg1, android::telephony::mbms::MbmsStreamingSessionCallback arg2)
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
	QAndroidJniObject MbmsStreamingSession::create(android::content::Context arg0, __JniBaseClass arg1, jint arg2, android::telephony::mbms::MbmsStreamingSessionCallback arg3)
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
	void MbmsStreamingSession::requestUpdateStreamingServices(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"requestUpdateStreamingServices",
			"(Ljava/util/List;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject MbmsStreamingSession::startStreaming(android::telephony::mbms::StreamingServiceInfo arg0, __JniBaseClass arg1, android::telephony::mbms::StreamingServiceCallback arg2)
	{
		return __thiz.callObjectMethod(
			"startStreaming",
			"(Landroid/telephony/mbms/StreamingServiceInfo;Ljava/util/concurrent/Executor;Landroid/telephony/mbms/StreamingServiceCallback;)Landroid/telephony/mbms/StreamingService;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
} // namespace android::telephony

