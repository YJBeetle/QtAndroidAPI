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
	class ContentProviderOperation;
}
namespace android::net
{
	class Uri;
}
namespace android::util
{
	class Pair;
}

namespace android::provider
{
	class SyncStateContract_Helpers : public __JniBaseClass
	{
	public:
		// Fields
		
		SyncStateContract_Helpers(QAndroidJniObject obj);
		// Constructors
		SyncStateContract_Helpers();
		
		// Methods
		static jbyteArray get(android::content::ContentProviderClient arg0, android::net::Uri arg1, android::accounts::Account arg2);
		static QAndroidJniObject getWithUri(android::content::ContentProviderClient arg0, android::net::Uri arg1, android::accounts::Account arg2);
		static QAndroidJniObject insert(android::content::ContentProviderClient arg0, android::net::Uri arg1, android::accounts::Account arg2, jbyteArray arg3);
		static QAndroidJniObject newSetOperation(android::net::Uri arg0, android::accounts::Account arg1, jbyteArray arg2);
		static QAndroidJniObject newUpdateOperation(android::net::Uri arg0, jbyteArray arg1);
		static void set(android::content::ContentProviderClient arg0, android::net::Uri arg1, android::accounts::Account arg2, jbyteArray arg3);
		static void update(android::content::ContentProviderClient arg0, android::net::Uri arg1, jbyteArray arg2);
	};
} // namespace android::provider

