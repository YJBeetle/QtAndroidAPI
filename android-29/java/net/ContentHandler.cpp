#include "./URLConnection.hpp"
#include "./ContentHandler.hpp"

namespace java::net
{
	// Fields
	
	ContentHandler::ContentHandler(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ContentHandler::ContentHandler()
	{
		__thiz = QAndroidJniObject(
			"java.net.ContentHandler",
			"()V"
		);
	}
	
	// Methods
	jobject ContentHandler::getContent(java::net::URLConnection arg0)
	{
		return __thiz.callObjectMethod(
			"getContent",
			"(Ljava/net/URLConnection;)Ljava/lang/Object;",
			arg0.__jniObject().object()
		).object<jobject>();
	}
	jobject ContentHandler::getContent(java::net::URLConnection arg0, jarray arg1)
	{
		return __thiz.callObjectMethod(
			"getContent",
			"(Ljava/net/URLConnection;[Ljava/lang/Class;)Ljava/lang/Object;",
			arg0.__jniObject().object(),
			arg1
		).object<jobject>();
	}
} // namespace java::net

