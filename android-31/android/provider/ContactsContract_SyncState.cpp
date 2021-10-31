#include "../accounts/Account.hpp"
#include "../content/ContentProviderClient.hpp"
#include "../content/ContentProviderOperation.hpp"
#include "../net/Uri.hpp"
#include "../util/Pair.hpp"
#include "./ContactsContract_SyncState.hpp"

namespace android::provider
{
	// Fields
	jstring ContactsContract_SyncState::CONTENT_DIRECTORY()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$SyncState",
			"CONTENT_DIRECTORY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	android::net::Uri ContactsContract_SyncState::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$SyncState",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	
	// QAndroidJniObject forward
	ContactsContract_SyncState::ContactsContract_SyncState(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jbyteArray ContactsContract_SyncState::get(android::content::ContentProviderClient arg0, android::accounts::Account arg1)
	{
		return callStaticObjectMethod(
			"android.provider.ContactsContract$SyncState",
			"get",
			"(Landroid/content/ContentProviderClient;Landroid/accounts/Account;)[B",
			arg0.object(),
			arg1.object()
		).object<jbyteArray>();
	}
	android::util::Pair ContactsContract_SyncState::getWithUri(android::content::ContentProviderClient arg0, android::accounts::Account arg1)
	{
		return callStaticObjectMethod(
			"android.provider.ContactsContract$SyncState",
			"getWithUri",
			"(Landroid/content/ContentProviderClient;Landroid/accounts/Account;)Landroid/util/Pair;",
			arg0.object(),
			arg1.object()
		);
	}
	android::content::ContentProviderOperation ContactsContract_SyncState::newSetOperation(android::accounts::Account arg0, jbyteArray arg1)
	{
		return callStaticObjectMethod(
			"android.provider.ContactsContract$SyncState",
			"newSetOperation",
			"(Landroid/accounts/Account;[B)Landroid/content/ContentProviderOperation;",
			arg0.object(),
			arg1
		);
	}
	void ContactsContract_SyncState::set(android::content::ContentProviderClient arg0, android::accounts::Account arg1, jbyteArray arg2)
	{
		callStaticMethod<void>(
			"android.provider.ContactsContract$SyncState",
			"set",
			"(Landroid/content/ContentProviderClient;Landroid/accounts/Account;[B)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
} // namespace android::provider

