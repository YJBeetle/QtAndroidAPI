#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::provider
{
	class ContactsContract_Contacts_Photo : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CONTENT_DIRECTORY();
		static jstring DISPLAY_PHOTO();
		static jstring PHOTO();
		static jstring PHOTO_FILE_ID();
		
		ContactsContract_Contacts_Photo(QAndroidJniObject obj);
		// Constructors
		ContactsContract_Contacts_Photo() = default;
		
		// Methods
	};
} // namespace android::provider

