#pragma once

#include "../content/ContentResolver.def.hpp"
#include "./ContactsContract_RawContacts_DefaultAccount_DefaultAccountAndState.def.hpp"
#include "../../JString.hpp"
#include "./ContactsContract_RawContacts_DefaultAccount.def.hpp"

namespace android::provider
{
	// Fields
	inline JString ContactsContract_RawContacts_DefaultAccount::ACTION_MOVE_CONTACTS_TO_DEFAULT_ACCOUNT()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$RawContacts$DefaultAccount",
			"ACTION_MOVE_CONTACTS_TO_DEFAULT_ACCOUNT",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::provider::ContactsContract_RawContacts_DefaultAccount_DefaultAccountAndState ContactsContract_RawContacts_DefaultAccount::getDefaultAccountForNewContacts(android::content::ContentResolver arg0)
	{
		return callStaticObjectMethod(
			"android.provider.ContactsContract$RawContacts$DefaultAccount",
			"getDefaultAccountForNewContacts",
			"(Landroid/content/ContentResolver;)Landroid/provider/ContactsContract$RawContacts$DefaultAccount$DefaultAccountAndState;",
			arg0.object()
		);
	}
} // namespace android::provider

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::provider;
#endif
