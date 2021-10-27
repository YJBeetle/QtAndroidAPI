#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::provider
{
	class ContactsContract_RawContacts_Entity : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CONTENT_DIRECTORY();
		static jstring DATA_ID();
		
		ContactsContract_RawContacts_Entity(QAndroidJniObject obj);
		// Constructors
		ContactsContract_RawContacts_Entity() = default;
		
		// Methods
	};
} // namespace android::provider

