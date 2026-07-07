#pragma once

#include "../common/AdSelectionSignals.def.hpp"
#include "../../net/Uri.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../../../java/time/Instant.def.hpp"
#include "./FetchAndJoinCustomAudienceRequest.def.hpp"

namespace android::adservices::customaudience
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean FetchAndJoinCustomAudienceRequest::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline java::time::Instant FetchAndJoinCustomAudienceRequest::getActivationTime() const
	{
		return callObjectMethod(
			"getActivationTime",
			"()Ljava/time/Instant;"
		);
	}
	inline java::time::Instant FetchAndJoinCustomAudienceRequest::getExpirationTime() const
	{
		return callObjectMethod(
			"getExpirationTime",
			"()Ljava/time/Instant;"
		);
	}
	inline android::net::Uri FetchAndJoinCustomAudienceRequest::getFetchUri() const
	{
		return callObjectMethod(
			"getFetchUri",
			"()Landroid/net/Uri;"
		);
	}
	inline JString FetchAndJoinCustomAudienceRequest::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	inline android::adservices::common::AdSelectionSignals FetchAndJoinCustomAudienceRequest::getUserBiddingSignals() const
	{
		return callObjectMethod(
			"getUserBiddingSignals",
			"()Landroid/adservices/common/AdSelectionSignals;"
		);
	}
	inline jint FetchAndJoinCustomAudienceRequest::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString FetchAndJoinCustomAudienceRequest::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::adservices::customaudience

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::customaudience;
#endif
