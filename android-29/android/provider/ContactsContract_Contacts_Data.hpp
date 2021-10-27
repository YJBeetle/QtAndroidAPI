#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::provider
{
	class ContactsContract_Contacts_Data : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CONTENT_DIRECTORY();
		
		ContactsContract_Contacts_Data(QAndroidJniObject obj);
		// Constructors
		ContactsContract_Contacts_Data() = default;
		
		// Methods
	};
} // namespace android::provider

