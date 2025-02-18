#pragma once

#include "./TrustedBiddingData.def.hpp"
#include "../../net/Uri.def.hpp"
#include "./TrustedBiddingData_Builder.def.hpp"

namespace android::adservices::customaudience
{
	// Fields
	
	// Constructors
	inline TrustedBiddingData_Builder::TrustedBiddingData_Builder()
		: JObject(
			"android.adservices.customaudience.TrustedBiddingData$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::adservices::customaudience::TrustedBiddingData TrustedBiddingData_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/adservices/customaudience/TrustedBiddingData;"
		);
	}
	inline android::adservices::customaudience::TrustedBiddingData_Builder TrustedBiddingData_Builder::setTrustedBiddingKeys(JObject arg0) const
	{
		return callObjectMethod(
			"setTrustedBiddingKeys",
			"(Ljava/util/List;)Landroid/adservices/customaudience/TrustedBiddingData$Builder;",
			arg0.object()
		);
	}
	inline android::adservices::customaudience::TrustedBiddingData_Builder TrustedBiddingData_Builder::setTrustedBiddingUri(android::net::Uri arg0) const
	{
		return callObjectMethod(
			"setTrustedBiddingUri",
			"(Landroid/net/Uri;)Landroid/adservices/customaudience/TrustedBiddingData$Builder;",
			arg0.object()
		);
	}
} // namespace android::adservices::customaudience

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::customaudience;
#endif
