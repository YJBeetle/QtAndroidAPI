#pragma once

#include "../../JObject.hpp"

namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class ContactsContract_RawContactsEntity : public JObject
	{
	public:
		// Fields
		static jstring CONTENT_TYPE();
		static android::net::Uri CONTENT_URI();
		static jstring DATA_ID();
		static android::net::Uri PROFILE_CONTENT_URI();
		
		// QJniObject forward
		template<typename ...Ts> explicit ContactsContract_RawContactsEntity(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ContactsContract_RawContactsEntity(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

