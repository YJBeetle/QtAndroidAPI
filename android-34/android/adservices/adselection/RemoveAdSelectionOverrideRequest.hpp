#pragma once

#include "./AdSelectionConfig.def.hpp"
#include "./RemoveAdSelectionOverrideRequest.def.hpp"

namespace android::adservices::adselection
{
	// Fields
	
	// Constructors
	inline RemoveAdSelectionOverrideRequest::RemoveAdSelectionOverrideRequest(android::adservices::adselection::AdSelectionConfig arg0)
		: JObject(
			"android.adservices.adselection.RemoveAdSelectionOverrideRequest",
			"(Landroid/adservices/adselection/AdSelectionConfig;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::adservices::adselection::AdSelectionConfig RemoveAdSelectionOverrideRequest::getAdSelectionConfig() const
	{
		return callObjectMethod(
			"getAdSelectionConfig",
			"()Landroid/adservices/adselection/AdSelectionConfig;"
		);
	}
} // namespace android::adservices::adselection

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::adselection;
#endif
