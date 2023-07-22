#pragma once

#include "../content/ContentResolver.def.hpp"
#include "../../JString.hpp"
#include "./ContactsContract_SimContacts.def.hpp"

namespace android::provider
{
	// Fields
	inline JString ContactsContract_SimContacts::ACTION_SIM_ACCOUNTS_CHANGED()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$SimContacts",
			"ACTION_SIM_ACCOUNTS_CHANGED",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
	inline JObject ContactsContract_SimContacts::getSimAccounts(android::content::ContentResolver arg0)
	{
		return callStaticObjectMethod(
			"android.provider.ContactsContract$SimContacts",
			"getSimAccounts",
			"(Landroid/content/ContentResolver;)Ljava/util/List;",
			arg0.object()
		);
	}
} // namespace android::provider

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::provider;
#endif
