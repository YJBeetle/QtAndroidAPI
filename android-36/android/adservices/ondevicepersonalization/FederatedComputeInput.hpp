#pragma once

#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./FederatedComputeInput.def.hpp"

namespace android::adservices::ondevicepersonalization
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean FederatedComputeInput::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JString FederatedComputeInput::getPopulationName() const
	{
		return callObjectMethod(
			"getPopulationName",
			"()Ljava/lang/String;"
		);
	}
	inline jint FederatedComputeInput::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::adservices::ondevicepersonalization

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::ondevicepersonalization;
#endif
