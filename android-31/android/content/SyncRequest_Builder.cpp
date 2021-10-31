#include "../accounts/Account.hpp"
#include "./SyncRequest.hpp"
#include "../os/Bundle.hpp"
#include "./SyncRequest_Builder.hpp"

namespace android::content
{
	// Fields
	
	// QJniObject forward
	SyncRequest_Builder::SyncRequest_Builder(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	SyncRequest_Builder::SyncRequest_Builder()
		: __JniBaseClass(
			"android.content.SyncRequest$Builder",
			"()V"
		) {}
	
	// Methods
	android::content::SyncRequest SyncRequest_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/content/SyncRequest;"
		);
	}
	android::content::SyncRequest_Builder SyncRequest_Builder::setDisallowMetered(jboolean arg0)
	{
		return callObjectMethod(
			"setDisallowMetered",
			"(Z)Landroid/content/SyncRequest$Builder;",
			arg0
		);
	}
	android::content::SyncRequest_Builder SyncRequest_Builder::setExpedited(jboolean arg0)
	{
		return callObjectMethod(
			"setExpedited",
			"(Z)Landroid/content/SyncRequest$Builder;",
			arg0
		);
	}
	android::content::SyncRequest_Builder SyncRequest_Builder::setExtras(android::os::Bundle arg0)
	{
		return callObjectMethod(
			"setExtras",
			"(Landroid/os/Bundle;)Landroid/content/SyncRequest$Builder;",
			arg0.object()
		);
	}
	android::content::SyncRequest_Builder SyncRequest_Builder::setIgnoreBackoff(jboolean arg0)
	{
		return callObjectMethod(
			"setIgnoreBackoff",
			"(Z)Landroid/content/SyncRequest$Builder;",
			arg0
		);
	}
	android::content::SyncRequest_Builder SyncRequest_Builder::setIgnoreSettings(jboolean arg0)
	{
		return callObjectMethod(
			"setIgnoreSettings",
			"(Z)Landroid/content/SyncRequest$Builder;",
			arg0
		);
	}
	android::content::SyncRequest_Builder SyncRequest_Builder::setManual(jboolean arg0)
	{
		return callObjectMethod(
			"setManual",
			"(Z)Landroid/content/SyncRequest$Builder;",
			arg0
		);
	}
	android::content::SyncRequest_Builder SyncRequest_Builder::setNoRetry(jboolean arg0)
	{
		return callObjectMethod(
			"setNoRetry",
			"(Z)Landroid/content/SyncRequest$Builder;",
			arg0
		);
	}
	android::content::SyncRequest_Builder SyncRequest_Builder::setRequiresCharging(jboolean arg0)
	{
		return callObjectMethod(
			"setRequiresCharging",
			"(Z)Landroid/content/SyncRequest$Builder;",
			arg0
		);
	}
	android::content::SyncRequest_Builder SyncRequest_Builder::setScheduleAsExpeditedJob(jboolean arg0)
	{
		return callObjectMethod(
			"setScheduleAsExpeditedJob",
			"(Z)Landroid/content/SyncRequest$Builder;",
			arg0
		);
	}
	android::content::SyncRequest_Builder SyncRequest_Builder::setSyncAdapter(android::accounts::Account arg0, jstring arg1)
	{
		return callObjectMethod(
			"setSyncAdapter",
			"(Landroid/accounts/Account;Ljava/lang/String;)Landroid/content/SyncRequest$Builder;",
			arg0.object(),
			arg1
		);
	}
	android::content::SyncRequest_Builder SyncRequest_Builder::syncOnce()
	{
		return callObjectMethod(
			"syncOnce",
			"()Landroid/content/SyncRequest$Builder;"
		);
	}
	android::content::SyncRequest_Builder SyncRequest_Builder::syncPeriodic(jlong arg0, jlong arg1)
	{
		return callObjectMethod(
			"syncPeriodic",
			"(JJ)Landroid/content/SyncRequest$Builder;",
			arg0,
			arg1
		);
	}
} // namespace android::content

