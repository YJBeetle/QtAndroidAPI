#pragma once

#include "../../JObject.hpp"

namespace android::accounts
{
	class Account;
}
namespace android::content
{
	class ContentResolver;
}
namespace android::net
{
	class Uri;
}
class JString;

namespace android::provider
{
	class ContactsContract_Settings : public JObject
	{
	public:
		// Fields
		static JString ACTION_SET_DEFAULT_ACCOUNT();
		static JString CONTENT_ITEM_TYPE();
		static JString CONTENT_TYPE();
		static android::net::Uri CONTENT_URI();
		
		// QJniObject forward
		template<typename ...Ts> explicit ContactsContract_Settings(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ContactsContract_Settings(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static android::accounts::Account getDefaultAccount(android::content::ContentResolver arg0);
	};
} // namespace android::provider

