#include "../accounts/Account.hpp"
#include "./SyncRequest.hpp"
#include "../os/Bundle.hpp"
#include "./SyncRequest_Builder.hpp"

namespace android::content
{
	// Fields
	
	SyncRequest_Builder::SyncRequest_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SyncRequest_Builder::SyncRequest_Builder()
	{
		__thiz = QAndroidJniObject(
			"android.content.SyncRequest$Builder",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject SyncRequest_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/content/SyncRequest;"
		);
	}
	QAndroidJniObject SyncRequest_Builder::setDisallowMetered(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setDisallowMetered",
			"(Z)Landroid/content/SyncRequest$Builder;",
			arg0
		);
	}
	QAndroidJniObject SyncRequest_Builder::setExpedited(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setExpedited",
			"(Z)Landroid/content/SyncRequest$Builder;",
			arg0
		);
	}
	QAndroidJniObject SyncRequest_Builder::setExtras(android::os::Bundle arg0)
	{
		return __thiz.callObjectMethod(
			"setExtras",
			"(Landroid/os/Bundle;)Landroid/content/SyncRequest$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject SyncRequest_Builder::setIgnoreBackoff(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setIgnoreBackoff",
			"(Z)Landroid/content/SyncRequest$Builder;",
			arg0
		);
	}
	QAndroidJniObject SyncRequest_Builder::setIgnoreSettings(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setIgnoreSettings",
			"(Z)Landroid/content/SyncRequest$Builder;",
			arg0
		);
	}
	QAndroidJniObject SyncRequest_Builder::setManual(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setManual",
			"(Z)Landroid/content/SyncRequest$Builder;",
			arg0
		);
	}
	QAndroidJniObject SyncRequest_Builder::setNoRetry(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setNoRetry",
			"(Z)Landroid/content/SyncRequest$Builder;",
			arg0
		);
	}
	QAndroidJniObject SyncRequest_Builder::setRequiresCharging(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setRequiresCharging",
			"(Z)Landroid/content/SyncRequest$Builder;",
			arg0
		);
	}
	QAndroidJniObject SyncRequest_Builder::setSyncAdapter(android::accounts::Account arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"setSyncAdapter",
			"(Landroid/accounts/Account;Ljava/lang/String;)Landroid/content/SyncRequest$Builder;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject SyncRequest_Builder::syncOnce()
	{
		return __thiz.callObjectMethod(
			"syncOnce",
			"()Landroid/content/SyncRequest$Builder;"
		);
	}
	QAndroidJniObject SyncRequest_Builder::syncPeriodic(jlong arg0, jlong arg1)
	{
		return __thiz.callObjectMethod(
			"syncPeriodic",
			"(JJ)Landroid/content/SyncRequest$Builder;",
			arg0,
			arg1
		);
	}
} // namespace android::content

