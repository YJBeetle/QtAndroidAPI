#pragma once

#include "../../JObject.hpp"

namespace android::net
{
	class Uri;
}
class JString;

namespace android::provider
{
	class Contacts_Photos : public JObject
	{
	public:
		// Fields
		static JString CONTENT_DIRECTORY();
		static android::net::Uri CONTENT_URI();
		static JString DEFAULT_SORT_ORDER();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Contacts_Photos(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Contacts_Photos(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

