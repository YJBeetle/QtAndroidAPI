#pragma once

#include "../common/AdSelectionSignals.def.hpp"
#include "../common/AdTechIdentifier.def.hpp"
#include "./CustomAudience.def.hpp"
#include "./TrustedBiddingData.def.hpp"
#include "../../net/Uri.def.hpp"
#include "../../../JString.hpp"
#include "../../../java/time/Instant.def.hpp"
#include "./CustomAudience_Builder.def.hpp"

namespace android::adservices::customaudience
{
	// Fields
	
	// Constructors
	inline CustomAudience_Builder::CustomAudience_Builder()
		: JObject(
			"android.adservices.customaudience.CustomAudience$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::adservices::customaudience::CustomAudience CustomAudience_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/adservices/customaudience/CustomAudience;"
		);
	}
	inline android::adservices::customaudience::CustomAudience_Builder CustomAudience_Builder::setActivationTime(java::time::Instant arg0) const
	{
		return callObjectMethod(
			"setActivationTime",
			"(Ljava/time/Instant;)Landroid/adservices/customaudience/CustomAudience$Builder;",
			arg0.object()
		);
	}
	inline android::adservices::customaudience::CustomAudience_Builder CustomAudience_Builder::setAds(JObject arg0) const
	{
		return callObjectMethod(
			"setAds",
			"(Ljava/util/List;)Landroid/adservices/customaudience/CustomAudience$Builder;",
			arg0.object()
		);
	}
	inline android::adservices::customaudience::CustomAudience_Builder CustomAudience_Builder::setBiddingLogicUri(android::net::Uri arg0) const
	{
		return callObjectMethod(
			"setBiddingLogicUri",
			"(Landroid/net/Uri;)Landroid/adservices/customaudience/CustomAudience$Builder;",
			arg0.object()
		);
	}
	inline android::adservices::customaudience::CustomAudience_Builder CustomAudience_Builder::setBuyer(android::adservices::common::AdTechIdentifier arg0) const
	{
		return callObjectMethod(
			"setBuyer",
			"(Landroid/adservices/common/AdTechIdentifier;)Landroid/adservices/customaudience/CustomAudience$Builder;",
			arg0.object()
		);
	}
	inline android::adservices::customaudience::CustomAudience_Builder CustomAudience_Builder::setDailyUpdateUri(android::net::Uri arg0) const
	{
		return callObjectMethod(
			"setDailyUpdateUri",
			"(Landroid/net/Uri;)Landroid/adservices/customaudience/CustomAudience$Builder;",
			arg0.object()
		);
	}
	inline android::adservices::customaudience::CustomAudience_Builder CustomAudience_Builder::setExpirationTime(java::time::Instant arg0) const
	{
		return callObjectMethod(
			"setExpirationTime",
			"(Ljava/time/Instant;)Landroid/adservices/customaudience/CustomAudience$Builder;",
			arg0.object()
		);
	}
	inline android::adservices::customaudience::CustomAudience_Builder CustomAudience_Builder::setName(JString arg0) const
	{
		return callObjectMethod(
			"setName",
			"(Ljava/lang/String;)Landroid/adservices/customaudience/CustomAudience$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::adservices::customaudience::CustomAudience_Builder CustomAudience_Builder::setTrustedBiddingData(android::adservices::customaudience::TrustedBiddingData arg0) const
	{
		return callObjectMethod(
			"setTrustedBiddingData",
			"(Landroid/adservices/customaudience/TrustedBiddingData;)Landroid/adservices/customaudience/CustomAudience$Builder;",
			arg0.object()
		);
	}
	inline android::adservices::customaudience::CustomAudience_Builder CustomAudience_Builder::setUserBiddingSignals(android::adservices::common::AdSelectionSignals arg0) const
	{
		return callObjectMethod(
			"setUserBiddingSignals",
			"(Landroid/adservices/common/AdSelectionSignals;)Landroid/adservices/customaudience/CustomAudience$Builder;",
			arg0.object()
		);
	}
} // namespace android::adservices::customaudience

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::customaudience;
#endif
