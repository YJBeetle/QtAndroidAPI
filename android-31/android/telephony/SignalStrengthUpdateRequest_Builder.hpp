#pragma once

#include "./SignalStrengthUpdateRequest.def.hpp"
#include "./SignalStrengthUpdateRequest_Builder.def.hpp"

namespace android::telephony
{
	// Fields
	
	// Constructors
	inline SignalStrengthUpdateRequest_Builder::SignalStrengthUpdateRequest_Builder()
		: JObject(
			"android.telephony.SignalStrengthUpdateRequest$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::telephony::SignalStrengthUpdateRequest SignalStrengthUpdateRequest_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/telephony/SignalStrengthUpdateRequest;"
		);
	}
	inline android::telephony::SignalStrengthUpdateRequest_Builder SignalStrengthUpdateRequest_Builder::setReportingRequestedWhileIdle(jboolean arg0) const
	{
		return callObjectMethod(
			"setReportingRequestedWhileIdle",
			"(Z)Landroid/telephony/SignalStrengthUpdateRequest$Builder;",
			arg0
		);
	}
	inline android::telephony::SignalStrengthUpdateRequest_Builder SignalStrengthUpdateRequest_Builder::setSignalThresholdInfos(JObject arg0) const
	{
		return callObjectMethod(
			"setSignalThresholdInfos",
			"(Ljava/util/Collection;)Landroid/telephony/SignalStrengthUpdateRequest$Builder;",
			arg0.object()
		);
	}
} // namespace android::telephony

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::telephony;
#endif
