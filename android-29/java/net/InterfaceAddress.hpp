#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::net
{
	class Inet4Address;
}
namespace __jni_impl::java::net
{
	class InetAddress;
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
		QAndroidJniObject getAddress();
		QAndroidJniObject getBroadcast();
		jshort getNetworkPrefixLength();
		jint hashCode();
		jstring toString();
	};
} // namespace __jni_impl::java::net

#include "Inet4Address.hpp"
#include "InetAddress.hpp"

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
	jint InterfaceAddress::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring InterfaceAddress::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
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

