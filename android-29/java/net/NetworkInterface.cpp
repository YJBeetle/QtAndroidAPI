#include "./InetAddress.hpp"
#include "./NetworkInterface.hpp"

namespace java::net
{
	// Fields
	
	NetworkInterface::NetworkInterface(QAndroidJniObject obj) { __thiz = obj; }
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
			arg0.__jniObject().object()
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
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring NetworkInterface::getDisplayName()
	{
		return __thiz.callObjectMethod(
			"getDisplayName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jbyteArray NetworkInterface::getHardwareAddress()
	{
		return __thiz.callObjectMethod(
			"getHardwareAddress",
			"()[B"
		).object<jbyteArray>();
	}
	jint NetworkInterface::getIndex()
	{
		return __thiz.callMethod<jint>(
			"getIndex",
			"()I"
		);
	}
	QAndroidJniObject NetworkInterface::getInetAddresses()
	{
		return __thiz.callObjectMethod(
			"getInetAddresses",
			"()Ljava/util/Enumeration;"
		);
	}
	QAndroidJniObject NetworkInterface::getInterfaceAddresses()
	{
		return __thiz.callObjectMethod(
			"getInterfaceAddresses",
			"()Ljava/util/List;"
		);
	}
	jint NetworkInterface::getMTU()
	{
		return __thiz.callMethod<jint>(
			"getMTU",
			"()I"
		);
	}
	jstring NetworkInterface::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject NetworkInterface::getParent()
	{
		return __thiz.callObjectMethod(
			"getParent",
			"()Ljava/net/NetworkInterface;"
		);
	}
	QAndroidJniObject NetworkInterface::getSubInterfaces()
	{
		return __thiz.callObjectMethod(
			"getSubInterfaces",
			"()Ljava/util/Enumeration;"
		);
	}
	jint NetworkInterface::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	QAndroidJniObject NetworkInterface::inetAddresses()
	{
		return __thiz.callObjectMethod(
			"inetAddresses",
			"()Ljava/util/stream/Stream;"
		);
	}
	jboolean NetworkInterface::isLoopback()
	{
		return __thiz.callMethod<jboolean>(
			"isLoopback",
			"()Z"
		);
	}
	jboolean NetworkInterface::isPointToPoint()
	{
		return __thiz.callMethod<jboolean>(
			"isPointToPoint",
			"()Z"
		);
	}
	jboolean NetworkInterface::isUp()
	{
		return __thiz.callMethod<jboolean>(
			"isUp",
			"()Z"
		);
	}
	jboolean NetworkInterface::isVirtual()
	{
		return __thiz.callMethod<jboolean>(
			"isVirtual",
			"()Z"
		);
	}
	QAndroidJniObject NetworkInterface::subInterfaces()
	{
		return __thiz.callObjectMethod(
			"subInterfaces",
			"()Ljava/util/stream/Stream;"
		);
	}
	jboolean NetworkInterface::supportsMulticast()
	{
		return __thiz.callMethod<jboolean>(
			"supportsMulticast",
			"()Z"
		);
	}
	jstring NetworkInterface::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::net

