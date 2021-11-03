#pragma once

#include "../../JObject.hpp"

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
class JString;
namespace java::lang
{
	class Thread;
}

namespace android::content
{
	class AbstractThreadedSyncAdapter : public JObject
	{
	public:
		// Fields
		static jint LOG_SYNC_DETAILS();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AbstractThreadedSyncAdapter(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AbstractThreadedSyncAdapter(QAndroidJniObject obj);
		
		// Constructors
		AbstractThreadedSyncAdapter(android::content::Context arg0, jboolean arg1);
		AbstractThreadedSyncAdapter(android::content::Context arg0, jboolean arg1, jboolean arg2);
		
		// Methods
		android::content::Context getContext();
		JObject getSyncAdapterBinder();
		void onPerformSync(android::accounts::Account arg0, android::os::Bundle arg1, JString arg2, android::content::ContentProviderClient arg3, android::content::SyncResult arg4);
		void onSecurityException(android::accounts::Account arg0, android::os::Bundle arg1, JString arg2, android::content::SyncResult arg3);
		void onSyncCanceled();
		void onSyncCanceled(java::lang::Thread arg0);
		jboolean onUnsyncableAccount();
	};
} // namespace android::content

