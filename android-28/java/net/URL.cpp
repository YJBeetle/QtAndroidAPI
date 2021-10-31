#include "../io/InputStream.hpp"
#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"
#include "../lang/SecurityManager.hpp"
#include "../lang/ThreadLocal.hpp"
#include "./InetAddress.hpp"
#include "./Proxy.hpp"
#include "./URI.hpp"
#include "./URLConnection.hpp"
#include "./URLStreamHandler.hpp"
#include "../util/Hashtable.hpp"
#include "./URL.hpp"

namespace java::net
{
	// Fields
	
	// QJniObject forward
	URL::URL(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	URL::URL(jstring arg0)
		: __JniBaseClass(
			"java.net.URL",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	URL::URL(java::net::URL &arg0, jstring arg1)
		: __JniBaseClass(
			"java.net.URL",
			"(Ljava/net/URL;Ljava/lang/String;)V",
			arg0.object(),
			arg1
		) {}
	URL::URL(jstring arg0, jstring arg1, jstring arg2)
		: __JniBaseClass(
			"java.net.URL",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2
		) {}
	URL::URL(java::net::URL &arg0, jstring arg1, java::net::URLStreamHandler arg2)
		: __JniBaseClass(
			"java.net.URL",
			"(Ljava/net/URL;Ljava/lang/String;Ljava/net/URLStreamHandler;)V",
			arg0.object(),
			arg1,
			arg2.object()
		) {}
	URL::URL(jstring arg0, jstring arg1, jint arg2, jstring arg3)
		: __JniBaseClass(
			"java.net.URL",
			"(Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;)V",
			arg0,
			arg1,
			arg2,
			arg3
		) {}
	URL::URL(jstring arg0, jstring arg1, jint arg2, jstring arg3, java::net::URLStreamHandler arg4)
		: __JniBaseClass(
			"java.net.URL",
			"(Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;Ljava/net/URLStreamHandler;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.object()
		) {}
	
	// Methods
	void URL::setURLStreamHandlerFactory(__JniBaseClass arg0)
	{
		callStaticMethod<void>(
			"java.net.URL",
			"setURLStreamHandlerFactory",
			"(Ljava/net/URLStreamHandlerFactory;)V",
			arg0.object()
		);
	}
	jboolean URL::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring URL::getAuthority()
	{
		return callObjectMethod(
			"getAuthority",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jobject URL::getContent()
	{
		return callObjectMethod(
			"getContent",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject URL::getContent(jarray arg0)
	{
		return callObjectMethod(
			"getContent",
			"([Ljava/lang/Class;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jint URL::getDefaultPort()
	{
		return callMethod<jint>(
			"getDefaultPort",
			"()I"
		);
	}
	jstring URL::getFile()
	{
		return callObjectMethod(
			"getFile",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring URL::getHost()
	{
		return callObjectMethod(
			"getHost",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring URL::getPath()
	{
		return callObjectMethod(
			"getPath",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint URL::getPort()
	{
		return callMethod<jint>(
			"getPort",
			"()I"
		);
	}
	jstring URL::getProtocol()
	{
		return callObjectMethod(
			"getProtocol",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring URL::getQuery()
	{
		return callObjectMethod(
			"getQuery",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring URL::getRef()
	{
		return callObjectMethod(
			"getRef",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring URL::getUserInfo()
	{
		return callObjectMethod(
			"getUserInfo",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint URL::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	java::net::URLConnection URL::openConnection()
	{
		return callObjectMethod(
			"openConnection",
			"()Ljava/net/URLConnection;"
		);
	}
	java::net::URLConnection URL::openConnection(java::net::Proxy arg0)
	{
		return callObjectMethod(
			"openConnection",
			"(Ljava/net/Proxy;)Ljava/net/URLConnection;",
			arg0.object()
		);
	}
	java::io::InputStream URL::openStream()
	{
		return callObjectMethod(
			"openStream",
			"()Ljava/io/InputStream;"
		);
	}
	jboolean URL::sameFile(java::net::URL arg0)
	{
		return callMethod<jboolean>(
			"sameFile",
			"(Ljava/net/URL;)Z",
			arg0.object()
		);
	}
	jstring URL::toExternalForm()
	{
		return callObjectMethod(
			"toExternalForm",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring URL::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	java::net::URI URL::toURI()
	{
		return callObjectMethod(
			"toURI",
			"()Ljava/net/URI;"
		);
	}
} // namespace java::net

