#pragma once

#ifndef ANDROID_BLUETOOTH_LE_ADVERTISINGSETPARAMETERS
#define ANDROID_BLUETOOTH_LE_ADVERTISINGSETPARAMETERS

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::bluetooth::le
{
	class AdvertisingSetParameters : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint INTERVAL_HIGH();
		static jint INTERVAL_LOW();
		static jint INTERVAL_MAX();
		static jint INTERVAL_MEDIUM();
		static jint INTERVAL_MIN();
		static jint TX_POWER_HIGH();
		static jint TX_POWER_LOW();
		static jint TX_POWER_MAX();
		static jint TX_POWER_MEDIUM();
		static jint TX_POWER_MIN();
		static jint TX_POWER_ULTRA_LOW();
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject toString();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		jint getTxPowerLevel();
		jboolean isConnectable();
		jboolean isScannable();
		jboolean isLegacy();
		jboolean isAnonymous();
		jboolean includeTxPower();
		jint getPrimaryPhy();
		jint getSecondaryPhy();
		jint getInterval();
	};
} // namespace __jni_impl::android::bluetooth::le

#include "../../os/Parcel.hpp"

namespace __jni_impl::android::bluetooth::le
{
	// Fields
	QAndroidJniObject AdvertisingSetParameters::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.bluetooth.le.AdvertisingSetParameters",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	jint AdvertisingSetParameters::INTERVAL_HIGH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.le.AdvertisingSetParameters",
			"INTERVAL_HIGH");
	}
	jint AdvertisingSetParameters::INTERVAL_LOW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.le.AdvertisingSetParameters",
			"INTERVAL_LOW");
	}
	jint AdvertisingSetParameters::INTERVAL_MAX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.le.AdvertisingSetParameters",
			"INTERVAL_MAX");
	}
	jint AdvertisingSetParameters::INTERVAL_MEDIUM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.le.AdvertisingSetParameters",
			"INTERVAL_MEDIUM");
	}
	jint AdvertisingSetParameters::INTERVAL_MIN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.le.AdvertisingSetParameters",
			"INTERVAL_MIN");
	}
	jint AdvertisingSetParameters::TX_POWER_HIGH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.le.AdvertisingSetParameters",
			"TX_POWER_HIGH");
	}
	jint AdvertisingSetParameters::TX_POWER_LOW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.le.AdvertisingSetParameters",
			"TX_POWER_LOW");
	}
	jint AdvertisingSetParameters::TX_POWER_MAX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.le.AdvertisingSetParameters",
			"TX_POWER_MAX");
	}
	jint AdvertisingSetParameters::TX_POWER_MEDIUM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.le.AdvertisingSetParameters",
			"TX_POWER_MEDIUM");
	}
	jint AdvertisingSetParameters::TX_POWER_MIN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.le.AdvertisingSetParameters",
			"TX_POWER_MIN");
	}
	jint AdvertisingSetParameters::TX_POWER_ULTRA_LOW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.le.AdvertisingSetParameters",
			"TX_POWER_ULTRA_LOW");
	}
	
	// Constructors
	void AdvertisingSetParameters::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.bluetooth.le.AdvertisingSetParameters",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject AdvertisingSetParameters::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint AdvertisingSetParameters::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void AdvertisingSetParameters::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	jint AdvertisingSetParameters::getTxPowerLevel()
	{
		return __thiz.callMethod<jint>(
			"getTxPowerLevel",
			"()I");
	}
	jboolean AdvertisingSetParameters::isConnectable()
	{
		return __thiz.callMethod<jboolean>(
			"isConnectable",
			"()Z");
	}
	jboolean AdvertisingSetParameters::isScannable()
	{
		return __thiz.callMethod<jboolean>(
			"isScannable",
			"()Z");
	}
	jboolean AdvertisingSetParameters::isLegacy()
	{
		return __thiz.callMethod<jboolean>(
			"isLegacy",
			"()Z");
	}
	jboolean AdvertisingSetParameters::isAnonymous()
	{
		return __thiz.callMethod<jboolean>(
			"isAnonymous",
			"()Z");
	}
	jboolean AdvertisingSetParameters::includeTxPower()
	{
		return __thiz.callMethod<jboolean>(
			"includeTxPower",
			"()Z");
	}
	jint AdvertisingSetParameters::getPrimaryPhy()
	{
		return __thiz.callMethod<jint>(
			"getPrimaryPhy",
			"()I");
	}
	jint AdvertisingSetParameters::getSecondaryPhy()
	{
		return __thiz.callMethod<jint>(
			"getSecondaryPhy",
			"()I");
	}
	jint AdvertisingSetParameters::getInterval()
	{
		return __thiz.callMethod<jint>(
			"getInterval",
			"()I");
	}
} // namespace __jni_impl::android::bluetooth::le

namespace android::bluetooth::le
{
	class AdvertisingSetParameters : public __jni_impl::android::bluetooth::le::AdvertisingSetParameters
	{
	public:
		AdvertisingSetParameters(QAndroidJniObject obj) { __thiz = obj; }
		AdvertisingSetParameters()
		{
			__constructor();
		}
	};
} // namespace android::bluetooth::le

#endif // ANDROID_BLUETOOTH_LE_ADVERTISINGSETPARAMETERS

