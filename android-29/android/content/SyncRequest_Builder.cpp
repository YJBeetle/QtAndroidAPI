#include "../accounts/Account.hpp"
#include "./SyncRequest.hpp"
#include "../os/Bundle.hpp"
#include "./SyncRequest_Builder.hpp"

namespace android::content
{
	// Fields
	
	// QAndroidJniObject forward
	SyncRequest_Builder::SyncRequest_Builder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	SyncRequest_Builder::SyncRequest_Builder()
		: __JniBaseClass(
			"android.content.SyncRequest$Builder",
			"()V"
		) {}
	
	// Methods
	QAndroidJniObject SyncRequest_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/content/SyncRequest;"
		);
	}
	QAndroidJniObject SyncRequest_Builder::setDisallowMetered(jboolean arg0)
	{
		return callObjectMethod(
			"setDisallowMetered",
			"(Z)Landroid/content/SyncRequest$Builder;",
			arg0
		);
	}
	QAndroidJniObject SyncRequest_Builder::setExpedited(jboolean arg0)
	{
		return callObjectMethod(
			"setExpedited",
			"(Z)Landroid/content/SyncRequest$Builder;",
			arg0
		);
	}
	QAndroidJniObject SyncRequest_Builder::setExtras(android::os::Bundle arg0)
	{
		return callObjectMethod(
			"setExtras",
			"(Landroid/os/Bundle;)Landroid/content/SyncRequest$Builder;",
			arg0.object()
		);
	}
	QAndroidJniObject SyncRequest_Builder::setIgnoreBackoff(jboolean arg0)
	{
		return callObjectMethod(
			"setIgnoreBackoff",
			"(Z)Landroid/content/SyncRequest$Builder;",
			arg0
		);
	}
	QAndroidJniObject SyncRequest_Builder::setIgnoreSettings(jboolean arg0)
	{
		return callObjectMethod(
			"setIgnoreSettings",
			"(Z)Landroid/content/SyncRequest$Builder;",
			arg0
		);
	}
	QAndroidJniObject SyncRequest_Builder::setManual(jboolean arg0)
	{
		return callObjectMethod(
			"setManual",
			"(Z)Landroid/content/SyncRequest$Builder;",
			arg0
		);
	}
	QAndroidJniObject SyncRequest_Builder::setNoRetry(jboolean arg0)
	{
		return callObjectMethod(
			"setNoRetry",
			"(Z)Landroid/content/SyncRequest$Builder;",
			arg0
		);
	}
	QAndroidJniObject SyncRequest_Builder::setRequiresCharging(jboolean arg0)
	{
		return callObjectMethod(
			"setRequiresCharging",
			"(Z)Landroid/content/SyncRequest$Builder;",
			arg0
		);
	}
	QAndroidJniObject SyncRequest_Builder::setSyncAdapter(android::accounts::Account arg0, jstring arg1)
	{
		return callObjectMethod(
			"setSyncAdapter",
			"(Landroid/accounts/Account;Ljava/lang/String;)Landroid/content/SyncRequest$Builder;",
			arg0.object(),
			arg1
		);
	}
	QAndroidJniObject SyncRequest_Builder::syncOnce()
	{
		return callObjectMethod(
			"syncOnce",
			"()Landroid/content/SyncRequest$Builder;"
		);
	}
	QAndroidJniObject SyncRequest_Builder::syncPeriodic(jlong arg0, jlong arg1)
	{
		return callObjectMethod(
			"syncPeriodic",
			"(JJ)Landroid/content/SyncRequest$Builder;",
			arg0,
			arg1
		);
	}
} // namespace android::content

