#include "./URLConnection.hpp"
#include "./ContentHandler.hpp"

namespace java::net
{
	// Fields
	
	// QJniObject forward
	ContentHandler::ContentHandler(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	ContentHandler::ContentHandler()
		: JObject(
			"java.net.ContentHandler",
			"()V"
		) {}
	
	// Methods
	jobject ContentHandler::getContent(java::net::URLConnection arg0)
	{
		return callObjectMethod(
			"getContent",
			"(Ljava/net/URLConnection;)Ljava/lang/Object;",
			arg0.object()
		).object<jobject>();
	}
	jobject ContentHandler::getContent(java::net::URLConnection arg0, jarray arg1)
	{
		return callObjectMethod(
			"getContent",
			"(Ljava/net/URLConnection;[Ljava/lang/Class;)Ljava/lang/Object;",
			arg0.object(),
			arg1
		).object<jobject>();
	}
} // namespace java::net

