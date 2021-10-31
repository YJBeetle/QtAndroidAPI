#include "../BluetoothDevice.hpp"
#include "./ScanRecord.hpp"
#include "../../os/Parcel.hpp"
#include "./ScanResult.hpp"

namespace android::bluetooth::le
{
	// Fields
	QAndroidJniObject ScanResult::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.bluetooth.le.ScanResult",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint ScanResult::DATA_COMPLETE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.le.ScanResult",
			"DATA_COMPLETE"
		);
	}
	jint ScanResult::DATA_TRUNCATED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.le.ScanResult",
			"DATA_TRUNCATED"
		);
	}
	jint ScanResult::PERIODIC_INTERVAL_NOT_PRESENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.le.ScanResult",
			"PERIODIC_INTERVAL_NOT_PRESENT"
		);
	}
	jint ScanResult::PHY_UNUSED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.le.ScanResult",
			"PHY_UNUSED"
		);
	}
	jint ScanResult::SID_NOT_PRESENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.le.ScanResult",
			"SID_NOT_PRESENT"
		);
	}
	jint ScanResult::TX_POWER_NOT_PRESENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.le.ScanResult",
			"TX_POWER_NOT_PRESENT"
		);
	}
	
	ScanResult::ScanResult(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ScanResult::ScanResult(android::bluetooth::BluetoothDevice arg0, android::bluetooth::le::ScanRecord arg1, jint arg2, jlong arg3)
	{
		__thiz = QAndroidJniObject(
			"android.bluetooth.le.ScanResult",
			"(Landroid/bluetooth/BluetoothDevice;Landroid/bluetooth/le/ScanRecord;IJ)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	ScanResult::ScanResult(android::bluetooth::BluetoothDevice arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, android::bluetooth::le::ScanRecord arg8, jlong arg9)
	{
		__thiz = QAndroidJniObject(
			"android.bluetooth.le.ScanResult",
			"(Landroid/bluetooth/BluetoothDevice;IIIIIIILandroid/bluetooth/le/ScanRecord;J)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7,
			arg8.__jniObject().object(),
			arg9
		);
	}
	
	// Methods
	jint ScanResult::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean ScanResult::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint ScanResult::getAdvertisingSid()
	{
		return __thiz.callMethod<jint>(
			"getAdvertisingSid",
			"()I"
		);
	}
	jint ScanResult::getDataStatus()
	{
		return __thiz.callMethod<jint>(
			"getDataStatus",
			"()I"
		);
	}
	QAndroidJniObject ScanResult::getDevice()
	{
		return __thiz.callObjectMethod(
			"getDevice",
			"()Landroid/bluetooth/BluetoothDevice;"
		);
	}
	jint ScanResult::getPeriodicAdvertisingInterval()
	{
		return __thiz.callMethod<jint>(
			"getPeriodicAdvertisingInterval",
			"()I"
		);
	}
	jint ScanResult::getPrimaryPhy()
	{
		return __thiz.callMethod<jint>(
			"getPrimaryPhy",
			"()I"
		);
	}
	jint ScanResult::getRssi()
	{
		return __thiz.callMethod<jint>(
			"getRssi",
			"()I"
		);
	}
	QAndroidJniObject ScanResult::getScanRecord()
	{
		return __thiz.callObjectMethod(
			"getScanRecord",
			"()Landroid/bluetooth/le/ScanRecord;"
		);
	}
	jint ScanResult::getSecondaryPhy()
	{
		return __thiz.callMethod<jint>(
			"getSecondaryPhy",
			"()I"
		);
	}
	jlong ScanResult::getTimestampNanos()
	{
		return __thiz.callMethod<jlong>(
			"getTimestampNanos",
			"()J"
		);
	}
	jint ScanResult::getTxPower()
	{
		return __thiz.callMethod<jint>(
			"getTxPower",
			"()I"
		);
	}
	jint ScanResult::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean ScanResult::isConnectable()
	{
		return __thiz.callMethod<jboolean>(
			"isConnectable",
			"()Z"
		);
	}
	jboolean ScanResult::isLegacy()
	{
		return __thiz.callMethod<jboolean>(
			"isLegacy",
			"()Z"
		);
	}
	jstring ScanResult::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void ScanResult::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::bluetooth::le

