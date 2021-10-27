#include "./IpPrefix.hpp"
#include "../os/Parcel.hpp"
#include "../../java/net/InetAddress.hpp"
#include "./RouteInfo.hpp"

namespace android::net
{
	// Fields
	QAndroidJniObject RouteInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.RouteInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	RouteInfo::RouteInfo(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jint RouteInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean RouteInfo::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject RouteInfo::getDestination()
	{
		return __thiz.callObjectMethod(
			"getDestination",
			"()Landroid/net/IpPrefix;"
		);
	}
	QAndroidJniObject RouteInfo::getGateway()
	{
		return __thiz.callObjectMethod(
			"getGateway",
			"()Ljava/net/InetAddress;"
		);
	}
	jstring RouteInfo::getInterface()
	{
		return __thiz.callObjectMethod(
			"getInterface",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean RouteInfo::hasGateway()
	{
		return __thiz.callMethod<jboolean>(
			"hasGateway",
			"()Z"
		);
	}
	jint RouteInfo::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean RouteInfo::isDefaultRoute()
	{
		return __thiz.callMethod<jboolean>(
			"isDefaultRoute",
			"()Z"
		);
	}
	jboolean RouteInfo::matches(java::net::InetAddress arg0)
	{
		return __thiz.callMethod<jboolean>(
			"matches",
			"(Ljava/net/InetAddress;)Z",
			arg0.__jniObject().object()
		);
	}
	jstring RouteInfo::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void RouteInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::net

