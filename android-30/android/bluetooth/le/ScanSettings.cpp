#include "../../os/Parcel.hpp"
#include "./ScanSettings.hpp"

namespace android::bluetooth::le
{
	// Fields
	jint ScanSettings::CALLBACK_TYPE_ALL_MATCHES()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.ScanSettings",
			"CALLBACK_TYPE_ALL_MATCHES"
		);
	}
	jint ScanSettings::CALLBACK_TYPE_FIRST_MATCH()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.ScanSettings",
			"CALLBACK_TYPE_FIRST_MATCH"
		);
	}
	jint ScanSettings::CALLBACK_TYPE_MATCH_LOST()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.ScanSettings",
			"CALLBACK_TYPE_MATCH_LOST"
		);
	}
	JObject ScanSettings::CREATOR()
	{
		return getStaticObjectField(
			"android.bluetooth.le.ScanSettings",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint ScanSettings::MATCH_MODE_AGGRESSIVE()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.ScanSettings",
			"MATCH_MODE_AGGRESSIVE"
		);
	}
	jint ScanSettings::MATCH_MODE_STICKY()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.ScanSettings",
			"MATCH_MODE_STICKY"
		);
	}
	jint ScanSettings::MATCH_NUM_FEW_ADVERTISEMENT()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.ScanSettings",
			"MATCH_NUM_FEW_ADVERTISEMENT"
		);
	}
	jint ScanSettings::MATCH_NUM_MAX_ADVERTISEMENT()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.ScanSettings",
			"MATCH_NUM_MAX_ADVERTISEMENT"
		);
	}
	jint ScanSettings::MATCH_NUM_ONE_ADVERTISEMENT()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.ScanSettings",
			"MATCH_NUM_ONE_ADVERTISEMENT"
		);
	}
	jint ScanSettings::PHY_LE_ALL_SUPPORTED()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.ScanSettings",
			"PHY_LE_ALL_SUPPORTED"
		);
	}
	jint ScanSettings::SCAN_MODE_BALANCED()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.ScanSettings",
			"SCAN_MODE_BALANCED"
		);
	}
	jint ScanSettings::SCAN_MODE_LOW_LATENCY()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.ScanSettings",
			"SCAN_MODE_LOW_LATENCY"
		);
	}
	jint ScanSettings::SCAN_MODE_LOW_POWER()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.ScanSettings",
			"SCAN_MODE_LOW_POWER"
		);
	}
	jint ScanSettings::SCAN_MODE_OPPORTUNISTIC()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.ScanSettings",
			"SCAN_MODE_OPPORTUNISTIC"
		);
	}
	
	// QJniObject forward
	ScanSettings::ScanSettings(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint ScanSettings::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint ScanSettings::getCallbackType() const
	{
		return callMethod<jint>(
			"getCallbackType",
			"()I"
		);
	}
	jboolean ScanSettings::getLegacy() const
	{
		return callMethod<jboolean>(
			"getLegacy",
			"()Z"
		);
	}
	jint ScanSettings::getPhy() const
	{
		return callMethod<jint>(
			"getPhy",
			"()I"
		);
	}
	jlong ScanSettings::getReportDelayMillis() const
	{
		return callMethod<jlong>(
			"getReportDelayMillis",
			"()J"
		);
	}
	jint ScanSettings::getScanMode() const
	{
		return callMethod<jint>(
			"getScanMode",
			"()I"
		);
	}
	jint ScanSettings::getScanResultType() const
	{
		return callMethod<jint>(
			"getScanResultType",
			"()I"
		);
	}
	void ScanSettings::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::bluetooth::le

