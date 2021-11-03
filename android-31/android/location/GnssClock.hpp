#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JString;

namespace android::location
{
	class GnssClock : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit GnssClock(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		GnssClock(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jdouble getBiasNanos();
		jdouble getBiasUncertaintyNanos();
		jdouble getDriftNanosPerSecond();
		jdouble getDriftUncertaintyNanosPerSecond();
		jlong getElapsedRealtimeNanos();
		jdouble getElapsedRealtimeUncertaintyNanos();
		jlong getFullBiasNanos();
		jint getHardwareClockDiscontinuityCount();
		jint getLeapSecond();
		jdouble getReferenceCarrierFrequencyHzForIsb();
		JString getReferenceCodeTypeForIsb();
		jint getReferenceConstellationTypeForIsb();
		jlong getTimeNanos();
		jdouble getTimeUncertaintyNanos();
		jboolean hasBiasNanos();
		jboolean hasBiasUncertaintyNanos();
		jboolean hasDriftNanosPerSecond();
		jboolean hasDriftUncertaintyNanosPerSecond();
		jboolean hasElapsedRealtimeNanos();
		jboolean hasElapsedRealtimeUncertaintyNanos();
		jboolean hasFullBiasNanos();
		jboolean hasLeapSecond();
		jboolean hasReferenceCarrierFrequencyHzForIsb();
		jboolean hasReferenceCodeTypeForIsb();
		jboolean hasReferenceConstellationTypeForIsb();
		jboolean hasTimeUncertaintyNanos();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::location

