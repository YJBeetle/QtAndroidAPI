#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::accounts
{
	class Account;
}
namespace android::content
{
	class ContentProviderClient;
}
namespace android::content
{
	class Context;
}
namespace android::content
{
	class SyncResult;
}
namespace android::os
{
	class Bundle;
}
namespace java::lang
{
	class Thread;
}

namespace android::content
{
	class AbstractThreadedSyncAdapter : public __JniBaseClass
	{
	public:
		// Fields
		static jint LOG_SYNC_DETAILS();
		
		AbstractThreadedSyncAdapter(QAndroidJniObject obj);
		// Constructors
		AbstractThreadedSyncAdapter(android::content::Context arg0, jboolean arg1);
		AbstractThreadedSyncAdapter(android::content::Context arg0, jboolean arg1, jboolean arg2);
		AbstractThreadedSyncAdapter() = default;
		
		// Methods
		QAndroidJniObject getContext();
		QAndroidJniObject getSyncAdapterBinder();
		void onPerformSync(android::accounts::Account arg0, android::os::Bundle arg1, jstring arg2, android::content::ContentProviderClient arg3, android::content::SyncResult arg4);
		void onSecurityException(android::accounts::Account arg0, android::os::Bundle arg1, jstring arg2, android::content::SyncResult arg3);
		void onSyncCanceled();
		void onSyncCanceled(java::lang::Thread arg0);
		jboolean onUnsyncableAccount();
	};
} // namespace android::content

