#pragma once

#include "../../JObject.hpp"

namespace android::net
{
	class Uri;
}
class JString;

namespace android::provider
{
	class Contacts_GroupMembership : public JObject
	{
	public:
		// Fields
		static JString CONTENT_DIRECTORY();
		static JString CONTENT_ITEM_TYPE();
		static JString CONTENT_TYPE();
		static android::net::Uri CONTENT_URI();
		static JString DEFAULT_SORT_ORDER();
		static JString GROUP_ID();
		static JString GROUP_SYNC_ACCOUNT();
		static JString GROUP_SYNC_ACCOUNT_TYPE();
		static JString GROUP_SYNC_ID();
		static JString PERSON_ID();
		static android::net::Uri RAW_CONTENT_URI();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Contacts_GroupMembership(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Contacts_GroupMembership(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

