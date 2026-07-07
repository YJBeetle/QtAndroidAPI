#pragma once

#include "../../../../JByteArray.hpp"
#include "../../../os/Parcel.def.hpp"
#include "../../../../JObject.hpp"
#include "../../../../JString.hpp"
#include "./RttRangingParams.def.hpp"

namespace android::ranging::wifi::rtt
{
	// Fields
	inline JObject RttRangingParams::CREATOR()
	{
		return getStaticObjectField(
			"android.ranging.wifi.rtt.RttRangingParams",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint RttRangingParams::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean RttRangingParams::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JByteArray RttRangingParams::getMatchFilter() const
	{
		return callObjectMethod(
			"getMatchFilter",
			"()[B"
		);
	}
	inline jint RttRangingParams::getRangingUpdateRate() const
	{
		return callMethod<jint>(
			"getRangingUpdateRate",
			"()I"
		);
	}
	inline JString RttRangingParams::getServiceName() const
	{
		return callObjectMethod(
			"getServiceName",
			"()Ljava/lang/String;"
		);
	}
	inline jint RttRangingParams::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean RttRangingParams::isPeriodicRangingHwFeatureEnabled() const
	{
		return callMethod<jboolean>(
			"isPeriodicRangingHwFeatureEnabled",
			"()Z"
		);
	}
	inline JString RttRangingParams::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void RttRangingParams::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::ranging::wifi::rtt

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::ranging::wifi::rtt;
#endif
