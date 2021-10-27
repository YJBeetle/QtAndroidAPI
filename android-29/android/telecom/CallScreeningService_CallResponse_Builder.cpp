#include "./CallScreeningService_CallResponse.hpp"
#include "./CallScreeningService_CallResponse_Builder.hpp"

namespace android::telecom
{
	// Fields
	
	CallScreeningService_CallResponse_Builder::CallScreeningService_CallResponse_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	CallScreeningService_CallResponse_Builder::CallScreeningService_CallResponse_Builder()
	{
		__thiz = QAndroidJniObject(
			"android.telecom.CallScreeningService$CallResponse$Builder",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject CallScreeningService_CallResponse_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/telecom/CallScreeningService$CallResponse;"
		);
	}
	QAndroidJniObject CallScreeningService_CallResponse_Builder::setDisallowCall(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setDisallowCall",
			"(Z)Landroid/telecom/CallScreeningService$CallResponse$Builder;",
			arg0
		);
	}
	QAndroidJniObject CallScreeningService_CallResponse_Builder::setRejectCall(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setRejectCall",
			"(Z)Landroid/telecom/CallScreeningService$CallResponse$Builder;",
			arg0
		);
	}
	QAndroidJniObject CallScreeningService_CallResponse_Builder::setSilenceCall(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setSilenceCall",
			"(Z)Landroid/telecom/CallScreeningService$CallResponse$Builder;",
			arg0
		);
	}
	QAndroidJniObject CallScreeningService_CallResponse_Builder::setSkipCallLog(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setSkipCallLog",
			"(Z)Landroid/telecom/CallScreeningService$CallResponse$Builder;",
			arg0
		);
	}
	QAndroidJniObject CallScreeningService_CallResponse_Builder::setSkipNotification(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setSkipNotification",
			"(Z)Landroid/telecom/CallScreeningService$CallResponse$Builder;",
			arg0
		);
	}
} // namespace android::telecom

