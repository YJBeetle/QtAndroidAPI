#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::provider
{
	class ContactsContract_RawContacts_DisplayPhoto : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CONTENT_DIRECTORY();
		
		ContactsContract_RawContacts_DisplayPhoto(QAndroidJniObject obj);
		// Constructors
		ContactsContract_RawContacts_DisplayPhoto() = default;
		
		// Methods
	};
} // namespace android::provider

