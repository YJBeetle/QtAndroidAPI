#include "./CallScreeningService_CallResponse.hpp"
#include "./CallScreeningService_CallResponse_Builder.hpp"

namespace android::telecom
{
	// Fields
	
	// QJniObject forward
	CallScreeningService_CallResponse_Builder::CallScreeningService_CallResponse_Builder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	CallScreeningService_CallResponse_Builder::CallScreeningService_CallResponse_Builder()
		: JObject(
			"android.telecom.CallScreeningService$CallResponse$Builder",
			"()V"
		) {}
	
	// Methods
	android::telecom::CallScreeningService_CallResponse CallScreeningService_CallResponse_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/telecom/CallScreeningService$CallResponse;"
		);
	}
	android::telecom::CallScreeningService_CallResponse_Builder CallScreeningService_CallResponse_Builder::setCallComposerAttachmentsToShow(jint arg0)
	{
		return callObjectMethod(
			"setCallComposerAttachmentsToShow",
			"(I)Landroid/telecom/CallScreeningService$CallResponse$Builder;",
			arg0
		);
	}
	android::telecom::CallScreeningService_CallResponse_Builder CallScreeningService_CallResponse_Builder::setDisallowCall(jboolean arg0)
	{
		return callObjectMethod(
			"setDisallowCall",
			"(Z)Landroid/telecom/CallScreeningService$CallResponse$Builder;",
			arg0
		);
	}
	android::telecom::CallScreeningService_CallResponse_Builder CallScreeningService_CallResponse_Builder::setRejectCall(jboolean arg0)
	{
		return callObjectMethod(
			"setRejectCall",
			"(Z)Landroid/telecom/CallScreeningService$CallResponse$Builder;",
			arg0
		);
	}
	android::telecom::CallScreeningService_CallResponse_Builder CallScreeningService_CallResponse_Builder::setSilenceCall(jboolean arg0)
	{
		return callObjectMethod(
			"setSilenceCall",
			"(Z)Landroid/telecom/CallScreeningService$CallResponse$Builder;",
			arg0
		);
	}
	android::telecom::CallScreeningService_CallResponse_Builder CallScreeningService_CallResponse_Builder::setSkipCallLog(jboolean arg0)
	{
		return callObjectMethod(
			"setSkipCallLog",
			"(Z)Landroid/telecom/CallScreeningService$CallResponse$Builder;",
			arg0
		);
	}
	android::telecom::CallScreeningService_CallResponse_Builder CallScreeningService_CallResponse_Builder::setSkipNotification(jboolean arg0)
	{
		return callObjectMethod(
			"setSkipNotification",
			"(Z)Landroid/telecom/CallScreeningService$CallResponse$Builder;",
			arg0
		);
	}
} // namespace android::telecom

