#include "../accounts/Account.hpp"
#include "./SyncRequest.hpp"
#include "../os/Bundle.hpp"
#include "../../JString.hpp"
#include "./SyncRequest_Builder.hpp"

namespace android::content
{
	// Fields
	
	// QJniObject forward
	SyncRequest_Builder::SyncRequest_Builder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	SyncRequest_Builder::SyncRequest_Builder()
		: JObject(
			"android.content.SyncRequest$Builder",
			"()V"
		) {}
	
	// Methods
	android::content::SyncRequest SyncRequest_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/content/SyncRequest;"
		);
	}
	android::content::SyncRequest_Builder SyncRequest_Builder::setDisallowMetered(jboolean arg0) const
	{
		return callObjectMethod(
			"setDisallowMetered",
			"(Z)Landroid/content/SyncRequest$Builder;",
			arg0
		);
	}
	android::content::SyncRequest_Builder SyncRequest_Builder::setExpedited(jboolean arg0) const
	{
		return callObjectMethod(
			"setExpedited",
			"(Z)Landroid/content/SyncRequest$Builder;",
			arg0
		);
	}
	android::content::SyncRequest_Builder SyncRequest_Builder::setExtras(android::os::Bundle arg0) const
	{
		return callObjectMethod(
			"setExtras",
			"(Landroid/os/Bundle;)Landroid/content/SyncRequest$Builder;",
			arg0.object()
		);
	}
	android::content::SyncRequest_Builder SyncRequest_Builder::setIgnoreBackoff(jboolean arg0) const
	{
		return callObjectMethod(
			"setIgnoreBackoff",
			"(Z)Landroid/content/SyncRequest$Builder;",
			arg0
		);
	}
	android::content::SyncRequest_Builder SyncRequest_Builder::setIgnoreSettings(jboolean arg0) const
	{
		return callObjectMethod(
			"setIgnoreSettings",
			"(Z)Landroid/content/SyncRequest$Builder;",
			arg0
		);
	}
	android::content::SyncRequest_Builder SyncRequest_Builder::setManual(jboolean arg0) const
	{
		return callObjectMethod(
			"setManual",
			"(Z)Landroid/content/SyncRequest$Builder;",
			arg0
		);
	}
	android::content::SyncRequest_Builder SyncRequest_Builder::setNoRetry(jboolean arg0) const
	{
		return callObjectMethod(
			"setNoRetry",
			"(Z)Landroid/content/SyncRequest$Builder;",
			arg0
		);
	}
	android::content::SyncRequest_Builder SyncRequest_Builder::setRequiresCharging(jboolean arg0) const
	{
		return callObjectMethod(
			"setRequiresCharging",
			"(Z)Landroid/content/SyncRequest$Builder;",
			arg0
		);
	}
	android::content::SyncRequest_Builder SyncRequest_Builder::setSyncAdapter(android::accounts::Account arg0, JString arg1) const
	{
		return callObjectMethod(
			"setSyncAdapter",
			"(Landroid/accounts/Account;Ljava/lang/String;)Landroid/content/SyncRequest$Builder;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	android::content::SyncRequest_Builder SyncRequest_Builder::syncOnce() const
	{
		return callObjectMethod(
			"syncOnce",
			"()Landroid/content/SyncRequest$Builder;"
		);
	}
	android::content::SyncRequest_Builder SyncRequest_Builder::syncPeriodic(jlong arg0, jlong arg1) const
	{
		return callObjectMethod(
			"syncPeriodic",
			"(JJ)Landroid/content/SyncRequest$Builder;",
			arg0,
			arg1
		);
	}
} // namespace android::content

