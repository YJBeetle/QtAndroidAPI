#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class ContentResolver;
}
class JString;

namespace android::provider
{
	class ContactsContract_SimContacts : public JObject
	{
	public:
		// Fields
		static JString ACTION_SIM_ACCOUNTS_CHANGED();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ContactsContract_SimContacts(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ContactsContract_SimContacts(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static JObject getSimAccounts(android::content::ContentResolver arg0);
	};
} // namespace android::provider

