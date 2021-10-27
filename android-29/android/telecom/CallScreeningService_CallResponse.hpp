#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::telecom
{
	class CallScreeningService_CallResponse : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean getDisallowCall();
		jboolean getRejectCall();
		jboolean getSilenceCall();
		jboolean getSkipCallLog();
		jboolean getSkipNotification();
	};
} // namespace __jni_impl::android::telecom


namespace __jni_impl::android::telecom
{
	// Fields
	
	// Constructors
	void CallScreeningService_CallResponse::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telecom.CallScreeningService$CallResponse",
			"(V)V");
	}
	
	// Methods
	jboolean CallScreeningService_CallResponse::getDisallowCall()
	{
		return __thiz.callMethod<jboolean>(
			"getDisallowCall",
			"()Z"
		);
	}
	jboolean CallScreeningService_CallResponse::getRejectCall()
	{
		return __thiz.callMethod<jboolean>(
			"getRejectCall",
			"()Z"
		);
	}
	jboolean CallScreeningService_CallResponse::getSilenceCall()
	{
		return __thiz.callMethod<jboolean>(
			"getSilenceCall",
			"()Z"
		);
	}
	jboolean CallScreeningService_CallResponse::getSkipCallLog()
	{
		return __thiz.callMethod<jboolean>(
			"getSkipCallLog",
			"()Z"
		);
	}
	jboolean CallScreeningService_CallResponse::getSkipNotification()
	{
		return __thiz.callMethod<jboolean>(
			"getSkipNotification",
			"()Z"
		);
	}
} // namespace __jni_impl::android::telecom

namespace android::telecom
{
	class CallScreeningService_CallResponse : public __jni_impl::android::telecom::CallScreeningService_CallResponse
	{
	public:
		CallScreeningService_CallResponse(QAndroidJniObject obj) { __thiz = obj; }
		CallScreeningService_CallResponse()
		{
			__constructor();
		}
	};
} // namespace android::telecom

