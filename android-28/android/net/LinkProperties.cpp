#include "./ProxyInfo.hpp"
#include "../os/Parcel.hpp"
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
	
	// QAndroidJniObject forward
	LinkProperties::LinkProperties(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint LinkProperties::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean LinkProperties::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	JObject LinkProperties::getDnsServers()
	{
		return callObjectMethod(
			"getDnsServers",
			"()Ljava/util/List;"
		);
	}
	jstring LinkProperties::getDomains()
	{
		return callObjectMethod(
			"getDomains",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	android::net::ProxyInfo LinkProperties::getHttpProxy()
	{
		return callObjectMethod(
			"getHttpProxy",
			"()Landroid/net/ProxyInfo;"
		);
	}
	jstring LinkProperties::getInterfaceName()
	{
		return callObjectMethod(
			"getInterfaceName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	JObject LinkProperties::getLinkAddresses()
	{
		return callObjectMethod(
			"getLinkAddresses",
			"()Ljava/util/List;"
		);
	}
	jstring LinkProperties::getPrivateDnsServerName()
	{
		return callObjectMethod(
			"getPrivateDnsServerName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	JObject LinkProperties::getRoutes()
	{
		return callObjectMethod(
			"getRoutes",
			"()Ljava/util/List;"
		);
	}
	jint LinkProperties::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean LinkProperties::isPrivateDnsActive()
	{
		return callMethod<jboolean>(
			"isPrivateDnsActive",
			"()Z"
		);
	}
	jstring LinkProperties::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void LinkProperties::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net

