#include "../content/Context.hpp"
#include "./mbms/MbmsStreamingSessionCallback.hpp"
#include "./mbms/StreamingService.hpp"
#include "./mbms/StreamingServiceCallback.hpp"
#include "./mbms/StreamingServiceInfo.hpp"
#include "./MbmsStreamingSession.hpp"

namespace android::telephony
{
	// Fields
	
	// QAndroidJniObject forward
	MbmsStreamingSession::MbmsStreamingSession(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::telephony::MbmsStreamingSession MbmsStreamingSession::create(android::content::Context arg0, JObject arg1, android::telephony::mbms::MbmsStreamingSessionCallback arg2)
	{
		return callStaticObjectMethod(
			"android.telephony.MbmsStreamingSession",
			"create",
			"(Landroid/content/Context;Ljava/util/concurrent/Executor;Landroid/telephony/mbms/MbmsStreamingSessionCallback;)Landroid/telephony/MbmsStreamingSession;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	android::telephony::MbmsStreamingSession MbmsStreamingSession::create(android::content::Context arg0, JObject arg1, jint arg2, android::telephony::mbms::MbmsStreamingSessionCallback arg3)
	{
		return callStaticObjectMethod(
			"android.telephony.MbmsStreamingSession",
			"create",
			"(Landroid/content/Context;Ljava/util/concurrent/Executor;ILandroid/telephony/mbms/MbmsStreamingSessionCallback;)Landroid/telephony/MbmsStreamingSession;",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3.object()
		);
	}
	void MbmsStreamingSession::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void MbmsStreamingSession::requestUpdateStreamingServices(JObject arg0)
	{
		callMethod<void>(
			"requestUpdateStreamingServices",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	android::telephony::mbms::StreamingService MbmsStreamingSession::startStreaming(android::telephony::mbms::StreamingServiceInfo arg0, JObject arg1, android::telephony::mbms::StreamingServiceCallback arg2)
	{
		return callObjectMethod(
			"startStreaming",
			"(Landroid/telephony/mbms/StreamingServiceInfo;Ljava/util/concurrent/Executor;Landroid/telephony/mbms/StreamingServiceCallback;)Landroid/telephony/mbms/StreamingService;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
} // namespace android::telephony

