#pragma once

#include "../../JObject.hpp"

namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class ContactsContract : public JObject
	{
	public:
		// Fields
		static jstring AUTHORITY();
		static android::net::Uri AUTHORITY_URI();
		static jstring CALLER_IS_SYNCADAPTER();
		static jstring DEFERRED_SNIPPETING();
		static jstring DEFERRED_SNIPPETING_QUERY();
		static jstring DIRECTORY_PARAM_KEY();
		static jstring LIMIT_PARAM_KEY();
		static jstring PRIMARY_ACCOUNT_NAME();
		static jstring PRIMARY_ACCOUNT_TYPE();
		static jstring REMOVE_DUPLICATE_ENTRIES();
		static jstring STREQUENT_PHONE_ONLY();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ContactsContract(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ContactsContract(QAndroidJniObject obj);
		
		// Constructors
		ContactsContract();
		
		// Methods
		static jboolean isProfileId(jlong arg0);
	};
} // namespace android::provider

