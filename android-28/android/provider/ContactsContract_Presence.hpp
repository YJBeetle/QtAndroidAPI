#pragma once

#include "./ContactsContract_StatusUpdates.hpp"

namespace android::provider
{
	class ContactsContract_Presence : public android::provider::ContactsContract_StatusUpdates
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ContactsContract_Presence(const char *className, const char *sig, Ts...agv) : android::provider::ContactsContract_StatusUpdates(className, sig, std::forward<Ts>(agv)...) {}
		ContactsContract_Presence(QJniObject obj);
		
		// Constructors
		ContactsContract_Presence();
		
		// Methods
	};
} // namespace android::provider

