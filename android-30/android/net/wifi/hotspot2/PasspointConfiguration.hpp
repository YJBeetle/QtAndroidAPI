#pragma once

#include "./pps/Credential.def.hpp"
#include "./pps/HomeSp.def.hpp"
#include "../../../os/Parcel.def.hpp"
#include "../../../../JObject.hpp"
#include "../../../../JString.hpp"
#include "./PasspointConfiguration.def.hpp"

namespace android::net::wifi::hotspot2
{
	// Fields
	inline JObject PasspointConfiguration::CREATOR()
	{
		return getStaticObjectField(
			"android.net.wifi.hotspot2.PasspointConfiguration",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline PasspointConfiguration::PasspointConfiguration()
		: JObject(
			"android.net.wifi.hotspot2.PasspointConfiguration",
			"()V"
		) {}
	inline PasspointConfiguration::PasspointConfiguration(android::net::wifi::hotspot2::PasspointConfiguration &arg0)
		: JObject(
			"android.net.wifi.hotspot2.PasspointConfiguration",
			"(Landroid/net/wifi/hotspot2/PasspointConfiguration;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jint PasspointConfiguration::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean PasspointConfiguration::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::net::wifi::hotspot2::pps::Credential PasspointConfiguration::getCredential() const
	{
		return callObjectMethod(
			"getCredential",
			"()Landroid/net/wifi/hotspot2/pps/Credential;"
		);
	}
	inline android::net::wifi::hotspot2::pps::HomeSp PasspointConfiguration::getHomeSp() const
	{
		return callObjectMethod(
			"getHomeSp",
			"()Landroid/net/wifi/hotspot2/pps/HomeSp;"
		);
	}
	inline jlong PasspointConfiguration::getSubscriptionExpirationTimeMillis() const
	{
		return callMethod<jlong>(
			"getSubscriptionExpirationTimeMillis",
			"()J"
		);
	}
	inline JString PasspointConfiguration::getUniqueId() const
	{
		return callObjectMethod(
			"getUniqueId",
			"()Ljava/lang/String;"
		);
	}
	inline jint PasspointConfiguration::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean PasspointConfiguration::isOsuProvisioned() const
	{
		return callMethod<jboolean>(
			"isOsuProvisioned",
			"()Z"
		);
	}
	inline void PasspointConfiguration::setCredential(android::net::wifi::hotspot2::pps::Credential arg0) const
	{
		callMethod<void>(
			"setCredential",
			"(Landroid/net/wifi/hotspot2/pps/Credential;)V",
			arg0.object()
		);
	}
	inline void PasspointConfiguration::setHomeSp(android::net::wifi::hotspot2::pps::HomeSp arg0) const
	{
		callMethod<void>(
			"setHomeSp",
			"(Landroid/net/wifi/hotspot2/pps/HomeSp;)V",
			arg0.object()
		);
	}
	inline JString PasspointConfiguration::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void PasspointConfiguration::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net::wifi::hotspot2

// Base class headers

