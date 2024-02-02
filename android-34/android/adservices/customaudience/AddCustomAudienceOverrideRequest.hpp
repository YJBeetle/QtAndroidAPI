#pragma once

#include "../common/AdSelectionSignals.def.hpp"
#include "../common/AdTechIdentifier.def.hpp"
#include "../../../JString.hpp"
#include "./AddCustomAudienceOverrideRequest.def.hpp"

namespace android::adservices::customaudience
{
	// Fields
	
	// Constructors
	inline AddCustomAudienceOverrideRequest::AddCustomAudienceOverrideRequest(android::adservices::common::AdTechIdentifier arg0, JString arg1, JString arg2, android::adservices::common::AdSelectionSignals arg3)
		: JObject(
			"android.adservices.customaudience.AddCustomAudienceOverrideRequest",
			"(Landroid/adservices/common/AdTechIdentifier;Ljava/lang/String;Ljava/lang/String;Landroid/adservices/common/AdSelectionSignals;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object()
		) {}
	
	// Methods
	inline JString AddCustomAudienceOverrideRequest::getBiddingLogicJs() const
	{
		return callObjectMethod(
			"getBiddingLogicJs",
			"()Ljava/lang/String;"
		);
	}
	inline android::adservices::common::AdTechIdentifier AddCustomAudienceOverrideRequest::getBuyer() const
	{
		return callObjectMethod(
			"getBuyer",
			"()Landroid/adservices/common/AdTechIdentifier;"
		);
	}
	inline JString AddCustomAudienceOverrideRequest::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	inline android::adservices::common::AdSelectionSignals AddCustomAudienceOverrideRequest::getTrustedBiddingSignals() const
	{
		return callObjectMethod(
			"getTrustedBiddingSignals",
			"()Landroid/adservices/common/AdSelectionSignals;"
		);
	}
} // namespace android::adservices::customaudience

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::customaudience;
#endif
