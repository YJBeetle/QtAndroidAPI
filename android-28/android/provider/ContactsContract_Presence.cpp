#include "./ContactsContract_Presence.hpp"

namespace android::provider
{
	// Fields
	
	// QAndroidJniObject forward
	ContactsContract_Presence::ContactsContract_Presence(QAndroidJniObject obj) : android::provider::ContactsContract_StatusUpdates(obj) {}
	
	// Constructors
	ContactsContract_Presence::ContactsContract_Presence()
		: android::provider::ContactsContract_StatusUpdates(
			"android.provider.ContactsContract$Presence",
			"()V"
		) {}
	
	// Methods
} // namespace android::provider

