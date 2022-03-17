#pragma once

#include "../content/IntentSender.def.hpp"
#include "../../JString.hpp"
#include "./CompanionDeviceManager_Callback.def.hpp"

namespace android::companion
{
	// Fields
	
	// Constructors
	inline CompanionDeviceManager_Callback::CompanionDeviceManager_Callback()
		: JObject(
			"android.companion.CompanionDeviceManager$Callback",
			"()V"
		) {}
	
	// Methods
	inline void CompanionDeviceManager_Callback::onDeviceFound(android::content::IntentSender arg0) const
	{
		callMethod<void>(
			"onDeviceFound",
			"(Landroid/content/IntentSender;)V",
			arg0.object()
		);
	}
	inline void CompanionDeviceManager_Callback::onFailure(JString arg0) const
	{
		callMethod<void>(
			"onFailure",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
} // namespace android::companion

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::companion;
#endif
