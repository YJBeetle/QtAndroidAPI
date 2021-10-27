#include "./ServiceWorkerWebSettings.hpp"

namespace android::webkit
{
	// Fields
	
	ServiceWorkerWebSettings::ServiceWorkerWebSettings(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ServiceWorkerWebSettings::ServiceWorkerWebSettings()
	{
		__thiz = QAndroidJniObject(
			"android.webkit.ServiceWorkerWebSettings",
			"()V"
		);
	}
	
	// Methods
	jboolean ServiceWorkerWebSettings::getAllowContentAccess()
	{
		return __thiz.callMethod<jboolean>(
			"getAllowContentAccess",
			"()Z"
		);
	}
	jboolean ServiceWorkerWebSettings::getAllowFileAccess()
	{
		return __thiz.callMethod<jboolean>(
			"getAllowFileAccess",
			"()Z"
		);
	}
	jboolean ServiceWorkerWebSettings::getBlockNetworkLoads()
	{
		return __thiz.callMethod<jboolean>(
			"getBlockNetworkLoads",
			"()Z"
		);
	}
	jint ServiceWorkerWebSettings::getCacheMode()
	{
		return __thiz.callMethod<jint>(
			"getCacheMode",
			"()I"
		);
	}
	void ServiceWorkerWebSettings::setAllowContentAccess(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setAllowContentAccess",
			"(Z)V",
			arg0
		);
	}
	void ServiceWorkerWebSettings::setAllowFileAccess(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setAllowFileAccess",
			"(Z)V",
			arg0
		);
	}
	void ServiceWorkerWebSettings::setBlockNetworkLoads(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setBlockNetworkLoads",
			"(Z)V",
			arg0
		);
	}
	void ServiceWorkerWebSettings::setCacheMode(jint arg0)
	{
		__thiz.callMethod<void>(
			"setCacheMode",
			"(I)V",
			arg0
		);
	}
} // namespace android::webkit

