#include "../../JArray.hpp"
#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./InetAddress.hpp"
#include "./InetSocketAddress.hpp"

namespace java::net
{
	// Fields
	
	// QJniObject forward
	InetSocketAddress::InetSocketAddress(QJniObject obj) : java::net::SocketAddress(obj) {}
	
	// Constructors
	InetSocketAddress::InetSocketAddress(jint arg0)
		: java::net::SocketAddress(
			"java.net.InetSocketAddress",
			"(I)V",
			arg0
		) {}
	InetSocketAddress::InetSocketAddress(JString arg0, jint arg1)
		: java::net::SocketAddress(
			"java.net.InetSocketAddress",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		) {}
	InetSocketAddress::InetSocketAddress(java::net::InetAddress arg0, jint arg1)
		: java::net::SocketAddress(
			"java.net.InetSocketAddress",
			"(Ljava/net/InetAddress;I)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	java::net::InetSocketAddress InetSocketAddress::createUnresolved(JString arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"java.net.InetSocketAddress",
			"createUnresolved",
			"(Ljava/lang/String;I)Ljava/net/InetSocketAddress;",
			arg0.object<jstring>(),
			arg1
		);
	}
	jboolean InetSocketAddress::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	java::net::InetAddress InetSocketAddress::getAddress()
	{
		return callObjectMethod(
			"getAddress",
			"()Ljava/net/InetAddress;"
		);
	}
	JString InetSocketAddress::getHostName()
	{
		return callObjectMethod(
			"getHostName",
			"()Ljava/lang/String;"
		);
	}
	JString InetSocketAddress::getHostString()
	{
		return callObjectMethod(
			"getHostString",
			"()Ljava/lang/String;"
		);
	}
	jint InetSocketAddress::getPort()
	{
		return callMethod<jint>(
			"getPort",
			"()I"
		);
	}
	jint InetSocketAddress::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean InetSocketAddress::isUnresolved()
	{
		return callMethod<jboolean>(
			"isUnresolved",
			"()Z"
		);
	}
	JString InetSocketAddress::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::net

