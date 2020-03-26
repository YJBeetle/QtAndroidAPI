#pragma once

#ifndef ANDROID_WEBKIT_SERVICEWORKERCONTROLLER
#define ANDROID_WEBKIT_SERVICEWORKERCONTROLLER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::webkit
{
	class ServiceWorkerClient;
}
namespace __jni_impl::android::webkit
{
	class ServiceWorkerWebSettings;
}

namespace __jni_impl::android::webkit
{
	class ServiceWorkerController : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject getInstance();
		void setServiceWorkerClient(__jni_impl::android::webkit::ServiceWorkerClient arg0);
		QAndroidJniObject getServiceWorkerWebSettings();
	};
} // namespace __jni_impl::android::webkit

#include "ServiceWorkerClient.hpp"
#include "ServiceWorkerWebSettings.hpp"

namespace __jni_impl::android::webkit
{
	// Fields
	
	// Constructors
	void ServiceWorkerController::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.webkit.ServiceWorkerController",
			"()V");
	}
	
	// Methods
	QAndroidJniObject ServiceWorkerController::getInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.webkit.ServiceWorkerController",
			"getInstance",
			"()Landroid/webkit/ServiceWorkerController;"
		);
	}
	void ServiceWorkerController::setServiceWorkerClient(__jni_impl::android::webkit::ServiceWorkerClient arg0)
	{
		__thiz.callMethod<void>(
			"setServiceWorkerClient",
			"(Landroid/webkit/ServiceWorkerClient;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ServiceWorkerController::getServiceWorkerWebSettings()
	{
		return __thiz.callObjectMethod(
			"getServiceWorkerWebSettings",
			"()Landroid/webkit/ServiceWorkerWebSettings;"
		);
	}
} // namespace __jni_impl::android::webkit

namespace android::webkit
{
	class ServiceWorkerController : public __jni_impl::android::webkit::ServiceWorkerController
	{
	public:
		ServiceWorkerController(QAndroidJniObject obj) { __thiz = obj; }
		ServiceWorkerController()
		{
			__constructor();
		}
	};
} // namespace android::webkit

#endif // ANDROID_WEBKIT_SERVICEWORKERCONTROLLER

