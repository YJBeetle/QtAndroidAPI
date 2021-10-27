#include "./Inet4Address.hpp"
#include "./InetAddress.hpp"
#include "./InterfaceAddress.hpp"

namespace java::net
{
	// Fields
	
	InterfaceAddress::InterfaceAddress(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
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
} // namespace java::net

