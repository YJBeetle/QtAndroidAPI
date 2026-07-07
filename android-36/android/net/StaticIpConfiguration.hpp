#pragma once

#include "./LinkAddress.def.hpp"
#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../../java/net/InetAddress.def.hpp"
#include "./StaticIpConfiguration.def.hpp"

namespace android::net
{
	// Fields
	inline JObject StaticIpConfiguration::CREATOR()
	{
		return getStaticObjectField(
			"android.net.StaticIpConfiguration",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint StaticIpConfiguration::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean StaticIpConfiguration::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JObject StaticIpConfiguration::getDnsServers() const
	{
		return callObjectMethod(
			"getDnsServers",
			"()Ljava/util/List;"
		);
	}
	inline JString StaticIpConfiguration::getDomains() const
	{
		return callObjectMethod(
			"getDomains",
			"()Ljava/lang/String;"
		);
	}
	inline java::net::InetAddress StaticIpConfiguration::getGateway() const
	{
		return callObjectMethod(
			"getGateway",
			"()Ljava/net/InetAddress;"
		);
	}
	inline android::net::LinkAddress StaticIpConfiguration::getIpAddress() const
	{
		return callObjectMethod(
			"getIpAddress",
			"()Landroid/net/LinkAddress;"
		);
	}
	inline jint StaticIpConfiguration::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString StaticIpConfiguration::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void StaticIpConfiguration::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net;
#endif
