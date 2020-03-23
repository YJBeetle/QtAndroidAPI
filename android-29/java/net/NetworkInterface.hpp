#pragma once

#ifndef JAVA_NET_NETWORKINTERFACE
#define JAVA_NET_NETWORKINTERFACE

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::net
{
	class InetAddress;
}

namespace __jni_impl::java::net
{
	class NetworkInterface : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject getName();
		jboolean equals(jobject arg0);
		QAndroidJniObject toString();
		jint hashCode();
		QAndroidJniObject getParent();
		jint getIndex();
		static QAndroidJniObject getByName(jstring arg0);
		static QAndroidJniObject networkInterfaces();
		QAndroidJniObject inetAddresses();
		QAndroidJniObject getDisplayName();
		QAndroidJniObject getInetAddresses();
		static QAndroidJniObject getByInetAddress(__jni_impl::java::net::InetAddress arg0);
		static QAndroidJniObject getNetworkInterfaces();
		QAndroidJniObject getInterfaceAddresses();
		QAndroidJniObject getSubInterfaces();
		QAndroidJniObject subInterfaces();
		static QAndroidJniObject getByIndex(jint arg0);
		jboolean isUp();
		jboolean isLoopback();
		jboolean isPointToPoint();
		jboolean supportsMulticast();
		QAndroidJniObject getHardwareAddress();
		jint getMTU();
		jboolean isVirtual();
	};
} // namespace __jni_impl::java::net

#include "InetAddress.hpp"

namespace __jni_impl::java::net
{
	// Fields
	
	// Constructors
	void NetworkInterface::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.net.NetworkInterface",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject NetworkInterface::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;");
	}
	jboolean NetworkInterface::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject NetworkInterface::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint NetworkInterface::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	QAndroidJniObject NetworkInterface::getParent()
	{
		return __thiz.callObjectMethod(
			"getParent",
			"()Ljava/net/NetworkInterface;");
	}
	jint NetworkInterface::getIndex()
	{
		return __thiz.callMethod<jint>(
			"getIndex",
			"()I");
	}
	QAndroidJniObject NetworkInterface::getByName(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.NetworkInterface",
			"getByName",
			"(Ljava/lang/String;)Ljava/net/NetworkInterface;",
			arg0);
	}
	QAndroidJniObject NetworkInterface::networkInterfaces()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.NetworkInterface",
			"networkInterfaces",
			"()Ljava/util/stream/Stream;");
	}
	QAndroidJniObject NetworkInterface::inetAddresses()
	{
		return __thiz.callObjectMethod(
			"inetAddresses",
			"()Ljava/util/stream/Stream;");
	}
	QAndroidJniObject NetworkInterface::getDisplayName()
	{
		return __thiz.callObjectMethod(
			"getDisplayName",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject NetworkInterface::getInetAddresses()
	{
		return __thiz.callObjectMethod(
			"getInetAddresses",
			"()Ljava/util/Enumeration;");
	}
	QAndroidJniObject NetworkInterface::getByInetAddress(__jni_impl::java::net::InetAddress arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.NetworkInterface",
			"getByInetAddress",
			"(Ljava/net/InetAddress;)Ljava/net/NetworkInterface;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject NetworkInterface::getNetworkInterfaces()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.NetworkInterface",
			"getNetworkInterfaces",
			"()Ljava/util/Enumeration;");
	}
	QAndroidJniObject NetworkInterface::getInterfaceAddresses()
	{
		return __thiz.callObjectMethod(
			"getInterfaceAddresses",
			"()Ljava/util/List;");
	}
	QAndroidJniObject NetworkInterface::getSubInterfaces()
	{
		return __thiz.callObjectMethod(
			"getSubInterfaces",
			"()Ljava/util/Enumeration;");
	}
	QAndroidJniObject NetworkInterface::subInterfaces()
	{
		return __thiz.callObjectMethod(
			"subInterfaces",
			"()Ljava/util/stream/Stream;");
	}
	QAndroidJniObject NetworkInterface::getByIndex(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.NetworkInterface",
			"getByIndex",
			"(I)Ljava/net/NetworkInterface;",
			arg0);
	}
	jboolean NetworkInterface::isUp()
	{
		return __thiz.callMethod<jboolean>(
			"isUp",
			"()Z");
	}
	jboolean NetworkInterface::isLoopback()
	{
		return __thiz.callMethod<jboolean>(
			"isLoopback",
			"()Z");
	}
	jboolean NetworkInterface::isPointToPoint()
	{
		return __thiz.callMethod<jboolean>(
			"isPointToPoint",
			"()Z");
	}
	jboolean NetworkInterface::supportsMulticast()
	{
		return __thiz.callMethod<jboolean>(
			"supportsMulticast",
			"()Z");
	}
	QAndroidJniObject NetworkInterface::getHardwareAddress()
	{
		return __thiz.callObjectMethod(
			"getHardwareAddress",
			"()[B");
	}
	jint NetworkInterface::getMTU()
	{
		return __thiz.callMethod<jint>(
			"getMTU",
			"()I");
	}
	jboolean NetworkInterface::isVirtual()
	{
		return __thiz.callMethod<jboolean>(
			"isVirtual",
			"()Z");
	}
} // namespace __jni_impl::java::net

namespace java::net
{
	class NetworkInterface : public __jni_impl::java::net::NetworkInterface
	{
	public:
		NetworkInterface(QAndroidJniObject obj) { __thiz = obj; }
		NetworkInterface()
		{
			__constructor();
		}
	};
} // namespace java::net

#endif // JAVA_NET_NETWORKINTERFACE

