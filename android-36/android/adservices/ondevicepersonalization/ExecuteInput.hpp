#pragma once

#include "../../os/PersistableBundle.def.hpp"
#include "../../../JString.hpp"
#include "./ExecuteInput.def.hpp"

namespace android::adservices::ondevicepersonalization
{
	// Fields
	
	// Constructors
	inline ExecuteInput::ExecuteInput(JString arg0, android::os::PersistableBundle arg1)
		: JObject(
			"android.adservices.ondevicepersonalization.ExecuteInput",
			"(Ljava/lang/String;Landroid/os/PersistableBundle;)V",
			arg0.object<jstring>(),
			arg1.object()
		) {}
	
	// Methods
	inline JString ExecuteInput::getAppPackageName() const
	{
		return callObjectMethod(
			"getAppPackageName",
			"()Ljava/lang/String;"
		);
	}
	inline android::os::PersistableBundle ExecuteInput::getAppParams() const
	{
		return callObjectMethod(
			"getAppParams",
			"()Landroid/os/PersistableBundle;"
		);
	}
} // namespace android::adservices::ondevicepersonalization

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::ondevicepersonalization;
#endif
