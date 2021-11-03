#pragma once

#include "../../JObject.hpp"

namespace android::net
{
	class Uri;
}
class JString;

namespace android::provider
{
	class Contacts_Extensions : public JObject
	{
	public:
		// Fields
		static JString CONTENT_ITEM_TYPE();
		static JString CONTENT_TYPE();
		static android::net::Uri CONTENT_URI();
		static JString DEFAULT_SORT_ORDER();
		static JString PERSON_ID();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Contacts_Extensions(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Contacts_Extensions(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

