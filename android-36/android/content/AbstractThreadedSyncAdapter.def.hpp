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
		
		// QJniObject forward
		template<typename ...Ts> explicit AbstractThreadedSyncAdapter(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AbstractThreadedSyncAdapter(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		AbstractThreadedSyncAdapter(android::content::Context arg0, jboolean arg1);
		AbstractThreadedSyncAdapter(android::content::Context arg0, jboolean arg1, jboolean arg2);
		
		// Methods
		android::content::Context getContext() const;
		JObject getSyncAdapterBinder() const;
		void onPerformSync(android::accounts::Account arg0, android::os::Bundle arg1, JString arg2, android::content::ContentProviderClient arg3, android::content::SyncResult arg4) const;
		void onSecurityException(android::accounts::Account arg0, android::os::Bundle arg1, JString arg2, android::content::SyncResult arg3) const;
		void onSyncCanceled() const;
		void onSyncCanceled(java::lang::Thread arg0) const;
		jboolean onUnsyncableAccount() const;
	};
} // namespace android::content

