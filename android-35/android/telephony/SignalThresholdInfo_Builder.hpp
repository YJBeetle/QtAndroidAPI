#pragma once

#include "../../JIntArray.hpp"
#include "./SignalThresholdInfo.def.hpp"
#include "./SignalThresholdInfo_Builder.def.hpp"

namespace android::telephony
{
	// Fields
	
	// Constructors
	inline SignalThresholdInfo_Builder::SignalThresholdInfo_Builder()
		: JObject(
			"android.telephony.SignalThresholdInfo$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::telephony::SignalThresholdInfo SignalThresholdInfo_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/telephony/SignalThresholdInfo;"
		);
	}
	inline android::telephony::SignalThresholdInfo_Builder SignalThresholdInfo_Builder::setHysteresisDb(jint arg0) const
	{
		return callObjectMethod(
			"setHysteresisDb",
			"(I)Landroid/telephony/SignalThresholdInfo$Builder;",
			arg0
		);
	}
	inline android::telephony::SignalThresholdInfo_Builder SignalThresholdInfo_Builder::setRadioAccessNetworkType(jint arg0) const
	{
		return callObjectMethod(
			"setRadioAccessNetworkType",
			"(I)Landroid/telephony/SignalThresholdInfo$Builder;",
			arg0
		);
	}
	inline android::telephony::SignalThresholdInfo_Builder SignalThresholdInfo_Builder::setSignalMeasurementType(jint arg0) const
	{
		return callObjectMethod(
			"setSignalMeasurementType",
			"(I)Landroid/telephony/SignalThresholdInfo$Builder;",
			arg0
		);
	}
	inline android::telephony::SignalThresholdInfo_Builder SignalThresholdInfo_Builder::setThresholds(JIntArray arg0) const
	{
		return callObjectMethod(
			"setThresholds",
			"([I)Landroid/telephony/SignalThresholdInfo$Builder;",
			arg0.object<jintArray>()
		);
	}
} // namespace android::telephony

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::telephony;
#endif
