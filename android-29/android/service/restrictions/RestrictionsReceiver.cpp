#include "../../content/Context.hpp"
#include "../../content/Intent.hpp"
#include "../../os/PersistableBundle.hpp"
#include "./RestrictionsReceiver.hpp"

namespace android::service::restrictions
{
	// Fields
	
	RestrictionsReceiver::RestrictionsReceiver(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	RestrictionsReceiver::RestrictionsReceiver()
	{
		__thiz = QAndroidJniObject(
			"android.service.restrictions.RestrictionsReceiver",
			"()V"
		);
	}
	
	// Methods
	void RestrictionsReceiver::onReceive(android::content::Context arg0, android::content::Intent arg1)
	{
		__thiz.callMethod<void>(
			"onReceive",
			"(Landroid/content/Context;Landroid/content/Intent;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void RestrictionsReceiver::onRequestPermission(android::content::Context arg0, jstring arg1, jstring arg2, jstring arg3, android::os::PersistableBundle arg4)
	{
		__thiz.callMethod<void>(
			"onRequestPermission",
			"(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/os/PersistableBundle;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4.__jniObject().object()
		);
	}
	void RestrictionsReceiver::onRequestPermission(android::content::Context arg0, const QString &arg1, const QString &arg2, const QString &arg3, android::os::PersistableBundle arg4)
	{
		__thiz.callMethod<void>(
			"onRequestPermission",
			"(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/os/PersistableBundle;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			QAndroidJniObject::fromString(arg3).object<jstring>(),
			arg4.__jniObject().object()
		);
	}
} // namespace android::service::restrictions

