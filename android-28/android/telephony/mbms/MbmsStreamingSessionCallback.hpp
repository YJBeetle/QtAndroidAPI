#pragma once

#include "../../../JString.hpp"
#include "./MbmsStreamingSessionCallback.def.hpp"

namespace android::telephony::mbms
{
	// Fields
	
	// Constructors
	inline MbmsStreamingSessionCallback::MbmsStreamingSessionCallback()
		: JObject(
			"android.telephony.mbms.MbmsStreamingSessionCallback",
			"()V"
		) {}
	
	// Methods
	inline void MbmsStreamingSessionCallback::onError(jint arg0, JString arg1) const
	{
		callMethod<void>(
			"onError",
			"(ILjava/lang/String;)V",
			arg0,
			arg1.object<jstring>()
		);
	}
	inline void MbmsStreamingSessionCallback::onMiddlewareReady() const
	{
		callMethod<void>(
			"onMiddlewareReady",
			"()V"
		);
	}
	inline void MbmsStreamingSessionCallback::onStreamingServicesUpdated(JObject arg0) const
	{
		callMethod<void>(
			"onStreamingServicesUpdated",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
} // namespace android::telephony::mbms

// Base class headers

