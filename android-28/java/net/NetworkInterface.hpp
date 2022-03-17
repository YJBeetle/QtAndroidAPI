#pragma once

#include "../../JByteArray.hpp"
#include "../../JObjectArray.hpp"
#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./InetAddress.def.hpp"
#include "./NetworkInterface.def.hpp"

namespace java::net
{
	// Fields
	
	// Constructors
	
	// Methods
	inline java::net::NetworkInterface NetworkInterface::getByIndex(jint arg0)
	{
		return callStaticObjectMethod(
			"java.net.NetworkInterface",
			"getByIndex",
			"(I)Ljava/net/NetworkInterface;",
			arg0
		);
	}
	inline java::net::NetworkInterface NetworkInterface::getByInetAddress(java::net::InetAddress arg0)
	{
		return callStaticObjectMethod(
			"java.net.NetworkInterface",
			"getByInetAddress",
			"(Ljava/net/InetAddress;)Ljava/net/NetworkInterface;",
			arg0.object()
		);
	}
	inline java::net::NetworkInterface NetworkInterface::getByName(JString arg0)
	{
		return callStaticObjectMethod(
			"java.net.NetworkInterface",
			"getByName",
			"(Ljava/lang/String;)Ljava/net/NetworkInterface;",
			arg0.object<jstring>()
		);
	}
	inline JObject NetworkInterface::getNetworkInterfaces()
	{
		return callStaticObjectMethod(
			"java.net.NetworkInterface",
			"getNetworkInterfaces",
			"()Ljava/util/Enumeration;"
		);
	}
	inline JObject NetworkInterface::networkInterfaces()
	{
		return callStaticObjectMethod(
			"java.net.NetworkInterface",
			"networkInterfaces",
			"()Ljava/util/stream/Stream;"
		);
	}
	inline jboolean NetworkInterface::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JString NetworkInterface::getDisplayName() const
	{
		return callObjectMethod(
			"getDisplayName",
			"()Ljava/lang/String;"
		);
	}
	inline JByteArray NetworkInterface::getHardwareAddress() const
	{
		return callObjectMethod(
			"getHardwareAddress",
			"()[B"
		);
	}
	inline jint NetworkInterface::getIndex() const
	{
		return callMethod<jint>(
			"getIndex",
			"()I"
		);
	}
	inline JObject NetworkInterface::getInetAddresses() const
	{
		return callObjectMethod(
			"getInetAddresses",
			"()Ljava/util/Enumeration;"
		);
	}
	inline JObject NetworkInterface::getInterfaceAddresses() const
	{
		return callObjectMethod(
			"getInterfaceAddresses",
			"()Ljava/util/List;"
		);
	}
	inline jint NetworkInterface::getMTU() const
	{
		return callMethod<jint>(
			"getMTU",
			"()I"
		);
	}
	inline JString NetworkInterface::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	inline java::net::NetworkInterface NetworkInterface::getParent() const
	{
		return callObjectMethod(
			"getParent",
			"()Ljava/net/NetworkInterface;"
		);
	}
	inline JObject NetworkInterface::getSubInterfaces() const
	{
		return callObjectMethod(
			"getSubInterfaces",
			"()Ljava/util/Enumeration;"
		);
	}
	inline jint NetworkInterface::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JObject NetworkInterface::inetAddresses() const
	{
		return callObjectMethod(
			"inetAddresses",
			"()Ljava/util/stream/Stream;"
		);
	}
	inline jboolean NetworkInterface::isLoopback() const
	{
		return callMethod<jboolean>(
			"isLoopback",
			"()Z"
		);
	}
	inline jboolean NetworkInterface::isPointToPoint() const
	{
		return callMethod<jboolean>(
			"isPointToPoint",
			"()Z"
		);
	}
	inline jboolean NetworkInterface::isUp() const
	{
		return callMethod<jboolean>(
			"isUp",
			"()Z"
		);
	}
	inline jboolean NetworkInterface::isVirtual() const
	{
		return callMethod<jboolean>(
			"isVirtual",
			"()Z"
		);
	}
	inline JObject NetworkInterface::subInterfaces() const
	{
		return callObjectMethod(
			"subInterfaces",
			"()Ljava/util/stream/Stream;"
		);
	}
	inline jboolean NetworkInterface::supportsMulticast() const
	{
		return callMethod<jboolean>(
			"supportsMulticast",
			"()Z"
		);
	}
	inline JString NetworkInterface::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::net

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::net;
#endif
