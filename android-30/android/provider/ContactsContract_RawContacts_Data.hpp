#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::provider
{
	class ContactsContract_RawContacts_Data : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CONTENT_DIRECTORY();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ContactsContract_RawContacts_Data(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ContactsContract_RawContacts_Data(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

