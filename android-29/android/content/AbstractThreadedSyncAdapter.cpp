#include "../accounts/Account.hpp"
#include "./ContentProviderClient.hpp"
#include "./Context.hpp"
#include "./SyncResult.hpp"
#include "../os/Bundle.hpp"
#include "../../java/lang/Thread.hpp"
#include "./AbstractThreadedSyncAdapter.hpp"

namespace android::content
{
	// Fields
	jint AbstractThreadedSyncAdapter::LOG_SYNC_DETAILS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.AbstractThreadedSyncAdapter",
			"LOG_SYNC_DETAILS"
		);
	}
	
	AbstractThreadedSyncAdapter::AbstractThreadedSyncAdapter(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AbstractThreadedSyncAdapter::AbstractThreadedSyncAdapter(android::content::Context &arg0, jboolean &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.content.AbstractThreadedSyncAdapter",
			"(Landroid/content/Context;Z)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	AbstractThreadedSyncAdapter::AbstractThreadedSyncAdapter(android::content::Context &arg0, jboolean &arg1, jboolean &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.content.AbstractThreadedSyncAdapter",
			"(Landroid/content/Context;ZZ)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	
	// Methods
	QAndroidJniObject AbstractThreadedSyncAdapter::getContext()
	{
		return __thiz.callObjectMethod(
			"getContext",
			"()Landroid/content/Context;"
		);
	}
	QAndroidJniObject AbstractThreadedSyncAdapter::getSyncAdapterBinder()
	{
		return __thiz.callObjectMethod(
			"getSyncAdapterBinder",
			"()Landroid/os/IBinder;"
		);
	}
	void AbstractThreadedSyncAdapter::onPerformSync(android::accounts::Account arg0, android::os::Bundle arg1, jstring arg2, android::content::ContentProviderClient arg3, android::content::SyncResult arg4)
	{
		__thiz.callMethod<void>(
			"onPerformSync",
			"(Landroid/accounts/Account;Landroid/os/Bundle;Ljava/lang/String;Landroid/content/ContentProviderClient;Landroid/content/SyncResult;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object(),
			arg4.__jniObject().object()
		);
	}
	void AbstractThreadedSyncAdapter::onPerformSync(android::accounts::Account arg0, android::os::Bundle arg1, const QString &arg2, android::content::ContentProviderClient arg3, android::content::SyncResult arg4)
	{
		__thiz.callMethod<void>(
			"onPerformSync",
			"(Landroid/accounts/Account;Landroid/os/Bundle;Ljava/lang/String;Landroid/content/ContentProviderClient;Landroid/content/SyncResult;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			arg3.__jniObject().object(),
			arg4.__jniObject().object()
		);
	}
	void AbstractThreadedSyncAdapter::onSecurityException(android::accounts::Account arg0, android::os::Bundle arg1, jstring arg2, android::content::SyncResult arg3)
	{
		__thiz.callMethod<void>(
			"onSecurityException",
			"(Landroid/accounts/Account;Landroid/os/Bundle;Ljava/lang/String;Landroid/content/SyncResult;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object()
		);
	}
	void AbstractThreadedSyncAdapter::onSecurityException(android::accounts::Account arg0, android::os::Bundle arg1, const QString &arg2, android::content::SyncResult arg3)
	{
		__thiz.callMethod<void>(
			"onSecurityException",
			"(Landroid/accounts/Account;Landroid/os/Bundle;Ljava/lang/String;Landroid/content/SyncResult;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			arg3.__jniObject().object()
		);
	}
	void AbstractThreadedSyncAdapter::onSyncCanceled()
	{
		__thiz.callMethod<void>(
			"onSyncCanceled",
			"()V"
		);
	}
	void AbstractThreadedSyncAdapter::onSyncCanceled(java::lang::Thread arg0)
	{
		__thiz.callMethod<void>(
			"onSyncCanceled",
			"(Ljava/lang/Thread;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean AbstractThreadedSyncAdapter::onUnsyncableAccount()
	{
		return __thiz.callMethod<jboolean>(
			"onUnsyncableAccount",
			"()Z"
		);
	}
} // namespace android::content

