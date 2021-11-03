#include "../BluetoothDevice.hpp"
#include "./ScanRecord.hpp"
#include "../../os/Parcel.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./ScanResult.hpp"

namespace android::bluetooth::le
{
	// Fields
	JObject ScanResult::CREATOR()
	{
		return getStaticObjectField(
			"android.bluetooth.le.ScanResult",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint ScanResult::DATA_COMPLETE()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.ScanResult",
			"DATA_COMPLETE"
		);
	}
	jint ScanResult::DATA_TRUNCATED()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.ScanResult",
			"DATA_TRUNCATED"
		);
	}
	jint ScanResult::PERIODIC_INTERVAL_NOT_PRESENT()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.ScanResult",
			"PERIODIC_INTERVAL_NOT_PRESENT"
		);
	}
	jint ScanResult::PHY_UNUSED()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.ScanResult",
			"PHY_UNUSED"
		);
	}
	jint ScanResult::SID_NOT_PRESENT()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.ScanResult",
			"SID_NOT_PRESENT"
		);
	}
	jint ScanResult::TX_POWER_NOT_PRESENT()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.ScanResult",
			"TX_POWER_NOT_PRESENT"
		);
	}
	
	// QAndroidJniObject forward
	ScanResult::ScanResult(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	ScanResult::ScanResult(android::bluetooth::BluetoothDevice arg0, android::bluetooth::le::ScanRecord arg1, jint arg2, jlong arg3)
		: JObject(
			"android.bluetooth.le.ScanResult",
			"(Landroid/bluetooth/BluetoothDevice;Landroid/bluetooth/le/ScanRecord;IJ)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	ScanResult::ScanResult(android::bluetooth::BluetoothDevice arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, android::bluetooth::le::ScanRecord arg8, jlong arg9)
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
	jint ScanResult::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean ScanResult::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint ScanResult::getAdvertisingSid() const
	{
		return callMethod<jint>(
			"getAdvertisingSid",
			"()I"
		);
	}
	jint ScanResult::getDataStatus() const
	{
		return callMethod<jint>(
			"getDataStatus",
			"()I"
		);
	}
	android::bluetooth::BluetoothDevice ScanResult::getDevice() const
	{
		return callObjectMethod(
			"getDevice",
			"()Landroid/bluetooth/BluetoothDevice;"
		);
	}
	jint ScanResult::getPeriodicAdvertisingInterval() const
	{
		return callMethod<jint>(
			"getPeriodicAdvertisingInterval",
			"()I"
		);
	}
	jint ScanResult::getPrimaryPhy() const
	{
		return callMethod<jint>(
			"getPrimaryPhy",
			"()I"
		);
	}
	jint ScanResult::getRssi() const
	{
		return callMethod<jint>(
			"getRssi",
			"()I"
		);
	}
	android::bluetooth::le::ScanRecord ScanResult::getScanRecord() const
	{
		return callObjectMethod(
			"getScanRecord",
			"()Landroid/bluetooth/le/ScanRecord;"
		);
	}
	jint ScanResult::getSecondaryPhy() const
	{
		return callMethod<jint>(
			"getSecondaryPhy",
			"()I"
		);
	}
	jlong ScanResult::getTimestampNanos() const
	{
		return callMethod<jlong>(
			"getTimestampNanos",
			"()J"
		);
	}
	jint ScanResult::getTxPower() const
	{
		return callMethod<jint>(
			"getTxPower",
			"()I"
		);
	}
	jint ScanResult::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean ScanResult::isConnectable() const
	{
		return callMethod<jboolean>(
			"isConnectable",
			"()Z"
		);
	}
	jboolean ScanResult::isLegacy() const
	{
		return callMethod<jboolean>(
			"isLegacy",
			"()Z"
		);
	}
	JString ScanResult::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void ScanResult::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::bluetooth::le

