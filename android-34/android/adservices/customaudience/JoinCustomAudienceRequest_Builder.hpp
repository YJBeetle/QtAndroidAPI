#pragma once

#include "./CustomAudience.def.hpp"
#include "./JoinCustomAudienceRequest.def.hpp"
#include "./JoinCustomAudienceRequest_Builder.def.hpp"

namespace android::adservices::customaudience
{
	// Fields
	
	// Constructors
	inline JoinCustomAudienceRequest_Builder::JoinCustomAudienceRequest_Builder()
		: JObject(
			"android.adservices.customaudience.JoinCustomAudienceRequest$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::adservices::customaudience::JoinCustomAudienceRequest JoinCustomAudienceRequest_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/adservices/customaudience/JoinCustomAudienceRequest;"
		);
	}
	inline android::adservices::customaudience::JoinCustomAudienceRequest_Builder JoinCustomAudienceRequest_Builder::setCustomAudience(android::adservices::customaudience::CustomAudience arg0) const
	{
		return callObjectMethod(
			"setCustomAudience",
			"(Landroid/adservices/customaudience/CustomAudience;)Landroid/adservices/customaudience/JoinCustomAudienceRequest$Builder;",
			arg0.object()
		);
	}
} // namespace android::adservices::customaudience

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::customaudience;
#endif
