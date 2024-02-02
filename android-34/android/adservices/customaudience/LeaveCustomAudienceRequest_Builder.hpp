#pragma once

#include "../common/AdTechIdentifier.def.hpp"
#include "./LeaveCustomAudienceRequest.def.hpp"
#include "../../../JString.hpp"
#include "./LeaveCustomAudienceRequest_Builder.def.hpp"

namespace android::adservices::customaudience
{
	// Fields
	
	// Constructors
	inline LeaveCustomAudienceRequest_Builder::LeaveCustomAudienceRequest_Builder()
		: JObject(
			"android.adservices.customaudience.LeaveCustomAudienceRequest$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::adservices::customaudience::LeaveCustomAudienceRequest LeaveCustomAudienceRequest_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/adservices/customaudience/LeaveCustomAudienceRequest;"
		);
	}
	inline android::adservices::customaudience::LeaveCustomAudienceRequest_Builder LeaveCustomAudienceRequest_Builder::setBuyer(android::adservices::common::AdTechIdentifier arg0) const
	{
		return callObjectMethod(
			"setBuyer",
			"(Landroid/adservices/common/AdTechIdentifier;)Landroid/adservices/customaudience/LeaveCustomAudienceRequest$Builder;",
			arg0.object()
		);
	}
	inline android::adservices::customaudience::LeaveCustomAudienceRequest_Builder LeaveCustomAudienceRequest_Builder::setName(JString arg0) const
	{
		return callObjectMethod(
			"setName",
			"(Ljava/lang/String;)Landroid/adservices/customaudience/LeaveCustomAudienceRequest$Builder;",
			arg0.object<jstring>()
		);
	}
} // namespace android::adservices::customaudience

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::customaudience;
#endif
