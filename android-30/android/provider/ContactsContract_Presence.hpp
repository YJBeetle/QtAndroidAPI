#pragma once

#include "./ContactsContract_Presence.def.hpp"

namespace android::provider
{
	// Fields
	
	// Constructors
	inline ContactsContract_Presence::ContactsContract_Presence()
		: android::provider::ContactsContract_StatusUpdates(
			"android.provider.ContactsContract$Presence",
			"()V"
		) {}
	
	// Methods
} // namespace android::provider

// Base class headers
#include "./ContactsContract_StatusUpdates.hpp"

