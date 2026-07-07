#pragma once

#include "./FederatedComputeInput.def.hpp"
#include "./FederatedComputeScheduler_Params.def.hpp"
#include "./FederatedComputeScheduler.def.hpp"

namespace android::adservices::ondevicepersonalization
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void FederatedComputeScheduler::cancel(android::adservices::ondevicepersonalization::FederatedComputeInput arg0) const
	{
		callMethod<void>(
			"cancel",
			"(Landroid/adservices/ondevicepersonalization/FederatedComputeInput;)V",
			arg0.object()
		);
	}
	inline void FederatedComputeScheduler::schedule(android::adservices::ondevicepersonalization::FederatedComputeScheduler_Params arg0, android::adservices::ondevicepersonalization::FederatedComputeInput arg1) const
	{
		callMethod<void>(
			"schedule",
			"(Landroid/adservices/ondevicepersonalization/FederatedComputeScheduler$Params;Landroid/adservices/ondevicepersonalization/FederatedComputeInput;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::adservices::ondevicepersonalization

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::ondevicepersonalization;
#endif
