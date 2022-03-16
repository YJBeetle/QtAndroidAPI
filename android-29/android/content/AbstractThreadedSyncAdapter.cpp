#include "../accounts/Account.hpp"
#include "./ContentProviderClient.hpp"
#include "./Context.hpp"
#include "./SyncResult.hpp"
#include "../os/Bundle.hpp"
#include "../../JString.hpp"
#include "../../java/lang/Thread.hpp"
#include "./AbstractThreadedSyncAdapter.hpp"

namespace android::content
{
	// Fields
	jint AbstractThreadedSyncAdapter::LOG_SYNC_DETAILS()
	{
		return getStaticField<jint>(
			"android.content.AbstractThreadedSyncAdapter",
			"LOG_SYNC_DETAILS"
		);
	}
	
	// Constructors
	AbstractThreadedSyncAdapter::AbstractThreadedSyncAdapter(android::content::Context arg0, jboolean arg1)
		: JObject(
			"android.content.AbstractThreadedSyncAdapter",
			"(Landroid/content/Context;Z)V",
			arg0.object(),
			arg1
		) {}
	AbstractThreadedSyncAdapter::AbstractThreadedSyncAdapter(android::content::Context arg0, jboolean arg1, jboolean arg2)
		: JObject(
			"android.content.AbstractThreadedSyncAdapter",
			"(Landroid/content/Context;ZZ)V",
			arg0.object(),
			arg1,
			arg2
		) {}
	
	// Methods
	android::content::Context AbstractThreadedSyncAdapter::getContext() const
	{
		return callObjectMethod(
			"getContext",
			"()Landroid/content/Context;"
		);
	}
	JObject AbstractThreadedSyncAdapter::getSyncAdapterBinder() const
	{
		return callObjectMethod(
			"getSyncAdapterBinder",
			"()Landroid/os/IBinder;"
		);
	}
	void AbstractThreadedSyncAdapter::onPerformSync(android::accounts::Account arg0, android::os::Bundle arg1, JString arg2, android::content::ContentProviderClient arg3, android::content::SyncResult arg4) const
	{
		callMethod<void>(
			"onPerformSync",
			"(Landroid/accounts/Account;Landroid/os/Bundle;Ljava/lang/String;Landroid/content/ContentProviderClient;Landroid/content/SyncResult;)V",
			arg0.object(),
			arg1.object(),
			arg2.object<jstring>(),
			arg3.object(),
			arg4.object()
		);
	}
	void AbstractThreadedSyncAdapter::onSecurityException(android::accounts::Account arg0, android::os::Bundle arg1, JString arg2, android::content::SyncResult arg3) const
	{
		callMethod<void>(
			"onSecurityException",
			"(Landroid/accounts/Account;Landroid/os/Bundle;Ljava/lang/String;Landroid/content/SyncResult;)V",
			arg0.object(),
			arg1.object(),
			arg2.object<jstring>(),
			arg3.object()
		);
	}
	void AbstractThreadedSyncAdapter::onSyncCanceled() const
	{
		callMethod<void>(
			"onSyncCanceled",
			"()V"
		);
	}
	void AbstractThreadedSyncAdapter::onSyncCanceled(java::lang::Thread arg0) const
	{
		callMethod<void>(
			"onSyncCanceled",
			"(Ljava/lang/Thread;)V",
			arg0.object()
		);
	}
	jboolean AbstractThreadedSyncAdapter::onUnsyncableAccount() const
	{
		return callMethod<jboolean>(
			"onUnsyncableAccount",
			"()Z"
		);
	}
} // namespace android::content

