#pragma once

#ifndef JAVA_NET_INTERFACEADDRESS
#define JAVA_NET_INTERFACEADDRESS

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::net
{
	class InetAddress;
}
namespace __jni_impl::java::net
{
	class Inet4Address;
}

namespace __jni_impl::java::net
{
	class InterfaceAddress : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		jstring toString();
		jint hashCode();
		QAndroidJniObject getAddress();
		QAndroidJniObject getBroadcast();
		jshort getNetworkPrefixLength();
	};
} // namespace __jni_impl::java::net

#include "InetAddress.hpp"
#include "Inet4Address.hpp"

namespace __jni_impl::java::net
{
	// Fields
	
	// Constructors
	void InterfaceAddress::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.net.InterfaceAddress",
			"(V)V");
	}
	
	// Methods
	jboolean InterfaceAddress::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring InterfaceAddress::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint InterfaceAddress::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	QAndroidJniObject InterfaceAddress::getAddress()
	{
		return __thiz.callObjectMethod(
			"getAddress",
			"()Ljava/net/InetAddress;"
		);
	}
	QAndroidJniObject InterfaceAddress::getBroadcast()
	{
		return __thiz.callObjectMethod(
			"getBroadcast",
			"()Ljava/net/InetAddress;"
		);
	}
	jshort InterfaceAddress::getNetworkPrefixLength()
	{
		return __thiz.callMethod<jshort>(
			"getNetworkPrefixLength",
			"()S"
		);
	}
} // namespace __jni_impl::java::net

namespace java::net
{
	class InterfaceAddress : public __jni_impl::java::net::InterfaceAddress
	{
	public:
		InterfaceAddress(QAndroidJniObject obj) { __thiz = obj; }
		InterfaceAddress()
		{
			__constructor();
		}
	};
} // namespace java::net

#endif // JAVA_NET_INTERFACEADDRESS

