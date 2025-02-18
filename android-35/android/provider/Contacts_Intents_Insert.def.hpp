#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::provider
{
	class Contacts_Intents_Insert : public JObject
	{
	public:
		// Fields
		static JString ACTION();
		static JString COMPANY();
		static JString EMAIL();
		static JString EMAIL_ISPRIMARY();
		static JString EMAIL_TYPE();
		static JString FULL_MODE();
		static JString IM_HANDLE();
		static JString IM_ISPRIMARY();
		static JString IM_PROTOCOL();
		static JString JOB_TITLE();
		static JString NAME();
		static JString NOTES();
		static JString PHONE();
		static JString PHONETIC_NAME();
		static JString PHONE_ISPRIMARY();
		static JString PHONE_TYPE();
		static JString POSTAL();
		static JString POSTAL_ISPRIMARY();
		static JString POSTAL_TYPE();
		static JString SECONDARY_EMAIL();
		static JString SECONDARY_EMAIL_TYPE();
		static JString SECONDARY_PHONE();
		static JString SECONDARY_PHONE_TYPE();
		static JString TERTIARY_EMAIL();
		static JString TERTIARY_EMAIL_TYPE();
		static JString TERTIARY_PHONE();
		static JString TERTIARY_PHONE_TYPE();
		
		// QJniObject forward
		template<typename ...Ts> explicit Contacts_Intents_Insert(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Contacts_Intents_Insert(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		Contacts_Intents_Insert();
		
		// Methods
	};
} // namespace android::provider

