#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "./VcnConfig.def.hpp"

namespace android::net::vcn
{
	// Fields
	inline JObject VcnConfig::CREATOR()
	{
		return getStaticObjectField(
			"android.net.vcn.VcnConfig",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint VcnConfig::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean VcnConfig::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JObject VcnConfig::getGatewayConnectionConfigs() const
	{
		return callObjectMethod(
			"getGatewayConnectionConfigs",
			"()Ljava/util/Set;"
		);
	}
	inline jint VcnConfig::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline void VcnConfig::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net::vcn

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::vcn;
#endif
