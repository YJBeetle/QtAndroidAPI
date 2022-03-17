#pragma once

#include "./AsyncNotedAppOp.def.hpp"
#include "./SyncNotedAppOp.def.hpp"
#include "./AppOpsManager_OnOpNotedCallback.def.hpp"

namespace android::app
{
	// Fields
	
	// Constructors
	inline AppOpsManager_OnOpNotedCallback::AppOpsManager_OnOpNotedCallback()
		: JObject(
			"android.app.AppOpsManager$OnOpNotedCallback",
			"()V"
		) {}
	
	// Methods
	inline void AppOpsManager_OnOpNotedCallback::onAsyncNoted(android::app::AsyncNotedAppOp arg0) const
	{
		callMethod<void>(
			"onAsyncNoted",
			"(Landroid/app/AsyncNotedAppOp;)V",
			arg0.object()
		);
	}
	inline void AppOpsManager_OnOpNotedCallback::onNoted(android::app::SyncNotedAppOp arg0) const
	{
		callMethod<void>(
			"onNoted",
			"(Landroid/app/SyncNotedAppOp;)V",
			arg0.object()
		);
	}
	inline void AppOpsManager_OnOpNotedCallback::onSelfNoted(android::app::SyncNotedAppOp arg0) const
	{
		callMethod<void>(
			"onSelfNoted",
			"(Landroid/app/SyncNotedAppOp;)V",
			arg0.object()
		);
	}
} // namespace android::app

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app;
#endif
