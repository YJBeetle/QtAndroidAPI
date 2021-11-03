#include "../../JByteArray.hpp"
#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./NetworkInterface.hpp"
#include "./InetAddress.hpp"

namespace java::net
{
	// Fields
	
	// QAndroidJniObject forward
	InetAddress::InetAddress(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JArray InetAddress::getAllByName(JString arg0)
	{
		return callStaticObjectMethod(
			"java.net.InetAddress",
			"getAllByName",
			"(Ljava/lang/String;)[Ljava/net/InetAddress;",
			arg0.object<jstring>()
		);
	}
	java::net::InetAddress InetAddress::getByAddress(JByteArray arg0)
	{
		return callStaticObjectMethod(
			"java.net.InetAddress",
			"getByAddress",
			"([B)Ljava/net/InetAddress;",
			arg0.object<jbyteArray>()
		);
	}
	java::net::InetAddress InetAddress::getByAddress(JString arg0, JByteArray arg1)
	{
		return callStaticObjectMethod(
			"java.net.InetAddress",
			"getByAddress",
			"(Ljava/lang/String;[B)Ljava/net/InetAddress;",
			arg0.object<jstring>(),
			arg1.object<jbyteArray>()
		);
	}
	java::net::InetAddress InetAddress::getByName(JString arg0)
	{
		return callStaticObjectMethod(
			"java.net.InetAddress",
			"getByName",
			"(Ljava/lang/String;)Ljava/net/InetAddress;",
			arg0.object<jstring>()
		);
	}
	java::net::InetAddress InetAddress::getLocalHost()
	{
		return callStaticObjectMethod(
			"java.net.InetAddress",
			"getLocalHost",
			"()Ljava/net/InetAddress;"
		);
	}
	java::net::InetAddress InetAddress::getLoopbackAddress()
	{
		return callStaticObjectMethod(
			"java.net.InetAddress",
			"getLoopbackAddress",
			"()Ljava/net/InetAddress;"
		);
	}
	jboolean InetAddress::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JByteArray InetAddress::getAddress()
	{
		return callObjectMethod(
			"getAddress",
			"()[B"
		);
	}
	JString InetAddress::getCanonicalHostName()
	{
		return callObjectMethod(
			"getCanonicalHostName",
			"()Ljava/lang/String;"
		);
	}
	JString InetAddress::getHostAddress()
	{
		return callObjectMethod(
			"getHostAddress",
			"()Ljava/lang/String;"
		);
	}
	JString InetAddress::getHostName()
	{
		return callObjectMethod(
			"getHostName",
			"()Ljava/lang/String;"
		);
	}
	jint InetAddress::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean InetAddress::isAnyLocalAddress()
	{
		return callMethod<jboolean>(
			"isAnyLocalAddress",
			"()Z"
		);
	}
	jboolean InetAddress::isLinkLocalAddress()
	{
		return callMethod<jboolean>(
			"isLinkLocalAddress",
			"()Z"
		);
	}
	jboolean InetAddress::isLoopbackAddress()
	{
		return callMethod<jboolean>(
			"isLoopbackAddress",
			"()Z"
		);
	}
	jboolean InetAddress::isMCGlobal()
	{
		return callMethod<jboolean>(
			"isMCGlobal",
			"()Z"
		);
	}
	jboolean InetAddress::isMCLinkLocal()
	{
		return callMethod<jboolean>(
			"isMCLinkLocal",
			"()Z"
		);
	}
	jboolean InetAddress::isMCNodeLocal()
	{
		return callMethod<jboolean>(
			"isMCNodeLocal",
			"()Z"
		);
	}
	jboolean InetAddress::isMCOrgLocal()
	{
		return callMethod<jboolean>(
			"isMCOrgLocal",
			"()Z"
		);
	}
	jboolean InetAddress::isMCSiteLocal()
	{
		return callMethod<jboolean>(
			"isMCSiteLocal",
			"()Z"
		);
	}
	jboolean InetAddress::isMulticastAddress()
	{
		return callMethod<jboolean>(
			"isMulticastAddress",
			"()Z"
		);
	}
	jboolean InetAddress::isReachable(jint arg0)
	{
		return callMethod<jboolean>(
			"isReachable",
			"(I)Z",
			arg0
		);
	}
	jboolean InetAddress::isReachable(java::net::NetworkInterface arg0, jint arg1, jint arg2)
	{
		return callMethod<jboolean>(
			"isReachable",
			"(Ljava/net/NetworkInterface;II)Z",
			arg0.object(),
			arg1,
			arg2
		);
	}
	jboolean InetAddress::isSiteLocalAddress()
	{
		return callMethod<jboolean>(
			"isSiteLocalAddress",
			"()Z"
		);
	}
	JString InetAddress::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::net

