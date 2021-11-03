#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::provider
{
	class ContactsContract_RawContacts_DisplayPhoto : public JObject
	{
	public:
		// Fields
		static JString CONTENT_DIRECTORY();
		
		// QJniObject forward
		template<typename ...Ts> explicit ContactsContract_RawContacts_DisplayPhoto(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ContactsContract_RawContacts_DisplayPhoto(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

