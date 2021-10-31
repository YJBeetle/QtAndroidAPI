#include "./SignalThresholdInfo.hpp"
#include "./SignalThresholdInfo_Builder.hpp"

namespace android::telephony
{
	// Fields
	
	// QJniObject forward
	SignalThresholdInfo_Builder::SignalThresholdInfo_Builder(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	SignalThresholdInfo_Builder::SignalThresholdInfo_Builder()
		: __JniBaseClass(
			"android.telephony.SignalThresholdInfo$Builder",
			"()V"
		) {}
	
	// Methods
	android::telephony::SignalThresholdInfo SignalThresholdInfo_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/telephony/SignalThresholdInfo;"
		);
	}
	android::telephony::SignalThresholdInfo_Builder SignalThresholdInfo_Builder::setRadioAccessNetworkType(jint arg0)
	{
		return callObjectMethod(
			"setRadioAccessNetworkType",
			"(I)Landroid/telephony/SignalThresholdInfo$Builder;",
			arg0
		);
	}
	android::telephony::SignalThresholdInfo_Builder SignalThresholdInfo_Builder::setSignalMeasurementType(jint arg0)
	{
		return callObjectMethod(
			"setSignalMeasurementType",
			"(I)Landroid/telephony/SignalThresholdInfo$Builder;",
			arg0
		);
	}
	android::telephony::SignalThresholdInfo_Builder SignalThresholdInfo_Builder::setThresholds(jintArray arg0)
	{
		return callObjectMethod(
			"setThresholds",
			"([I)Landroid/telephony/SignalThresholdInfo$Builder;",
			arg0
		);
	}
} // namespace android::telephony

