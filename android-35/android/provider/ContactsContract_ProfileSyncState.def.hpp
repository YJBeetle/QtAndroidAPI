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
class JString;

namespace android::provider
{
	class ContactsContract_ProfileSyncState : public JObject
	{
	public:
		// Fields
		static JString CONTENT_DIRECTORY();
		static android::net::Uri CONTENT_URI();
		
		// QJniObject forward
		template<typename ...Ts> explicit ContactsContract_ProfileSyncState(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ContactsContract_ProfileSyncState(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static JByteArray get(android::content::ContentProviderClient arg0, android::accounts::Account arg1);
		static android::util::Pair getWithUri(android::content::ContentProviderClient arg0, android::accounts::Account arg1);
		static android::content::ContentProviderOperation newSetOperation(android::accounts::Account arg0, JByteArray arg1);
		static void set(android::content::ContentProviderClient arg0, android::accounts::Account arg1, JByteArray arg2);
	};
} // namespace android::provider

