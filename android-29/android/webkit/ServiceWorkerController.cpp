#include "./ServiceWorkerClient.hpp"
#include "./ServiceWorkerWebSettings.hpp"
#include "./ServiceWorkerController.hpp"

namespace android::webkit
{
	// Fields
	
	ServiceWorkerController::ServiceWorkerController(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ServiceWorkerController::ServiceWorkerController()
	{
		__thiz = QAndroidJniObject(
			"android.webkit.ServiceWorkerController",
			"()V"
		);
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
	QAndroidJniObject ServiceWorkerController::getServiceWorkerWebSettings()
	{
		return __thiz.callObjectMethod(
			"getServiceWorkerWebSettings",
			"()Landroid/webkit/ServiceWorkerWebSettings;"
		);
	}
	void ServiceWorkerController::setServiceWorkerClient(android::webkit::ServiceWorkerClient arg0)
	{
		__thiz.callMethod<void>(
			"setServiceWorkerClient",
			"(Landroid/webkit/ServiceWorkerClient;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::webkit

