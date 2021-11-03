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
	
	// QAndroidJniObject forward
	NetworkInterface::NetworkInterface(QAndroidJniObject obj) : JObject(obj) {}
	
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
	jboolean NetworkInterface::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JString NetworkInterface::getDisplayName()
	{
		return callObjectMethod(
			"getDisplayName",
			"()Ljava/lang/String;"
		);
	}
	JByteArray NetworkInterface::getHardwareAddress()
	{
		return callObjectMethod(
			"getHardwareAddress",
			"()[B"
		);
	}
	jint NetworkInterface::getIndex()
	{
		return callMethod<jint>(
			"getIndex",
			"()I"
		);
	}
	JObject NetworkInterface::getInetAddresses()
	{
		return callObjectMethod(
			"getInetAddresses",
			"()Ljava/util/Enumeration;"
		);
	}
	JObject NetworkInterface::getInterfaceAddresses()
	{
		return callObjectMethod(
			"getInterfaceAddresses",
			"()Ljava/util/List;"
		);
	}
	jint NetworkInterface::getMTU()
	{
		return callMethod<jint>(
			"getMTU",
			"()I"
		);
	}
	JString NetworkInterface::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	java::net::NetworkInterface NetworkInterface::getParent()
	{
		return callObjectMethod(
			"getParent",
			"()Ljava/net/NetworkInterface;"
		);
	}
	JObject NetworkInterface::getSubInterfaces()
	{
		return callObjectMethod(
			"getSubInterfaces",
			"()Ljava/util/Enumeration;"
		);
	}
	jint NetworkInterface::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JObject NetworkInterface::inetAddresses()
	{
		return callObjectMethod(
			"inetAddresses",
			"()Ljava/util/stream/Stream;"
		);
	}
	jboolean NetworkInterface::isLoopback()
	{
		return callMethod<jboolean>(
			"isLoopback",
			"()Z"
		);
	}
	jboolean NetworkInterface::isPointToPoint()
	{
		return callMethod<jboolean>(
			"isPointToPoint",
			"()Z"
		);
	}
	jboolean NetworkInterface::isUp()
	{
		return callMethod<jboolean>(
			"isUp",
			"()Z"
		);
	}
	jboolean NetworkInterface::isVirtual()
	{
		return callMethod<jboolean>(
			"isVirtual",
			"()Z"
		);
	}
	JObject NetworkInterface::subInterfaces()
	{
		return callObjectMethod(
			"subInterfaces",
			"()Ljava/util/stream/Stream;"
		);
	}
	jboolean NetworkInterface::supportsMulticast()
	{
		return callMethod<jboolean>(
			"supportsMulticast",
			"()Z"
		);
	}
	JString NetworkInterface::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::net

