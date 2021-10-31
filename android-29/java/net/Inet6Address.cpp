#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"
#include "./NetworkInterface.hpp"
#include "./Inet6Address.hpp"

namespace java::net
{
	// Fields
	
	// QAndroidJniObject forward
	Inet6Address::Inet6Address(QAndroidJniObject obj) : java::net::InetAddress(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject Inet6Address::getByAddress(jstring arg0, jbyteArray arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.Inet6Address",
			"getByAddress",
			"(Ljava/lang/String;[BI)Ljava/net/Inet6Address;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject Inet6Address::getByAddress(jstring arg0, jbyteArray arg1, java::net::NetworkInterface arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.Inet6Address",
			"getByAddress",
			"(Ljava/lang/String;[BLjava/net/NetworkInterface;)Ljava/net/Inet6Address;",
			arg0,
			arg1,
			arg2.object()
		);
	}
	jboolean Inet6Address::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jbyteArray Inet6Address::getAddress()
	{
		return callObjectMethod(
			"getAddress",
			"()[B"
		).object<jbyteArray>();
	}
	jstring Inet6Address::getHostAddress()
	{
		return callObjectMethod(
			"getHostAddress",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint Inet6Address::getScopeId()
	{
		return callMethod<jint>(
			"getScopeId",
			"()I"
		);
	}
	QAndroidJniObject Inet6Address::getScopedInterface()
	{
		return callObjectMethod(
			"getScopedInterface",
			"()Ljava/net/NetworkInterface;"
		);
	}
	jint Inet6Address::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean Inet6Address::isAnyLocalAddress()
	{
		return callMethod<jboolean>(
			"isAnyLocalAddress",
			"()Z"
		);
	}
	jboolean Inet6Address::isIPv4CompatibleAddress()
	{
		return callMethod<jboolean>(
			"isIPv4CompatibleAddress",
			"()Z"
		);
	}
	jboolean Inet6Address::isLinkLocalAddress()
	{
		return callMethod<jboolean>(
			"isLinkLocalAddress",
			"()Z"
		);
	}
	jboolean Inet6Address::isLoopbackAddress()
	{
		return callMethod<jboolean>(
			"isLoopbackAddress",
			"()Z"
		);
	}
	jboolean Inet6Address::isMCGlobal()
	{
		return callMethod<jboolean>(
			"isMCGlobal",
			"()Z"
		);
	}
	jboolean Inet6Address::isMCLinkLocal()
	{
		return callMethod<jboolean>(
			"isMCLinkLocal",
			"()Z"
		);
	}
	jboolean Inet6Address::isMCNodeLocal()
	{
		return callMethod<jboolean>(
			"isMCNodeLocal",
			"()Z"
		);
	}
	jboolean Inet6Address::isMCOrgLocal()
	{
		return callMethod<jboolean>(
			"isMCOrgLocal",
			"()Z"
		);
	}
	jboolean Inet6Address::isMCSiteLocal()
	{
		return callMethod<jboolean>(
			"isMCSiteLocal",
			"()Z"
		);
	}
	jboolean Inet6Address::isMulticastAddress()
	{
		return callMethod<jboolean>(
			"isMulticastAddress",
			"()Z"
		);
	}
	jboolean Inet6Address::isSiteLocalAddress()
	{
		return callMethod<jboolean>(
			"isSiteLocalAddress",
			"()Z"
		);
	}
} // namespace java::net

