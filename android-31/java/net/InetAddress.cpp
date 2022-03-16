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
	jboolean InetAddress::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JByteArray InetAddress::getAddress() const
	{
		return callObjectMethod(
			"getAddress",
			"()[B"
		);
	}
	JString InetAddress::getCanonicalHostName() const
	{
		return callObjectMethod(
			"getCanonicalHostName",
			"()Ljava/lang/String;"
		);
	}
	JString InetAddress::getHostAddress() const
	{
		return callObjectMethod(
			"getHostAddress",
			"()Ljava/lang/String;"
		);
	}
	JString InetAddress::getHostName() const
	{
		return callObjectMethod(
			"getHostName",
			"()Ljava/lang/String;"
		);
	}
	jint InetAddress::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean InetAddress::isAnyLocalAddress() const
	{
		return callMethod<jboolean>(
			"isAnyLocalAddress",
			"()Z"
		);
	}
	jboolean InetAddress::isLinkLocalAddress() const
	{
		return callMethod<jboolean>(
			"isLinkLocalAddress",
			"()Z"
		);
	}
	jboolean InetAddress::isLoopbackAddress() const
	{
		return callMethod<jboolean>(
			"isLoopbackAddress",
			"()Z"
		);
	}
	jboolean InetAddress::isMCGlobal() const
	{
		return callMethod<jboolean>(
			"isMCGlobal",
			"()Z"
		);
	}
	jboolean InetAddress::isMCLinkLocal() const
	{
		return callMethod<jboolean>(
			"isMCLinkLocal",
			"()Z"
		);
	}
	jboolean InetAddress::isMCNodeLocal() const
	{
		return callMethod<jboolean>(
			"isMCNodeLocal",
			"()Z"
		);
	}
	jboolean InetAddress::isMCOrgLocal() const
	{
		return callMethod<jboolean>(
			"isMCOrgLocal",
			"()Z"
		);
	}
	jboolean InetAddress::isMCSiteLocal() const
	{
		return callMethod<jboolean>(
			"isMCSiteLocal",
			"()Z"
		);
	}
	jboolean InetAddress::isMulticastAddress() const
	{
		return callMethod<jboolean>(
			"isMulticastAddress",
			"()Z"
		);
	}
	jboolean InetAddress::isReachable(jint arg0) const
	{
		return callMethod<jboolean>(
			"isReachable",
			"(I)Z",
			arg0
		);
	}
	jboolean InetAddress::isReachable(java::net::NetworkInterface arg0, jint arg1, jint arg2) const
	{
		return callMethod<jboolean>(
			"isReachable",
			"(Ljava/net/NetworkInterface;II)Z",
			arg0.object(),
			arg1,
			arg2
		);
	}
	jboolean InetAddress::isSiteLocalAddress() const
	{
		return callMethod<jboolean>(
			"isSiteLocalAddress",
			"()Z"
		);
	}
	JString InetAddress::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::net

