#pragma once

#include "../../JObject.hpp"

namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class ContactsContract_ProviderStatus : public JObject
	{
	public:
		// Fields
		static jstring CONTENT_TYPE();
		static android::net::Uri CONTENT_URI();
		static jstring DATABASE_CREATION_TIMESTAMP();
		static jstring STATUS();
		static jint STATUS_BUSY();
		static jint STATUS_EMPTY();
		static jint STATUS_NORMAL();
		
		// QJniObject forward
		template<typename ...Ts> explicit ContactsContract_ProviderStatus(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ContactsContract_ProviderStatus(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

