#pragma once

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
		static QAndroidJniObject getByIndex(jint arg0);
		static QAndroidJniObject getByInetAddress(__jni_impl::java::net::InetAddress arg0);
		static QAndroidJniObject getByName(jstring arg0);
		static QAndroidJniObject getByName(const QString &arg0);
		static QAndroidJniObject getNetworkInterfaces();
		static QAndroidJniObject networkInterfaces();
		jboolean equals(jobject arg0);
		jstring getDisplayName();
		jbyteArray getHardwareAddress();
		jint getIndex();
		QAndroidJniObject getInetAddresses();
		QAndroidJniObject getInterfaceAddresses();
		jint getMTU();
		jstring getName();
		QAndroidJniObject getParent();
		QAndroidJniObject getSubInterfaces();
		jint hashCode();
		QAndroidJniObject inetAddresses();
		jboolean isLoopback();
		jboolean isPointToPoint();
		jboolean isUp();
		jboolean isVirtual();
		QAndroidJniObject subInterfaces();
		jboolean supportsMulticast();
		jstring toString();
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
	QAndroidJniObject NetworkInterface::getByIndex(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.NetworkInterface",
			"getByIndex",
			"(I)Ljava/net/NetworkInterface;",
			arg0
		);
	}
	QAndroidJniObject NetworkInterface::getByInetAddress(__jni_impl::java::net::InetAddress arg0)
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
	QAndroidJniObject NetworkInterface::getByName(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.NetworkInterface",
			"getByName",
			"(Ljava/lang/String;)Ljava/net/NetworkInterface;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
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

