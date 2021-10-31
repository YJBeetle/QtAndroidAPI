#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class UserDictionary : public __JniBaseClass
	{
	public:
		// Fields
		static jstring AUTHORITY();
		static android::net::Uri CONTENT_URI();
		
		// QJniObject forward
		template<typename ...Ts> explicit UserDictionary(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		UserDictionary(QJniObject obj);
		
		// Constructors
		UserDictionary();
		
		// Methods
	};
} // namespace android::provider

