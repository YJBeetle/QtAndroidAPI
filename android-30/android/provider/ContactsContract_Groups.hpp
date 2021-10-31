#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class ContactsContract_Groups : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CONTENT_ITEM_TYPE();
		static android::net::Uri CONTENT_SUMMARY_URI();
		static jstring CONTENT_TYPE();
		static android::net::Uri CONTENT_URI();
		
		// QJniObject forward
		template<typename ...Ts> explicit ContactsContract_Groups(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ContactsContract_Groups(QJniObject obj);
		
		// Constructors
		
		// Methods
		static __JniBaseClass newEntityIterator(__JniBaseClass arg0);
	};
} // namespace android::provider

