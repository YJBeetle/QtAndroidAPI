#include "./ServiceWorkerWebSettings.hpp"

namespace android::webkit
{
	// Fields
	
	// QAndroidJniObject forward
	ServiceWorkerWebSettings::ServiceWorkerWebSettings(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	ServiceWorkerWebSettings::ServiceWorkerWebSettings()
		: JObject(
			"android.webkit.ServiceWorkerWebSettings",
			"()V"
		) {}
	
	// Methods
	jboolean ServiceWorkerWebSettings::getAllowContentAccess() const
	{
		return callMethod<jboolean>(
			"getAllowContentAccess",
			"()Z"
		);
	}
	jboolean ServiceWorkerWebSettings::getAllowFileAccess() const
	{
		return callMethod<jboolean>(
			"getAllowFileAccess",
			"()Z"
		);
	}
	jboolean ServiceWorkerWebSettings::getBlockNetworkLoads() const
	{
		return callMethod<jboolean>(
			"getBlockNetworkLoads",
			"()Z"
		);
	}
	jint ServiceWorkerWebSettings::getCacheMode() const
	{
		return callMethod<jint>(
			"getCacheMode",
			"()I"
		);
	}
	void ServiceWorkerWebSettings::setAllowContentAccess(jboolean arg0) const
	{
		callMethod<void>(
			"setAllowContentAccess",
			"(Z)V",
			arg0
		);
	}
	void ServiceWorkerWebSettings::setAllowFileAccess(jboolean arg0) const
	{
		callMethod<void>(
			"setAllowFileAccess",
			"(Z)V",
			arg0
		);
	}
	void ServiceWorkerWebSettings::setBlockNetworkLoads(jboolean arg0) const
	{
		callMethod<void>(
			"setBlockNetworkLoads",
			"(Z)V",
			arg0
		);
	}
	void ServiceWorkerWebSettings::setCacheMode(jint arg0) const
	{
		callMethod<void>(
			"setCacheMode",
			"(I)V",
			arg0
		);
	}
} // namespace android::webkit

