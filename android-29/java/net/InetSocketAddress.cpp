#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"
#include "./InetAddress.hpp"
#include "./InetSocketAddress.hpp"

namespace java::net
{
	// Fields
	
	// QAndroidJniObject forward
	InetSocketAddress::InetSocketAddress(QAndroidJniObject obj) : java::net::SocketAddress(obj) {}
	
	// Constructors
	InetSocketAddress::InetSocketAddress(jint arg0)
		: java::net::SocketAddress(
			"java.net.InetSocketAddress",
			"(I)V",
			arg0
		) {}
	InetSocketAddress::InetSocketAddress(jstring arg0, jint arg1)
		: java::net::SocketAddress(
			"java.net.InetSocketAddress",
			"(Ljava/lang/String;I)V",
			arg0,
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
	java::net::InetSocketAddress InetSocketAddress::createUnresolved(jstring arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"java.net.InetSocketAddress",
			"createUnresolved",
			"(Ljava/lang/String;I)Ljava/net/InetSocketAddress;",
			arg0,
			arg1
		);
	}
	jboolean InetSocketAddress::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	java::net::InetAddress InetSocketAddress::getAddress()
	{
		return callObjectMethod(
			"getAddress",
			"()Ljava/net/InetAddress;"
		);
	}
	jstring InetSocketAddress::getHostName()
	{
		return callObjectMethod(
			"getHostName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring InetSocketAddress::getHostString()
	{
		return callObjectMethod(
			"getHostString",
			"()Ljava/lang/String;"
		).object<jstring>();
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
	jstring InetSocketAddress::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::net

