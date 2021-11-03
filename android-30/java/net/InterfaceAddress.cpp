#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Inet4Address.hpp"
#include "./InetAddress.hpp"
#include "./InterfaceAddress.hpp"

namespace java::net
{
	// Fields
	
	// QAndroidJniObject forward
	InterfaceAddress::InterfaceAddress(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jboolean InterfaceAddress::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	java::net::InetAddress InterfaceAddress::getAddress() const
	{
		return callObjectMethod(
			"getAddress",
			"()Ljava/net/InetAddress;"
		);
	}
	java::net::InetAddress InterfaceAddress::getBroadcast() const
	{
		return callObjectMethod(
			"getBroadcast",
			"()Ljava/net/InetAddress;"
		);
	}
	jshort InterfaceAddress::getNetworkPrefixLength() const
	{
		return callMethod<jshort>(
			"getNetworkPrefixLength",
			"()S"
		);
	}
	jint InterfaceAddress::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString InterfaceAddress::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::net

