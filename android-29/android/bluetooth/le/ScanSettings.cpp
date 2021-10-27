#include "../../os/Parcel.hpp"
#include "./ScanSettings.hpp"

namespace android::bluetooth::le
{
	// Fields
	jint ScanSettings::CALLBACK_TYPE_ALL_MATCHES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.le.ScanSettings",
			"CALLBACK_TYPE_ALL_MATCHES"
		);
	}
	jint ScanSettings::CALLBACK_TYPE_FIRST_MATCH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.le.ScanSettings",
			"CALLBACK_TYPE_FIRST_MATCH"
		);
	}
	jint ScanSettings::CALLBACK_TYPE_MATCH_LOST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.le.ScanSettings",
			"CALLBACK_TYPE_MATCH_LOST"
		);
	}
	QAndroidJniObject ScanSettings::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.bluetooth.le.ScanSettings",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint ScanSettings::MATCH_MODE_AGGRESSIVE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.le.ScanSettings",
			"MATCH_MODE_AGGRESSIVE"
		);
	}
	jint ScanSettings::MATCH_MODE_STICKY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.le.ScanSettings",
			"MATCH_MODE_STICKY"
		);
	}
	jint ScanSettings::MATCH_NUM_FEW_ADVERTISEMENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.le.ScanSettings",
			"MATCH_NUM_FEW_ADVERTISEMENT"
		);
	}
	jint ScanSettings::MATCH_NUM_MAX_ADVERTISEMENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.le.ScanSettings",
			"MATCH_NUM_MAX_ADVERTISEMENT"
		);
	}
	jint ScanSettings::MATCH_NUM_ONE_ADVERTISEMENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.le.ScanSettings",
			"MATCH_NUM_ONE_ADVERTISEMENT"
		);
	}
	jint ScanSettings::PHY_LE_ALL_SUPPORTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.le.ScanSettings",
			"PHY_LE_ALL_SUPPORTED"
		);
	}
	jint ScanSettings::SCAN_MODE_BALANCED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.le.ScanSettings",
			"SCAN_MODE_BALANCED"
		);
	}
	jint ScanSettings::SCAN_MODE_LOW_LATENCY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.le.ScanSettings",
			"SCAN_MODE_LOW_LATENCY"
		);
	}
	jint ScanSettings::SCAN_MODE_LOW_POWER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.le.ScanSettings",
			"SCAN_MODE_LOW_POWER"
		);
	}
	jint ScanSettings::SCAN_MODE_OPPORTUNISTIC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.le.ScanSettings",
			"SCAN_MODE_OPPORTUNISTIC"
		);
	}
	
	ScanSettings::ScanSettings(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jint ScanSettings::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint ScanSettings::getCallbackType()
	{
		return __thiz.callMethod<jint>(
			"getCallbackType",
			"()I"
		);
	}
	jboolean ScanSettings::getLegacy()
	{
		return __thiz.callMethod<jboolean>(
			"getLegacy",
			"()Z"
		);
	}
	jint ScanSettings::getPhy()
	{
		return __thiz.callMethod<jint>(
			"getPhy",
			"()I"
		);
	}
	jlong ScanSettings::getReportDelayMillis()
	{
		return __thiz.callMethod<jlong>(
			"getReportDelayMillis",
			"()J"
		);
	}
	jint ScanSettings::getScanMode()
	{
		return __thiz.callMethod<jint>(
			"getScanMode",
			"()I"
		);
	}
	jint ScanSettings::getScanResultType()
	{
		return __thiz.callMethod<jint>(
			"getScanResultType",
			"()I"
		);
	}
	void ScanSettings::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::bluetooth::le

