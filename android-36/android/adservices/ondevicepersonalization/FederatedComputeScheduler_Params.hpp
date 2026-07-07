#pragma once

#include "./TrainingInterval.def.hpp"
#include "./FederatedComputeScheduler_Params.def.hpp"

namespace android::adservices::ondevicepersonalization
{
	// Fields
	
	// Constructors
	inline FederatedComputeScheduler_Params::FederatedComputeScheduler_Params(android::adservices::ondevicepersonalization::TrainingInterval arg0)
		: JObject(
			"android.adservices.ondevicepersonalization.FederatedComputeScheduler$Params",
			"(Landroid/adservices/ondevicepersonalization/TrainingInterval;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::adservices::ondevicepersonalization::TrainingInterval FederatedComputeScheduler_Params::getTrainingInterval() const
	{
		return callObjectMethod(
			"getTrainingInterval",
			"()Landroid/adservices/ondevicepersonalization/TrainingInterval;"
		);
	}
} // namespace android::adservices::ondevicepersonalization

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::ondevicepersonalization;
#endif
