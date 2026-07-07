#pragma once

#include "../../JObject.hpp"

namespace android::accounts
{
	class Account;
}
class JObject;

namespace android::provider
{
	class ContactsContract_RawContacts_DefaultAccount_DefaultAccountAndState : public JObject
	{
	public:
		// Fields
		static jint DEFAULT_ACCOUNT_STATE_CLOUD();
		static jint DEFAULT_ACCOUNT_STATE_LOCAL();
		static jint DEFAULT_ACCOUNT_STATE_NOT_SET();
		static jint DEFAULT_ACCOUNT_STATE_SIM();
		
		// QJniObject forward
		template<typename ...Ts> explicit ContactsContract_RawContacts_DefaultAccount_DefaultAccountAndState(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ContactsContract_RawContacts_DefaultAccount_DefaultAccountAndState(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static android::provider::ContactsContract_RawContacts_DefaultAccount_DefaultAccountAndState ofCloud(android::accounts::Account arg0);
		static android::provider::ContactsContract_RawContacts_DefaultAccount_DefaultAccountAndState ofLocal();
		static android::provider::ContactsContract_RawContacts_DefaultAccount_DefaultAccountAndState ofNotSet();
		static android::provider::ContactsContract_RawContacts_DefaultAccount_DefaultAccountAndState ofSim(android::accounts::Account arg0);
		jboolean equals(JObject arg0) const;
		android::accounts::Account getAccount() const;
		jint getState() const;
		jint hashCode() const;
	};
} // namespace android::provider

