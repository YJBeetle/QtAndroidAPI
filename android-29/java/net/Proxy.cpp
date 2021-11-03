#include "./Proxy_Type.hpp"
#include "./SocketAddress.hpp"
#include "./Proxy.hpp"

namespace java::net
{
	// Fields
	java::net::Proxy Proxy::NO_PROXY()
	{
		return getStaticObjectField(
			"java.net.Proxy",
			"NO_PROXY",
			"Ljava/net/Proxy;"
		);
	}
	
	// QAndroidJniObject forward
	Proxy::Proxy(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	Proxy::Proxy(java::net::Proxy_Type arg0, java::net::SocketAddress arg1)
		: JObject(
			"java.net.Proxy",
			"(Ljava/net/Proxy$Type;Ljava/net/SocketAddress;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	java::net::SocketAddress Proxy::address()
	{
		return callObjectMethod(
			"address",
			"()Ljava/net/SocketAddress;"
		);
	}
	jboolean Proxy::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint Proxy::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring Proxy::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	java::net::Proxy_Type Proxy::type()
	{
		return callObjectMethod(
			"type",
			"()Ljava/net/Proxy$Type;"
		);
	}
} // namespace java::net

