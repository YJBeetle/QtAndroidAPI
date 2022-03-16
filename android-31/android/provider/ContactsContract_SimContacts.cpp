#include "../content/ContentResolver.hpp"
#include "../../JString.hpp"
#include "./ContactsContract_SimContacts.hpp"

namespace android::provider
{
	// Fields
	JString ContactsContract_SimContacts::ACTION_SIM_ACCOUNTS_CHANGED()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$SimContacts",
			"ACTION_SIM_ACCOUNTS_CHANGED",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
	JObject ContactsContract_SimContacts::getSimAccounts(android::content::ContentResolver arg0)
	{
		return callStaticObjectMethod(
			"android.provider.ContactsContract$SimContacts",
			"getSimAccounts",
			"(Landroid/content/ContentResolver;)Ljava/util/List;",
			arg0.object()
		);
	}
} // namespace android::provider

