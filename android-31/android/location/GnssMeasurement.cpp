#include "../os/Parcel.hpp"
#include "./GnssMeasurement.hpp"

namespace android::location
{
	// Fields
	jint GnssMeasurement::ADR_STATE_CYCLE_SLIP()
	{
		return getStaticField<jint>(
			"android.location.GnssMeasurement",
			"ADR_STATE_CYCLE_SLIP"
		);
	}
	jint GnssMeasurement::ADR_STATE_HALF_CYCLE_REPORTED()
	{
		return getStaticField<jint>(
			"android.location.GnssMeasurement",
			"ADR_STATE_HALF_CYCLE_REPORTED"
		);
	}
	jint GnssMeasurement::ADR_STATE_HALF_CYCLE_RESOLVED()
	{
		return getStaticField<jint>(
			"android.location.GnssMeasurement",
			"ADR_STATE_HALF_CYCLE_RESOLVED"
		);
	}
	jint GnssMeasurement::ADR_STATE_RESET()
	{
		return getStaticField<jint>(
			"android.location.GnssMeasurement",
			"ADR_STATE_RESET"
		);
	}
	jint GnssMeasurement::ADR_STATE_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.location.GnssMeasurement",
			"ADR_STATE_UNKNOWN"
		);
	}
	jint GnssMeasurement::ADR_STATE_VALID()
	{
		return getStaticField<jint>(
			"android.location.GnssMeasurement",
			"ADR_STATE_VALID"
		);
	}
	JObject GnssMeasurement::CREATOR()
	{
		return getStaticObjectField(
			"android.location.GnssMeasurement",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint GnssMeasurement::MULTIPATH_INDICATOR_DETECTED()
	{
		return getStaticField<jint>(
			"android.location.GnssMeasurement",
			"MULTIPATH_INDICATOR_DETECTED"
		);
	}
	jint GnssMeasurement::MULTIPATH_INDICATOR_NOT_DETECTED()
	{
		return getStaticField<jint>(
			"android.location.GnssMeasurement",
			"MULTIPATH_INDICATOR_NOT_DETECTED"
		);
	}
	jint GnssMeasurement::MULTIPATH_INDICATOR_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.location.GnssMeasurement",
			"MULTIPATH_INDICATOR_UNKNOWN"
		);
	}
	jint GnssMeasurement::STATE_2ND_CODE_LOCK()
	{
		return getStaticField<jint>(
			"android.location.GnssMeasurement",
			"STATE_2ND_CODE_LOCK"
		);
	}
	jint GnssMeasurement::STATE_BDS_D2_BIT_SYNC()
	{
		return getStaticField<jint>(
			"android.location.GnssMeasurement",
			"STATE_BDS_D2_BIT_SYNC"
		);
	}
	jint GnssMeasurement::STATE_BDS_D2_SUBFRAME_SYNC()
	{
		return getStaticField<jint>(
			"android.location.GnssMeasurement",
			"STATE_BDS_D2_SUBFRAME_SYNC"
		);
	}
	jint GnssMeasurement::STATE_BIT_SYNC()
	{
		return getStaticField<jint>(
			"android.location.GnssMeasurement",
			"STATE_BIT_SYNC"
		);
	}
	jint GnssMeasurement::STATE_CODE_LOCK()
	{
		return getStaticField<jint>(
			"android.location.GnssMeasurement",
			"STATE_CODE_LOCK"
		);
	}
	jint GnssMeasurement::STATE_GAL_E1BC_CODE_LOCK()
	{
		return getStaticField<jint>(
			"android.location.GnssMeasurement",
			"STATE_GAL_E1BC_CODE_LOCK"
		);
	}
	jint GnssMeasurement::STATE_GAL_E1B_PAGE_SYNC()
	{
		return getStaticField<jint>(
			"android.location.GnssMeasurement",
			"STATE_GAL_E1B_PAGE_SYNC"
		);
	}
	jint GnssMeasurement::STATE_GAL_E1C_2ND_CODE_LOCK()
	{
		return getStaticField<jint>(
			"android.location.GnssMeasurement",
			"STATE_GAL_E1C_2ND_CODE_LOCK"
		);
	}
	jint GnssMeasurement::STATE_GLO_STRING_SYNC()
	{
		return getStaticField<jint>(
			"android.location.GnssMeasurement",
			"STATE_GLO_STRING_SYNC"
		);
	}
	jint GnssMeasurement::STATE_GLO_TOD_DECODED()
	{
		return getStaticField<jint>(
			"android.location.GnssMeasurement",
			"STATE_GLO_TOD_DECODED"
		);
	}
	jint GnssMeasurement::STATE_GLO_TOD_KNOWN()
	{
		return getStaticField<jint>(
			"android.location.GnssMeasurement",
			"STATE_GLO_TOD_KNOWN"
		);
	}
	jint GnssMeasurement::STATE_MSEC_AMBIGUOUS()
	{
		return getStaticField<jint>(
			"android.location.GnssMeasurement",
			"STATE_MSEC_AMBIGUOUS"
		);
	}
	jint GnssMeasurement::STATE_SBAS_SYNC()
	{
		return getStaticField<jint>(
			"android.location.GnssMeasurement",
			"STATE_SBAS_SYNC"
		);
	}
	jint GnssMeasurement::STATE_SUBFRAME_SYNC()
	{
		return getStaticField<jint>(
			"android.location.GnssMeasurement",
			"STATE_SUBFRAME_SYNC"
		);
	}
	jint GnssMeasurement::STATE_SYMBOL_SYNC()
	{
		return getStaticField<jint>(
			"android.location.GnssMeasurement",
			"STATE_SYMBOL_SYNC"
		);
	}
	jint GnssMeasurement::STATE_TOW_DECODED()
	{
		return getStaticField<jint>(
			"android.location.GnssMeasurement",
			"STATE_TOW_DECODED"
		);
	}
	jint GnssMeasurement::STATE_TOW_KNOWN()
	{
		return getStaticField<jint>(
			"android.location.GnssMeasurement",
			"STATE_TOW_KNOWN"
		);
	}
	jint GnssMeasurement::STATE_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.location.GnssMeasurement",
			"STATE_UNKNOWN"
		);
	}
	
	// QJniObject forward
	GnssMeasurement::GnssMeasurement(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint GnssMeasurement::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jdouble GnssMeasurement::getAccumulatedDeltaRangeMeters()
	{
		return callMethod<jdouble>(
			"getAccumulatedDeltaRangeMeters",
			"()D"
		);
	}
	jint GnssMeasurement::getAccumulatedDeltaRangeState()
	{
		return callMethod<jint>(
			"getAccumulatedDeltaRangeState",
			"()I"
		);
	}
	jdouble GnssMeasurement::getAccumulatedDeltaRangeUncertaintyMeters()
	{
		return callMethod<jdouble>(
			"getAccumulatedDeltaRangeUncertaintyMeters",
			"()D"
		);
	}
	jdouble GnssMeasurement::getAutomaticGainControlLevelDb()
	{
		return callMethod<jdouble>(
			"getAutomaticGainControlLevelDb",
			"()D"
		);
	}
	jdouble GnssMeasurement::getBasebandCn0DbHz()
	{
		return callMethod<jdouble>(
			"getBasebandCn0DbHz",
			"()D"
		);
	}
	jlong GnssMeasurement::getCarrierCycles()
	{
		return callMethod<jlong>(
			"getCarrierCycles",
			"()J"
		);
	}
	jfloat GnssMeasurement::getCarrierFrequencyHz()
	{
		return callMethod<jfloat>(
			"getCarrierFrequencyHz",
			"()F"
		);
	}
	jdouble GnssMeasurement::getCarrierPhase()
	{
		return callMethod<jdouble>(
			"getCarrierPhase",
			"()D"
		);
	}
	jdouble GnssMeasurement::getCarrierPhaseUncertainty()
	{
		return callMethod<jdouble>(
			"getCarrierPhaseUncertainty",
			"()D"
		);
	}
	jdouble GnssMeasurement::getCn0DbHz()
	{
		return callMethod<jdouble>(
			"getCn0DbHz",
			"()D"
		);
	}
	jstring GnssMeasurement::getCodeType()
	{
		return callObjectMethod(
			"getCodeType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint GnssMeasurement::getConstellationType()
	{
		return callMethod<jint>(
			"getConstellationType",
			"()I"
		);
	}
	jdouble GnssMeasurement::getFullInterSignalBiasNanos()
	{
		return callMethod<jdouble>(
			"getFullInterSignalBiasNanos",
			"()D"
		);
	}
	jdouble GnssMeasurement::getFullInterSignalBiasUncertaintyNanos()
	{
		return callMethod<jdouble>(
			"getFullInterSignalBiasUncertaintyNanos",
			"()D"
		);
	}
	jint GnssMeasurement::getMultipathIndicator()
	{
		return callMethod<jint>(
			"getMultipathIndicator",
			"()I"
		);
	}
	jdouble GnssMeasurement::getPseudorangeRateMetersPerSecond()
	{
		return callMethod<jdouble>(
			"getPseudorangeRateMetersPerSecond",
			"()D"
		);
	}
	jdouble GnssMeasurement::getPseudorangeRateUncertaintyMetersPerSecond()
	{
		return callMethod<jdouble>(
			"getPseudorangeRateUncertaintyMetersPerSecond",
			"()D"
		);
	}
	jlong GnssMeasurement::getReceivedSvTimeNanos()
	{
		return callMethod<jlong>(
			"getReceivedSvTimeNanos",
			"()J"
		);
	}
	jlong GnssMeasurement::getReceivedSvTimeUncertaintyNanos()
	{
		return callMethod<jlong>(
			"getReceivedSvTimeUncertaintyNanos",
			"()J"
		);
	}
	jdouble GnssMeasurement::getSatelliteInterSignalBiasNanos()
	{
		return callMethod<jdouble>(
			"getSatelliteInterSignalBiasNanos",
			"()D"
		);
	}
	jdouble GnssMeasurement::getSatelliteInterSignalBiasUncertaintyNanos()
	{
		return callMethod<jdouble>(
			"getSatelliteInterSignalBiasUncertaintyNanos",
			"()D"
		);
	}
	jdouble GnssMeasurement::getSnrInDb()
	{
		return callMethod<jdouble>(
			"getSnrInDb",
			"()D"
		);
	}
	jint GnssMeasurement::getState()
	{
		return callMethod<jint>(
			"getState",
			"()I"
		);
	}
	jint GnssMeasurement::getSvid()
	{
		return callMethod<jint>(
			"getSvid",
			"()I"
		);
	}
	jdouble GnssMeasurement::getTimeOffsetNanos()
	{
		return callMethod<jdouble>(
			"getTimeOffsetNanos",
			"()D"
		);
	}
	jboolean GnssMeasurement::hasAutomaticGainControlLevelDb()
	{
		return callMethod<jboolean>(
			"hasAutomaticGainControlLevelDb",
			"()Z"
		);
	}
	jboolean GnssMeasurement::hasBasebandCn0DbHz()
	{
		return callMethod<jboolean>(
			"hasBasebandCn0DbHz",
			"()Z"
		);
	}
	jboolean GnssMeasurement::hasCarrierCycles()
	{
		return callMethod<jboolean>(
			"hasCarrierCycles",
			"()Z"
		);
	}
	jboolean GnssMeasurement::hasCarrierFrequencyHz()
	{
		return callMethod<jboolean>(
			"hasCarrierFrequencyHz",
			"()Z"
		);
	}
	jboolean GnssMeasurement::hasCarrierPhase()
	{
		return callMethod<jboolean>(
			"hasCarrierPhase",
			"()Z"
		);
	}
	jboolean GnssMeasurement::hasCarrierPhaseUncertainty()
	{
		return callMethod<jboolean>(
			"hasCarrierPhaseUncertainty",
			"()Z"
		);
	}
	jboolean GnssMeasurement::hasCodeType()
	{
		return callMethod<jboolean>(
			"hasCodeType",
			"()Z"
		);
	}
	jboolean GnssMeasurement::hasFullInterSignalBiasNanos()
	{
		return callMethod<jboolean>(
			"hasFullInterSignalBiasNanos",
			"()Z"
		);
	}
	jboolean GnssMeasurement::hasFullInterSignalBiasUncertaintyNanos()
	{
		return callMethod<jboolean>(
			"hasFullInterSignalBiasUncertaintyNanos",
			"()Z"
		);
	}
	jboolean GnssMeasurement::hasSatelliteInterSignalBiasNanos()
	{
		return callMethod<jboolean>(
			"hasSatelliteInterSignalBiasNanos",
			"()Z"
		);
	}
	jboolean GnssMeasurement::hasSatelliteInterSignalBiasUncertaintyNanos()
	{
		return callMethod<jboolean>(
			"hasSatelliteInterSignalBiasUncertaintyNanos",
			"()Z"
		);
	}
	jboolean GnssMeasurement::hasSnrInDb()
	{
		return callMethod<jboolean>(
			"hasSnrInDb",
			"()Z"
		);
	}
	jstring GnssMeasurement::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void GnssMeasurement::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::location

