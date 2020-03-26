#pragma once

#ifndef ANDROID_BLUETOOTH_BLUETOOTHHIDDEVICEAPPQOSSETTINGS
#define ANDROID_BLUETOOTH_BLUETOOTHHIDDEVICEAPPQOSSETTINGS

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::bluetooth
{
	class BluetoothHidDeviceAppQosSettings : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint MAX();
		static jint SERVICE_BEST_EFFORT();
		static jint SERVICE_GUARANTEED();
		static jint SERVICE_NO_TRAFFIC();
		
		// Constructors
		void __constructor(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5);
		
		// Methods
		jint getServiceType();
		jint getTokenRate();
		jint getTokenBucketSize();
		jint getPeakBandwidth();
		jint getLatency();
		jint getDelayVariation();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::bluetooth

#include "../os/Parcel.hpp"

namespace __jni_impl::android::bluetooth
{
	// Fields
	QAndroidJniObject BluetoothHidDeviceAppQosSettings::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.bluetooth.BluetoothHidDeviceAppQosSettings",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint BluetoothHidDeviceAppQosSettings::MAX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothHidDeviceAppQosSettings",
			"MAX"
		);
	}
	jint BluetoothHidDeviceAppQosSettings::SERVICE_BEST_EFFORT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothHidDeviceAppQosSettings",
			"SERVICE_BEST_EFFORT"
		);
	}
	jint BluetoothHidDeviceAppQosSettings::SERVICE_GUARANTEED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothHidDeviceAppQosSettings",
			"SERVICE_GUARANTEED"
		);
	}
	jint BluetoothHidDeviceAppQosSettings::SERVICE_NO_TRAFFIC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothHidDeviceAppQosSettings",
			"SERVICE_NO_TRAFFIC"
		);
	}
	
	// Constructors
	void BluetoothHidDeviceAppQosSettings::__constructor(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5)
	{
		__thiz = QAndroidJniObject(
			"android.bluetooth.BluetoothHidDeviceAppQosSettings",
			"(IIIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5);
	}
	
	// Methods
	jint BluetoothHidDeviceAppQosSettings::getServiceType()
	{
		return __thiz.callMethod<jint>(
			"getServiceType",
			"()I"
		);
	}
	jint BluetoothHidDeviceAppQosSettings::getTokenRate()
	{
		return __thiz.callMethod<jint>(
			"getTokenRate",
			"()I"
		);
	}
	jint BluetoothHidDeviceAppQosSettings::getTokenBucketSize()
	{
		return __thiz.callMethod<jint>(
			"getTokenBucketSize",
			"()I"
		);
	}
	jint BluetoothHidDeviceAppQosSettings::getPeakBandwidth()
	{
		return __thiz.callMethod<jint>(
			"getPeakBandwidth",
			"()I"
		);
	}
	jint BluetoothHidDeviceAppQosSettings::getLatency()
	{
		return __thiz.callMethod<jint>(
			"getLatency",
			"()I"
		);
	}
	jint BluetoothHidDeviceAppQosSettings::getDelayVariation()
	{
		return __thiz.callMethod<jint>(
			"getDelayVariation",
			"()I"
		);
	}
	jint BluetoothHidDeviceAppQosSettings::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void BluetoothHidDeviceAppQosSettings::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::bluetooth

namespace android::bluetooth
{
	class BluetoothHidDeviceAppQosSettings : public __jni_impl::android::bluetooth::BluetoothHidDeviceAppQosSettings
	{
	public:
		BluetoothHidDeviceAppQosSettings(QAndroidJniObject obj) { __thiz = obj; }
		BluetoothHidDeviceAppQosSettings(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4,
				arg5);
		}
	};
} // namespace android::bluetooth

#endif // ANDROID_BLUETOOTH_BLUETOOTHHIDDEVICEAPPQOSSETTINGS

