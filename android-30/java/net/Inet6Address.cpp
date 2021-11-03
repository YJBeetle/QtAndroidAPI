#include "../../JByteArray.hpp"
#include "../../JArray.hpp"
#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./NetworkInterface.hpp"
#include "./Inet6Address.hpp"

namespace java::net
{
	// Fields
	
	// QJniObject forward
	Inet6Address::Inet6Address(QJniObject obj) : java::net::InetAddress(obj) {}
	
	// Constructors
	
	// Methods
	java::net::Inet6Address Inet6Address::getByAddress(JString arg0, JByteArray arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"java.net.Inet6Address",
			"getByAddress",
			"(Ljava/lang/String;[BI)Ljava/net/Inet6Address;",
			arg0.object<jstring>(),
			arg1.object<jbyteArray>(),
			arg2
		);
	}
	java::net::Inet6Address Inet6Address::getByAddress(JString arg0, JByteArray arg1, java::net::NetworkInterface arg2)
	{
		return callStaticObjectMethod(
			"java.net.Inet6Address",
			"getByAddress",
			"(Ljava/lang/String;[BLjava/net/NetworkInterface;)Ljava/net/Inet6Address;",
			arg0.object<jstring>(),
			arg1.object<jbyteArray>(),
			arg2.object()
		);
	}
	jboolean Inet6Address::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JByteArray Inet6Address::getAddress() const
	{
		return callObjectMethod(
			"getAddress",
			"()[B"
		);
	}
	JString Inet6Address::getHostAddress() const
	{
		return callObjectMethod(
			"getHostAddress",
			"()Ljava/lang/String;"
		);
	}
	jint Inet6Address::getScopeId() const
	{
		return callMethod<jint>(
			"getScopeId",
			"()I"
		);
	}
	java::net::NetworkInterface Inet6Address::getScopedInterface() const
	{
		return callObjectMethod(
			"getScopedInterface",
			"()Ljava/net/NetworkInterface;"
		);
	}
	jint Inet6Address::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean Inet6Address::isAnyLocalAddress() const
	{
		return callMethod<jboolean>(
			"isAnyLocalAddress",
			"()Z"
		);
	}
	jboolean Inet6Address::isIPv4CompatibleAddress() const
	{
		return callMethod<jboolean>(
			"isIPv4CompatibleAddress",
			"()Z"
		);
	}
	jboolean Inet6Address::isLinkLocalAddress() const
	{
		return callMethod<jboolean>(
			"isLinkLocalAddress",
			"()Z"
		);
	}
	jboolean Inet6Address::isLoopbackAddress() const
	{
		return callMethod<jboolean>(
			"isLoopbackAddress",
			"()Z"
		);
	}
	jboolean Inet6Address::isMCGlobal() const
	{
		return callMethod<jboolean>(
			"isMCGlobal",
			"()Z"
		);
	}
	jboolean Inet6Address::isMCLinkLocal() const
	{
		return callMethod<jboolean>(
			"isMCLinkLocal",
			"()Z"
		);
	}
	jboolean Inet6Address::isMCNodeLocal() const
	{
		return callMethod<jboolean>(
			"isMCNodeLocal",
			"()Z"
		);
	}
	jboolean Inet6Address::isMCOrgLocal() const
	{
		return callMethod<jboolean>(
			"isMCOrgLocal",
			"()Z"
		);
	}
	jboolean Inet6Address::isMCSiteLocal() const
	{
		return callMethod<jboolean>(
			"isMCSiteLocal",
			"()Z"
		);
	}
	jboolean Inet6Address::isMulticastAddress() const
	{
		return callMethod<jboolean>(
			"isMulticastAddress",
			"()Z"
		);
	}
	jboolean Inet6Address::isSiteLocalAddress() const
	{
		return callMethod<jboolean>(
			"isSiteLocalAddress",
			"()Z"
		);
	}
} // namespace java::net

