#pragma once

#include "../../JByteArray.hpp"
#include "../accounts/Account.def.hpp"
#include "../content/ContentProviderClient.def.hpp"
#include "../content/ContentProviderOperation.def.hpp"
#include "../net/Uri.def.hpp"
#include "../util/Pair.def.hpp"
#include "./SyncStateContract_Helpers.def.hpp"

namespace android::provider
{
	// Fields
	
	// Constructors
	inline SyncStateContract_Helpers::SyncStateContract_Helpers()
		: JObject(
			"android.provider.SyncStateContract$Helpers",
			"()V"
		) {}
	
	// Methods
	inline JByteArray SyncStateContract_Helpers::get(android::content::ContentProviderClient arg0, android::net::Uri arg1, android::accounts::Account arg2)
	{
		return callStaticObjectMethod(
			"android.provider.SyncStateContract$Helpers",
			"get",
			"(Landroid/content/ContentProviderClient;Landroid/net/Uri;Landroid/accounts/Account;)[B",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline android::util::Pair SyncStateContract_Helpers::getWithUri(android::content::ContentProviderClient arg0, android::net::Uri arg1, android::accounts::Account arg2)
	{
		return callStaticObjectMethod(
			"android.provider.SyncStateContract$Helpers",
			"getWithUri",
			"(Landroid/content/ContentProviderClient;Landroid/net/Uri;Landroid/accounts/Account;)Landroid/util/Pair;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline android::net::Uri SyncStateContract_Helpers::insert(android::content::ContentProviderClient arg0, android::net::Uri arg1, android::accounts::Account arg2, JByteArray arg3)
	{
		return callStaticObjectMethod(
			"android.provider.SyncStateContract$Helpers",
			"insert",
			"(Landroid/content/ContentProviderClient;Landroid/net/Uri;Landroid/accounts/Account;[B)Landroid/net/Uri;",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object<jbyteArray>()
		);
	}
	inline android::content::ContentProviderOperation SyncStateContract_Helpers::newSetOperation(android::net::Uri arg0, android::accounts::Account arg1, JByteArray arg2)
	{
		return callStaticObjectMethod(
			"android.provider.SyncStateContract$Helpers",
			"newSetOperation",
			"(Landroid/net/Uri;Landroid/accounts/Account;[B)Landroid/content/ContentProviderOperation;",
			arg0.object(),
			arg1.object(),
			arg2.object<jbyteArray>()
		);
	}
	inline android::content::ContentProviderOperation SyncStateContract_Helpers::newUpdateOperation(android::net::Uri arg0, JByteArray arg1)
	{
		return callStaticObjectMethod(
			"android.provider.SyncStateContract$Helpers",
			"newUpdateOperation",
			"(Landroid/net/Uri;[B)Landroid/content/ContentProviderOperation;",
			arg0.object(),
			arg1.object<jbyteArray>()
		);
	}
	inline void SyncStateContract_Helpers::set(android::content::ContentProviderClient arg0, android::net::Uri arg1, android::accounts::Account arg2, JByteArray arg3)
	{
		callStaticMethod<void>(
			"android.provider.SyncStateContract$Helpers",
			"set",
			"(Landroid/content/ContentProviderClient;Landroid/net/Uri;Landroid/accounts/Account;[B)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object<jbyteArray>()
		);
	}
	inline void SyncStateContract_Helpers::update(android::content::ContentProviderClient arg0, android::net::Uri arg1, JByteArray arg2)
	{
		callStaticMethod<void>(
			"android.provider.SyncStateContract$Helpers",
			"update",
			"(Landroid/content/ContentProviderClient;Landroid/net/Uri;[B)V",
			arg0.object(),
			arg1.object(),
			arg2.object<jbyteArray>()
		);
	}
} // namespace android::provider

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::provider;
#endif
