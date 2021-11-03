#pragma once

#include "../../JObject.hpp"

namespace android::net
{
	class Uri;
}
class JString;

namespace android::provider
{
	class ContactsContract_Groups : public JObject
	{
	public:
		// Fields
		static JString CONTENT_ITEM_TYPE();
		static android::net::Uri CONTENT_SUMMARY_URI();
		static JString CONTENT_TYPE();
		static android::net::Uri CONTENT_URI();
		
		// QJniObject forward
		template<typename ...Ts> explicit ContactsContract_Groups(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ContactsContract_Groups(QJniObject obj);
		
		// Constructors
		
		// Methods
		static JObject newEntityIterator(JObject arg0);
	};
} // namespace android::provider

