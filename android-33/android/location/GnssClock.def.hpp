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
		GnssClock(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jdouble getBiasNanos() const;
		jdouble getBiasUncertaintyNanos() const;
		jdouble getDriftNanosPerSecond() const;
		jdouble getDriftUncertaintyNanosPerSecond() const;
		jlong getElapsedRealtimeNanos() const;
		jdouble getElapsedRealtimeUncertaintyNanos() const;
		jlong getFullBiasNanos() const;
		jint getHardwareClockDiscontinuityCount() const;
		jint getLeapSecond() const;
		jdouble getReferenceCarrierFrequencyHzForIsb() const;
		JString getReferenceCodeTypeForIsb() const;
		jint getReferenceConstellationTypeForIsb() const;
		jlong getTimeNanos() const;
		jdouble getTimeUncertaintyNanos() const;
		jboolean hasBiasNanos() const;
		jboolean hasBiasUncertaintyNanos() const;
		jboolean hasDriftNanosPerSecond() const;
		jboolean hasDriftUncertaintyNanosPerSecond() const;
		jboolean hasElapsedRealtimeNanos() const;
		jboolean hasElapsedRealtimeUncertaintyNanos() const;
		jboolean hasFullBiasNanos() const;
		jboolean hasLeapSecond() const;
		jboolean hasReferenceCarrierFrequencyHzForIsb() const;
		jboolean hasReferenceCodeTypeForIsb() const;
		jboolean hasReferenceConstellationTypeForIsb() const;
		jboolean hasTimeUncertaintyNanos() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::location

