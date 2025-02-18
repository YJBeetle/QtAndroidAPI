#pragma once

#include "./UpdateSignalsRequest.def.hpp"
#include "../../content/Context.def.hpp"
#include "./ProtectedSignalsManager.def.hpp"

namespace android::adservices::signals
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::adservices::signals::ProtectedSignalsManager ProtectedSignalsManager::get(android::content::Context arg0)
	{
		return callStaticObjectMethod(
			"android.adservices.signals.ProtectedSignalsManager",
			"get",
			"(Landroid/content/Context;)Landroid/adservices/signals/ProtectedSignalsManager;",
			arg0.object()
		);
	}
	inline void ProtectedSignalsManager::updateSignals(android::adservices::signals::UpdateSignalsRequest arg0, JObject arg1, JObject arg2) const
	{
		callMethod<void>(
			"updateSignals",
			"(Landroid/adservices/signals/UpdateSignalsRequest;Ljava/util/concurrent/Executor;Landroid/os/OutcomeReceiver;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
} // namespace android::adservices::signals

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::signals;
#endif
