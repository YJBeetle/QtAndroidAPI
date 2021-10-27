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
		
		IntentFilter_AuthorityEntry(QAndroidJniObject obj);
		// Constructors
		IntentFilter_AuthorityEntry(jstring &arg0, jstring &arg1);
		IntentFilter_AuthorityEntry(const QString &arg0, const QString &arg1);
		IntentFilter_AuthorityEntry() = default;
		
		// Methods
		jboolean equals(jobject arg0);
		jstring getHost();
		jint getPort();
		jint match(android::net::Uri arg0);
	};
} // namespace android::content

