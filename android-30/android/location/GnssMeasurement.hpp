#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::location
{
	class GnssMeasurement : public __JniBaseClass
	{
	public:
		// Fields
		static jint ADR_STATE_CYCLE_SLIP();
		static jint ADR_STATE_HALF_CYCLE_REPORTED();
		static jint ADR_STATE_HALF_CYCLE_RESOLVED();
		static jint ADR_STATE_RESET();
		static jint ADR_STATE_UNKNOWN();
		static jint ADR_STATE_VALID();
		static __JniBaseClass CREATOR();
		static jint MULTIPATH_INDICATOR_DETECTED();
		static jint MULTIPATH_INDICATOR_NOT_DETECTED();
		static jint MULTIPATH_INDICATOR_UNKNOWN();
		static jint STATE_2ND_CODE_LOCK();
		static jint STATE_BDS_D2_BIT_SYNC();
		static jint STATE_BDS_D2_SUBFRAME_SYNC();
		static jint STATE_BIT_SYNC();
		static jint STATE_CODE_LOCK();
		static jint STATE_GAL_E1BC_CODE_LOCK();
		static jint STATE_GAL_E1B_PAGE_SYNC();
		static jint STATE_GAL_E1C_2ND_CODE_LOCK();
		static jint STATE_GLO_STRING_SYNC();
		static jint STATE_GLO_TOD_DECODED();
		static jint STATE_GLO_TOD_KNOWN();
		static jint STATE_MSEC_AMBIGUOUS();
		static jint STATE_SBAS_SYNC();
		static jint STATE_SUBFRAME_SYNC();
		static jint STATE_SYMBOL_SYNC();
		static jint STATE_TOW_DECODED();
		static jint STATE_TOW_KNOWN();
		static jint STATE_UNKNOWN();
		
		// QJniObject forward
		template<typename ...Ts> explicit GnssMeasurement(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		GnssMeasurement(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jdouble getAccumulatedDeltaRangeMeters();
		jint getAccumulatedDeltaRangeState();
		jdouble getAccumulatedDeltaRangeUncertaintyMeters();
		jdouble getAutomaticGainControlLevelDb();
		jdouble getBasebandCn0DbHz();
		jlong getCarrierCycles();
		jfloat getCarrierFrequencyHz();
		jdouble getCarrierPhase();
		jdouble getCarrierPhaseUncertainty();
		jdouble getCn0DbHz();
		jstring getCodeType();
		jint getConstellationType();
		jdouble getFullInterSignalBiasNanos();
		jdouble getFullInterSignalBiasUncertaintyNanos();
		jint getMultipathIndicator();
		jdouble getPseudorangeRateMetersPerSecond();
		jdouble getPseudorangeRateUncertaintyMetersPerSecond();
		jlong getReceivedSvTimeNanos();
		jlong getReceivedSvTimeUncertaintyNanos();
		jdouble getSatelliteInterSignalBiasNanos();
		jdouble getSatelliteInterSignalBiasUncertaintyNanos();
		jdouble getSnrInDb();
		jint getState();
		jint getSvid();
		jdouble getTimeOffsetNanos();
		jboolean hasAutomaticGainControlLevelDb();
		jboolean hasBasebandCn0DbHz();
		jboolean hasCarrierCycles();
		jboolean hasCarrierFrequencyHz();
		jboolean hasCarrierPhase();
		jboolean hasCarrierPhaseUncertainty();
		jboolean hasCodeType();
		jboolean hasFullInterSignalBiasNanos();
		jboolean hasFullInterSignalBiasUncertaintyNanos();
		jboolean hasSatelliteInterSignalBiasNanos();
		jboolean hasSatelliteInterSignalBiasUncertaintyNanos();
		jboolean hasSnrInDb();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::location

