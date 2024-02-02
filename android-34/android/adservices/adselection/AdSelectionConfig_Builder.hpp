#pragma once

#include "./AdSelectionConfig.def.hpp"
#include "../common/AdSelectionSignals.def.hpp"
#include "../common/AdTechIdentifier.def.hpp"
#include "../../net/Uri.def.hpp"
#include "./AdSelectionConfig_Builder.def.hpp"

namespace android::adservices::adselection
{
	// Fields
	
	// Constructors
	inline AdSelectionConfig_Builder::AdSelectionConfig_Builder()
		: JObject(
			"android.adservices.adselection.AdSelectionConfig$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::adservices::adselection::AdSelectionConfig AdSelectionConfig_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/adservices/adselection/AdSelectionConfig;"
		);
	}
	inline android::adservices::adselection::AdSelectionConfig_Builder AdSelectionConfig_Builder::setAdSelectionSignals(android::adservices::common::AdSelectionSignals arg0) const
	{
		return callObjectMethod(
			"setAdSelectionSignals",
			"(Landroid/adservices/common/AdSelectionSignals;)Landroid/adservices/adselection/AdSelectionConfig$Builder;",
			arg0.object()
		);
	}
	inline android::adservices::adselection::AdSelectionConfig_Builder AdSelectionConfig_Builder::setCustomAudienceBuyers(JObject arg0) const
	{
		return callObjectMethod(
			"setCustomAudienceBuyers",
			"(Ljava/util/List;)Landroid/adservices/adselection/AdSelectionConfig$Builder;",
			arg0.object()
		);
	}
	inline android::adservices::adselection::AdSelectionConfig_Builder AdSelectionConfig_Builder::setDecisionLogicUri(android::net::Uri arg0) const
	{
		return callObjectMethod(
			"setDecisionLogicUri",
			"(Landroid/net/Uri;)Landroid/adservices/adselection/AdSelectionConfig$Builder;",
			arg0.object()
		);
	}
	inline android::adservices::adselection::AdSelectionConfig_Builder AdSelectionConfig_Builder::setPerBuyerSignals(JObject arg0) const
	{
		return callObjectMethod(
			"setPerBuyerSignals",
			"(Ljava/util/Map;)Landroid/adservices/adselection/AdSelectionConfig$Builder;",
			arg0.object()
		);
	}
	inline android::adservices::adselection::AdSelectionConfig_Builder AdSelectionConfig_Builder::setSeller(android::adservices::common::AdTechIdentifier arg0) const
	{
		return callObjectMethod(
			"setSeller",
			"(Landroid/adservices/common/AdTechIdentifier;)Landroid/adservices/adselection/AdSelectionConfig$Builder;",
			arg0.object()
		);
	}
	inline android::adservices::adselection::AdSelectionConfig_Builder AdSelectionConfig_Builder::setSellerSignals(android::adservices::common::AdSelectionSignals arg0) const
	{
		return callObjectMethod(
			"setSellerSignals",
			"(Landroid/adservices/common/AdSelectionSignals;)Landroid/adservices/adselection/AdSelectionConfig$Builder;",
			arg0.object()
		);
	}
	inline android::adservices::adselection::AdSelectionConfig_Builder AdSelectionConfig_Builder::setTrustedScoringSignalsUri(android::net::Uri arg0) const
	{
		return callObjectMethod(
			"setTrustedScoringSignalsUri",
			"(Landroid/net/Uri;)Landroid/adservices/adselection/AdSelectionConfig$Builder;",
			arg0.object()
		);
	}
} // namespace android::adservices::adselection

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::adselection;
#endif
