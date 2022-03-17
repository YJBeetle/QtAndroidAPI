#pragma once

#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../io/InputStream.def.hpp"
#include "../io/ObjectInputStream.def.hpp"
#include "../io/ObjectOutputStream.def.hpp"
#include "../../JObject.hpp"
#include "../lang/SecurityManager.def.hpp"
#include "../../JString.hpp"
#include "../lang/ThreadLocal.def.hpp"
#include "./InetAddress.def.hpp"
#include "./Proxy.def.hpp"
#include "./URI.def.hpp"
#include "./URLConnection.def.hpp"
#include "./URLStreamHandler.def.hpp"
#include "../util/Hashtable.def.hpp"
#include "./URL.def.hpp"

namespace java::net
{
	// Fields
	
	// Constructors
	inline URL::URL(JString arg0)
		: JObject(
			"java.net.URL",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline URL::URL(java::net::URL &arg0, JString arg1)
		: JObject(
			"java.net.URL",
			"(Ljava/net/URL;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		) {}
	inline URL::URL(JString arg0, JString arg1, JString arg2)
		: JObject(
			"java.net.URL",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		) {}
	inline URL::URL(java::net::URL &arg0, JString arg1, java::net::URLStreamHandler arg2)
		: JObject(
			"java.net.URL",
			"(Ljava/net/URL;Ljava/lang/String;Ljava/net/URLStreamHandler;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object()
		) {}
	inline URL::URL(JString arg0, JString arg1, jint arg2, JString arg3)
		: JObject(
			"java.net.URL",
			"(Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2,
			arg3.object<jstring>()
		) {}
	inline URL::URL(JString arg0, JString arg1, jint arg2, JString arg3, java::net::URLStreamHandler arg4)
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
	inline void URL::setURLStreamHandlerFactory(JObject arg0)
	{
		callStaticMethod<void>(
			"java.net.URL",
			"setURLStreamHandlerFactory",
			"(Ljava/net/URLStreamHandlerFactory;)V",
			arg0.object()
		);
	}
	inline jboolean URL::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JString URL::getAuthority() const
	{
		return callObjectMethod(
			"getAuthority",
			"()Ljava/lang/String;"
		);
	}
	inline JObject URL::getContent() const
	{
		return callObjectMethod(
			"getContent",
			"()Ljava/lang/Object;"
		);
	}
	inline JObject URL::getContent(JArray arg0) const
	{
		return callObjectMethod(
			"getContent",
			"([Ljava/lang/Class;)Ljava/lang/Object;",
			arg0.object<jarray>()
		);
	}
	inline jint URL::getDefaultPort() const
	{
		return callMethod<jint>(
			"getDefaultPort",
			"()I"
		);
	}
	inline JString URL::getFile() const
	{
		return callObjectMethod(
			"getFile",
			"()Ljava/lang/String;"
		);
	}
	inline JString URL::getHost() const
	{
		return callObjectMethod(
			"getHost",
			"()Ljava/lang/String;"
		);
	}
	inline JString URL::getPath() const
	{
		return callObjectMethod(
			"getPath",
			"()Ljava/lang/String;"
		);
	}
	inline jint URL::getPort() const
	{
		return callMethod<jint>(
			"getPort",
			"()I"
		);
	}
	inline JString URL::getProtocol() const
	{
		return callObjectMethod(
			"getProtocol",
			"()Ljava/lang/String;"
		);
	}
	inline JString URL::getQuery() const
	{
		return callObjectMethod(
			"getQuery",
			"()Ljava/lang/String;"
		);
	}
	inline JString URL::getRef() const
	{
		return callObjectMethod(
			"getRef",
			"()Ljava/lang/String;"
		);
	}
	inline JString URL::getUserInfo() const
	{
		return callObjectMethod(
			"getUserInfo",
			"()Ljava/lang/String;"
		);
	}
	inline jint URL::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline java::net::URLConnection URL::openConnection() const
	{
		return callObjectMethod(
			"openConnection",
			"()Ljava/net/URLConnection;"
		);
	}
	inline java::net::URLConnection URL::openConnection(java::net::Proxy arg0) const
	{
		return callObjectMethod(
			"openConnection",
			"(Ljava/net/Proxy;)Ljava/net/URLConnection;",
			arg0.object()
		);
	}
	inline java::io::InputStream URL::openStream() const
	{
		return callObjectMethod(
			"openStream",
			"()Ljava/io/InputStream;"
		);
	}
	inline jboolean URL::sameFile(java::net::URL arg0) const
	{
		return callMethod<jboolean>(
			"sameFile",
			"(Ljava/net/URL;)Z",
			arg0.object()
		);
	}
	inline JString URL::toExternalForm() const
	{
		return callObjectMethod(
			"toExternalForm",
			"()Ljava/lang/String;"
		);
	}
	inline JString URL::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline java::net::URI URL::toURI() const
	{
		return callObjectMethod(
			"toURI",
			"()Ljava/net/URI;"
		);
	}
} // namespace java::net

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::net;
#endif
