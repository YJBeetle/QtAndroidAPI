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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ContactsContract_Contacts_Photo(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ContactsContract_Contacts_Photo(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

