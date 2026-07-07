#pragma once

#include "../../os/Parcel.def.hpp"
#include "../RangingDevice.def.hpp"
#include "../ble/cs/BleCsRangingParams.def.hpp"
#include "../ble/rssi/BleRssiRangingParams.def.hpp"
#include "../uwb/UwbRangingParams.def.hpp"
#include "../wifi/rtt/RttRangingParams.def.hpp"
#include "../../../JString.hpp"
#include "./RawRangingDevice.def.hpp"

namespace android::ranging::raw
{
	// Fields
	inline JObject RawRangingDevice::CREATOR()
	{
		return getStaticObjectField(
			"android.ranging.raw.RawRangingDevice",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint RawRangingDevice::UPDATE_RATE_FREQUENT()
	{
		return getStaticField<jint>(
			"android.ranging.raw.RawRangingDevice",
			"UPDATE_RATE_FREQUENT"
		);
	}
	inline jint RawRangingDevice::UPDATE_RATE_INFREQUENT()
	{
		return getStaticField<jint>(
			"android.ranging.raw.RawRangingDevice",
			"UPDATE_RATE_INFREQUENT"
		);
	}
	inline jint RawRangingDevice::UPDATE_RATE_NORMAL()
	{
		return getStaticField<jint>(
			"android.ranging.raw.RawRangingDevice",
			"UPDATE_RATE_NORMAL"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint RawRangingDevice::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline android::ranging::ble::rssi::BleRssiRangingParams RawRangingDevice::getBleRssiRangingParams() const
	{
		return callObjectMethod(
			"getBleRssiRangingParams",
			"()Landroid/ranging/ble/rssi/BleRssiRangingParams;"
		);
	}
	inline android::ranging::ble::cs::BleCsRangingParams RawRangingDevice::getCsRangingParams() const
	{
		return callObjectMethod(
			"getCsRangingParams",
			"()Landroid/ranging/ble/cs/BleCsRangingParams;"
		);
	}
	inline android::ranging::RangingDevice RawRangingDevice::getRangingDevice() const
	{
		return callObjectMethod(
			"getRangingDevice",
			"()Landroid/ranging/RangingDevice;"
		);
	}
	inline android::ranging::wifi::rtt::RttRangingParams RawRangingDevice::getRttRangingParams() const
	{
		return callObjectMethod(
			"getRttRangingParams",
			"()Landroid/ranging/wifi/rtt/RttRangingParams;"
		);
	}
	inline android::ranging::uwb::UwbRangingParams RawRangingDevice::getUwbRangingParams() const
	{
		return callObjectMethod(
			"getUwbRangingParams",
			"()Landroid/ranging/uwb/UwbRangingParams;"
		);
	}
	inline JString RawRangingDevice::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void RawRangingDevice::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::ranging::raw

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::ranging::raw;
#endif
