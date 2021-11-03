#include "../../JIntArray.hpp"
#include "./SignalThresholdInfo.hpp"
#include "./SignalThresholdInfo_Builder.hpp"

namespace android::telephony
{
	// Fields
	
	// QJniObject forward
	SignalThresholdInfo_Builder::SignalThresholdInfo_Builder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	SignalThresholdInfo_Builder::SignalThresholdInfo_Builder()
		: JObject(
			"android.telephony.SignalThresholdInfo$Builder",
			"()V"
		) {}
	
	// Methods
	android::telephony::SignalThresholdInfo SignalThresholdInfo_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/telephony/SignalThresholdInfo;"
		);
	}
	android::telephony::SignalThresholdInfo_Builder SignalThresholdInfo_Builder::setRadioAccessNetworkType(jint arg0) const
	{
		return callObjectMethod(
			"setRadioAccessNetworkType",
			"(I)Landroid/telephony/SignalThresholdInfo$Builder;",
			arg0
		);
	}
	android::telephony::SignalThresholdInfo_Builder SignalThresholdInfo_Builder::setSignalMeasurementType(jint arg0) const
	{
		return callObjectMethod(
			"setSignalMeasurementType",
			"(I)Landroid/telephony/SignalThresholdInfo$Builder;",
			arg0
		);
	}
	android::telephony::SignalThresholdInfo_Builder SignalThresholdInfo_Builder::setThresholds(JIntArray arg0) const
	{
		return callObjectMethod(
			"setThresholds",
			"([I)Landroid/telephony/SignalThresholdInfo$Builder;",
			arg0.object<jintArray>()
		);
	}
} // namespace android::telephony

