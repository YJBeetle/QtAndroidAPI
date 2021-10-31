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
	
	LinkProperties::LinkProperties(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	LinkProperties::LinkProperties()
	{
		__thiz = QAndroidJniObject(
			"android.net.LinkProperties",
			"()V"
		);
	}
	
	// Methods
	jboolean LinkProperties::addRoute(android::net::RouteInfo arg0)
	{
		return __thiz.callMethod<jboolean>(
			"addRoute",
			"(Landroid/net/RouteInfo;)Z",
			arg0.__jniObject().object()
		);
	}
	void LinkProperties::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V"
		);
	}
	jint LinkProperties::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean LinkProperties::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject LinkProperties::getDnsServers()
	{
		return __thiz.callObjectMethod(
			"getDnsServers",
			"()Ljava/util/List;"
		);
	}
	jstring LinkProperties::getDomains()
	{
		return __thiz.callObjectMethod(
			"getDomains",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject LinkProperties::getHttpProxy()
	{
		return __thiz.callObjectMethod(
			"getHttpProxy",
			"()Landroid/net/ProxyInfo;"
		);
	}
	jstring LinkProperties::getInterfaceName()
	{
		return __thiz.callObjectMethod(
			"getInterfaceName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject LinkProperties::getLinkAddresses()
	{
		return __thiz.callObjectMethod(
			"getLinkAddresses",
			"()Ljava/util/List;"
		);
	}
	jint LinkProperties::getMtu()
	{
		return __thiz.callMethod<jint>(
			"getMtu",
			"()I"
		);
	}
	jstring LinkProperties::getPrivateDnsServerName()
	{
		return __thiz.callObjectMethod(
			"getPrivateDnsServerName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject LinkProperties::getRoutes()
	{
		return __thiz.callObjectMethod(
			"getRoutes",
			"()Ljava/util/List;"
		);
	}
	jint LinkProperties::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean LinkProperties::isPrivateDnsActive()
	{
		return __thiz.callMethod<jboolean>(
			"isPrivateDnsActive",
			"()Z"
		);
	}
	void LinkProperties::setDnsServers(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setDnsServers",
			"(Ljava/util/Collection;)V",
			arg0.__jniObject().object()
		);
	}
	void LinkProperties::setDomains(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setDomains",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void LinkProperties::setHttpProxy(android::net::ProxyInfo arg0)
	{
		__thiz.callMethod<void>(
			"setHttpProxy",
			"(Landroid/net/ProxyInfo;)V",
			arg0.__jniObject().object()
		);
	}
	void LinkProperties::setInterfaceName(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setInterfaceName",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void LinkProperties::setLinkAddresses(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setLinkAddresses",
			"(Ljava/util/Collection;)V",
			arg0.__jniObject().object()
		);
	}
	void LinkProperties::setMtu(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMtu",
			"(I)V",
			arg0
		);
	}
	jstring LinkProperties::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void LinkProperties::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::net

