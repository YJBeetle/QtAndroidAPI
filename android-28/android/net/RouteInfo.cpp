#include "./IpPrefix.hpp"
#include "../os/Parcel.hpp"
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
	
	// QJniObject forward
	RouteInfo::RouteInfo(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint RouteInfo::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean RouteInfo::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
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
	jstring RouteInfo::getInterface()
	{
		return callObjectMethod(
			"getInterface",
			"()Ljava/lang/String;"
		).object<jstring>();
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
	jstring RouteInfo::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
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

