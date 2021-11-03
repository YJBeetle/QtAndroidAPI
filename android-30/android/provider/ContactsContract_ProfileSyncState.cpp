#include "../../JByteArray.hpp"
#include "../accounts/Account.hpp"
#include "../content/ContentProviderClient.hpp"
#include "../content/ContentProviderOperation.hpp"
#include "../net/Uri.hpp"
#include "../util/Pair.hpp"
#include "../../JString.hpp"
#include "./ContactsContract_ProfileSyncState.hpp"

namespace android::provider
{
	// Fields
	JString ContactsContract_ProfileSyncState::CONTENT_DIRECTORY()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$ProfileSyncState",
			"CONTENT_DIRECTORY",
			"Ljava/lang/String;"
		);
	}
	android::net::Uri ContactsContract_ProfileSyncState::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$ProfileSyncState",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	
	// QJniObject forward
	ContactsContract_ProfileSyncState::ContactsContract_ProfileSyncState(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JByteArray ContactsContract_ProfileSyncState::get(android::content::ContentProviderClient arg0, android::accounts::Account arg1)
	{
		return callStaticObjectMethod(
			"android.provider.ContactsContract$ProfileSyncState",
			"get",
			"(Landroid/content/ContentProviderClient;Landroid/accounts/Account;)[B",
			arg0.object(),
			arg1.object()
		);
	}
	android::util::Pair ContactsContract_ProfileSyncState::getWithUri(android::content::ContentProviderClient arg0, android::accounts::Account arg1)
	{
		return callStaticObjectMethod(
			"android.provider.ContactsContract$ProfileSyncState",
			"getWithUri",
			"(Landroid/content/ContentProviderClient;Landroid/accounts/Account;)Landroid/util/Pair;",
			arg0.object(),
			arg1.object()
		);
	}
	android::content::ContentProviderOperation ContactsContract_ProfileSyncState::newSetOperation(android::accounts::Account arg0, JByteArray arg1)
	{
		return callStaticObjectMethod(
			"android.provider.ContactsContract$ProfileSyncState",
			"newSetOperation",
			"(Landroid/accounts/Account;[B)Landroid/content/ContentProviderOperation;",
			arg0.object(),
			arg1.object<jbyteArray>()
		);
	}
	void ContactsContract_ProfileSyncState::set(android::content::ContentProviderClient arg0, android::accounts::Account arg1, JByteArray arg2)
	{
		callStaticMethod<void>(
			"android.provider.ContactsContract$ProfileSyncState",
			"set",
			"(Landroid/content/ContentProviderClient;Landroid/accounts/Account;[B)V",
			arg0.object(),
			arg1.object(),
			arg2.object<jbyteArray>()
		);
	}
} // namespace android::provider

