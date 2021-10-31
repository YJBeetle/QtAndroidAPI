#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"
#include "./InetAddress.hpp"
#include "./InetSocketAddress.hpp"

namespace java::net
{
	// Fields
	
	InetSocketAddress::InetSocketAddress(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	InetSocketAddress::InetSocketAddress(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"java.net.InetSocketAddress",
			"(I)V",
			arg0
		);
	}
	InetSocketAddress::InetSocketAddress(jstring arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"java.net.InetSocketAddress",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		);
	}
	InetSocketAddress::InetSocketAddress(java::net::InetAddress arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"java.net.InetSocketAddress",
			"(Ljava/net/InetAddress;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	
	// Methods
	QAndroidJniObject InetSocketAddress::createUnresolved(jstring arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.InetSocketAddress",
			"createUnresolved",
			"(Ljava/lang/String;I)Ljava/net/InetSocketAddress;",
			arg0,
			arg1
		);
	}
	jboolean InetSocketAddress::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject InetSocketAddress::getAddress()
	{
		return __thiz.callObjectMethod(
			"getAddress",
			"()Ljava/net/InetAddress;"
		);
	}
	jstring InetSocketAddress::getHostName()
	{
		return __thiz.callObjectMethod(
			"getHostName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring InetSocketAddress::getHostString()
	{
		return __thiz.callObjectMethod(
			"getHostString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint InetSocketAddress::getPort()
	{
		return __thiz.callMethod<jint>(
			"getPort",
			"()I"
		);
	}
	jint InetSocketAddress::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean InetSocketAddress::isUnresolved()
	{
		return __thiz.callMethod<jboolean>(
			"isUnresolved",
			"()Z"
		);
	}
	jstring InetSocketAddress::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::net

