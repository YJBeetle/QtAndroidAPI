#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class Contacts_Photos : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CONTENT_DIRECTORY();
		static android::net::Uri CONTENT_URI();
		static jstring DEFAULT_SORT_ORDER();
		
		// QJniObject forward
		template<typename ...Ts> explicit Contacts_Photos(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Contacts_Photos(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

