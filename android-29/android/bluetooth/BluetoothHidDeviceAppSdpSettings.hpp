#pragma once

#ifndef ANDROID_BLUETOOTH_BLUETOOTHHIDDEVICEAPPSDPSETTINGS
#define ANDROID_BLUETOOTH_BLUETOOTHHIDDEVICEAPPSDPSETTINGS

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::bluetooth
{
	class BluetoothHidDeviceAppSdpSettings : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor(jstring arg0, jstring arg1, jstring arg2, jbyte arg3, jbyteArray arg4);
		
		// Methods
		jstring getName();
		jstring getProvider();
		jbyte getSubclass();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		jbyteArray getDescriptors();
		jstring getDescription();
	};
} // namespace __jni_impl::android::bluetooth

#include "../os/Parcel.hpp"

namespace __jni_impl::android::bluetooth
{
	// Fields
	QAndroidJniObject BluetoothHidDeviceAppSdpSettings::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.bluetooth.BluetoothHidDeviceAppSdpSettings",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void BluetoothHidDeviceAppSdpSettings::__constructor(jstring arg0, jstring arg1, jstring arg2, jbyte arg3, jbyteArray arg4)
	{
		__thiz = QAndroidJniObject(
			"android.bluetooth.BluetoothHidDeviceAppSdpSettings",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;B[B)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4);
	}
	
	// Methods
	jstring BluetoothHidDeviceAppSdpSettings::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring BluetoothHidDeviceAppSdpSettings::getProvider()
	{
		return __thiz.callObjectMethod(
			"getProvider",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jbyte BluetoothHidDeviceAppSdpSettings::getSubclass()
	{
		return __thiz.callMethod<jbyte>(
			"getSubclass",
			"()B"
		);
	}
	jint BluetoothHidDeviceAppSdpSettings::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void BluetoothHidDeviceAppSdpSettings::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jbyteArray BluetoothHidDeviceAppSdpSettings::getDescriptors()
	{
		return __thiz.callObjectMethod(
			"getDescriptors",
			"()[B"
		).object<jbyteArray>();
	}
	jstring BluetoothHidDeviceAppSdpSettings::getDescription()
	{
		return __thiz.callObjectMethod(
			"getDescription",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::android::bluetooth

namespace android::bluetooth
{
	class BluetoothHidDeviceAppSdpSettings : public __jni_impl::android::bluetooth::BluetoothHidDeviceAppSdpSettings
	{
	public:
		BluetoothHidDeviceAppSdpSettings(QAndroidJniObject obj) { __thiz = obj; }
		BluetoothHidDeviceAppSdpSettings(jstring arg0, jstring arg1, jstring arg2, jbyte arg3, jbyteArray arg4)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4);
		}
	};
} // namespace android::bluetooth

#endif // ANDROID_BLUETOOTH_BLUETOOTHHIDDEVICEAPPSDPSETTINGS

