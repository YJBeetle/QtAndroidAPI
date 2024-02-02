#pragma once

#include "../common/AdSelectionSignals.def.hpp"
#include "../common/AdTechIdentifier.def.hpp"
#include "./AddCustomAudienceOverrideRequest.def.hpp"
#include "../../../JString.hpp"
#include "./AddCustomAudienceOverrideRequest_Builder.def.hpp"

namespace android::adservices::customaudience
{
	// Fields
	
	// Constructors
	inline AddCustomAudienceOverrideRequest_Builder::AddCustomAudienceOverrideRequest_Builder()
		: JObject(
			"android.adservices.customaudience.AddCustomAudienceOverrideRequest$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::adservices::customaudience::AddCustomAudienceOverrideRequest AddCustomAudienceOverrideRequest_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/adservices/customaudience/AddCustomAudienceOverrideRequest;"
		);
	}
	inline android::adservices::customaudience::AddCustomAudienceOverrideRequest_Builder AddCustomAudienceOverrideRequest_Builder::setBiddingLogicJs(JString arg0) const
	{
		return callObjectMethod(
			"setBiddingLogicJs",
			"(Ljava/lang/String;)Landroid/adservices/customaudience/AddCustomAudienceOverrideRequest$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::adservices::customaudience::AddCustomAudienceOverrideRequest_Builder AddCustomAudienceOverrideRequest_Builder::setBuyer(android::adservices::common::AdTechIdentifier arg0) const
	{
		return callObjectMethod(
			"setBuyer",
			"(Landroid/adservices/common/AdTechIdentifier;)Landroid/adservices/customaudience/AddCustomAudienceOverrideRequest$Builder;",
			arg0.object()
		);
	}
	inline android::adservices::customaudience::AddCustomAudienceOverrideRequest_Builder AddCustomAudienceOverrideRequest_Builder::setName(JString arg0) const
	{
		return callObjectMethod(
			"setName",
			"(Ljava/lang/String;)Landroid/adservices/customaudience/AddCustomAudienceOverrideRequest$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::adservices::customaudience::AddCustomAudienceOverrideRequest_Builder AddCustomAudienceOverrideRequest_Builder::setTrustedBiddingSignals(android::adservices::common::AdSelectionSignals arg0) const
	{
		return callObjectMethod(
			"setTrustedBiddingSignals",
			"(Landroid/adservices/common/AdSelectionSignals;)Landroid/adservices/customaudience/AddCustomAudienceOverrideRequest$Builder;",
			arg0.object()
		);
	}
} // namespace android::adservices::customaudience

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::customaudience;
#endif
