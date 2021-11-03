#pragma once

#include "../../JObject.hpp"

namespace android::net
{
	class Uri;
}
class JString;

namespace android::provider
{
	class ContactsContract : public JObject
	{
	public:
		// Fields
		static JString AUTHORITY();
		static android::net::Uri AUTHORITY_URI();
		static JString CALLER_IS_SYNCADAPTER();
		static JString DEFERRED_SNIPPETING();
		static JString DEFERRED_SNIPPETING_QUERY();
		static JString DIRECTORY_PARAM_KEY();
		static JString LIMIT_PARAM_KEY();
		static JString PRIMARY_ACCOUNT_NAME();
		static JString PRIMARY_ACCOUNT_TYPE();
		static JString REMOVE_DUPLICATE_ENTRIES();
		static JString STREQUENT_PHONE_ONLY();
		
		// QJniObject forward
		template<typename ...Ts> explicit ContactsContract(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ContactsContract(QJniObject obj);
		
		// Constructors
		ContactsContract();
		
		// Methods
		static jboolean isProfileId(jlong arg0);
	};
} // namespace android::provider

