#pragma once

#ifndef ANDROID_NET_ROUTEINFO
#define ANDROID_NET_ROUTEINFO

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::net
{
	class InetAddress;
}
namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::net
{
	class IpPrefix;
}

namespace __jni_impl::android::net
{
	class RouteInfo : public __JniBaseClass
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
		jboolean matches(__jni_impl::java::net::InetAddress arg0);
		QAndroidJniObject getInterface();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		QAndroidJniObject getDestination();
		QAndroidJniObject getGateway();
		jboolean isDefaultRoute();
		jboolean hasGateway();
	};
} // namespace __jni_impl::android::net

#include "../../java/net/InetAddress.hpp"
#include "../os/Parcel.hpp"
#include "IpPrefix.hpp"

namespace __jni_impl::android::net
{
	// Fields
	QAndroidJniObject RouteInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.RouteInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	
	// Constructors
	void RouteInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.RouteInfo",
			"(V)V");
	}
	
	// Methods
	jboolean RouteInfo::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject RouteInfo::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint RouteInfo::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	jboolean RouteInfo::matches(__jni_impl::java::net::InetAddress arg0)
	{
		return __thiz.callMethod<jboolean>(
			"matches",
			"(Ljava/net/InetAddress;)Z",
			arg0.__jniObject().object());
	}
	QAndroidJniObject RouteInfo::getInterface()
	{
		return __thiz.callObjectMethod(
			"getInterface",
			"()Ljava/lang/String;");
	}
	jint RouteInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void RouteInfo::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	QAndroidJniObject RouteInfo::getDestination()
	{
		return __thiz.callObjectMethod(
			"getDestination",
			"()Landroid/net/IpPrefix;");
	}
	QAndroidJniObject RouteInfo::getGateway()
	{
		return __thiz.callObjectMethod(
			"getGateway",
			"()Ljava/net/InetAddress;");
	}
	jboolean RouteInfo::isDefaultRoute()
	{
		return __thiz.callMethod<jboolean>(
			"isDefaultRoute",
			"()Z");
	}
	jboolean RouteInfo::hasGateway()
	{
		return __thiz.callMethod<jboolean>(
			"hasGateway",
			"()Z");
	}
} // namespace __jni_impl::android::net

namespace android::net
{
	class RouteInfo : public __jni_impl::android::net::RouteInfo
	{
	public:
		RouteInfo(QAndroidJniObject obj) { __thiz = obj; }
		RouteInfo()
		{
			__constructor();
		}
	};
} // namespace android::net

#endif // ANDROID_NET_ROUTEINFO

