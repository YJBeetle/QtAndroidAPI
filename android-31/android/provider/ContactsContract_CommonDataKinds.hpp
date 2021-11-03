#pragma once

#include "../../JObject.hpp"

namespace android::provider
{
	class ContactsContract_CommonDataKinds : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ContactsContract_CommonDataKinds(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ContactsContract_CommonDataKinds(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

