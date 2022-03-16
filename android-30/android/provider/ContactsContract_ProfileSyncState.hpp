#pragma once

#include "../../JByteArray.hpp"
#include "../accounts/Account.def.hpp"
#include "../content/ContentProviderClient.def.hpp"
#include "../content/ContentProviderOperation.def.hpp"
#include "../net/Uri.def.hpp"
#include "../util/Pair.def.hpp"
#include "../../JString.hpp"
#include "./ContactsContract_ProfileSyncState.def.hpp"

namespace android::provider
{
	// Fields
	inline JString ContactsContract_ProfileSyncState::CONTENT_DIRECTORY()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$ProfileSyncState",
			"CONTENT_DIRECTORY",
			"Ljava/lang/String;"
		);
	}
	inline android::net::Uri ContactsContract_ProfileSyncState::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$ProfileSyncState",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	
	// Constructors
	
	// Methods
	inline JByteArray ContactsContract_ProfileSyncState::get(android::content::ContentProviderClient arg0, android::accounts::Account arg1)
	{
		return callStaticObjectMethod(
			"android.provider.ContactsContract$ProfileSyncState",
			"get",
			"(Landroid/content/ContentProviderClient;Landroid/accounts/Account;)[B",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::util::Pair ContactsContract_ProfileSyncState::getWithUri(android::content::ContentProviderClient arg0, android::accounts::Account arg1)
	{
		return callStaticObjectMethod(
			"android.provider.ContactsContract$ProfileSyncState",
			"getWithUri",
			"(Landroid/content/ContentProviderClient;Landroid/accounts/Account;)Landroid/util/Pair;",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::content::ContentProviderOperation ContactsContract_ProfileSyncState::newSetOperation(android::accounts::Account arg0, JByteArray arg1)
	{
		return callStaticObjectMethod(
			"android.provider.ContactsContract$ProfileSyncState",
			"newSetOperation",
			"(Landroid/accounts/Account;[B)Landroid/content/ContentProviderOperation;",
			arg0.object(),
			arg1.object<jbyteArray>()
		);
	}
	inline void ContactsContract_ProfileSyncState::set(android::content::ContentProviderClient arg0, android::accounts::Account arg1, JByteArray arg2)
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

// Base class headers

