#pragma once

#include "../../JObject.hpp"

class JByteArray;
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
	class SyncStateContract_Helpers : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SyncStateContract_Helpers(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SyncStateContract_Helpers(QAndroidJniObject obj);
		
		// Constructors
		SyncStateContract_Helpers();
		
		// Methods
		static JByteArray get(android::content::ContentProviderClient arg0, android::net::Uri arg1, android::accounts::Account arg2);
		static android::util::Pair getWithUri(android::content::ContentProviderClient arg0, android::net::Uri arg1, android::accounts::Account arg2);
		static android::net::Uri insert(android::content::ContentProviderClient arg0, android::net::Uri arg1, android::accounts::Account arg2, JByteArray arg3);
		static android::content::ContentProviderOperation newSetOperation(android::net::Uri arg0, android::accounts::Account arg1, JByteArray arg2);
		static android::content::ContentProviderOperation newUpdateOperation(android::net::Uri arg0, JByteArray arg1);
		static void set(android::content::ContentProviderClient arg0, android::net::Uri arg1, android::accounts::Account arg2, JByteArray arg3);
		static void update(android::content::ContentProviderClient arg0, android::net::Uri arg1, JByteArray arg2);
	};
} // namespace android::provider

