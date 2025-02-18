#pragma once

#include "../common/AdTechIdentifier.def.hpp"
#include "../../../JString.hpp"
#include "./RemoveCustomAudienceOverrideRequest.def.hpp"

namespace android::adservices::customaudience
{
	// Fields
	
	// Constructors
	inline RemoveCustomAudienceOverrideRequest::RemoveCustomAudienceOverrideRequest(android::adservices::common::AdTechIdentifier arg0, JString arg1)
		: JObject(
			"android.adservices.customaudience.RemoveCustomAudienceOverrideRequest",
			"(Landroid/adservices/common/AdTechIdentifier;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		) {}
	
	// Methods
	inline android::adservices::common::AdTechIdentifier RemoveCustomAudienceOverrideRequest::getBuyer() const
	{
		return callObjectMethod(
			"getBuyer",
			"()Landroid/adservices/common/AdTechIdentifier;"
		);
	}
	inline JString RemoveCustomAudienceOverrideRequest::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::adservices::customaudience

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::customaudience;
#endif
