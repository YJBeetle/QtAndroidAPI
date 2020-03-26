#pragma once

#ifndef ANDROID_BLUETOOTH_BLUETOOTHCLASS
#define ANDROID_BLUETOOTH_BLUETOOTHCLASS

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::bluetooth
{
	class BluetoothClass : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		jstring toString();
		jint hashCode();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		jint getMajorDeviceClass();
		jboolean hasService(jint arg0);
		jint getDeviceClass();
	};
} // namespace __jni_impl::android::bluetooth

#include "../os/Parcel.hpp"

namespace __jni_impl::android::bluetooth
{
	// Fields
	QAndroidJniObject BluetoothClass::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.bluetooth.BluetoothClass",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void BluetoothClass::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.bluetooth.BluetoothClass",
			"(V)V");
	}
	
	// Methods
	jboolean BluetoothClass::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring BluetoothClass::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint BluetoothClass::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jint BluetoothClass::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void BluetoothClass::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jint BluetoothClass::getMajorDeviceClass()
	{
		return __thiz.callMethod<jint>(
			"getMajorDeviceClass",
			"()I"
		);
	}
	jboolean BluetoothClass::hasService(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasService",
			"(I)Z",
			arg0
		);
	}
	jint BluetoothClass::getDeviceClass()
	{
		return __thiz.callMethod<jint>(
			"getDeviceClass",
			"()I"
		);
	}
} // namespace __jni_impl::android::bluetooth

namespace android::bluetooth
{
	class BluetoothClass : public __jni_impl::android::bluetooth::BluetoothClass
	{
	public:
		BluetoothClass(QAndroidJniObject obj) { __thiz = obj; }
		BluetoothClass()
		{
			__constructor();
		}
	};
} // namespace android::bluetooth

#endif // ANDROID_BLUETOOTH_BLUETOOTHCLASS

