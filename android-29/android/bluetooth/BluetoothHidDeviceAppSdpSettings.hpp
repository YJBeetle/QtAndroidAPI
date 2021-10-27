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
		void __constructor(const QString &arg0, const QString &arg1, const QString &arg2, jbyte arg3, jbyteArray arg4);
		
		// Methods
		jint describeContents();
		jstring getDescription();
		jbyteArray getDescriptors();
		jstring getName();
		jstring getProvider();
		jbyte getSubclass();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
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
			arg4
		);
	}
	void BluetoothHidDeviceAppSdpSettings::__constructor(const QString &arg0, const QString &arg1, const QString &arg2, jbyte arg3, jbyteArray arg4)
	{
		__thiz = QAndroidJniObject(
			"android.bluetooth.BluetoothHidDeviceAppSdpSettings",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;B[B)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			arg3,
			arg4
		);
	}
	
	// Methods
	jint BluetoothHidDeviceAppSdpSettings::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jstring BluetoothHidDeviceAppSdpSettings::getDescription()
	{
		return __thiz.callObjectMethod(
			"getDescription",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jbyteArray BluetoothHidDeviceAppSdpSettings::getDescriptors()
	{
		return __thiz.callObjectMethod(
			"getDescriptors",
			"()[B"
		).object<jbyteArray>();
	}
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
	void BluetoothHidDeviceAppSdpSettings::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
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

