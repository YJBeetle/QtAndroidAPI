#include "../../JByteArray.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Inet4Address.hpp"

namespace java::net
{
	// Fields
	
	// QAndroidJniObject forward
	Inet4Address::Inet4Address(QAndroidJniObject obj) : java::net::InetAddress(obj) {}
	
	// Constructors
	
	// Methods
	jboolean Inet4Address::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JByteArray Inet4Address::getAddress()
	{
		return callObjectMethod(
			"getAddress",
			"()[B"
		);
	}
	JString Inet4Address::getHostAddress()
	{
		return callObjectMethod(
			"getHostAddress",
			"()Ljava/lang/String;"
		);
	}
	jint Inet4Address::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean Inet4Address::isAnyLocalAddress()
	{
		return callMethod<jboolean>(
			"isAnyLocalAddress",
			"()Z"
		);
	}
	jboolean Inet4Address::isLinkLocalAddress()
	{
		return callMethod<jboolean>(
			"isLinkLocalAddress",
			"()Z"
		);
	}
	jboolean Inet4Address::isLoopbackAddress()
	{
		return callMethod<jboolean>(
			"isLoopbackAddress",
			"()Z"
		);
	}
	jboolean Inet4Address::isMCGlobal()
	{
		return callMethod<jboolean>(
			"isMCGlobal",
			"()Z"
		);
	}
	jboolean Inet4Address::isMCLinkLocal()
	{
		return callMethod<jboolean>(
			"isMCLinkLocal",
			"()Z"
		);
	}
	jboolean Inet4Address::isMCNodeLocal()
	{
		return callMethod<jboolean>(
			"isMCNodeLocal",
			"()Z"
		);
	}
	jboolean Inet4Address::isMCOrgLocal()
	{
		return callMethod<jboolean>(
			"isMCOrgLocal",
			"()Z"
		);
	}
	jboolean Inet4Address::isMCSiteLocal()
	{
		return callMethod<jboolean>(
			"isMCSiteLocal",
			"()Z"
		);
	}
	jboolean Inet4Address::isMulticastAddress()
	{
		return callMethod<jboolean>(
			"isMulticastAddress",
			"()Z"
		);
	}
	jboolean Inet4Address::isSiteLocalAddress()
	{
		return callMethod<jboolean>(
			"isSiteLocalAddress",
			"()Z"
		);
	}
} // namespace java::net

