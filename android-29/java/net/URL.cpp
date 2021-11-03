#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../io/InputStream.hpp"
#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"
#include "../../JObject.hpp"
#include "../lang/SecurityManager.hpp"
#include "../../JString.hpp"
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
	URL::URL(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	URL::URL(JString arg0)
		: JObject(
			"java.net.URL",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	URL::URL(java::net::URL &arg0, JString arg1)
		: JObject(
			"java.net.URL",
			"(Ljava/net/URL;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		) {}
	URL::URL(JString arg0, JString arg1, JString arg2)
		: JObject(
			"java.net.URL",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		) {}
	URL::URL(java::net::URL &arg0, JString arg1, java::net::URLStreamHandler arg2)
		: JObject(
			"java.net.URL",
			"(Ljava/net/URL;Ljava/lang/String;Ljava/net/URLStreamHandler;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object()
		) {}
	URL::URL(JString arg0, JString arg1, jint arg2, JString arg3)
		: JObject(
			"java.net.URL",
			"(Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2,
			arg3.object<jstring>()
		) {}
	URL::URL(JString arg0, JString arg1, jint arg2, JString arg3, java::net::URLStreamHandler arg4)
		: JObject(
			"java.net.URL",
			"(Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;Ljava/net/URLStreamHandler;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2,
			arg3.object<jstring>(),
			arg4.object()
		) {}
	
	// Methods
	void URL::setURLStreamHandlerFactory(JObject arg0)
	{
		callStaticMethod<void>(
			"java.net.URL",
			"setURLStreamHandlerFactory",
			"(Ljava/net/URLStreamHandlerFactory;)V",
			arg0.object()
		);
	}
	jboolean URL::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JString URL::getAuthority() const
	{
		return callObjectMethod(
			"getAuthority",
			"()Ljava/lang/String;"
		);
	}
	JObject URL::getContent() const
	{
		return callObjectMethod(
			"getContent",
			"()Ljava/lang/Object;"
		);
	}
	JObject URL::getContent(JArray arg0) const
	{
		return callObjectMethod(
			"getContent",
			"([Ljava/lang/Class;)Ljava/lang/Object;",
			arg0.object<jarray>()
		);
	}
	jint URL::getDefaultPort() const
	{
		return callMethod<jint>(
			"getDefaultPort",
			"()I"
		);
	}
	JString URL::getFile() const
	{
		return callObjectMethod(
			"getFile",
			"()Ljava/lang/String;"
		);
	}
	JString URL::getHost() const
	{
		return callObjectMethod(
			"getHost",
			"()Ljava/lang/String;"
		);
	}
	JString URL::getPath() const
	{
		return callObjectMethod(
			"getPath",
			"()Ljava/lang/String;"
		);
	}
	jint URL::getPort() const
	{
		return callMethod<jint>(
			"getPort",
			"()I"
		);
	}
	JString URL::getProtocol() const
	{
		return callObjectMethod(
			"getProtocol",
			"()Ljava/lang/String;"
		);
	}
	JString URL::getQuery() const
	{
		return callObjectMethod(
			"getQuery",
			"()Ljava/lang/String;"
		);
	}
	JString URL::getRef() const
	{
		return callObjectMethod(
			"getRef",
			"()Ljava/lang/String;"
		);
	}
	JString URL::getUserInfo() const
	{
		return callObjectMethod(
			"getUserInfo",
			"()Ljava/lang/String;"
		);
	}
	jint URL::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	java::net::URLConnection URL::openConnection() const
	{
		return callObjectMethod(
			"openConnection",
			"()Ljava/net/URLConnection;"
		);
	}
	java::net::URLConnection URL::openConnection(java::net::Proxy arg0) const
	{
		return callObjectMethod(
			"openConnection",
			"(Ljava/net/Proxy;)Ljava/net/URLConnection;",
			arg0.object()
		);
	}
	java::io::InputStream URL::openStream() const
	{
		return callObjectMethod(
			"openStream",
			"()Ljava/io/InputStream;"
		);
	}
	jboolean URL::sameFile(java::net::URL arg0) const
	{
		return callMethod<jboolean>(
			"sameFile",
			"(Ljava/net/URL;)Z",
			arg0.object()
		);
	}
	JString URL::toExternalForm() const
	{
		return callObjectMethod(
			"toExternalForm",
			"()Ljava/lang/String;"
		);
	}
	JString URL::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	java::net::URI URL::toURI() const
	{
		return callObjectMethod(
			"toURI",
			"()Ljava/net/URI;"
		);
	}
} // namespace java::net

