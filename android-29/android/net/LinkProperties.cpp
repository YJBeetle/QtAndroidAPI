#include "./ProxyInfo.hpp"
#include "./RouteInfo.hpp"
#include "../os/Parcel.hpp"
#include "./LinkProperties.hpp"

namespace android::net
{
	// Fields
	QAndroidJniObject LinkProperties::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.LinkProperties",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	LinkProperties::LinkProperties(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	LinkProperties::LinkProperties()
		: __JniBaseClass(
			"android.net.LinkProperties",
			"()V"
		) {}
	
	// Methods
	jboolean LinkProperties::addRoute(android::net::RouteInfo arg0)
	{
		return callMethod<jboolean>(
			"addRoute",
			"(Landroid/net/RouteInfo;)Z",
			arg0.object()
		);
	}
	void LinkProperties::clear()
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
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
	QAndroidJniObject LinkProperties::getDnsServers()
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
	QAndroidJniObject LinkProperties::getHttpProxy()
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
	QAndroidJniObject LinkProperties::getLinkAddresses()
	{
		return callObjectMethod(
			"getLinkAddresses",
			"()Ljava/util/List;"
		);
	}
	jint LinkProperties::getMtu()
	{
		return callMethod<jint>(
			"getMtu",
			"()I"
		);
	}
	jstring LinkProperties::getPrivateDnsServerName()
	{
		return callObjectMethod(
			"getPrivateDnsServerName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject LinkProperties::getRoutes()
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
	void LinkProperties::setDnsServers(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setDnsServers",
			"(Ljava/util/Collection;)V",
			arg0.object()
		);
	}
	void LinkProperties::setDomains(jstring arg0)
	{
		callMethod<void>(
			"setDomains",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void LinkProperties::setHttpProxy(android::net::ProxyInfo arg0)
	{
		callMethod<void>(
			"setHttpProxy",
			"(Landroid/net/ProxyInfo;)V",
			arg0.object()
		);
	}
	void LinkProperties::setInterfaceName(jstring arg0)
	{
		callMethod<void>(
			"setInterfaceName",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void LinkProperties::setLinkAddresses(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setLinkAddresses",
			"(Ljava/util/Collection;)V",
			arg0.object()
		);
	}
	void LinkProperties::setMtu(jint arg0)
	{
		callMethod<void>(
			"setMtu",
			"(I)V",
			arg0
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
