#pragma once

#include "../../../JByteArray.hpp"
#include "./SignedContextualAds.def.hpp"
#include "../common/AdTechIdentifier.def.hpp"
#include "../../net/Uri.def.hpp"
#include "./SignedContextualAds_Builder.def.hpp"

namespace android::adservices::adselection
{
	// Fields
	
	// Constructors
	inline SignedContextualAds_Builder::SignedContextualAds_Builder()
		: JObject(
			"android.adservices.adselection.SignedContextualAds$Builder",
			"()V"
		) {}
	inline SignedContextualAds_Builder::SignedContextualAds_Builder(android::adservices::adselection::SignedContextualAds arg0)
		: JObject(
			"android.adservices.adselection.SignedContextualAds$Builder",
			"(Landroid/adservices/adselection/SignedContextualAds;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::adservices::adselection::SignedContextualAds SignedContextualAds_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/adservices/adselection/SignedContextualAds;"
		);
	}
	inline android::adservices::adselection::SignedContextualAds_Builder SignedContextualAds_Builder::setAdsWithBid(JObject arg0) const
	{
		return callObjectMethod(
			"setAdsWithBid",
			"(Ljava/util/List;)Landroid/adservices/adselection/SignedContextualAds$Builder;",
			arg0.object()
		);
	}
	inline android::adservices::adselection::SignedContextualAds_Builder SignedContextualAds_Builder::setBuyer(android::adservices::common::AdTechIdentifier arg0) const
	{
		return callObjectMethod(
			"setBuyer",
			"(Landroid/adservices/common/AdTechIdentifier;)Landroid/adservices/adselection/SignedContextualAds$Builder;",
			arg0.object()
		);
	}
	inline android::adservices::adselection::SignedContextualAds_Builder SignedContextualAds_Builder::setDecisionLogicUri(android::net::Uri arg0) const
	{
		return callObjectMethod(
			"setDecisionLogicUri",
			"(Landroid/net/Uri;)Landroid/adservices/adselection/SignedContextualAds$Builder;",
			arg0.object()
		);
	}
	inline android::adservices::adselection::SignedContextualAds_Builder SignedContextualAds_Builder::setSignature(JByteArray arg0) const
	{
		return callObjectMethod(
			"setSignature",
			"([B)Landroid/adservices/adselection/SignedContextualAds$Builder;",
			arg0.object<jbyteArray>()
		);
	}
} // namespace android::adservices::adselection

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::adselection;
#endif
