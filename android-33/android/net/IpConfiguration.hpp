#pragma once

#include "./ProxyInfo.def.hpp"
#include "./StaticIpConfiguration.def.hpp"
#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./IpConfiguration.def.hpp"

namespace android::net
{
	// Fields
	inline JObject IpConfiguration::CREATOR()
	{
		return getStaticObjectField(
			"android.net.IpConfiguration",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint IpConfiguration::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean IpConfiguration::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::net::ProxyInfo IpConfiguration::getHttpProxy() const
	{
		return callObjectMethod(
			"getHttpProxy",
			"()Landroid/net/ProxyInfo;"
		);
	}
	inline android::net::StaticIpConfiguration IpConfiguration::getStaticIpConfiguration() const
	{
		return callObjectMethod(
			"getStaticIpConfiguration",
			"()Landroid/net/StaticIpConfiguration;"
		);
	}
	inline jint IpConfiguration::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString IpConfiguration::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void IpConfiguration::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
