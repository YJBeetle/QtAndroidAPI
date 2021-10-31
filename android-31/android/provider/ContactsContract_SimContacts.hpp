#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class ContentResolver;
}

namespace android::provider
{
	class ContactsContract_SimContacts : public __JniBaseClass
	{
	public:
		// Fields
		static jstring ACTION_SIM_ACCOUNTS_CHANGED();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ContactsContract_SimContacts(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ContactsContract_SimContacts(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static __JniBaseClass getSimAccounts(android::content::ContentResolver arg0);
	};
} // namespace android::provider

