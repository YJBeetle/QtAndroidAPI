#pragma once

#include "./InferenceInput.def.hpp"
#include "./ModelManager.def.hpp"

namespace android::adservices::ondevicepersonalization
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void ModelManager::run(android::adservices::ondevicepersonalization::InferenceInput arg0, JObject arg1, JObject arg2) const
	{
		callMethod<void>(
			"run",
			"(Landroid/adservices/ondevicepersonalization/InferenceInput;Ljava/util/concurrent/Executor;Landroid/os/OutcomeReceiver;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
} // namespace android::adservices::ondevicepersonalization

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::ondevicepersonalization;
#endif
