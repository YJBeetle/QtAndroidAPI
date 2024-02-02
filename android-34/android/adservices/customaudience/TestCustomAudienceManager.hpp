#pragma once

#include "./AddCustomAudienceOverrideRequest.def.hpp"
#include "./RemoveCustomAudienceOverrideRequest.def.hpp"
#include "./TestCustomAudienceManager.def.hpp"

namespace android::adservices::customaudience
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void TestCustomAudienceManager::overrideCustomAudienceRemoteInfo(android::adservices::customaudience::AddCustomAudienceOverrideRequest arg0, JObject arg1, JObject arg2) const
	{
		callMethod<void>(
			"overrideCustomAudienceRemoteInfo",
			"(Landroid/adservices/customaudience/AddCustomAudienceOverrideRequest;Ljava/util/concurrent/Executor;Landroid/os/OutcomeReceiver;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void TestCustomAudienceManager::removeCustomAudienceRemoteInfoOverride(android::adservices::customaudience::RemoveCustomAudienceOverrideRequest arg0, JObject arg1, JObject arg2) const
	{
		callMethod<void>(
			"removeCustomAudienceRemoteInfoOverride",
			"(Landroid/adservices/customaudience/RemoveCustomAudienceOverrideRequest;Ljava/util/concurrent/Executor;Landroid/os/OutcomeReceiver;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void TestCustomAudienceManager::resetAllCustomAudienceOverrides(JObject arg0, JObject arg1) const
	{
		callMethod<void>(
			"resetAllCustomAudienceOverrides",
			"(Ljava/util/concurrent/Executor;Landroid/os/OutcomeReceiver;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::adservices::customaudience

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::customaudience;
#endif
