#pragma once

#ifndef ANDROID_BLUETOOTH_LE_PERIODICADVERTISINGPARAMETERS
#define ANDROID_BLUETOOTH_LE_PERIODICADVERTISINGPARAMETERS

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::bluetooth::le
{
	class PeriodicAdvertisingParameters : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		jint describeContents();
		jboolean getIncludeTxPower();
		jint getInterval();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::bluetooth::le

#include "../../os/Parcel.hpp"

namespace __jni_impl::android::bluetooth::le
{
	// Fields
	QAndroidJniObject PeriodicAdvertisingParameters::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.bluetooth.le.PeriodicAdvertisingParameters",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void PeriodicAdvertisingParameters::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.bluetooth.le.PeriodicAdvertisingParameters",
			"(V)V");
	}
	
	// Methods
	jint PeriodicAdvertisingParameters::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean PeriodicAdvertisingParameters::getIncludeTxPower()
	{
		return __thiz.callMethod<jboolean>(
			"getIncludeTxPower",
			"()Z"
		);
	}
	jint PeriodicAdvertisingParameters::getInterval()
	{
		return __thiz.callMethod<jint>(
			"getInterval",
			"()I"
		);
	}
	void PeriodicAdvertisingParameters::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
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
	class PeriodicAdvertisingParameters : public __jni_impl::android::bluetooth::le::PeriodicAdvertisingParameters
	{
	public:
		PeriodicAdvertisingParameters(QAndroidJniObject obj) { __thiz = obj; }
		PeriodicAdvertisingParameters()
		{
			__constructor();
		}
	};
} // namespace android::bluetooth::le

#endif // ANDROID_BLUETOOTH_LE_PERIODICADVERTISINGPARAMETERS

