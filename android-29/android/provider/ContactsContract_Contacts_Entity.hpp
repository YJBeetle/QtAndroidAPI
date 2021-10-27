#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::provider
{
	class ContactsContract_Contacts_Entity : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CONTENT_DIRECTORY();
		static jstring DATA_ID();
		static jstring RAW_CONTACT_ID();
		
		ContactsContract_Contacts_Entity(QAndroidJniObject obj);
		// Constructors
		ContactsContract_Contacts_Entity() = default;
		
		// Methods
	};
} // namespace android::provider

