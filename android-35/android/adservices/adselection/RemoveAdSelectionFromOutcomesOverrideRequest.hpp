#pragma once

#include "./AdSelectionFromOutcomesConfig.def.hpp"
#include "./RemoveAdSelectionFromOutcomesOverrideRequest.def.hpp"

namespace android::adservices::adselection
{
	// Fields
	
	// Constructors
	inline RemoveAdSelectionFromOutcomesOverrideRequest::RemoveAdSelectionFromOutcomesOverrideRequest(android::adservices::adselection::AdSelectionFromOutcomesConfig arg0)
		: JObject(
			"android.adservices.adselection.RemoveAdSelectionFromOutcomesOverrideRequest",
			"(Landroid/adservices/adselection/AdSelectionFromOutcomesConfig;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::adservices::adselection::AdSelectionFromOutcomesConfig RemoveAdSelectionFromOutcomesOverrideRequest::getAdSelectionFromOutcomesConfig() const
	{
		return callObjectMethod(
			"getAdSelectionFromOutcomesConfig",
			"()Landroid/adservices/adselection/AdSelectionFromOutcomesConfig;"
		);
	}
} // namespace android::adservices::adselection

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::adselection;
#endif
