#pragma once

#include "../../JIntArray.hpp"
#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./SignalThresholdInfo.def.hpp"

namespace android::telephony
{
	// Fields
	inline JObject SignalThresholdInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.SignalThresholdInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint SignalThresholdInfo::SIGNAL_MEASUREMENT_TYPE_RSCP()
	{
		return getStaticField<jint>(
			"android.telephony.SignalThresholdInfo",
			"SIGNAL_MEASUREMENT_TYPE_RSCP"
		);
	}
	inline jint SignalThresholdInfo::SIGNAL_MEASUREMENT_TYPE_RSRP()
	{
		return getStaticField<jint>(
			"android.telephony.SignalThresholdInfo",
			"SIGNAL_MEASUREMENT_TYPE_RSRP"
		);
	}
	inline jint SignalThresholdInfo::SIGNAL_MEASUREMENT_TYPE_RSRQ()
	{
		return getStaticField<jint>(
			"android.telephony.SignalThresholdInfo",
			"SIGNAL_MEASUREMENT_TYPE_RSRQ"
		);
	}
	inline jint SignalThresholdInfo::SIGNAL_MEASUREMENT_TYPE_RSSI()
	{
		return getStaticField<jint>(
			"android.telephony.SignalThresholdInfo",
			"SIGNAL_MEASUREMENT_TYPE_RSSI"
		);
	}
	inline jint SignalThresholdInfo::SIGNAL_MEASUREMENT_TYPE_RSSNR()
	{
		return getStaticField<jint>(
			"android.telephony.SignalThresholdInfo",
			"SIGNAL_MEASUREMENT_TYPE_RSSNR"
		);
	}
	inline jint SignalThresholdInfo::SIGNAL_MEASUREMENT_TYPE_SSRSRP()
	{
		return getStaticField<jint>(
			"android.telephony.SignalThresholdInfo",
			"SIGNAL_MEASUREMENT_TYPE_SSRSRP"
		);
	}
	inline jint SignalThresholdInfo::SIGNAL_MEASUREMENT_TYPE_SSRSRQ()
	{
		return getStaticField<jint>(
			"android.telephony.SignalThresholdInfo",
			"SIGNAL_MEASUREMENT_TYPE_SSRSRQ"
		);
	}
	inline jint SignalThresholdInfo::SIGNAL_MEASUREMENT_TYPE_SSSINR()
	{
		return getStaticField<jint>(
			"android.telephony.SignalThresholdInfo",
			"SIGNAL_MEASUREMENT_TYPE_SSSINR"
		);
	}
	inline jint SignalThresholdInfo::SIGNAL_MEASUREMENT_TYPE_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.telephony.SignalThresholdInfo",
			"SIGNAL_MEASUREMENT_TYPE_UNKNOWN"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint SignalThresholdInfo::getMaximumNumberOfThresholdsAllowed()
	{
		return callStaticMethod<jint>(
			"android.telephony.SignalThresholdInfo",
			"getMaximumNumberOfThresholdsAllowed",
			"()I"
		);
	}
	inline jint SignalThresholdInfo::getMinimumNumberOfThresholdsAllowed()
	{
		return callStaticMethod<jint>(
			"android.telephony.SignalThresholdInfo",
			"getMinimumNumberOfThresholdsAllowed",
			"()I"
		);
	}
	inline jint SignalThresholdInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean SignalThresholdInfo::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint SignalThresholdInfo::getRadioAccessNetworkType() const
	{
		return callMethod<jint>(
			"getRadioAccessNetworkType",
			"()I"
		);
	}
	inline jint SignalThresholdInfo::getSignalMeasurementType() const
	{
		return callMethod<jint>(
			"getSignalMeasurementType",
			"()I"
		);
	}
	inline JIntArray SignalThresholdInfo::getThresholds() const
	{
		return callObjectMethod(
			"getThresholds",
			"()[I"
		);
	}
	inline jint SignalThresholdInfo::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString SignalThresholdInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void SignalThresholdInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony

// Base class headers

