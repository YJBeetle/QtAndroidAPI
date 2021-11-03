#pragma once

#include "../../JObject.hpp"


namespace android::provider
{
	class ContactsContract_Intents_Insert : public JObject
	{
	public:
		// Fields
		static jstring ACTION();
		static jstring COMPANY();
		static jstring DATA();
		static jstring EMAIL();
		static jstring EMAIL_ISPRIMARY();
		static jstring EMAIL_TYPE();
		static jstring EXTRA_ACCOUNT();
		static jstring EXTRA_DATA_SET();
		static jstring FULL_MODE();
		static jstring IM_HANDLE();
		static jstring IM_ISPRIMARY();
		static jstring IM_PROTOCOL();
		static jstring JOB_TITLE();
		static jstring NAME();
		static jstring NOTES();
		static jstring PHONE();
		static jstring PHONETIC_NAME();
		static jstring PHONE_ISPRIMARY();
		static jstring PHONE_TYPE();
		static jstring POSTAL();
		static jstring POSTAL_ISPRIMARY();
		static jstring POSTAL_TYPE();
		static jstring SECONDARY_EMAIL();
		static jstring SECONDARY_EMAIL_TYPE();
		static jstring SECONDARY_PHONE();
		static jstring SECONDARY_PHONE_TYPE();
		static jstring TERTIARY_EMAIL();
		static jstring TERTIARY_EMAIL_TYPE();
		static jstring TERTIARY_PHONE();
		static jstring TERTIARY_PHONE_TYPE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ContactsContract_Intents_Insert(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ContactsContract_Intents_Insert(QAndroidJniObject obj);
		
		// Constructors
		ContactsContract_Intents_Insert();
		
		// Methods
	};
} // namespace android::provider

