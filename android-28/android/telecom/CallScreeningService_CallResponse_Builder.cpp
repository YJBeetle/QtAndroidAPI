#include "./CallScreeningService_CallResponse.hpp"
#include "./CallScreeningService_CallResponse_Builder.hpp"

namespace android::telecom
{
	// Fields
	
	// Constructors
	CallScreeningService_CallResponse_Builder::CallScreeningService_CallResponse_Builder()
		: JObject(
			"android.telecom.CallScreeningService$CallResponse$Builder",
			"()V"
		) {}
	
	// Methods
	android::telecom::CallScreeningService_CallResponse CallScreeningService_CallResponse_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/telecom/CallScreeningService$CallResponse;"
		);
	}
	android::telecom::CallScreeningService_CallResponse_Builder CallScreeningService_CallResponse_Builder::setDisallowCall(jboolean arg0) const
	{
		return callObjectMethod(
			"setDisallowCall",
			"(Z)Landroid/telecom/CallScreeningService$CallResponse$Builder;",
			arg0
		);
	}
	android::telecom::CallScreeningService_CallResponse_Builder CallScreeningService_CallResponse_Builder::setRejectCall(jboolean arg0) const
	{
		return callObjectMethod(
			"setRejectCall",
			"(Z)Landroid/telecom/CallScreeningService$CallResponse$Builder;",
			arg0
		);
	}
	android::telecom::CallScreeningService_CallResponse_Builder CallScreeningService_CallResponse_Builder::setSkipCallLog(jboolean arg0) const
	{
		return callObjectMethod(
			"setSkipCallLog",
			"(Z)Landroid/telecom/CallScreeningService$CallResponse$Builder;",
			arg0
		);
	}
	android::telecom::CallScreeningService_CallResponse_Builder CallScreeningService_CallResponse_Builder::setSkipNotification(jboolean arg0) const
	{
		return callObjectMethod(
			"setSkipNotification",
			"(Z)Landroid/telecom/CallScreeningService$CallResponse$Builder;",
			arg0
		);
	}
} // namespace android::telecom

