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
		jstring getName();
		jint getDataType();
		jint getRole();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
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
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void BluetoothHealthAppConfiguration::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.bluetooth.BluetoothHealthAppConfiguration",
			"(V)V");
	}
	
	// Methods
	jstring BluetoothHealthAppConfiguration::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint BluetoothHealthAppConfiguration::getDataType()
	{
		return __thiz.callMethod<jint>(
			"getDataType",
			"()I"
		);
	}
	jint BluetoothHealthAppConfiguration::getRole()
	{
		return __thiz.callMethod<jint>(
			"getRole",
			"()I"
		);
	}
	jint BluetoothHealthAppConfiguration::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void BluetoothHealthAppConfiguration::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
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

