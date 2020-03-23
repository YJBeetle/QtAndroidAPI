#pragma once

#ifndef ANDROID_BLUETOOTH_BLUETOOTHHEALTHAPPCONFIGURATION
#define ANDROID_BLUETOOTH_BLUETOOTHHEALTHAPPCONFIGURATION

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::bluetooth
{
	class BluetoothHealthAppConfiguration : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject getName();
		jint getRole();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		jint getDataType();
	};
} // namespace __jni_impl::android::bluetooth

#include "../os/Parcel.hpp"

namespace __jni_impl::android::bluetooth
{
	// Fields
	QAndroidJniObject BluetoothHealthAppConfiguration::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.bluetooth.BluetoothHealthAppConfiguration",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	
	// Constructors
	void BluetoothHealthAppConfiguration::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.bluetooth.BluetoothHealthAppConfiguration",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject BluetoothHealthAppConfiguration::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;");
	}
	jint BluetoothHealthAppConfiguration::getRole()
	{
		return __thiz.callMethod<jint>(
			"getRole",
			"()I");
	}
	jint BluetoothHealthAppConfiguration::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void BluetoothHealthAppConfiguration::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	jint BluetoothHealthAppConfiguration::getDataType()
	{
		return __thiz.callMethod<jint>(
			"getDataType",
			"()I");
	}
} // namespace __jni_impl::android::bluetooth

namespace android::bluetooth
{
	class BluetoothHealthAppConfiguration : public __jni_impl::android::bluetooth::BluetoothHealthAppConfiguration
	{
	public:
		BluetoothHealthAppConfiguration(QAndroidJniObject obj) { __thiz = obj; }
		BluetoothHealthAppConfiguration()
		{
			__constructor();
		}
	};
} // namespace android::bluetooth

#endif // ANDROID_BLUETOOTH_BLUETOOTHHEALTHAPPCONFIGURATION

