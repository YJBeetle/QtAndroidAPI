#pragma once

#include "./FederatedComputeInput.def.hpp"
#include "../../../JString.hpp"
#include "./FederatedComputeInput_Builder.def.hpp"

namespace android::adservices::ondevicepersonalization
{
	// Fields
	
	// Constructors
	inline FederatedComputeInput_Builder::FederatedComputeInput_Builder()
		: JObject(
			"android.adservices.ondevicepersonalization.FederatedComputeInput$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::adservices::ondevicepersonalization::FederatedComputeInput FederatedComputeInput_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/adservices/ondevicepersonalization/FederatedComputeInput;"
		);
	}
	inline android::adservices::ondevicepersonalization::FederatedComputeInput_Builder FederatedComputeInput_Builder::setPopulationName(JString arg0) const
	{
		return callObjectMethod(
			"setPopulationName",
			"(Ljava/lang/String;)Landroid/adservices/ondevicepersonalization/FederatedComputeInput$Builder;",
			arg0.object<jstring>()
		);
	}
} // namespace android::adservices::ondevicepersonalization

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::ondevicepersonalization;
#endif
