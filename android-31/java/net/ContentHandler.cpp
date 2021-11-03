#include "../../JArray.hpp"
#include "../../JObject.hpp"
#include "./URLConnection.hpp"
#include "./ContentHandler.hpp"

namespace java::net
{
	// Fields
	
	// QAndroidJniObject forward
	ContentHandler::ContentHandler(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	ContentHandler::ContentHandler()
		: JObject(
			"java.net.ContentHandler",
			"()V"
		) {}
	
	// Methods
	JObject ContentHandler::getContent(java::net::URLConnection arg0) const
	{
		return callObjectMethod(
			"getContent",
			"(Ljava/net/URLConnection;)Ljava/lang/Object;",
			arg0.object()
		);
	}
	JObject ContentHandler::getContent(java::net::URLConnection arg0, JArray arg1) const
	{
		return callObjectMethod(
			"getContent",
			"(Ljava/net/URLConnection;[Ljava/lang/Class;)Ljava/lang/Object;",
			arg0.object(),
			arg1.object<jarray>()
		);
	}
} // namespace java::net

