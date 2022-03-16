#include "./ProxyInfo.hpp"
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
	
	// Methods
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

