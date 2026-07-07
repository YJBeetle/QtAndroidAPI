#pragma once

#include "../../../os/Parcel.def.hpp"
#include "../../../../JObject.hpp"
#include "../../../../JString.hpp"
#include "./BleRssiRangingParams.def.hpp"

namespace android::ranging::ble::rssi
{
	// Fields
	inline JObject BleRssiRangingParams::CREATOR()
	{
		return getStaticObjectField(
			"android.ranging.ble.rssi.BleRssiRangingParams",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint BleRssiRangingParams::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean BleRssiRangingParams::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JString BleRssiRangingParams::getPeerBluetoothAddress() const
	{
		return callObjectMethod(
			"getPeerBluetoothAddress",
			"()Ljava/lang/String;"
		);
	}
	inline jint BleRssiRangingParams::getRangingUpdateRate() const
	{
		return callMethod<jint>(
			"getRangingUpdateRate",
			"()I"
		);
	}
	inline jint BleRssiRangingParams::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline void BleRssiRangingParams::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::ranging::ble::rssi

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::ranging::ble::rssi;
#endif
