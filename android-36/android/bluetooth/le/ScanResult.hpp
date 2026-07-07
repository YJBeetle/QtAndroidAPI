#pragma once

#include "../BluetoothDevice.def.hpp"
#include "./ScanRecord.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./ScanResult.def.hpp"

namespace android::bluetooth::le
{
	// Fields
	inline JObject ScanResult::CREATOR()
	{
		return getStaticObjectField(
			"android.bluetooth.le.ScanResult",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint ScanResult::DATA_COMPLETE()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.ScanResult",
			"DATA_COMPLETE"
		);
	}
	inline jint ScanResult::DATA_TRUNCATED()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.ScanResult",
			"DATA_TRUNCATED"
		);
	}
	inline jint ScanResult::PERIODIC_INTERVAL_NOT_PRESENT()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.ScanResult",
			"PERIODIC_INTERVAL_NOT_PRESENT"
		);
	}
	inline jint ScanResult::PHY_UNUSED()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.ScanResult",
			"PHY_UNUSED"
		);
	}
	inline jint ScanResult::SID_NOT_PRESENT()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.ScanResult",
			"SID_NOT_PRESENT"
		);
	}
	inline jint ScanResult::TX_POWER_NOT_PRESENT()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.ScanResult",
			"TX_POWER_NOT_PRESENT"
		);
	}
	
	// Constructors
	inline ScanResult::ScanResult(android::bluetooth::BluetoothDevice arg0, android::bluetooth::le::ScanRecord arg1, jint arg2, jlong arg3)
		: JObject(
			"android.bluetooth.le.ScanResult",
			"(Landroid/bluetooth/BluetoothDevice;Landroid/bluetooth/le/ScanRecord;IJ)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	inline ScanResult::ScanResult(android::bluetooth::BluetoothDevice arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, android::bluetooth::le::ScanRecord arg8, jlong arg9)
		: JObject(
			"android.bluetooth.le.ScanResult",
			"(Landroid/bluetooth/BluetoothDevice;IIIIIIILandroid/bluetooth/le/ScanRecord;J)V",
			arg0.object(),
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7,
			arg8.object(),
			arg9
		) {}
	
	// Methods
	inline jint ScanResult::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean ScanResult::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint ScanResult::getAdvertisingSid() const
	{
		return callMethod<jint>(
			"getAdvertisingSid",
			"()I"
		);
	}
	inline jint ScanResult::getDataStatus() const
	{
		return callMethod<jint>(
			"getDataStatus",
			"()I"
		);
	}
	inline android::bluetooth::BluetoothDevice ScanResult::getDevice() const
	{
		return callObjectMethod(
			"getDevice",
			"()Landroid/bluetooth/BluetoothDevice;"
		);
	}
	inline jint ScanResult::getPeriodicAdvertisingInterval() const
	{
		return callMethod<jint>(
			"getPeriodicAdvertisingInterval",
			"()I"
		);
	}
	inline jint ScanResult::getPrimaryPhy() const
	{
		return callMethod<jint>(
			"getPrimaryPhy",
			"()I"
		);
	}
	inline jint ScanResult::getRssi() const
	{
		return callMethod<jint>(
			"getRssi",
			"()I"
		);
	}
	inline android::bluetooth::le::ScanRecord ScanResult::getScanRecord() const
	{
		return callObjectMethod(
			"getScanRecord",
			"()Landroid/bluetooth/le/ScanRecord;"
		);
	}
	inline jint ScanResult::getSecondaryPhy() const
	{
		return callMethod<jint>(
			"getSecondaryPhy",
			"()I"
		);
	}
	inline jlong ScanResult::getTimestampNanos() const
	{
		return callMethod<jlong>(
			"getTimestampNanos",
			"()J"
		);
	}
	inline jint ScanResult::getTxPower() const
	{
		return callMethod<jint>(
			"getTxPower",
			"()I"
		);
	}
	inline jint ScanResult::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean ScanResult::isConnectable() const
	{
		return callMethod<jboolean>(
			"isConnectable",
			"()Z"
		);
	}
	inline jboolean ScanResult::isLegacy() const
	{
		return callMethod<jboolean>(
			"isLegacy",
			"()Z"
		);
	}
	inline JString ScanResult::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void ScanResult::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::bluetooth::le

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::bluetooth::le;
#endif
