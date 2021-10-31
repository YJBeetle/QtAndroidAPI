#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class Contacts_Groups : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CONTENT_ITEM_TYPE();
		static jstring CONTENT_TYPE();
		static android::net::Uri CONTENT_URI();
		static jstring DEFAULT_SORT_ORDER();
		static android::net::Uri DELETED_CONTENT_URI();
		static jstring GROUP_ANDROID_STARRED();
		static jstring GROUP_MY_CONTACTS();
		
		// QJniObject forward
		template<typename ...Ts> explicit Contacts_Groups(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Contacts_Groups(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

