#include "./SNIServerName.hpp"
#include "./SNIMatcher.hpp"

namespace javax::net::ssl
{
	// Fields
	
	SNIMatcher::SNIMatcher(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jint SNIMatcher::getType()
	{
		return __thiz.callMethod<jint>(
			"getType",
			"()I"
		);
	}
	jboolean SNIMatcher::matches(javax::net::ssl::SNIServerName arg0)
	{
		return __thiz.callMethod<jboolean>(
			"matches",
			"(Ljavax/net/ssl/SNIServerName;)Z",
			arg0.__jniObject().object()
		);
	}
} // namespace javax::net::ssl

