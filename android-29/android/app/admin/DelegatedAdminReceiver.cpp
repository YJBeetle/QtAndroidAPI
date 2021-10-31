#include "../../content/Context.hpp"
#include "../../content/Intent.hpp"
#include "../../net/Uri.hpp"
#include "./DelegatedAdminReceiver.hpp"

namespace android::app::admin
{
	// Fields
	
	DelegatedAdminReceiver::DelegatedAdminReceiver(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	DelegatedAdminReceiver::DelegatedAdminReceiver()
	{
		__thiz = QAndroidJniObject(
			"android.app.admin.DelegatedAdminReceiver",
			"()V"
		);
	}
	
	// Methods
	jstring DelegatedAdminReceiver::onChoosePrivateKeyAlias(android::content::Context arg0, android::content::Intent arg1, jint arg2, android::net::Uri arg3, jstring arg4)
	{
		return __thiz.callObjectMethod(
			"onChoosePrivateKeyAlias",
			"(Landroid/content/Context;Landroid/content/Intent;ILandroid/net/Uri;Ljava/lang/String;)Ljava/lang/String;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object(),
			arg4
		).object<jstring>();
	}
	void DelegatedAdminReceiver::onNetworkLogsAvailable(android::content::Context arg0, android::content::Intent arg1, jlong arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"onNetworkLogsAvailable",
			"(Landroid/content/Context;Landroid/content/Intent;JI)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	void DelegatedAdminReceiver::onReceive(android::content::Context arg0, android::content::Intent arg1)
	{
		__thiz.callMethod<void>(
			"onReceive",
			"(Landroid/content/Context;Landroid/content/Intent;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
} // namespace android::app::admin

