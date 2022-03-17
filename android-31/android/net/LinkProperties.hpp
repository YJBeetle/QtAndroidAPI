#pragma once

#include "./IpPrefix.def.hpp"
#include "./ProxyInfo.def.hpp"
#include "./RouteInfo.def.hpp"
#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../../java/net/Inet4Address.def.hpp"
#include "./LinkProperties.def.hpp"

namespace android::net
{
	// Fields
	inline JObject LinkProperties::CREATOR()
	{
		return getStaticObjectField(
			"android.net.LinkProperties",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline LinkProperties::LinkProperties()
		: JObject(
			"android.net.LinkProperties",
			"()V"
		) {}
	
	// Methods
	inline jboolean LinkProperties::addRoute(android::net::RouteInfo arg0) const
	{
		return callMethod<jboolean>(
			"addRoute",
			"(Landroid/net/RouteInfo;)Z",
			arg0.object()
		);
	}
	inline void LinkProperties::clear() const
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	inline jint LinkProperties::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean LinkProperties::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline java::net::Inet4Address LinkProperties::getDhcpServerAddress() const
	{
		return callObjectMethod(
			"getDhcpServerAddress",
			"()Ljava/net/Inet4Address;"
		);
	}
	inline JObject LinkProperties::getDnsServers() const
	{
		return callObjectMethod(
			"getDnsServers",
			"()Ljava/util/List;"
		);
	}
	inline JString LinkProperties::getDomains() const
	{
		return callObjectMethod(
			"getDomains",
			"()Ljava/lang/String;"
		);
	}
	inline android::net::ProxyInfo LinkProperties::getHttpProxy() const
	{
		return callObjectMethod(
			"getHttpProxy",
			"()Landroid/net/ProxyInfo;"
		);
	}
	inline JString LinkProperties::getInterfaceName() const
	{
		return callObjectMethod(
			"getInterfaceName",
			"()Ljava/lang/String;"
		);
	}
	inline JObject LinkProperties::getLinkAddresses() const
	{
		return callObjectMethod(
			"getLinkAddresses",
			"()Ljava/util/List;"
		);
	}
	inline jint LinkProperties::getMtu() const
	{
		return callMethod<jint>(
			"getMtu",
			"()I"
		);
	}
	inline android::net::IpPrefix LinkProperties::getNat64Prefix() const
	{
		return callObjectMethod(
			"getNat64Prefix",
			"()Landroid/net/IpPrefix;"
		);
	}
	inline JString LinkProperties::getPrivateDnsServerName() const
	{
		return callObjectMethod(
			"getPrivateDnsServerName",
			"()Ljava/lang/String;"
		);
	}
	inline JObject LinkProperties::getRoutes() const
	{
		return callObjectMethod(
			"getRoutes",
			"()Ljava/util/List;"
		);
	}
	inline jint LinkProperties::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean LinkProperties::isPrivateDnsActive() const
	{
		return callMethod<jboolean>(
			"isPrivateDnsActive",
			"()Z"
		);
	}
	inline jboolean LinkProperties::isWakeOnLanSupported() const
	{
		return callMethod<jboolean>(
			"isWakeOnLanSupported",
			"()Z"
		);
	}
	inline void LinkProperties::setDhcpServerAddress(java::net::Inet4Address arg0) const
	{
		callMethod<void>(
			"setDhcpServerAddress",
			"(Ljava/net/Inet4Address;)V",
			arg0.object()
		);
	}
	inline void LinkProperties::setDnsServers(JObject arg0) const
	{
		callMethod<void>(
			"setDnsServers",
			"(Ljava/util/Collection;)V",
			arg0.object()
		);
	}
	inline void LinkProperties::setDomains(JString arg0) const
	{
		callMethod<void>(
			"setDomains",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void LinkProperties::setHttpProxy(android::net::ProxyInfo arg0) const
	{
		callMethod<void>(
			"setHttpProxy",
			"(Landroid/net/ProxyInfo;)V",
			arg0.object()
		);
	}
	inline void LinkProperties::setInterfaceName(JString arg0) const
	{
		callMethod<void>(
			"setInterfaceName",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void LinkProperties::setLinkAddresses(JObject arg0) const
	{
		callMethod<void>(
			"setLinkAddresses",
			"(Ljava/util/Collection;)V",
			arg0.object()
		);
	}
	inline void LinkProperties::setMtu(jint arg0) const
	{
		callMethod<void>(
			"setMtu",
			"(I)V",
			arg0
		);
	}
	inline void LinkProperties::setNat64Prefix(android::net::IpPrefix arg0) const
	{
		callMethod<void>(
			"setNat64Prefix",
			"(Landroid/net/IpPrefix;)V",
			arg0.object()
		);
	}
	inline JString LinkProperties::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void LinkProperties::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net

// Base class headers

