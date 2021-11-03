#include "./IpPrefix.hpp"
#include "../os/Parcel.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../../java/net/InetAddress.hpp"
#include "./RouteInfo.hpp"

namespace android::net
{
	// Fields
	JObject RouteInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.net.RouteInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	RouteInfo::RouteInfo(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint RouteInfo::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean RouteInfo::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	android::net::IpPrefix RouteInfo::getDestination()
	{
		return callObjectMethod(
			"getDestination",
			"()Landroid/net/IpPrefix;"
		);
	}
	java::net::InetAddress RouteInfo::getGateway()
	{
		return callObjectMethod(
			"getGateway",
			"()Ljava/net/InetAddress;"
		);
	}
	JString RouteInfo::getInterface()
	{
		return callObjectMethod(
			"getInterface",
			"()Ljava/lang/String;"
		);
	}
	jboolean RouteInfo::hasGateway()
	{
		return callMethod<jboolean>(
			"hasGateway",
			"()Z"
		);
	}
	jint RouteInfo::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean RouteInfo::isDefaultRoute()
	{
		return callMethod<jboolean>(
			"isDefaultRoute",
			"()Z"
		);
	}
	jboolean RouteInfo::matches(java::net::InetAddress arg0)
	{
		return callMethod<jboolean>(
			"matches",
			"(Ljava/net/InetAddress;)Z",
			arg0.object()
		);
	}
	JString RouteInfo::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void RouteInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net

