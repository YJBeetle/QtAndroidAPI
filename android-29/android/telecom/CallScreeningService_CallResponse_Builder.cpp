#include "./CallScreeningService_CallResponse.hpp"
#include "./CallScreeningService_CallResponse_Builder.hpp"

namespace android::telecom
{
	// Fields
	
	// QAndroidJniObject forward
	CallScreeningService_CallResponse_Builder::CallScreeningService_CallResponse_Builder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	CallScreeningService_CallResponse_Builder::CallScreeningService_CallResponse_Builder()
		: __JniBaseClass(
			"android.telecom.CallScreeningService$CallResponse$Builder",
			"()V"
		) {}
	
	// Methods
	QAndroidJniObject CallScreeningService_CallResponse_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/telecom/CallScreeningService$CallResponse;"
		);
	}
	QAndroidJniObject CallScreeningService_CallResponse_Builder::setDisallowCall(jboolean arg0)
	{
		return callObjectMethod(
			"setDisallowCall",
			"(Z)Landroid/telecom/CallScreeningService$CallResponse$Builder;",
			arg0
		);
	}
	QAndroidJniObject CallScreeningService_CallResponse_Builder::setRejectCall(jboolean arg0)
	{
		return callObjectMethod(
			"setRejectCall",
			"(Z)Landroid/telecom/CallScreeningService$CallResponse$Builder;",
			arg0
		);
	}
	QAndroidJniObject CallScreeningService_CallResponse_Builder::setSilenceCall(jboolean arg0)
	{
		return callObjectMethod(
			"setSilenceCall",
			"(Z)Landroid/telecom/CallScreeningService$CallResponse$Builder;",
			arg0
		);
	}
	QAndroidJniObject CallScreeningService_CallResponse_Builder::setSkipCallLog(jboolean arg0)
	{
		return callObjectMethod(
			"setSkipCallLog",
			"(Z)Landroid/telecom/CallScreeningService$CallResponse$Builder;",
			arg0
		);
	}
	QAndroidJniObject CallScreeningService_CallResponse_Builder::setSkipNotification(jboolean arg0)
	{
		return callObjectMethod(
			"setSkipNotification",
			"(Z)Landroid/telecom/CallScreeningService$CallResponse$Builder;",
			arg0
		);
	}
} // namespace android::telecom
