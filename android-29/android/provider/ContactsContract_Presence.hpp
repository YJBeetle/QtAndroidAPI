#pragma once

#include "../../__JniBaseClass.hpp"
#include "./ContactsContract_StatusUpdates.hpp"


namespace android::provider
{
	class ContactsContract_Presence : public android::provider::ContactsContract_StatusUpdates
	{
	public:
		// Fields
		
		ContactsContract_Presence(QAndroidJniObject obj);
		// Constructors
		ContactsContract_Presence();
		
		// Methods
	};
} // namespace android::provider

