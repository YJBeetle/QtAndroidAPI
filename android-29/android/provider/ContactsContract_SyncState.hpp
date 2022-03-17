#pragma once

#include "../../JByteArray.hpp"
#include "../accounts/Account.def.hpp"
#include "../content/ContentProviderClient.def.hpp"
#include "../content/ContentProviderOperation.def.hpp"
#include "../net/Uri.def.hpp"
#include "../util/Pair.def.hpp"
#include "../../JString.hpp"
#include "./ContactsContract_SyncState.def.hpp"

namespace android::provider
{
	// Fields
	inline JString ContactsContract_SyncState::CONTENT_DIRECTORY()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$SyncState",
			"CONTENT_DIRECTORY",
			"Ljava/lang/String;"
		);
	}
	inline android::net::Uri ContactsContract_SyncState::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$SyncState",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	
	// Constructors
	
	// Methods
	inline JByteArray ContactsContract_SyncState::get(android::content::ContentProviderClient arg0, android::accounts::Account arg1)
	{
		return callStaticObjectMethod(
			"android.provider.ContactsContract$SyncState",
			"get",
			"(Landroid/content/ContentProviderClient;Landroid/accounts/Account;)[B",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::util::Pair ContactsContract_SyncState::getWithUri(android::content::ContentProviderClient arg0, android::accounts::Account arg1)
	{
		return callStaticObjectMethod(
			"android.provider.ContactsContract$SyncState",
			"getWithUri",
			"(Landroid/content/ContentProviderClient;Landroid/accounts/Account;)Landroid/util/Pair;",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::content::ContentProviderOperation ContactsContract_SyncState::newSetOperation(android::accounts::Account arg0, JByteArray arg1)
	{
		return callStaticObjectMethod(
			"android.provider.ContactsContract$SyncState",
			"newSetOperation",
			"(Landroid/accounts/Account;[B)Landroid/content/ContentProviderOperation;",
			arg0.object(),
			arg1.object<jbyteArray>()
		);
	}
	inline void ContactsContract_SyncState::set(android::content::ContentProviderClient arg0, android::accounts::Account arg1, JByteArray arg2)
	{
		callStaticMethod<void>(
			"android.provider.ContactsContract$SyncState",
			"set",
			"(Landroid/content/ContentProviderClient;Landroid/accounts/Account;[B)V",
			arg0.object(),
			arg1.object(),
			arg2.object<jbyteArray>()
		);
	}
} // namespace android::provider

// Base class headers

