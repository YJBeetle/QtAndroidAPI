#pragma once

#include "../../../os/Parcel.def.hpp"
#include "../../../../JObject.hpp"
#include "../../../../JString.hpp"
#include "./BleCsRangingParams.def.hpp"

namespace android::ranging::ble::cs
{
	// Fields
	inline JObject BleCsRangingParams::CREATOR()
	{
		return getStaticObjectField(
			"android.ranging.ble.cs.BleCsRangingParams",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint BleCsRangingParams::LOCATION_TYPE_INDOOR()
	{
		return getStaticField<jint>(
			"android.ranging.ble.cs.BleCsRangingParams",
			"LOCATION_TYPE_INDOOR"
		);
	}
	inline jint BleCsRangingParams::LOCATION_TYPE_OUTDOOR()
	{
		return getStaticField<jint>(
			"android.ranging.ble.cs.BleCsRangingParams",
			"LOCATION_TYPE_OUTDOOR"
		);
	}
	inline jint BleCsRangingParams::LOCATION_TYPE_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.ranging.ble.cs.BleCsRangingParams",
			"LOCATION_TYPE_UNKNOWN"
		);
	}
	inline jint BleCsRangingParams::SIGHT_TYPE_LINE_OF_SIGHT()
	{
		return getStaticField<jint>(
			"android.ranging.ble.cs.BleCsRangingParams",
			"SIGHT_TYPE_LINE_OF_SIGHT"
		);
	}
	inline jint BleCsRangingParams::SIGHT_TYPE_NON_LINE_OF_SIGHT()
	{
		return getStaticField<jint>(
			"android.ranging.ble.cs.BleCsRangingParams",
			"SIGHT_TYPE_NON_LINE_OF_SIGHT"
		);
	}
	inline jint BleCsRangingParams::SIGHT_TYPE_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.ranging.ble.cs.BleCsRangingParams",
			"SIGHT_TYPE_UNKNOWN"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint BleCsRangingParams::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean BleCsRangingParams::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint BleCsRangingParams::getLocationType() const
	{
		return callMethod<jint>(
			"getLocationType",
			"()I"
		);
	}
	inline JString BleCsRangingParams::getPeerBluetoothAddress() const
	{
		return callObjectMethod(
			"getPeerBluetoothAddress",
			"()Ljava/lang/String;"
		);
	}
	inline jint BleCsRangingParams::getRangingUpdateRate() const
	{
		return callMethod<jint>(
			"getRangingUpdateRate",
			"()I"
		);
	}
	inline jint BleCsRangingParams::getSecurityLevel() const
	{
		return callMethod<jint>(
			"getSecurityLevel",
			"()I"
		);
	}
	inline jint BleCsRangingParams::getSightType() const
	{
		return callMethod<jint>(
			"getSightType",
			"()I"
		);
	}
	inline jint BleCsRangingParams::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline void BleCsRangingParams::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::ranging::ble::cs

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::ranging::ble::cs;
#endif
