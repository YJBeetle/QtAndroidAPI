#include "../../content/Context.hpp"
#include "../../content/Intent.hpp"
#include "../../net/Uri.hpp"
#include "../../../JString.hpp"
#include "./DelegatedAdminReceiver.hpp"

namespace android::app::admin
{
	// Fields
	
	// QAndroidJniObject forward
	DelegatedAdminReceiver::DelegatedAdminReceiver(QAndroidJniObject obj) : android::content::BroadcastReceiver(obj) {}
	
	// Constructors
	DelegatedAdminReceiver::DelegatedAdminReceiver()
		: android::content::BroadcastReceiver(
			"android.app.admin.DelegatedAdminReceiver",
			"()V"
		) {}
	
	// Methods
	JString DelegatedAdminReceiver::onChoosePrivateKeyAlias(android::content::Context arg0, android::content::Intent arg1, jint arg2, android::net::Uri arg3, JString arg4) const
	{
		return callObjectMethod(
			"onChoosePrivateKeyAlias",
			"(Landroid/content/Context;Landroid/content/Intent;ILandroid/net/Uri;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3.object(),
			arg4.object<jstring>()
		);
	}
	void DelegatedAdminReceiver::onNetworkLogsAvailable(android::content::Context arg0, android::content::Intent arg1, jlong arg2, jint arg3) const
	{
		callMethod<void>(
			"onNetworkLogsAvailable",
			"(Landroid/content/Context;Landroid/content/Intent;JI)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		);
	}
	void DelegatedAdminReceiver::onReceive(android::content::Context arg0, android::content::Intent arg1) const
	{
		callMethod<void>(
			"onReceive",
			"(Landroid/content/Context;Landroid/content/Intent;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::app::admin

