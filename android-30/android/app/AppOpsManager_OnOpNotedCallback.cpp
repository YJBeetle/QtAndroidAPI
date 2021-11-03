#include "./AsyncNotedAppOp.hpp"
#include "./SyncNotedAppOp.hpp"
#include "./AppOpsManager_OnOpNotedCallback.hpp"

namespace android::app
{
	// Fields
	
	// QJniObject forward
	AppOpsManager_OnOpNotedCallback::AppOpsManager_OnOpNotedCallback(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	AppOpsManager_OnOpNotedCallback::AppOpsManager_OnOpNotedCallback()
		: JObject(
			"android.app.AppOpsManager$OnOpNotedCallback",
			"()V"
		) {}
	
	// Methods
	void AppOpsManager_OnOpNotedCallback::onAsyncNoted(android::app::AsyncNotedAppOp arg0) const
	{
		callMethod<void>(
			"onAsyncNoted",
			"(Landroid/app/AsyncNotedAppOp;)V",
			arg0.object()
		);
	}
	void AppOpsManager_OnOpNotedCallback::onNoted(android::app::SyncNotedAppOp arg0) const
	{
		callMethod<void>(
			"onNoted",
			"(Landroid/app/SyncNotedAppOp;)V",
			arg0.object()
		);
	}
	void AppOpsManager_OnOpNotedCallback::onSelfNoted(android::app::SyncNotedAppOp arg0) const
	{
		callMethod<void>(
			"onSelfNoted",
			"(Landroid/app/SyncNotedAppOp;)V",
			arg0.object()
		);
	}
} // namespace android::app

