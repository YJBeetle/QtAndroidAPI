#pragma once

#include "../../JByteArray.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Inet4Address.def.hpp"

namespace java::net
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean Inet4Address::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JByteArray Inet4Address::getAddress() const
	{
		return callObjectMethod(
			"getAddress",
			"()[B"
		);
	}
	inline JString Inet4Address::getHostAddress() const
	{
		return callObjectMethod(
			"getHostAddress",
			"()Ljava/lang/String;"
		);
	}
	inline jint Inet4Address::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean Inet4Address::isAnyLocalAddress() const
	{
		return callMethod<jboolean>(
			"isAnyLocalAddress",
			"()Z"
		);
	}
	inline jboolean Inet4Address::isLinkLocalAddress() const
	{
		return callMethod<jboolean>(
			"isLinkLocalAddress",
			"()Z"
		);
	}
	inline jboolean Inet4Address::isLoopbackAddress() const
	{
		return callMethod<jboolean>(
			"isLoopbackAddress",
			"()Z"
		);
	}
	inline jboolean Inet4Address::isMCGlobal() const
	{
		return callMethod<jboolean>(
			"isMCGlobal",
			"()Z"
		);
	}
	inline jboolean Inet4Address::isMCLinkLocal() const
	{
		return callMethod<jboolean>(
			"isMCLinkLocal",
			"()Z"
		);
	}
	inline jboolean Inet4Address::isMCNodeLocal() const
	{
		return callMethod<jboolean>(
			"isMCNodeLocal",
			"()Z"
		);
	}
	inline jboolean Inet4Address::isMCOrgLocal() const
	{
		return callMethod<jboolean>(
			"isMCOrgLocal",
			"()Z"
		);
	}
	inline jboolean Inet4Address::isMCSiteLocal() const
	{
		return callMethod<jboolean>(
			"isMCSiteLocal",
			"()Z"
		);
	}
	inline jboolean Inet4Address::isMulticastAddress() const
	{
		return callMethod<jboolean>(
			"isMulticastAddress",
			"()Z"
		);
	}
	inline jboolean Inet4Address::isSiteLocalAddress() const
	{
		return callMethod<jboolean>(
			"isSiteLocalAddress",
			"()Z"
		);
	}
} // namespace java::net

// Base class headers
#include "./InetAddress.hpp"

