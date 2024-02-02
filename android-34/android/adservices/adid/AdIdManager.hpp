#pragma once

#include "../../content/Context.def.hpp"
#include "./AdIdManager.def.hpp"

namespace android::adservices::adid
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::adservices::adid::AdIdManager AdIdManager::get(android::content::Context arg0)
	{
		return callStaticObjectMethod(
			"android.adservices.adid.AdIdManager",
			"get",
			"(Landroid/content/Context;)Landroid/adservices/adid/AdIdManager;",
			arg0.object()
		);
	}
	inline void AdIdManager::getAdId(JObject arg0, JObject arg1) const
	{
		callMethod<void>(
			"getAdId",
			"(Ljava/util/concurrent/Executor;Landroid/os/OutcomeReceiver;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::adservices::adid

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::adid;
#endif
