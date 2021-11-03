#include "../BluetoothDevice.hpp"
#include "./ScanRecord.hpp"
#include "../../os/Parcel.hpp"
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
	
	// QJniObject forward
	ScanResult::ScanResult(QJniObject obj) : JObject(obj) {}
	
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
	jint ScanResult::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean ScanResult::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint ScanResult::getAdvertisingSid()
	{
		return callMethod<jint>(
			"getAdvertisingSid",
			"()I"
		);
	}
	jint ScanResult::getDataStatus()
	{
		return callMethod<jint>(
			"getDataStatus",
			"()I"
		);
	}
	android::bluetooth::BluetoothDevice ScanResult::getDevice()
	{
		return callObjectMethod(
			"getDevice",
			"()Landroid/bluetooth/BluetoothDevice;"
		);
	}
	jint ScanResult::getPeriodicAdvertisingInterval()
	{
		return callMethod<jint>(
			"getPeriodicAdvertisingInterval",
			"()I"
		);
	}
	jint ScanResult::getPrimaryPhy()
	{
		return callMethod<jint>(
			"getPrimaryPhy",
			"()I"
		);
	}
	jint ScanResult::getRssi()
	{
		return callMethod<jint>(
			"getRssi",
			"()I"
		);
	}
	android::bluetooth::le::ScanRecord ScanResult::getScanRecord()
	{
		return callObjectMethod(
			"getScanRecord",
			"()Landroid/bluetooth/le/ScanRecord;"
		);
	}
	jint ScanResult::getSecondaryPhy()
	{
		return callMethod<jint>(
			"getSecondaryPhy",
			"()I"
		);
	}
	jlong ScanResult::getTimestampNanos()
	{
		return callMethod<jlong>(
			"getTimestampNanos",
			"()J"
		);
	}
	jint ScanResult::getTxPower()
	{
		return callMethod<jint>(
			"getTxPower",
			"()I"
		);
	}
	jint ScanResult::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean ScanResult::isConnectable()
	{
		return callMethod<jboolean>(
			"isConnectable",
			"()Z"
		);
	}
	jboolean ScanResult::isLegacy()
	{
		return callMethod<jboolean>(
			"isLegacy",
			"()Z"
		);
	}
	jstring ScanResult::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void ScanResult::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::bluetooth::le

