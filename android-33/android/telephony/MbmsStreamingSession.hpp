#pragma once

#include "../content/Context.def.hpp"
#include "./mbms/MbmsStreamingSessionCallback.def.hpp"
#include "./mbms/StreamingService.def.hpp"
#include "./mbms/StreamingServiceCallback.def.hpp"
#include "./mbms/StreamingServiceInfo.def.hpp"
#include "./MbmsStreamingSession.def.hpp"

namespace android::telephony
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::telephony::MbmsStreamingSession MbmsStreamingSession::create(android::content::Context arg0, JObject arg1, android::telephony::mbms::MbmsStreamingSessionCallback arg2)
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
	inline android::telephony::MbmsStreamingSession MbmsStreamingSession::create(android::content::Context arg0, JObject arg1, jint arg2, android::telephony::mbms::MbmsStreamingSessionCallback arg3)
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
	inline void MbmsStreamingSession::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline void MbmsStreamingSession::requestUpdateStreamingServices(JObject arg0) const
	{
		callMethod<void>(
			"requestUpdateStreamingServices",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	inline android::telephony::mbms::StreamingService MbmsStreamingSession::startStreaming(android::telephony::mbms::StreamingServiceInfo arg0, JObject arg1, android::telephony::mbms::StreamingServiceCallback arg2) const
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

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::telephony;
#endif
