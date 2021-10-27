#pragma once

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
		jint describeContents();
		jint getDataType();
		jstring getName();
		jint getRole();
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
	jint BluetoothHealthAppConfiguration::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint BluetoothHealthAppConfiguration::getDataType()
	{
		return __thiz.callMethod<jint>(
			"getDataType",
			"()I"
		);
	}
	jstring BluetoothHealthAppConfiguration::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint BluetoothHealthAppConfiguration::getRole()
	{
		return __thiz.callMethod<jint>(
			"getRole",
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

