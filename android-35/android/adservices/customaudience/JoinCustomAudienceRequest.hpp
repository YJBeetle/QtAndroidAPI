#pragma once

#include "./CustomAudience.def.hpp"
#include "../../../JObject.hpp"
#include "./JoinCustomAudienceRequest.def.hpp"

namespace android::adservices::customaudience
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean JoinCustomAudienceRequest::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::adservices::customaudience::CustomAudience JoinCustomAudienceRequest::getCustomAudience() const
	{
		return callObjectMethod(
			"getCustomAudience",
			"()Landroid/adservices/customaudience/CustomAudience;"
		);
	}
	inline jint JoinCustomAudienceRequest::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::adservices::customaudience

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::customaudience;
#endif
