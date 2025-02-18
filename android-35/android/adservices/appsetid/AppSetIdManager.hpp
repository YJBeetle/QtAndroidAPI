#pragma once

#include "../../content/Context.def.hpp"
#include "./AppSetIdManager.def.hpp"

namespace android::adservices::appsetid
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::adservices::appsetid::AppSetIdManager AppSetIdManager::get(android::content::Context arg0)
	{
		return callStaticObjectMethod(
			"android.adservices.appsetid.AppSetIdManager",
			"get",
			"(Landroid/content/Context;)Landroid/adservices/appsetid/AppSetIdManager;",
			arg0.object()
		);
	}
	inline void AppSetIdManager::getAppSetId(JObject arg0, JObject arg1) const
	{
		callMethod<void>(
			"getAppSetId",
			"(Ljava/util/concurrent/Executor;Landroid/os/OutcomeReceiver;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::adservices::appsetid

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::appsetid;
#endif
