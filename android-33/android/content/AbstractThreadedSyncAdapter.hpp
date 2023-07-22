#pragma once

#include "../accounts/Account.def.hpp"
#include "./ContentProviderClient.def.hpp"
#include "./Context.def.hpp"
#include "./SyncResult.def.hpp"
#include "../os/Bundle.def.hpp"
#include "../../JString.hpp"
#include "../../java/lang/Thread.def.hpp"
#include "./AbstractThreadedSyncAdapter.def.hpp"

namespace android::content
{
	// Fields
	inline jint AbstractThreadedSyncAdapter::LOG_SYNC_DETAILS()
	{
		return getStaticField<jint>(
			"android.content.AbstractThreadedSyncAdapter",
			"LOG_SYNC_DETAILS"
		);
	}
	
	// Constructors
	inline AbstractThreadedSyncAdapter::AbstractThreadedSyncAdapter(android::content::Context arg0, jboolean arg1)
		: JObject(
			"android.content.AbstractThreadedSyncAdapter",
			"(Landroid/content/Context;Z)V",
			arg0.object(),
			arg1
		) {}
	inline AbstractThreadedSyncAdapter::AbstractThreadedSyncAdapter(android::content::Context arg0, jboolean arg1, jboolean arg2)
		: JObject(
			"android.content.AbstractThreadedSyncAdapter",
			"(Landroid/content/Context;ZZ)V",
			arg0.object(),
			arg1,
			arg2
		) {}
	
	// Methods
	inline android::content::Context AbstractThreadedSyncAdapter::getContext() const
	{
		return callObjectMethod(
			"getContext",
			"()Landroid/content/Context;"
		);
	}
	inline JObject AbstractThreadedSyncAdapter::getSyncAdapterBinder() const
	{
		return callObjectMethod(
			"getSyncAdapterBinder",
			"()Landroid/os/IBinder;"
		);
	}
	inline void AbstractThreadedSyncAdapter::onPerformSync(android::accounts::Account arg0, android::os::Bundle arg1, JString arg2, android::content::ContentProviderClient arg3, android::content::SyncResult arg4) const
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
	inline void AbstractThreadedSyncAdapter::onSecurityException(android::accounts::Account arg0, android::os::Bundle arg1, JString arg2, android::content::SyncResult arg3) const
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
	inline void AbstractThreadedSyncAdapter::onSyncCanceled() const
	{
		callMethod<void>(
			"onSyncCanceled",
			"()V"
		);
	}
	inline void AbstractThreadedSyncAdapter::onSyncCanceled(java::lang::Thread arg0) const
	{
		callMethod<void>(
			"onSyncCanceled",
			"(Ljava/lang/Thread;)V",
			arg0.object()
		);
	}
	inline jboolean AbstractThreadedSyncAdapter::onUnsyncableAccount() const
	{
		return callMethod<jboolean>(
			"onUnsyncableAccount",
			"()Z"
		);
	}
} // namespace android::content

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::content;
#endif
