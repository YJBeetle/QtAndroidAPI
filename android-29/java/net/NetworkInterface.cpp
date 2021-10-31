#include "./InetAddress.hpp"
#include "./NetworkInterface.hpp"

namespace java::net
{
	// Fields
	
	// QAndroidJniObject forward
	NetworkInterface::NetworkInterface(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject NetworkInterface::getByIndex(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.NetworkInterface",
			"getByIndex",
			"(I)Ljava/net/NetworkInterface;",
			arg0
		);
	}
	QAndroidJniObject NetworkInterface::getByInetAddress(java::net::InetAddress arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.NetworkInterface",
			"getByInetAddress",
			"(Ljava/net/InetAddress;)Ljava/net/NetworkInterface;",
			arg0.object()
		);
	}
	QAndroidJniObject NetworkInterface::getByName(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.NetworkInterface",
			"getByName",
			"(Ljava/lang/String;)Ljava/net/NetworkInterface;",
			arg0
		);
	}
	QAndroidJniObject NetworkInterface::getNetworkInterfaces()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.NetworkInterface",
			"getNetworkInterfaces",
			"()Ljava/util/Enumeration;"
		);
	}
	QAndroidJniObject NetworkInterface::networkInterfaces()
	{
		return QAndroidJniObject::callStaticObjectMethod(
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
	QAndroidJniObject NetworkInterface::getInetAddresses()
	{
		return callObjectMethod(
			"getInetAddresses",
			"()Ljava/util/Enumeration;"
		);
	}
	QAndroidJniObject NetworkInterface::getInterfaceAddresses()
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
	QAndroidJniObject NetworkInterface::getParent()
	{
		return callObjectMethod(
			"getParent",
			"()Ljava/net/NetworkInterface;"
		);
	}
	QAndroidJniObject NetworkInterface::getSubInterfaces()
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
	QAndroidJniObject NetworkInterface::inetAddresses()
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
	QAndroidJniObject NetworkInterface::subInterfaces()
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

