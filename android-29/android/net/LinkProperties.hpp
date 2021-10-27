#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class ProxyInfo;
}
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
	class LinkProperties : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean addRoute(__jni_impl::android::net::RouteInfo arg0);
		void clear();
		jint describeContents();
		jboolean equals(jobject arg0);
		QAndroidJniObject getDnsServers();
		jstring getDomains();
		QAndroidJniObject getHttpProxy();
		jstring getInterfaceName();
		QAndroidJniObject getLinkAddresses();
		jint getMtu();
		jstring getPrivateDnsServerName();
		QAndroidJniObject getRoutes();
		jint hashCode();
		jboolean isPrivateDnsActive();
		void setDnsServers(__jni_impl::__JniBaseClass arg0);
		void setDomains(jstring arg0);
		void setDomains(const QString &arg0);
		void setHttpProxy(__jni_impl::android::net::ProxyInfo arg0);
		void setInterfaceName(jstring arg0);
		void setInterfaceName(const QString &arg0);
		void setLinkAddresses(__jni_impl::__JniBaseClass arg0);
		void setMtu(jint arg0);
		jstring toString();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::net

#include "./ProxyInfo.hpp"
#include "./RouteInfo.hpp"
#include "../os/Parcel.hpp"

namespace __jni_impl::android::net
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
	
	// Constructors
	void LinkProperties::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.LinkProperties",
			"()V"
		);
	}
	
	// Methods
	jboolean LinkProperties::addRoute(__jni_impl::android::net::RouteInfo arg0)
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
	void LinkProperties::setDnsServers(__jni_impl::__JniBaseClass arg0)
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
	void LinkProperties::setDomains(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setDomains",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void LinkProperties::setHttpProxy(__jni_impl::android::net::ProxyInfo arg0)
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
	void LinkProperties::setInterfaceName(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setInterfaceName",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void LinkProperties::setLinkAddresses(__jni_impl::__JniBaseClass arg0)
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
	void LinkProperties::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
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

