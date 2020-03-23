#pragma once

#ifndef ANDROID_NET_LINKPROPERTIES
#define ANDROID_NET_LINKPROPERTIES

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class RouteInfo;
}
namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::net
{
	class ProxyInfo;
}

namespace __jni_impl::android::net
{
	class LinkProperties : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		QAndroidJniObject toString();
		jint hashCode();
		void clear();
		jboolean addRoute(__jni_impl::android::net::RouteInfo arg0);
		QAndroidJniObject getRoutes();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		void setInterfaceName(jstring arg0);
		QAndroidJniObject getInterfaceName();
		QAndroidJniObject getLinkAddresses();
		void setLinkAddresses(__jni_impl::__JniBaseClass arg0);
		void setDnsServers(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getDnsServers();
		jboolean isPrivateDnsActive();
		QAndroidJniObject getPrivateDnsServerName();
		void setDomains(jstring arg0);
		QAndroidJniObject getDomains();
		void setMtu(jint arg0);
		jint getMtu();
		void setHttpProxy(__jni_impl::android::net::ProxyInfo arg0);
		QAndroidJniObject getHttpProxy();
	};
} // namespace __jni_impl::android::net

#include "RouteInfo.hpp"
#include "../os/Parcel.hpp"
#include "ProxyInfo.hpp"

namespace __jni_impl::android::net
{
	// Fields
	QAndroidJniObject LinkProperties::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.LinkProperties",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	
	// Constructors
	void LinkProperties::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.LinkProperties",
			"()V");
	}
	
	// Methods
	jboolean LinkProperties::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject LinkProperties::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint LinkProperties::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	void LinkProperties::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V");
	}
	jboolean LinkProperties::addRoute(__jni_impl::android::net::RouteInfo arg0)
	{
		return __thiz.callMethod<jboolean>(
			"addRoute",
			"(Landroid/net/RouteInfo;)Z",
			arg0.__jniObject().object());
	}
	QAndroidJniObject LinkProperties::getRoutes()
	{
		return __thiz.callObjectMethod(
			"getRoutes",
			"()Ljava/util/List;");
	}
	jint LinkProperties::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void LinkProperties::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	void LinkProperties::setInterfaceName(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setInterfaceName",
			"(Ljava/lang/String;)V",
			arg0);
	}
	QAndroidJniObject LinkProperties::getInterfaceName()
	{
		return __thiz.callObjectMethod(
			"getInterfaceName",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject LinkProperties::getLinkAddresses()
	{
		return __thiz.callObjectMethod(
			"getLinkAddresses",
			"()Ljava/util/List;");
	}
	void LinkProperties::setLinkAddresses(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setLinkAddresses",
			"(Ljava/util/Collection;)V",
			arg0.__jniObject().object());
	}
	void LinkProperties::setDnsServers(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setDnsServers",
			"(Ljava/util/Collection;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject LinkProperties::getDnsServers()
	{
		return __thiz.callObjectMethod(
			"getDnsServers",
			"()Ljava/util/List;");
	}
	jboolean LinkProperties::isPrivateDnsActive()
	{
		return __thiz.callMethod<jboolean>(
			"isPrivateDnsActive",
			"()Z");
	}
	QAndroidJniObject LinkProperties::getPrivateDnsServerName()
	{
		return __thiz.callObjectMethod(
			"getPrivateDnsServerName",
			"()Ljava/lang/String;");
	}
	void LinkProperties::setDomains(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setDomains",
			"(Ljava/lang/String;)V",
			arg0);
	}
	QAndroidJniObject LinkProperties::getDomains()
	{
		return __thiz.callObjectMethod(
			"getDomains",
			"()Ljava/lang/String;");
	}
	void LinkProperties::setMtu(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMtu",
			"(I)V",
			arg0);
	}
	jint LinkProperties::getMtu()
	{
		return __thiz.callMethod<jint>(
			"getMtu",
			"()I");
	}
	void LinkProperties::setHttpProxy(__jni_impl::android::net::ProxyInfo arg0)
	{
		__thiz.callMethod<void>(
			"setHttpProxy",
			"(Landroid/net/ProxyInfo;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject LinkProperties::getHttpProxy()
	{
		return __thiz.callObjectMethod(
			"getHttpProxy",
			"()Landroid/net/ProxyInfo;");
	}
} // namespace __jni_impl::android::net

namespace android::net
{
	class LinkProperties : public __jni_impl::android::net::LinkProperties
	{
	public:
		LinkProperties(QAndroidJniObject obj) { __thiz = obj; }
		LinkProperties()
		{
			__constructor();
		}
	};
} // namespace android::net

#endif // ANDROID_NET_LINKPROPERTIES

