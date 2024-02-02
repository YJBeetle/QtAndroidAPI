#pragma once

#include "../common/AdTechIdentifier.def.hpp"
#include "./RemoveCustomAudienceOverrideRequest.def.hpp"
#include "../../../JString.hpp"
#include "./RemoveCustomAudienceOverrideRequest_Builder.def.hpp"

namespace android::adservices::customaudience
{
	// Fields
	
	// Constructors
	inline RemoveCustomAudienceOverrideRequest_Builder::RemoveCustomAudienceOverrideRequest_Builder()
		: JObject(
			"android.adservices.customaudience.RemoveCustomAudienceOverrideRequest$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::adservices::customaudience::RemoveCustomAudienceOverrideRequest RemoveCustomAudienceOverrideRequest_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/adservices/customaudience/RemoveCustomAudienceOverrideRequest;"
		);
	}
	inline android::adservices::customaudience::RemoveCustomAudienceOverrideRequest_Builder RemoveCustomAudienceOverrideRequest_Builder::setBuyer(android::adservices::common::AdTechIdentifier arg0) const
	{
		return callObjectMethod(
			"setBuyer",
			"(Landroid/adservices/common/AdTechIdentifier;)Landroid/adservices/customaudience/RemoveCustomAudienceOverrideRequest$Builder;",
			arg0.object()
		);
	}
	inline android::adservices::customaudience::RemoveCustomAudienceOverrideRequest_Builder RemoveCustomAudienceOverrideRequest_Builder::setName(JString arg0) const
	{
		return callObjectMethod(
			"setName",
			"(Ljava/lang/String;)Landroid/adservices/customaudience/RemoveCustomAudienceOverrideRequest$Builder;",
			arg0.object<jstring>()
		);
	}
} // namespace android::adservices::customaudience

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::customaudience;
#endif
