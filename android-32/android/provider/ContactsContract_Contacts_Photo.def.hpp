#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::provider
{
	class ContactsContract_Contacts_Photo : public JObject
	{
	public:
		// Fields
		static JString CONTENT_DIRECTORY();
		static JString DISPLAY_PHOTO();
		static JString PHOTO();
		static JString PHOTO_FILE_ID();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ContactsContract_Contacts_Photo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ContactsContract_Contacts_Photo(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

