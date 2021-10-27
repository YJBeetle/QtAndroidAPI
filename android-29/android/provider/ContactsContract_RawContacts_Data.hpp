#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::provider
{
	class ContactsContract_RawContacts_Data : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CONTENT_DIRECTORY();
		
		ContactsContract_RawContacts_Data(QAndroidJniObject obj);
		// Constructors
		ContactsContract_RawContacts_Data() = default;
		
		// Methods
	};
} // namespace android::provider

