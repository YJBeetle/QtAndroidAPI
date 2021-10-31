#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::net
{
	class Uri;
}

namespace android::content
{
	class IntentFilter_AuthorityEntry : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit IntentFilter_AuthorityEntry(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		IntentFilter_AuthorityEntry(QJniObject obj);
		
		// Constructors
		IntentFilter_AuthorityEntry(jstring arg0, jstring arg1);
		
		// Methods
		jboolean equals(jobject arg0);
		jstring getHost();
		jint getPort();
		jint match(android::net::Uri arg0);
	};
} // namespace android::content

