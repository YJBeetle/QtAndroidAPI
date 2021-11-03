#pragma once

#include "../../JObject.hpp"

namespace android::net
{
	class Uri;
}
class JString;

namespace android::provider
{
	class ContactsContract_ProviderStatus : public JObject
	{
	public:
		// Fields
		static JString CONTENT_TYPE();
		static android::net::Uri CONTENT_URI();
		static JString DATABASE_CREATION_TIMESTAMP();
		static JString STATUS();
		static jint STATUS_BUSY();
		static jint STATUS_EMPTY();
		static jint STATUS_NORMAL();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ContactsContract_ProviderStatus(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ContactsContract_ProviderStatus(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

