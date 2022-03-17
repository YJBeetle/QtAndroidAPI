#pragma once

#include "../content/Intent.def.hpp"
#include "./Instrumentation_ActivityResult.def.hpp"

namespace android::app
{
	// Fields
	
	// Constructors
	inline Instrumentation_ActivityResult::Instrumentation_ActivityResult(jint arg0, android::content::Intent arg1)
		: JObject(
			"android.app.Instrumentation$ActivityResult",
			"(ILandroid/content/Intent;)V",
			arg0,
			arg1.object()
		) {}
	
	// Methods
	inline jint Instrumentation_ActivityResult::getResultCode() const
	{
		return callMethod<jint>(
			"getResultCode",
			"()I"
		);
	}
	inline android::content::Intent Instrumentation_ActivityResult::getResultData() const
	{
		return callObjectMethod(
			"getResultData",
			"()Landroid/content/Intent;"
		);
	}
} // namespace android::app

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app;
#endif
