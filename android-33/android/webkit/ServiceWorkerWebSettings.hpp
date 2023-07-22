#pragma once

#include "./ServiceWorkerWebSettings.def.hpp"

namespace android::webkit
{
	// Fields
	
	// Constructors
	inline ServiceWorkerWebSettings::ServiceWorkerWebSettings()
		: JObject(
			"android.webkit.ServiceWorkerWebSettings",
			"()V"
		) {}
	
	// Methods
	inline jboolean ServiceWorkerWebSettings::getAllowContentAccess() const
	{
		return callMethod<jboolean>(
			"getAllowContentAccess",
			"()Z"
		);
	}
	inline jboolean ServiceWorkerWebSettings::getAllowFileAccess() const
	{
		return callMethod<jboolean>(
			"getAllowFileAccess",
			"()Z"
		);
	}
	inline jboolean ServiceWorkerWebSettings::getBlockNetworkLoads() const
	{
		return callMethod<jboolean>(
			"getBlockNetworkLoads",
			"()Z"
		);
	}
	inline jint ServiceWorkerWebSettings::getCacheMode() const
	{
		return callMethod<jint>(
			"getCacheMode",
			"()I"
		);
	}
	inline void ServiceWorkerWebSettings::setAllowContentAccess(jboolean arg0) const
	{
		callMethod<void>(
			"setAllowContentAccess",
			"(Z)V",
			arg0
		);
	}
	inline void ServiceWorkerWebSettings::setAllowFileAccess(jboolean arg0) const
	{
		callMethod<void>(
			"setAllowFileAccess",
			"(Z)V",
			arg0
		);
	}
	inline void ServiceWorkerWebSettings::setBlockNetworkLoads(jboolean arg0) const
	{
		callMethod<void>(
			"setBlockNetworkLoads",
			"(Z)V",
			arg0
		);
	}
	inline void ServiceWorkerWebSettings::setCacheMode(jint arg0) const
	{
		callMethod<void>(
			"setCacheMode",
			"(I)V",
			arg0
		);
	}
} // namespace android::webkit

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::webkit;
#endif
