#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class ContentResolver;
}

namespace android::provider
{
	class ContactsContract_SimContacts : public JObject
	{
	public:
		// Fields
		static jstring ACTION_SIM_ACCOUNTS_CHANGED();
		
		// QJniObject forward
		template<typename ...Ts> explicit ContactsContract_SimContacts(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ContactsContract_SimContacts(QJniObject obj);
		
		// Constructors
		
		// Methods
		static JObject getSimAccounts(android::content::ContentResolver arg0);
	};
} // namespace android::provider

