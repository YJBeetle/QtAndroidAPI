#pragma once

#ifndef ANDROID_BLUETOOTH_LE_SCANSETTINGS
#define ANDROID_BLUETOOTH_LE_SCANSETTINGS

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::bluetooth::le
{
	class ScanSettings : public __JniBaseClass
	{
	public:
		// Fields
		static jint CALLBACK_TYPE_ALL_MATCHES();
		static jint CALLBACK_TYPE_FIRST_MATCH();
		static jint CALLBACK_TYPE_MATCH_LOST();
		static QAndroidJniObject CREATOR();
		static jint MATCH_MODE_AGGRESSIVE();
		static jint MATCH_MODE_STICKY();
		static jint MATCH_NUM_FEW_ADVERTISEMENT();
		static jint MATCH_NUM_MAX_ADVERTISEMENT();
		static jint MATCH_NUM_ONE_ADVERTISEMENT();
		static jint PHY_LE_ALL_SUPPORTED();
		static jint SCAN_MODE_BALANCED();
		static jint SCAN_MODE_LOW_LATENCY();
		static jint SCAN_MODE_LOW_POWER();
		static jint SCAN_MODE_OPPORTUNISTIC();
		
		// Constructors
		void __constructor();
		
		// Methods
		jint getScanMode();
		jint getCallbackType();
		jint getScanResultType();
		jboolean getLegacy();
		jint getPhy();
		jlong getReportDelayMillis();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::bluetooth::le

#include "../../os/Parcel.hpp"

namespace __jni_impl::android::bluetooth::le
{
	// Fields
	jint ScanSettings::CALLBACK_TYPE_ALL_MATCHES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.le.ScanSettings",
			"CALLBACK_TYPE_ALL_MATCHES");
	}
	jint ScanSettings::CALLBACK_TYPE_FIRST_MATCH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.le.ScanSettings",
			"CALLBACK_TYPE_FIRST_MATCH");
	}
	jint ScanSettings::CALLBACK_TYPE_MATCH_LOST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.le.ScanSettings",
			"CALLBACK_TYPE_MATCH_LOST");
	}
	QAndroidJniObject ScanSettings::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.bluetooth.le.ScanSettings",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	jint ScanSettings::MATCH_MODE_AGGRESSIVE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.le.ScanSettings",
			"MATCH_MODE_AGGRESSIVE");
	}
	jint ScanSettings::MATCH_MODE_STICKY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.le.ScanSettings",
			"MATCH_MODE_STICKY");
	}
	jint ScanSettings::MATCH_NUM_FEW_ADVERTISEMENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.le.ScanSettings",
			"MATCH_NUM_FEW_ADVERTISEMENT");
	}
	jint ScanSettings::MATCH_NUM_MAX_ADVERTISEMENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.le.ScanSettings",
			"MATCH_NUM_MAX_ADVERTISEMENT");
	}
	jint ScanSettings::MATCH_NUM_ONE_ADVERTISEMENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.le.ScanSettings",
			"MATCH_NUM_ONE_ADVERTISEMENT");
	}
	jint ScanSettings::PHY_LE_ALL_SUPPORTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.le.ScanSettings",
			"PHY_LE_ALL_SUPPORTED");
	}
	jint ScanSettings::SCAN_MODE_BALANCED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.le.ScanSettings",
			"SCAN_MODE_BALANCED");
	}
	jint ScanSettings::SCAN_MODE_LOW_LATENCY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.le.ScanSettings",
			"SCAN_MODE_LOW_LATENCY");
	}
	jint ScanSettings::SCAN_MODE_LOW_POWER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.le.ScanSettings",
			"SCAN_MODE_LOW_POWER");
	}
	jint ScanSettings::SCAN_MODE_OPPORTUNISTIC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.le.ScanSettings",
			"SCAN_MODE_OPPORTUNISTIC");
	}
	
	// Constructors
	void ScanSettings::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.bluetooth.le.ScanSettings",
			"(V)V");
	}
	
	// Methods
	jint ScanSettings::getScanMode()
	{
		return __thiz.callMethod<jint>(
			"getScanMode",
			"()I");
	}
	jint ScanSettings::getCallbackType()
	{
		return __thiz.callMethod<jint>(
			"getCallbackType",
			"()I");
	}
	jint ScanSettings::getScanResultType()
	{
		return __thiz.callMethod<jint>(
			"getScanResultType",
			"()I");
	}
	jboolean ScanSettings::getLegacy()
	{
		return __thiz.callMethod<jboolean>(
			"getLegacy",
			"()Z");
	}
	jint ScanSettings::getPhy()
	{
		return __thiz.callMethod<jint>(
			"getPhy",
			"()I");
	}
	jlong ScanSettings::getReportDelayMillis()
	{
		return __thiz.callMethod<jlong>(
			"getReportDelayMillis",
			"()J");
	}
	jint ScanSettings::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void ScanSettings::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
} // namespace __jni_impl::android::bluetooth::le

namespace android::bluetooth::le
{
	class ScanSettings : public __jni_impl::android::bluetooth::le::ScanSettings
	{
	public:
		ScanSettings(QAndroidJniObject obj) { __thiz = obj; }
		ScanSettings()
		{
			__constructor();
		}
	};
} // namespace android::bluetooth::le

#endif // ANDROID_BLUETOOTH_LE_SCANSETTINGS

