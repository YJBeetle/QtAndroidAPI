#pragma once

#include "../common/AdSelectionSignals.def.hpp"
#include "./FetchAndJoinCustomAudienceRequest.def.hpp"
#include "../../net/Uri.def.hpp"
#include "../../../JString.hpp"
#include "../../../java/time/Instant.def.hpp"
#include "./FetchAndJoinCustomAudienceRequest_Builder.def.hpp"

namespace android::adservices::customaudience
{
	// Fields
	
	// Constructors
	inline FetchAndJoinCustomAudienceRequest_Builder::FetchAndJoinCustomAudienceRequest_Builder(android::net::Uri arg0)
		: JObject(
			"android.adservices.customaudience.FetchAndJoinCustomAudienceRequest$Builder",
			"(Landroid/net/Uri;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::adservices::customaudience::FetchAndJoinCustomAudienceRequest FetchAndJoinCustomAudienceRequest_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/adservices/customaudience/FetchAndJoinCustomAudienceRequest;"
		);
	}
	inline android::adservices::customaudience::FetchAndJoinCustomAudienceRequest_Builder FetchAndJoinCustomAudienceRequest_Builder::setActivationTime(java::time::Instant arg0) const
	{
		return callObjectMethod(
			"setActivationTime",
			"(Ljava/time/Instant;)Landroid/adservices/customaudience/FetchAndJoinCustomAudienceRequest$Builder;",
			arg0.object()
		);
	}
	inline android::adservices::customaudience::FetchAndJoinCustomAudienceRequest_Builder FetchAndJoinCustomAudienceRequest_Builder::setExpirationTime(java::time::Instant arg0) const
	{
		return callObjectMethod(
			"setExpirationTime",
			"(Ljava/time/Instant;)Landroid/adservices/customaudience/FetchAndJoinCustomAudienceRequest$Builder;",
			arg0.object()
		);
	}
	inline android::adservices::customaudience::FetchAndJoinCustomAudienceRequest_Builder FetchAndJoinCustomAudienceRequest_Builder::setFetchUri(android::net::Uri arg0) const
	{
		return callObjectMethod(
			"setFetchUri",
			"(Landroid/net/Uri;)Landroid/adservices/customaudience/FetchAndJoinCustomAudienceRequest$Builder;",
			arg0.object()
		);
	}
	inline android::adservices::customaudience::FetchAndJoinCustomAudienceRequest_Builder FetchAndJoinCustomAudienceRequest_Builder::setName(JString arg0) const
	{
		return callObjectMethod(
			"setName",
			"(Ljava/lang/String;)Landroid/adservices/customaudience/FetchAndJoinCustomAudienceRequest$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::adservices::customaudience::FetchAndJoinCustomAudienceRequest_Builder FetchAndJoinCustomAudienceRequest_Builder::setUserBiddingSignals(android::adservices::common::AdSelectionSignals arg0) const
	{
		return callObjectMethod(
			"setUserBiddingSignals",
			"(Landroid/adservices/common/AdSelectionSignals;)Landroid/adservices/customaudience/FetchAndJoinCustomAudienceRequest$Builder;",
			arg0.object()
		);
	}
} // namespace android::adservices::customaudience

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::customaudience;
#endif
