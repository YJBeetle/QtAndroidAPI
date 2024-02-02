#pragma once

#include "../common/AdTechIdentifier.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./LeaveCustomAudienceRequest.def.hpp"

namespace android::adservices::customaudience
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean LeaveCustomAudienceRequest::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::adservices::common::AdTechIdentifier LeaveCustomAudienceRequest::getBuyer() const
	{
		return callObjectMethod(
			"getBuyer",
			"()Landroid/adservices/common/AdTechIdentifier;"
		);
	}
	inline JString LeaveCustomAudienceRequest::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	inline jint LeaveCustomAudienceRequest::hashCode() const
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
