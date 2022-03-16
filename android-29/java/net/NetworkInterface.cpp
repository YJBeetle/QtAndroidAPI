#include "../../JByteArray.hpp"
#include "../../JObjectArray.hpp"
#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./InetAddress.hpp"
#include "./NetworkInterface.hpp"

namespace java::net
{
	// Fields
	
	// Constructors
	
	// Methods
	java::net::NetworkInterface NetworkInterface::getByIndex(jint arg0)
	{
		return callStaticObjectMethod(
			"java.net.NetworkInterface",
			"getByIndex",
			"(I)Ljava/net/NetworkInterface;",
			arg0
		);
	}
	java::net::NetworkInterface NetworkInterface::getByInetAddress(java::net::InetAddress arg0)
	{
		return callStaticObjectMethod(
			"java.net.NetworkInterface",
			"getByInetAddress",
			"(Ljava/net/InetAddress;)Ljava/net/NetworkInterface;",
			arg0.object()
		);
	}
	java::net::NetworkInterface NetworkInterface::getByName(JString arg0)
	{
		return callStaticObjectMethod(
			"java.net.NetworkInterface",
			"getByName",
			"(Ljava/lang/String;)Ljava/net/NetworkInterface;",
			arg0.object<jstring>()
		);
	}
	JObject NetworkInterface::getNetworkInterfaces()
	{
		return callStaticObjectMethod(
			"java.net.NetworkInterface",
			"getNetworkInterfaces",
			"()Ljava/util/Enumeration;"
		);
	}
	JObject NetworkInterface::networkInterfaces()
	{
		return callStaticObjectMethod(
			"java.net.NetworkInterface",
			"networkInterfaces",
			"()Ljava/util/stream/Stream;"
		);
	}
	jboolean NetworkInterface::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JString NetworkInterface::getDisplayName() const
	{
		return callObjectMethod(
			"getDisplayName",
			"()Ljava/lang/String;"
		);
	}
	JByteArray NetworkInterface::getHardwareAddress() const
	{
		return callObjectMethod(
			"getHardwareAddress",
			"()[B"
		);
	}
	jint NetworkInterface::getIndex() const
	{
		return callMethod<jint>(
			"getIndex",
			"()I"
		);
	}
	JObject NetworkInterface::getInetAddresses() const
	{
		return callObjectMethod(
			"getInetAddresses",
			"()Ljava/util/Enumeration;"
		);
	}
	JObject NetworkInterface::getInterfaceAddresses() const
	{
		return callObjectMethod(
			"getInterfaceAddresses",
			"()Ljava/util/List;"
		);
	}
	jint NetworkInterface::getMTU() const
	{
		return callMethod<jint>(
			"getMTU",
			"()I"
		);
	}
	JString NetworkInterface::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	java::net::NetworkInterface NetworkInterface::getParent() const
	{
		return callObjectMethod(
			"getParent",
			"()Ljava/net/NetworkInterface;"
		);
	}
	JObject NetworkInterface::getSubInterfaces() const
	{
		return callObjectMethod(
			"getSubInterfaces",
			"()Ljava/util/Enumeration;"
		);
	}
	jint NetworkInterface::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JObject NetworkInterface::inetAddresses() const
	{
		return callObjectMethod(
			"inetAddresses",
			"()Ljava/util/stream/Stream;"
		);
	}
	jboolean NetworkInterface::isLoopback() const
	{
		return callMethod<jboolean>(
			"isLoopback",
			"()Z"
		);
	}
	jboolean NetworkInterface::isPointToPoint() const
	{
		return callMethod<jboolean>(
			"isPointToPoint",
			"()Z"
		);
	}
	jboolean NetworkInterface::isUp() const
	{
		return callMethod<jboolean>(
			"isUp",
			"()Z"
		);
	}
	jboolean NetworkInterface::isVirtual() const
	{
		return callMethod<jboolean>(
			"isVirtual",
			"()Z"
		);
	}
	JObject NetworkInterface::subInterfaces() const
	{
		return callObjectMethod(
			"subInterfaces",
			"()Ljava/util/stream/Stream;"
		);
	}
	jboolean NetworkInterface::supportsMulticast() const
	{
		return callMethod<jboolean>(
			"supportsMulticast",
			"()Z"
		);
	}
	JString NetworkInterface::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::net

