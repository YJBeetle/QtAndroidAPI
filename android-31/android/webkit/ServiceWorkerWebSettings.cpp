#include "./ServiceWorkerWebSettings.hpp"

namespace android::webkit
{
	// Fields
	
	// QJniObject forward
	ServiceWorkerWebSettings::ServiceWorkerWebSettings(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	ServiceWorkerWebSettings::ServiceWorkerWebSettings()
		: __JniBaseClass(
			"android.webkit.ServiceWorkerWebSettings",
			"()V"
		) {}
	
	// Methods
	jboolean ServiceWorkerWebSettings::getAllowContentAccess()
	{
		return callMethod<jboolean>(
			"getAllowContentAccess",
			"()Z"
		);
	}
	jboolean ServiceWorkerWebSettings::getAllowFileAccess()
	{
		return callMethod<jboolean>(
			"getAllowFileAccess",
			"()Z"
		);
	}
	jboolean ServiceWorkerWebSettings::getBlockNetworkLoads()
	{
		return callMethod<jboolean>(
			"getBlockNetworkLoads",
			"()Z"
		);
	}
	jint ServiceWorkerWebSettings::getCacheMode()
	{
		return callMethod<jint>(
			"getCacheMode",
			"()I"
		);
	}
	void ServiceWorkerWebSettings::setAllowContentAccess(jboolean arg0)
	{
		callMethod<void>(
			"setAllowContentAccess",
			"(Z)V",
			arg0
		);
	}
	void ServiceWorkerWebSettings::setAllowFileAccess(jboolean arg0)
	{
		callMethod<void>(
			"setAllowFileAccess",
			"(Z)V",
			arg0
		);
	}
	void ServiceWorkerWebSettings::setBlockNetworkLoads(jboolean arg0)
	{
		callMethod<void>(
			"setBlockNetworkLoads",
			"(Z)V",
			arg0
		);
	}
	void ServiceWorkerWebSettings::setCacheMode(jint arg0)
	{
		callMethod<void>(
			"setCacheMode",
			"(I)V",
			arg0
		);
	}
} // namespace android::webkit

