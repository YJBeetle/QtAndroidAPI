#include "./InetAddress.hpp"
#include "./NetworkInterface.hpp"

namespace java::net
{
	// Fields
	
	// QJniObject forward
	NetworkInterface::NetworkInterface(QJniObject obj) : __JniBaseClass(obj) {}
	
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
	java::net::NetworkInterface NetworkInterface::getByName(jstring arg0)
	{
		return callStaticObjectMethod(
			"java.net.NetworkInterface",
			"getByName",
			"(Ljava/lang/String;)Ljava/net/NetworkInterface;",
			arg0
		);
	}
	__JniBaseClass NetworkInterface::getNetworkInterfaces()
	{
		return callStaticObjectMethod(
			"java.net.NetworkInterface",
			"getNetworkInterfaces",
			"()Ljava/util/Enumeration;"
		);
	}
	__JniBaseClass NetworkInterface::networkInterfaces()
	{
		return callStaticObjectMethod(
			"java.net.NetworkInterface",
			"networkInterfaces",
			"()Ljava/util/stream/Stream;"
		);
	}
	jboolean NetworkInterface::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring NetworkInterface::getDisplayName()
	{
		return callObjectMethod(
			"getDisplayName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jbyteArray NetworkInterface::getHardwareAddress()
	{
		return callObjectMethod(
			"getHardwareAddress",
			"()[B"
		).object<jbyteArray>();
	}
	jint NetworkInterface::getIndex()
	{
		return callMethod<jint>(
			"getIndex",
			"()I"
		);
	}
	__JniBaseClass NetworkInterface::getInetAddresses()
	{
		return callObjectMethod(
			"getInetAddresses",
			"()Ljava/util/Enumeration;"
		);
	}
	__JniBaseClass NetworkInterface::getInterfaceAddresses()
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
	jstring NetworkInterface::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	java::net::NetworkInterface NetworkInterface::getParent()
	{
		return callObjectMethod(
			"getParent",
			"()Ljava/net/NetworkInterface;"
		);
	}
	__JniBaseClass NetworkInterface::getSubInterfaces()
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
	__JniBaseClass NetworkInterface::inetAddresses()
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
	__JniBaseClass NetworkInterface::subInterfaces()
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
	jstring NetworkInterface::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::net

