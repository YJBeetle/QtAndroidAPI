#pragma once

#include "./AdSelectionFromOutcomesConfig.def.hpp"
#include "../common/AdSelectionSignals.def.hpp"
#include "../../../JString.hpp"
#include "./AddAdSelectionFromOutcomesOverrideRequest.def.hpp"

namespace android::adservices::adselection
{
	// Fields
	
	// Constructors
	inline AddAdSelectionFromOutcomesOverrideRequest::AddAdSelectionFromOutcomesOverrideRequest(android::adservices::adselection::AdSelectionFromOutcomesConfig arg0, JString arg1, android::adservices::common::AdSelectionSignals arg2)
		: JObject(
			"android.adservices.adselection.AddAdSelectionFromOutcomesOverrideRequest",
			"(Landroid/adservices/adselection/AdSelectionFromOutcomesConfig;Ljava/lang/String;Landroid/adservices/common/AdSelectionSignals;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object()
		) {}
	
	// Methods
	inline android::adservices::adselection::AdSelectionFromOutcomesConfig AddAdSelectionFromOutcomesOverrideRequest::getAdSelectionFromOutcomesConfig() const
	{
		return callObjectMethod(
			"getAdSelectionFromOutcomesConfig",
			"()Landroid/adservices/adselection/AdSelectionFromOutcomesConfig;"
		);
	}
	inline JString AddAdSelectionFromOutcomesOverrideRequest::getOutcomeSelectionLogicJs() const
	{
		return callObjectMethod(
			"getOutcomeSelectionLogicJs",
			"()Ljava/lang/String;"
		);
	}
	inline android::adservices::common::AdSelectionSignals AddAdSelectionFromOutcomesOverrideRequest::getOutcomeSelectionTrustedSignals() const
	{
		return callObjectMethod(
			"getOutcomeSelectionTrustedSignals",
			"()Landroid/adservices/common/AdSelectionSignals;"
		);
	}
} // namespace android::adservices::adselection

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::adselection;
#endif
