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
	jint RouteInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean RouteInfo::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	android::net::IpPrefix RouteInfo::getDestination() const
	{
		return callObjectMethod(
			"getDestination",
			"()Landroid/net/IpPrefix;"
		);
	}
	java::net::InetAddress RouteInfo::getGateway() const
	{
		return callObjectMethod(
			"getGateway",
			"()Ljava/net/InetAddress;"
		);
	}
	JString RouteInfo::getInterface() const
	{
		return callObjectMethod(
			"getInterface",
			"()Ljava/lang/String;"
		);
	}
	jboolean RouteInfo::hasGateway() const
	{
		return callMethod<jboolean>(
			"hasGateway",
			"()Z"
		);
	}
	jint RouteInfo::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean RouteInfo::isDefaultRoute() const
	{
		return callMethod<jboolean>(
			"isDefaultRoute",
			"()Z"
		);
	}
	jboolean RouteInfo::matches(java::net::InetAddress arg0) const
	{
		return callMethod<jboolean>(
			"matches",
			"(Ljava/net/InetAddress;)Z",
			arg0.object()
		);
	}
	JString RouteInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void RouteInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net

