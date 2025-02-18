#pragma once

#include "../accounts/Account.def.hpp"
#include "../content/ContentResolver.def.hpp"
#include "../net/Uri.def.hpp"
#include "../../JString.hpp"
#include "./ContactsContract_Settings.def.hpp"

namespace android::provider
{
	// Fields
	inline JString ContactsContract_Settings::ACTION_SET_DEFAULT_ACCOUNT()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Settings",
			"ACTION_SET_DEFAULT_ACCOUNT",
			"Ljava/lang/String;"
		);
	}
	inline JString ContactsContract_Settings::CONTENT_ITEM_TYPE()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Settings",
			"CONTENT_ITEM_TYPE",
			"Ljava/lang/String;"
		);
	}
	inline JString ContactsContract_Settings::CONTENT_TYPE()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Settings",
			"CONTENT_TYPE",
			"Ljava/lang/String;"
		);
	}
	inline android::net::Uri ContactsContract_Settings::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Settings",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::accounts::Account ContactsContract_Settings::getDefaultAccount(android::content::ContentResolver arg0)
	{
		return callStaticObjectMethod(
			"android.provider.ContactsContract$Settings",
			"getDefaultAccount",
			"(Landroid/content/ContentResolver;)Landroid/accounts/Account;",
			arg0.object()
		);
	}
} // namespace android::provider

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::provider;
#endif
