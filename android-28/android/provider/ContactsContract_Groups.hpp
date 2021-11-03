#pragma once

#include "../../JObject.hpp"

namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class ContactsContract_Groups : public JObject
	{
	public:
		// Fields
		static jstring CONTENT_ITEM_TYPE();
		static android::net::Uri CONTENT_SUMMARY_URI();
		static jstring CONTENT_TYPE();
		static android::net::Uri CONTENT_URI();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ContactsContract_Groups(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ContactsContract_Groups(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static JObject newEntityIterator(JObject arg0);
	};
} // namespace android::provider

