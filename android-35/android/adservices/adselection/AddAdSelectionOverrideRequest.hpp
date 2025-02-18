#pragma once

#include "./AdSelectionConfig.def.hpp"
#include "./PerBuyerDecisionLogic.def.hpp"
#include "../common/AdSelectionSignals.def.hpp"
#include "../../../JString.hpp"
#include "./AddAdSelectionOverrideRequest.def.hpp"

namespace android::adservices::adselection
{
	// Fields
	
	// Constructors
	inline AddAdSelectionOverrideRequest::AddAdSelectionOverrideRequest(android::adservices::adselection::AdSelectionConfig arg0, JString arg1, android::adservices::common::AdSelectionSignals arg2)
		: JObject(
			"android.adservices.adselection.AddAdSelectionOverrideRequest",
			"(Landroid/adservices/adselection/AdSelectionConfig;Ljava/lang/String;Landroid/adservices/common/AdSelectionSignals;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object()
		) {}
	inline AddAdSelectionOverrideRequest::AddAdSelectionOverrideRequest(android::adservices::adselection::AdSelectionConfig arg0, JString arg1, android::adservices::common::AdSelectionSignals arg2, android::adservices::adselection::PerBuyerDecisionLogic arg3)
		: JObject(
			"android.adservices.adselection.AddAdSelectionOverrideRequest",
			"(Landroid/adservices/adselection/AdSelectionConfig;Ljava/lang/String;Landroid/adservices/common/AdSelectionSignals;Landroid/adservices/adselection/PerBuyerDecisionLogic;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object(),
			arg3.object()
		) {}
	
	// Methods
	inline android::adservices::adselection::AdSelectionConfig AddAdSelectionOverrideRequest::getAdSelectionConfig() const
	{
		return callObjectMethod(
			"getAdSelectionConfig",
			"()Landroid/adservices/adselection/AdSelectionConfig;"
		);
	}
	inline JString AddAdSelectionOverrideRequest::getDecisionLogicJs() const
	{
		return callObjectMethod(
			"getDecisionLogicJs",
			"()Ljava/lang/String;"
		);
	}
	inline android::adservices::adselection::PerBuyerDecisionLogic AddAdSelectionOverrideRequest::getPerBuyerDecisionLogic() const
	{
		return callObjectMethod(
			"getPerBuyerDecisionLogic",
			"()Landroid/adservices/adselection/PerBuyerDecisionLogic;"
		);
	}
	inline android::adservices::common::AdSelectionSignals AddAdSelectionOverrideRequest::getTrustedScoringSignals() const
	{
		return callObjectMethod(
			"getTrustedScoringSignals",
			"()Landroid/adservices/common/AdSelectionSignals;"
		);
	}
} // namespace android::adservices::adselection

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::adselection;
#endif
