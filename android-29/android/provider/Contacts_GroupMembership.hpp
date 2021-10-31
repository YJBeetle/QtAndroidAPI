#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class Contacts_GroupMembership : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CONTENT_DIRECTORY();
		static jstring CONTENT_ITEM_TYPE();
		static jstring CONTENT_TYPE();
		static android::net::Uri CONTENT_URI();
		static jstring DEFAULT_SORT_ORDER();
		static jstring GROUP_ID();
		static jstring GROUP_SYNC_ACCOUNT();
		static jstring GROUP_SYNC_ACCOUNT_TYPE();
		static jstring GROUP_SYNC_ID();
		static jstring PERSON_ID();
		static android::net::Uri RAW_CONTENT_URI();
		
		// QJniObject forward
		template<typename ...Ts> explicit Contacts_GroupMembership(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Contacts_GroupMembership(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

