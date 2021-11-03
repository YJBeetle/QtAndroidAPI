#pragma once

#include "../../JObject.hpp"

namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class ContactsContract_DeletedContacts : public JObject
	{
	public:
		// Fields
		static android::net::Uri CONTENT_URI();
		static jlong DAYS_KEPT_MILLISECONDS();
		
		// QJniObject forward
		template<typename ...Ts> explicit ContactsContract_DeletedContacts(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ContactsContract_DeletedContacts(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

