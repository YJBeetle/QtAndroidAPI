#pragma once

#include "../../__JniBaseClass.hpp"
#include "../content/Context.hpp"
#include "../content/ContextWrapper.hpp"
#include "../app/Service.hpp"

namespace __jni_impl::android::content
{
	class Intent;
}
namespace __jni_impl::android::telecom
{
	class Call_Details;
}
namespace __jni_impl::android::telecom
{
	class CallScreeningService_CallResponse;
}

namespace __jni_impl::android::telecom
{
	class CallScreeningService : public __jni_impl::android::app::Service
	{
	public:
		// Fields
		static jstring SERVICE_INTERFACE();
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject onBind(__jni_impl::android::content::Intent arg0);
		void onScreenCall(__jni_impl::android::telecom::Call_Details arg0);
		jboolean onUnbind(__jni_impl::android::content::Intent arg0);
		void respondToCall(__jni_impl::android::telecom::Call_Details arg0, __jni_impl::android::telecom::CallScreeningService_CallResponse arg1);
	};
} // namespace __jni_impl::android::telecom

#include "../content/Intent.hpp"
#include "./Call_Details.hpp"
#include "./CallScreeningService_CallResponse.hpp"

namespace __jni_impl::android::telecom
{
	// Fields
	jstring CallScreeningService::SERVICE_INTERFACE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telecom.CallScreeningService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void CallScreeningService::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telecom.CallScreeningService",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject CallScreeningService::onBind(__jni_impl::android::content::Intent arg0)
	{
		return __thiz.callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.__jniObject().object()
		);
	}
	void CallScreeningService::onScreenCall(__jni_impl::android::telecom::Call_Details arg0)
	{
		__thiz.callMethod<void>(
			"onScreenCall",
			"(Landroid/telecom/Call$Details;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean CallScreeningService::onUnbind(__jni_impl::android::content::Intent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onUnbind",
			"(Landroid/content/Intent;)Z",
			arg0.__jniObject().object()
		);
	}
	void CallScreeningService::respondToCall(__jni_impl::android::telecom::Call_Details arg0, __jni_impl::android::telecom::CallScreeningService_CallResponse arg1)
	{
		__thiz.callMethod<void>(
			"respondToCall",
			"(Landroid/telecom/Call$Details;Landroid/telecom/CallScreeningService$CallResponse;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::telecom

namespace android::telecom
{
	class CallScreeningService : public __jni_impl::android::telecom::CallScreeningService
	{
	public:
		CallScreeningService(QAndroidJniObject obj) { __thiz = obj; }
		CallScreeningService()
		{
			__constructor();
		}
	};
} // namespace android::telecom

