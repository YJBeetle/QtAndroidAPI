#pragma once

#ifndef ANDROID_COMPANION_BLUETOOTHDEVICEFILTER
#define ANDROID_COMPANION_BLUETOOTHDEVICEFILTER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::companion
{
	class BluetoothDeviceFilter : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jint hashCode();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::companion

#include "../os/Parcel.hpp"

namespace __jni_impl::android::companion
{
	// Fields
	QAndroidJniObject BluetoothDeviceFilter::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.companion.BluetoothDeviceFilter",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void BluetoothDeviceFilter::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.companion.BluetoothDeviceFilter",
			"(V)V");
	}
	
	// Methods
	jint BluetoothDeviceFilter::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean BluetoothDeviceFilter::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint BluetoothDeviceFilter::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void BluetoothDeviceFilter::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::companion

namespace android::companion
{
	class BluetoothDeviceFilter : public __jni_impl::android::companion::BluetoothDeviceFilter
	{
	public:
		BluetoothDeviceFilter(QAndroidJniObject obj) { __thiz = obj; }
		BluetoothDeviceFilter()
		{
			__constructor();
		}
	};
} // namespace android::companion

#endif // ANDROID_COMPANION_BLUETOOTHDEVICEFILTER

