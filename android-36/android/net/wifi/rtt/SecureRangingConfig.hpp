#pragma once

#include "./PasnConfig.def.hpp"
#include "../../../os/Parcel.def.hpp"
#include "../../../../JObject.hpp"
#include "../../../../JString.hpp"
#include "./SecureRangingConfig.def.hpp"

namespace android::net::wifi::rtt
{
	// Fields
	inline JObject SecureRangingConfig::CREATOR()
	{
		return getStaticObjectField(
			"android.net.wifi.rtt.SecureRangingConfig",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint SecureRangingConfig::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean SecureRangingConfig::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::net::wifi::rtt::PasnConfig SecureRangingConfig::getPasnConfig() const
	{
		return callObjectMethod(
			"getPasnConfig",
			"()Landroid/net/wifi/rtt/PasnConfig;"
		);
	}
	inline jint SecureRangingConfig::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean SecureRangingConfig::isRangingFrameProtectionEnabled() const
	{
		return callMethod<jboolean>(
			"isRangingFrameProtectionEnabled",
			"()Z"
		);
	}
	inline jboolean SecureRangingConfig::isSecureHeLtfEnabled() const
	{
		return callMethod<jboolean>(
			"isSecureHeLtfEnabled",
			"()Z"
		);
	}
	inline JString SecureRangingConfig::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void SecureRangingConfig::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net::wifi::rtt

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::wifi::rtt;
#endif
