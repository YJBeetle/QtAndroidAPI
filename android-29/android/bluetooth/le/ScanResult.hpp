#pragma once

#ifndef ANDROID_BLUETOOTH_LE_SCANRESULT
#define ANDROID_BLUETOOTH_LE_SCANRESULT

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::bluetooth
{
	class BluetoothDevice;
}
namespace __jni_impl::android::bluetooth::le
{
	class ScanRecord;
}
namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::bluetooth::le
{
	class ScanResult : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint DATA_COMPLETE();
		static jint DATA_TRUNCATED();
		static jint PERIODIC_INTERVAL_NOT_PRESENT();
		static jint PHY_UNUSED();
		static jint SID_NOT_PRESENT();
		static jint TX_POWER_NOT_PRESENT();
		
		// Constructors
		void __constructor(__jni_impl::android::bluetooth::BluetoothDevice arg0, __jni_impl::android::bluetooth::le::ScanRecord arg1, jint arg2, jlong arg3);
		void __constructor(__jni_impl::android::bluetooth::BluetoothDevice arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, __jni_impl::android::bluetooth::le::ScanRecord arg8, jlong arg9);
		
		// Methods
		jboolean equals(jobject arg0);
		jstring toString();
		jint hashCode();
		jboolean isConnectable();
		jboolean isLegacy();
		jint getPrimaryPhy();
		jint getSecondaryPhy();
		QAndroidJniObject getDevice();
		QAndroidJniObject getScanRecord();
		jint getRssi();
		jlong getTimestampNanos();
		jint getDataStatus();
		jint getAdvertisingSid();
		jint getTxPower();
		jint getPeriodicAdvertisingInterval();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::bluetooth::le

#include "../BluetoothDevice.hpp"
#include "ScanRecord.hpp"
#include "../../os/Parcel.hpp"

namespace __jni_impl::android::bluetooth::le
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
	
	// Constructors
	void ScanResult::__constructor(__jni_impl::android::bluetooth::BluetoothDevice arg0, __jni_impl::android::bluetooth::le::ScanRecord arg1, jint arg2, jlong arg3)
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
	void ScanResult::__constructor(__jni_impl::android::bluetooth::BluetoothDevice arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, __jni_impl::android::bluetooth::le::ScanRecord arg8, jlong arg9)
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
	jboolean ScanResult::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring ScanResult::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
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
	jint ScanResult::getPrimaryPhy()
	{
		return __thiz.callMethod<jint>(
			"getPrimaryPhy",
			"()I"
		);
	}
	jint ScanResult::getSecondaryPhy()
	{
		return __thiz.callMethod<jint>(
			"getSecondaryPhy",
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
	QAndroidJniObject ScanResult::getScanRecord()
	{
		return __thiz.callObjectMethod(
			"getScanRecord",
			"()Landroid/bluetooth/le/ScanRecord;"
		);
	}
	jint ScanResult::getRssi()
	{
		return __thiz.callMethod<jint>(
			"getRssi",
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
	jint ScanResult::getDataStatus()
	{
		return __thiz.callMethod<jint>(
			"getDataStatus",
			"()I"
		);
	}
	jint ScanResult::getAdvertisingSid()
	{
		return __thiz.callMethod<jint>(
			"getAdvertisingSid",
			"()I"
		);
	}
	jint ScanResult::getTxPower()
	{
		return __thiz.callMethod<jint>(
			"getTxPower",
			"()I"
		);
	}
	jint ScanResult::getPeriodicAdvertisingInterval()
	{
		return __thiz.callMethod<jint>(
			"getPeriodicAdvertisingInterval",
			"()I"
		);
	}
	jint ScanResult::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void ScanResult::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::bluetooth::le

namespace android::bluetooth::le
{
	class ScanResult : public __jni_impl::android::bluetooth::le::ScanResult
	{
	public:
		ScanResult(QAndroidJniObject obj) { __thiz = obj; }
		ScanResult(__jni_impl::android::bluetooth::BluetoothDevice arg0, __jni_impl::android::bluetooth::le::ScanRecord arg1, jint arg2, jlong arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
		ScanResult(__jni_impl::android::bluetooth::BluetoothDevice arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, __jni_impl::android::bluetooth::le::ScanRecord arg8, jlong arg9)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4,
				arg5,
				arg6,
				arg7,
				arg8,
				arg9);
		}
	};
} // namespace android::bluetooth::le

#endif // ANDROID_BLUETOOTH_LE_SCANRESULT

