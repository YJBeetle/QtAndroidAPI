#pragma once

#ifndef ANDROID_TELECOM_CALLSCREENINGSERVICE_CALLRESPONSE_BUILDER
#define ANDROID_TELECOM_CALLSCREENINGSERVICE_CALLRESPONSE_BUILDER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::telecom
{
	class CallScreeningService_CallResponse;
}

namespace __jni_impl::android::telecom
{
	class CallScreeningService_CallResponse_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setDisallowCall(jboolean arg0);
		QAndroidJniObject setRejectCall(jboolean arg0);
		QAndroidJniObject setSilenceCall(jboolean arg0);
		QAndroidJniObject setSkipCallLog(jboolean arg0);
		QAndroidJniObject setSkipNotification(jboolean arg0);
	};
} // namespace __jni_impl::android::telecom

#include "CallScreeningService_CallResponse.hpp"

namespace __jni_impl::android::telecom
{
	// Fields
	
	// Constructors
	void CallScreeningService_CallResponse_Builder::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telecom.CallScreeningService$CallResponse$Builder",
			"()V");
	}
	
	// Methods
	QAndroidJniObject CallScreeningService_CallResponse_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/telecom/CallScreeningService$CallResponse;");
	}
	QAndroidJniObject CallScreeningService_CallResponse_Builder::setDisallowCall(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setDisallowCall",
			"(Z)Landroid/telecom/CallScreeningService$CallResponse$Builder;",
			arg0);
	}
	QAndroidJniObject CallScreeningService_CallResponse_Builder::setRejectCall(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setRejectCall",
			"(Z)Landroid/telecom/CallScreeningService$CallResponse$Builder;",
			arg0);
	}
	QAndroidJniObject CallScreeningService_CallResponse_Builder::setSilenceCall(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setSilenceCall",
			"(Z)Landroid/telecom/CallScreeningService$CallResponse$Builder;",
			arg0);
	}
	QAndroidJniObject CallScreeningService_CallResponse_Builder::setSkipCallLog(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setSkipCallLog",
			"(Z)Landroid/telecom/CallScreeningService$CallResponse$Builder;",
			arg0);
	}
	QAndroidJniObject CallScreeningService_CallResponse_Builder::setSkipNotification(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setSkipNotification",
			"(Z)Landroid/telecom/CallScreeningService$CallResponse$Builder;",
			arg0);
	}
} // namespace __jni_impl::android::telecom

namespace android::telecom
{
	class CallScreeningService_CallResponse_Builder : public __jni_impl::android::telecom::CallScreeningService_CallResponse_Builder
	{
	public:
		CallScreeningService_CallResponse_Builder(QAndroidJniObject obj) { __thiz = obj; }
		CallScreeningService_CallResponse_Builder()
		{
			__constructor();
		}
	};
} // namespace android::telecom

#endif // ANDROID_TELECOM_CALLSCREENINGSERVICE_CALLRESPONSE_BUILDER

