#include "./ContactsContract_Presence.hpp"

namespace android::provider
{
	// Fields
	
	ContactsContract_Presence::ContactsContract_Presence(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ContactsContract_Presence::ContactsContract_Presence()
	{
		__thiz = QAndroidJniObject(
			"android.provider.ContactsContract$Presence",
			"()V"
		);
	}
	
	// Methods
} // namespace android::provider

