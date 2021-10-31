#include "../../content/Context.hpp"
#include "../../content/Intent.hpp"
#include "../../os/PersistableBundle.hpp"
#include "./RestrictionsReceiver.hpp"

namespace android::service::restrictions
{
	// Fields
	
	// QAndroidJniObject forward
	RestrictionsReceiver::RestrictionsReceiver(QAndroidJniObject obj) : android::content::BroadcastReceiver(obj) {}
	
	// Constructors
	RestrictionsReceiver::RestrictionsReceiver()
		: android::content::BroadcastReceiver(
			"android.service.restrictions.RestrictionsReceiver",
			"()V"
		) {}
	
	// Methods
	void RestrictionsReceiver::onReceive(android::content::Context arg0, android::content::Intent arg1)
	{
		callMethod<void>(
			"onReceive",
			"(Landroid/content/Context;Landroid/content/Intent;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void RestrictionsReceiver::onRequestPermission(android::content::Context arg0, jstring arg1, jstring arg2, jstring arg3, android::os::PersistableBundle arg4)
	{
		callMethod<void>(
			"onRequestPermission",
			"(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/os/PersistableBundle;)V",
			arg0.object(),
			arg1,
			arg2,
			arg3,
			arg4.object()
		);
	}
} // namespace android::service::restrictions

