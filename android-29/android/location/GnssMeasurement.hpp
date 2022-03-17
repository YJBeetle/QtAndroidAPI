#pragma once

#include "../os/Parcel.def.hpp"
#include "../../JString.hpp"
#include "./GnssMeasurement.def.hpp"

namespace android::location
{
	// Fields
	inline jint GnssMeasurement::ADR_STATE_CYCLE_SLIP()
	{
		return getStaticField<jint>(
			"android.location.GnssMeasurement",
			"ADR_STATE_CYCLE_SLIP"
		);
	}
	inline jint GnssMeasurement::ADR_STATE_HALF_CYCLE_REPORTED()
	{
		return getStaticField<jint>(
			"android.location.GnssMeasurement",
			"ADR_STATE_HALF_CYCLE_REPORTED"
		);
	}
	inline jint GnssMeasurement::ADR_STATE_HALF_CYCLE_RESOLVED()
	{
		return getStaticField<jint>(
			"android.location.GnssMeasurement",
			"ADR_STATE_HALF_CYCLE_RESOLVED"
		);
	}
	inline jint GnssMeasurement::ADR_STATE_RESET()
	{
		return getStaticField<jint>(
			"android.location.GnssMeasurement",
			"ADR_STATE_RESET"
		);
	}
	inline jint GnssMeasurement::ADR_STATE_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.location.GnssMeasurement",
			"ADR_STATE_UNKNOWN"
		);
	}
	inline jint GnssMeasurement::ADR_STATE_VALID()
	{
		return getStaticField<jint>(
			"android.location.GnssMeasurement",
			"ADR_STATE_VALID"
		);
	}
	inline JObject GnssMeasurement::CREATOR()
	{
		return getStaticObjectField(
			"android.location.GnssMeasurement",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint GnssMeasurement::MULTIPATH_INDICATOR_DETECTED()
	{
		return getStaticField<jint>(
			"android.location.GnssMeasurement",
			"MULTIPATH_INDICATOR_DETECTED"
		);
	}
	inline jint GnssMeasurement::MULTIPATH_INDICATOR_NOT_DETECTED()
	{
		return getStaticField<jint>(
			"android.location.GnssMeasurement",
			"MULTIPATH_INDICATOR_NOT_DETECTED"
		);
	}
	inline jint GnssMeasurement::MULTIPATH_INDICATOR_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.location.GnssMeasurement",
			"MULTIPATH_INDICATOR_UNKNOWN"
		);
	}
	inline jint GnssMeasurement::STATE_2ND_CODE_LOCK()
	{
		return getStaticField<jint>(
			"android.location.GnssMeasurement",
			"STATE_2ND_CODE_LOCK"
		);
	}
	inline jint GnssMeasurement::STATE_BDS_D2_BIT_SYNC()
	{
		return getStaticField<jint>(
			"android.location.GnssMeasurement",
			"STATE_BDS_D2_BIT_SYNC"
		);
	}
	inline jint GnssMeasurement::STATE_BDS_D2_SUBFRAME_SYNC()
	{
		return getStaticField<jint>(
			"android.location.GnssMeasurement",
			"STATE_BDS_D2_SUBFRAME_SYNC"
		);
	}
	inline jint GnssMeasurement::STATE_BIT_SYNC()
	{
		return getStaticField<jint>(
			"android.location.GnssMeasurement",
			"STATE_BIT_SYNC"
		);
	}
	inline jint GnssMeasurement::STATE_CODE_LOCK()
	{
		return getStaticField<jint>(
			"android.location.GnssMeasurement",
			"STATE_CODE_LOCK"
		);
	}
	inline jint GnssMeasurement::STATE_GAL_E1BC_CODE_LOCK()
	{
		return getStaticField<jint>(
			"android.location.GnssMeasurement",
			"STATE_GAL_E1BC_CODE_LOCK"
		);
	}
	inline jint GnssMeasurement::STATE_GAL_E1B_PAGE_SYNC()
	{
		return getStaticField<jint>(
			"android.location.GnssMeasurement",
			"STATE_GAL_E1B_PAGE_SYNC"
		);
	}
	inline jint GnssMeasurement::STATE_GAL_E1C_2ND_CODE_LOCK()
	{
		return getStaticField<jint>(
			"android.location.GnssMeasurement",
			"STATE_GAL_E1C_2ND_CODE_LOCK"
		);
	}
	inline jint GnssMeasurement::STATE_GLO_STRING_SYNC()
	{
		return getStaticField<jint>(
			"android.location.GnssMeasurement",
			"STATE_GLO_STRING_SYNC"
		);
	}
	inline jint GnssMeasurement::STATE_GLO_TOD_DECODED()
	{
		return getStaticField<jint>(
			"android.location.GnssMeasurement",
			"STATE_GLO_TOD_DECODED"
		);
	}
	inline jint GnssMeasurement::STATE_GLO_TOD_KNOWN()
	{
		return getStaticField<jint>(
			"android.location.GnssMeasurement",
			"STATE_GLO_TOD_KNOWN"
		);
	}
	inline jint GnssMeasurement::STATE_MSEC_AMBIGUOUS()
	{
		return getStaticField<jint>(
			"android.location.GnssMeasurement",
			"STATE_MSEC_AMBIGUOUS"
		);
	}
	inline jint GnssMeasurement::STATE_SBAS_SYNC()
	{
		return getStaticField<jint>(
			"android.location.GnssMeasurement",
			"STATE_SBAS_SYNC"
		);
	}
	inline jint GnssMeasurement::STATE_SUBFRAME_SYNC()
	{
		return getStaticField<jint>(
			"android.location.GnssMeasurement",
			"STATE_SUBFRAME_SYNC"
		);
	}
	inline jint GnssMeasurement::STATE_SYMBOL_SYNC()
	{
		return getStaticField<jint>(
			"android.location.GnssMeasurement",
			"STATE_SYMBOL_SYNC"
		);
	}
	inline jint GnssMeasurement::STATE_TOW_DECODED()
	{
		return getStaticField<jint>(
			"android.location.GnssMeasurement",
			"STATE_TOW_DECODED"
		);
	}
	inline jint GnssMeasurement::STATE_TOW_KNOWN()
	{
		return getStaticField<jint>(
			"android.location.GnssMeasurement",
			"STATE_TOW_KNOWN"
		);
	}
	inline jint GnssMeasurement::STATE_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.location.GnssMeasurement",
			"STATE_UNKNOWN"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint GnssMeasurement::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jdouble GnssMeasurement::getAccumulatedDeltaRangeMeters() const
	{
		return callMethod<jdouble>(
			"getAccumulatedDeltaRangeMeters",
			"()D"
		);
	}
	inline jint GnssMeasurement::getAccumulatedDeltaRangeState() const
	{
		return callMethod<jint>(
			"getAccumulatedDeltaRangeState",
			"()I"
		);
	}
	inline jdouble GnssMeasurement::getAccumulatedDeltaRangeUncertaintyMeters() const
	{
		return callMethod<jdouble>(
			"getAccumulatedDeltaRangeUncertaintyMeters",
			"()D"
		);
	}
	inline jdouble GnssMeasurement::getAutomaticGainControlLevelDb() const
	{
		return callMethod<jdouble>(
			"getAutomaticGainControlLevelDb",
			"()D"
		);
	}
	inline jlong GnssMeasurement::getCarrierCycles() const
	{
		return callMethod<jlong>(
			"getCarrierCycles",
			"()J"
		);
	}
	inline jfloat GnssMeasurement::getCarrierFrequencyHz() const
	{
		return callMethod<jfloat>(
			"getCarrierFrequencyHz",
			"()F"
		);
	}
	inline jdouble GnssMeasurement::getCarrierPhase() const
	{
		return callMethod<jdouble>(
			"getCarrierPhase",
			"()D"
		);
	}
	inline jdouble GnssMeasurement::getCarrierPhaseUncertainty() const
	{
		return callMethod<jdouble>(
			"getCarrierPhaseUncertainty",
			"()D"
		);
	}
	inline jdouble GnssMeasurement::getCn0DbHz() const
	{
		return callMethod<jdouble>(
			"getCn0DbHz",
			"()D"
		);
	}
	inline JString GnssMeasurement::getCodeType() const
	{
		return callObjectMethod(
			"getCodeType",
			"()Ljava/lang/String;"
		);
	}
	inline jint GnssMeasurement::getConstellationType() const
	{
		return callMethod<jint>(
			"getConstellationType",
			"()I"
		);
	}
	inline jint GnssMeasurement::getMultipathIndicator() const
	{
		return callMethod<jint>(
			"getMultipathIndicator",
			"()I"
		);
	}
	inline jdouble GnssMeasurement::getPseudorangeRateMetersPerSecond() const
	{
		return callMethod<jdouble>(
			"getPseudorangeRateMetersPerSecond",
			"()D"
		);
	}
	inline jdouble GnssMeasurement::getPseudorangeRateUncertaintyMetersPerSecond() const
	{
		return callMethod<jdouble>(
			"getPseudorangeRateUncertaintyMetersPerSecond",
			"()D"
		);
	}
	inline jlong GnssMeasurement::getReceivedSvTimeNanos() const
	{
		return callMethod<jlong>(
			"getReceivedSvTimeNanos",
			"()J"
		);
	}
	inline jlong GnssMeasurement::getReceivedSvTimeUncertaintyNanos() const
	{
		return callMethod<jlong>(
			"getReceivedSvTimeUncertaintyNanos",
			"()J"
		);
	}
	inline jdouble GnssMeasurement::getSnrInDb() const
	{
		return callMethod<jdouble>(
			"getSnrInDb",
			"()D"
		);
	}
	inline jint GnssMeasurement::getState() const
	{
		return callMethod<jint>(
			"getState",
			"()I"
		);
	}
	inline jint GnssMeasurement::getSvid() const
	{
		return callMethod<jint>(
			"getSvid",
			"()I"
		);
	}
	inline jdouble GnssMeasurement::getTimeOffsetNanos() const
	{
		return callMethod<jdouble>(
			"getTimeOffsetNanos",
			"()D"
		);
	}
	inline jboolean GnssMeasurement::hasAutomaticGainControlLevelDb() const
	{
		return callMethod<jboolean>(
			"hasAutomaticGainControlLevelDb",
			"()Z"
		);
	}
	inline jboolean GnssMeasurement::hasCarrierCycles() const
	{
		return callMethod<jboolean>(
			"hasCarrierCycles",
			"()Z"
		);
	}
	inline jboolean GnssMeasurement::hasCarrierFrequencyHz() const
	{
		return callMethod<jboolean>(
			"hasCarrierFrequencyHz",
			"()Z"
		);
	}
	inline jboolean GnssMeasurement::hasCarrierPhase() const
	{
		return callMethod<jboolean>(
			"hasCarrierPhase",
			"()Z"
		);
	}
	inline jboolean GnssMeasurement::hasCarrierPhaseUncertainty() const
	{
		return callMethod<jboolean>(
			"hasCarrierPhaseUncertainty",
			"()Z"
		);
	}
	inline jboolean GnssMeasurement::hasCodeType() const
	{
		return callMethod<jboolean>(
			"hasCodeType",
			"()Z"
		);
	}
	inline jboolean GnssMeasurement::hasSnrInDb() const
	{
		return callMethod<jboolean>(
			"hasSnrInDb",
			"()Z"
		);
	}
	inline JString GnssMeasurement::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void GnssMeasurement::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::location

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::location;
#endif
