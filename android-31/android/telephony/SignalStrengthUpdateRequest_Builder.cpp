#include "./SignalStrengthUpdateRequest.hpp"
#include "./SignalStrengthUpdateRequest_Builder.hpp"

namespace android::telephony
{
	// Fields
	
	// QJniObject forward
	SignalStrengthUpdateRequest_Builder::SignalStrengthUpdateRequest_Builder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	SignalStrengthUpdateRequest_Builder::SignalStrengthUpdateRequest_Builder()
		: JObject(
			"android.telephony.SignalStrengthUpdateRequest$Builder",
			"()V"
		) {}
	
	// Methods
	android::telephony::SignalStrengthUpdateRequest SignalStrengthUpdateRequest_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/telephony/SignalStrengthUpdateRequest;"
		);
	}
	android::telephony::SignalStrengthUpdateRequest_Builder SignalStrengthUpdateRequest_Builder::setReportingRequestedWhileIdle(jboolean arg0)
	{
		return callObjectMethod(
			"setReportingRequestedWhileIdle",
			"(Z)Landroid/telephony/SignalStrengthUpdateRequest$Builder;",
			arg0
		);
	}
	android::telephony::SignalStrengthUpdateRequest_Builder SignalStrengthUpdateRequest_Builder::setSignalThresholdInfos(JObject arg0)
	{
		return callObjectMethod(
			"setSignalThresholdInfos",
			"(Ljava/util/Collection;)Landroid/telephony/SignalStrengthUpdateRequest$Builder;",
			arg0.object()
		);
	}
} // namespace android::telephony

