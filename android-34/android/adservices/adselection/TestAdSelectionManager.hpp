#pragma once

#include "./AddAdSelectionOverrideRequest.def.hpp"
#include "./RemoveAdSelectionOverrideRequest.def.hpp"
#include "./TestAdSelectionManager.def.hpp"

namespace android::adservices::adselection
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void TestAdSelectionManager::overrideAdSelectionConfigRemoteInfo(android::adservices::adselection::AddAdSelectionOverrideRequest arg0, JObject arg1, JObject arg2) const
	{
		callMethod<void>(
			"overrideAdSelectionConfigRemoteInfo",
			"(Landroid/adservices/adselection/AddAdSelectionOverrideRequest;Ljava/util/concurrent/Executor;Landroid/os/OutcomeReceiver;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void TestAdSelectionManager::removeAdSelectionConfigRemoteInfoOverride(android::adservices::adselection::RemoveAdSelectionOverrideRequest arg0, JObject arg1, JObject arg2) const
	{
		callMethod<void>(
			"removeAdSelectionConfigRemoteInfoOverride",
			"(Landroid/adservices/adselection/RemoveAdSelectionOverrideRequest;Ljava/util/concurrent/Executor;Landroid/os/OutcomeReceiver;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void TestAdSelectionManager::resetAllAdSelectionConfigRemoteOverrides(JObject arg0, JObject arg1) const
	{
		callMethod<void>(
			"resetAllAdSelectionConfigRemoteOverrides",
			"(Ljava/util/concurrent/Executor;Landroid/os/OutcomeReceiver;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::adservices::adselection

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::adselection;
#endif
