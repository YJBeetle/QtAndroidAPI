#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class ContentResolver;
}
namespace android::provider
{
	class ContactsContract_RawContacts_DefaultAccount_DefaultAccountAndState;
}
class JString;

namespace android::provider
{
	class ContactsContract_RawContacts_DefaultAccount : public JObject
	{
	public:
		// Fields
		static JString ACTION_MOVE_CONTACTS_TO_DEFAULT_ACCOUNT();
		
		// QJniObject forward
		template<typename ...Ts> explicit ContactsContract_RawContacts_DefaultAccount(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ContactsContract_RawContacts_DefaultAccount(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static android::provider::ContactsContract_RawContacts_DefaultAccount_DefaultAccountAndState getDefaultAccountForNewContacts(android::content::ContentResolver arg0);
	};
} // namespace android::provider

