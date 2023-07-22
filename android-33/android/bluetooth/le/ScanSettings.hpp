#pragma once

#include "../../os/Parcel.def.hpp"
#include "./ScanSettings.def.hpp"

namespace android::bluetooth::le
{
	// Fields
	inline jint ScanSettings::CALLBACK_TYPE_ALL_MATCHES()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.ScanSettings",
			"CALLBACK_TYPE_ALL_MATCHES"
		);
	}
	inline jint ScanSettings::CALLBACK_TYPE_FIRST_MATCH()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.ScanSettings",
			"CALLBACK_TYPE_FIRST_MATCH"
		);
	}
	inline jint ScanSettings::CALLBACK_TYPE_MATCH_LOST()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.ScanSettings",
			"CALLBACK_TYPE_MATCH_LOST"
		);
	}
	inline JObject ScanSettings::CREATOR()
	{
		return getStaticObjectField(
			"android.bluetooth.le.ScanSettings",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint ScanSettings::MATCH_MODE_AGGRESSIVE()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.ScanSettings",
			"MATCH_MODE_AGGRESSIVE"
		);
	}
	inline jint ScanSettings::MATCH_MODE_STICKY()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.ScanSettings",
			"MATCH_MODE_STICKY"
		);
	}
	inline jint ScanSettings::MATCH_NUM_FEW_ADVERTISEMENT()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.ScanSettings",
			"MATCH_NUM_FEW_ADVERTISEMENT"
		);
	}
	inline jint ScanSettings::MATCH_NUM_MAX_ADVERTISEMENT()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.ScanSettings",
			"MATCH_NUM_MAX_ADVERTISEMENT"
		);
	}
	inline jint ScanSettings::MATCH_NUM_ONE_ADVERTISEMENT()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.ScanSettings",
			"MATCH_NUM_ONE_ADVERTISEMENT"
		);
	}
	inline jint ScanSettings::PHY_LE_ALL_SUPPORTED()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.ScanSettings",
			"PHY_LE_ALL_SUPPORTED"
		);
	}
	inline jint ScanSettings::SCAN_MODE_BALANCED()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.ScanSettings",
			"SCAN_MODE_BALANCED"
		);
	}
	inline jint ScanSettings::SCAN_MODE_LOW_LATENCY()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.ScanSettings",
			"SCAN_MODE_LOW_LATENCY"
		);
	}
	inline jint ScanSettings::SCAN_MODE_LOW_POWER()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.ScanSettings",
			"SCAN_MODE_LOW_POWER"
		);
	}
	inline jint ScanSettings::SCAN_MODE_OPPORTUNISTIC()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.ScanSettings",
			"SCAN_MODE_OPPORTUNISTIC"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint ScanSettings::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jint ScanSettings::getCallbackType() const
	{
		return callMethod<jint>(
			"getCallbackType",
			"()I"
		);
	}
	inline jboolean ScanSettings::getLegacy() const
	{
		return callMethod<jboolean>(
			"getLegacy",
			"()Z"
		);
	}
	inline jint ScanSettings::getPhy() const
	{
		return callMethod<jint>(
			"getPhy",
			"()I"
		);
	}
	inline jlong ScanSettings::getReportDelayMillis() const
	{
		return callMethod<jlong>(
			"getReportDelayMillis",
			"()J"
		);
	}
	inline jint ScanSettings::getScanMode() const
	{
		return callMethod<jint>(
			"getScanMode",
			"()I"
		);
	}
	inline jint ScanSettings::getScanResultType() const
	{
		return callMethod<jint>(
			"getScanResultType",
			"()I"
		);
	}
	inline void ScanSettings::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::bluetooth::le

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::bluetooth::le;
#endif
