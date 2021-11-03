#include "../content/ContentResolver.hpp"
#include "./ContactsContract_SimContacts.hpp"

namespace android::provider
{
	// Fields
	jstring ContactsContract_SimContacts::ACTION_SIM_ACCOUNTS_CHANGED()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$SimContacts",
			"ACTION_SIM_ACCOUNTS_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QJniObject forward
	ContactsContract_SimContacts::ContactsContract_SimContacts(QJniObject obj) : JObject(obj) {}
	
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

