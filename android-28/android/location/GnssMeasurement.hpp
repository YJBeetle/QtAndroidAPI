#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JString;

namespace android::location
{
	class GnssMeasurement : public JObject
	{
	public:
		// Fields
		static jint ADR_STATE_CYCLE_SLIP();
		static jint ADR_STATE_HALF_CYCLE_REPORTED();
		static jint ADR_STATE_HALF_CYCLE_RESOLVED();
		static jint ADR_STATE_RESET();
		static jint ADR_STATE_UNKNOWN();
		static jint ADR_STATE_VALID();
		static JObject CREATOR();
		static jint MULTIPATH_INDICATOR_DETECTED();
		static jint MULTIPATH_INDICATOR_NOT_DETECTED();
		static jint MULTIPATH_INDICATOR_UNKNOWN();
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
		template<typename ...Ts> explicit GnssMeasurement(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		GnssMeasurement(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jdouble getAccumulatedDeltaRangeMeters() const;
		jint getAccumulatedDeltaRangeState() const;
		jdouble getAccumulatedDeltaRangeUncertaintyMeters() const;
		jdouble getAutomaticGainControlLevelDb() const;
		jlong getCarrierCycles() const;
		jfloat getCarrierFrequencyHz() const;
		jdouble getCarrierPhase() const;
		jdouble getCarrierPhaseUncertainty() const;
		jdouble getCn0DbHz() const;
		jint getConstellationType() const;
		jint getMultipathIndicator() const;
		jdouble getPseudorangeRateMetersPerSecond() const;
		jdouble getPseudorangeRateUncertaintyMetersPerSecond() const;
		jlong getReceivedSvTimeNanos() const;
		jlong getReceivedSvTimeUncertaintyNanos() const;
		jdouble getSnrInDb() const;
		jint getState() const;
		jint getSvid() const;
		jdouble getTimeOffsetNanos() const;
		jboolean hasAutomaticGainControlLevelDb() const;
		jboolean hasCarrierCycles() const;
		jboolean hasCarrierFrequencyHz() const;
		jboolean hasCarrierPhase() const;
		jboolean hasCarrierPhaseUncertainty() const;
		jboolean hasSnrInDb() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::location

