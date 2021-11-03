#pragma once

#include "../../JObject.hpp"


namespace android::provider
{
	class ContactsContract_CommonDataKinds : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ContactsContract_CommonDataKinds(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ContactsContract_CommonDataKinds(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

