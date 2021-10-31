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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ContactsContract_Contacts_Entity(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ContactsContract_Contacts_Entity(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

