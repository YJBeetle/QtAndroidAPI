#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::bluetooth::le
{
	class AdvertiseSettings : public __JniBaseClass
	{
	public:
		// Fields
		static jint ADVERTISE_MODE_BALANCED();
		static jint ADVERTISE_MODE_LOW_LATENCY();
		static jint ADVERTISE_MODE_LOW_POWER();
		static jint ADVERTISE_TX_POWER_HIGH();
		static jint ADVERTISE_TX_POWER_LOW();
		static jint ADVERTISE_TX_POWER_MEDIUM();
		static jint ADVERTISE_TX_POWER_ULTRA_LOW();
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		jint describeContents();
		jint getMode();
		jint getTimeout();
		jint getTxPowerLevel();
		jboolean isConnectable();
		jstring toString();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::bluetooth::le

#include "../../os/Parcel.hpp"

namespace __jni_impl::android::bluetooth::le
{
	// Fields
	jint AdvertiseSettings::ADVERTISE_MODE_BALANCED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.le.AdvertiseSettings",
			"ADVERTISE_MODE_BALANCED"
		);
	}
	jint AdvertiseSettings::ADVERTISE_MODE_LOW_LATENCY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.le.AdvertiseSettings",
			"ADVERTISE_MODE_LOW_LATENCY"
		);
	}
	jint AdvertiseSettings::ADVERTISE_MODE_LOW_POWER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.le.AdvertiseSettings",
			"ADVERTISE_MODE_LOW_POWER"
		);
	}
	jint AdvertiseSettings::ADVERTISE_TX_POWER_HIGH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.le.AdvertiseSettings",
			"ADVERTISE_TX_POWER_HIGH"
		);
	}
	jint AdvertiseSettings::ADVERTISE_TX_POWER_LOW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.le.AdvertiseSettings",
			"ADVERTISE_TX_POWER_LOW"
		);
	}
	jint AdvertiseSettings::ADVERTISE_TX_POWER_MEDIUM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.le.AdvertiseSettings",
			"ADVERTISE_TX_POWER_MEDIUM"
		);
	}
	jint AdvertiseSettings::ADVERTISE_TX_POWER_ULTRA_LOW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.le.AdvertiseSettings",
			"ADVERTISE_TX_POWER_ULTRA_LOW"
		);
	}
	QAndroidJniObject AdvertiseSettings::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.bluetooth.le.AdvertiseSettings",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void AdvertiseSettings::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.bluetooth.le.AdvertiseSettings",
			"(V)V");
	}
	
	// Methods
	jint AdvertiseSettings::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint AdvertiseSettings::getMode()
	{
		return __thiz.callMethod<jint>(
			"getMode",
			"()I"
		);
	}
	jint AdvertiseSettings::getTimeout()
	{
		return __thiz.callMethod<jint>(
			"getTimeout",
			"()I"
		);
	}
	jint AdvertiseSettings::getTxPowerLevel()
	{
		return __thiz.callMethod<jint>(
			"getTxPowerLevel",
			"()I"
		);
	}
	jboolean AdvertiseSettings::isConnectable()
	{
		return __thiz.callMethod<jboolean>(
			"isConnectable",
			"()Z"
		);
	}
	jstring AdvertiseSettings::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void AdvertiseSettings::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
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
	class AdvertiseSettings : public __jni_impl::android::bluetooth::le::AdvertiseSettings
	{
	public:
		AdvertiseSettings(QAndroidJniObject obj) { __thiz = obj; }
		AdvertiseSettings()
		{
			__constructor();
		}
	};
} // namespace android::bluetooth::le

