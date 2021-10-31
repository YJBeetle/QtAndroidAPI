#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::provider
{
	class ContactsContract_CommonDataKinds : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ContactsContract_CommonDataKinds(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ContactsContract_CommonDataKinds(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

