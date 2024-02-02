#pragma once

#include "./JoinCustomAudienceRequest.def.hpp"
#include "./LeaveCustomAudienceRequest.def.hpp"
#include "./TestCustomAudienceManager.def.hpp"
#include "../../content/Context.def.hpp"
#include "./CustomAudienceManager.def.hpp"

namespace android::adservices::customaudience
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::adservices::customaudience::CustomAudienceManager CustomAudienceManager::get(android::content::Context arg0)
	{
		return callStaticObjectMethod(
			"android.adservices.customaudience.CustomAudienceManager",
			"get",
			"(Landroid/content/Context;)Landroid/adservices/customaudience/CustomAudienceManager;",
			arg0.object()
		);
	}
	inline android::adservices::customaudience::TestCustomAudienceManager CustomAudienceManager::getTestCustomAudienceManager() const
	{
		return callObjectMethod(
			"getTestCustomAudienceManager",
			"()Landroid/adservices/customaudience/TestCustomAudienceManager;"
		);
	}
	inline void CustomAudienceManager::joinCustomAudience(android::adservices::customaudience::JoinCustomAudienceRequest arg0, JObject arg1, JObject arg2) const
	{
		callMethod<void>(
			"joinCustomAudience",
			"(Landroid/adservices/customaudience/JoinCustomAudienceRequest;Ljava/util/concurrent/Executor;Landroid/os/OutcomeReceiver;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void CustomAudienceManager::leaveCustomAudience(android::adservices::customaudience::LeaveCustomAudienceRequest arg0, JObject arg1, JObject arg2) const
	{
		callMethod<void>(
			"leaveCustomAudience",
			"(Landroid/adservices/customaudience/LeaveCustomAudienceRequest;Ljava/util/concurrent/Executor;Landroid/os/OutcomeReceiver;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
} // namespace android::adservices::customaudience

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::customaudience;
#endif
