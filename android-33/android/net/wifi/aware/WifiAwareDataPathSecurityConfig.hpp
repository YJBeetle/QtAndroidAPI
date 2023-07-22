#pragma once

#include "../../../../JByteArray.hpp"
#include "../../../os/Parcel.def.hpp"
#include "../../../../JObject.hpp"
#include "../../../../JString.hpp"
#include "./WifiAwareDataPathSecurityConfig.def.hpp"

namespace android::net::wifi::aware
{
	// Fields
	inline JObject WifiAwareDataPathSecurityConfig::CREATOR()
	{
		return getStaticObjectField(
			"android.net.wifi.aware.WifiAwareDataPathSecurityConfig",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint WifiAwareDataPathSecurityConfig::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean WifiAwareDataPathSecurityConfig::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint WifiAwareDataPathSecurityConfig::getCipherSuite() const
	{
		return callMethod<jint>(
			"getCipherSuite",
			"()I"
		);
	}
	inline JByteArray WifiAwareDataPathSecurityConfig::getPmk() const
	{
		return callObjectMethod(
			"getPmk",
			"()[B"
		);
	}
	inline JByteArray WifiAwareDataPathSecurityConfig::getPmkId() const
	{
		return callObjectMethod(
			"getPmkId",
			"()[B"
		);
	}
	inline JString WifiAwareDataPathSecurityConfig::getPskPassphrase() const
	{
		return callObjectMethod(
			"getPskPassphrase",
			"()Ljava/lang/String;"
		);
	}
	inline jint WifiAwareDataPathSecurityConfig::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString WifiAwareDataPathSecurityConfig::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void WifiAwareDataPathSecurityConfig::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net::wifi::aware

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::wifi::aware;
#endif
