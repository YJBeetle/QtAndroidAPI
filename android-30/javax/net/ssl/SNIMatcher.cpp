#include "./SNIServerName.hpp"
#include "./SNIMatcher.hpp"

namespace javax::net::ssl
{
	// Fields
	
	// QJniObject forward
	SNIMatcher::SNIMatcher(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint SNIMatcher::getType()
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
	jboolean SNIMatcher::matches(javax::net::ssl::SNIServerName arg0)
	{
		return callMethod<jboolean>(
			"matches",
			"(Ljavax/net/ssl/SNIServerName;)Z",
			arg0.object()
		);
	}
} // namespace javax::net::ssl

