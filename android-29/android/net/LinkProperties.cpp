#include "./ProxyInfo.hpp"
#include "./RouteInfo.hpp"
#include "../os/Parcel.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./LinkProperties.hpp"

namespace android::net
{
	// Fields
	JObject LinkProperties::CREATOR()
	{
		return getStaticObjectField(
			"android.net.LinkProperties",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	LinkProperties::LinkProperties()
		: JObject(
			"android.net.LinkProperties",
			"()V"
		) {}
	
	// Methods
	jboolean LinkProperties::addRoute(android::net::RouteInfo arg0) const
	{
		return callMethod<jboolean>(
			"addRoute",
			"(Landroid/net/RouteInfo;)Z",
			arg0.object()
		);
	}
	void LinkProperties::clear() const
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	jint LinkProperties::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean LinkProperties::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JObject LinkProperties::getDnsServers() const
	{
		return callObjectMethod(
			"getDnsServers",
			"()Ljava/util/List;"
		);
	}
	JString LinkProperties::getDomains() const
	{
		return callObjectMethod(
			"getDomains",
			"()Ljava/lang/String;"
		);
	}
	android::net::ProxyInfo LinkProperties::getHttpProxy() const
	{
		return callObjectMethod(
			"getHttpProxy",
			"()Landroid/net/ProxyInfo;"
		);
	}
	JString LinkProperties::getInterfaceName() const
	{
		return callObjectMethod(
			"getInterfaceName",
			"()Ljava/lang/String;"
		);
	}
	JObject LinkProperties::getLinkAddresses() const
	{
		return callObjectMethod(
			"getLinkAddresses",
			"()Ljava/util/List;"
		);
	}
	jint LinkProperties::getMtu() const
	{
		return callMethod<jint>(
			"getMtu",
			"()I"
		);
	}
	JString LinkProperties::getPrivateDnsServerName() const
	{
		return callObjectMethod(
			"getPrivateDnsServerName",
			"()Ljava/lang/String;"
		);
	}
	JObject LinkProperties::getRoutes() const
	{
		return callObjectMethod(
			"getRoutes",
			"()Ljava/util/List;"
		);
	}
	jint LinkProperties::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean LinkProperties::isPrivateDnsActive() const
	{
		return callMethod<jboolean>(
			"isPrivateDnsActive",
			"()Z"
		);
	}
	void LinkProperties::setDnsServers(JObject arg0) const
	{
		callMethod<void>(
			"setDnsServers",
			"(Ljava/util/Collection;)V",
			arg0.object()
		);
	}
	void LinkProperties::setDomains(JString arg0) const
	{
		callMethod<void>(
			"setDomains",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void LinkProperties::setHttpProxy(android::net::ProxyInfo arg0) const
	{
		callMethod<void>(
			"setHttpProxy",
			"(Landroid/net/ProxyInfo;)V",
			arg0.object()
		);
	}
	void LinkProperties::setInterfaceName(JString arg0) const
	{
		callMethod<void>(
			"setInterfaceName",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void LinkProperties::setLinkAddresses(JObject arg0) const
	{
		callMethod<void>(
			"setLinkAddresses",
			"(Ljava/util/Collection;)V",
			arg0.object()
		);
	}
	void LinkProperties::setMtu(jint arg0) const
	{
		callMethod<void>(
			"setMtu",
			"(I)V",
			arg0
		);
	}
	JString LinkProperties::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void LinkProperties::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net

