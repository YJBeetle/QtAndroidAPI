#pragma once

#include "../../../../JObject.hpp"

namespace android::health::connect::datatypes
{
	class BloodGlucoseRecord_SpecimenSource : public JObject
	{
	public:
		// Fields
		static jint SPECIMEN_SOURCE_CAPILLARY_BLOOD();
		static jint SPECIMEN_SOURCE_INTERSTITIAL_FLUID();
		static jint SPECIMEN_SOURCE_PLASMA();
		static jint SPECIMEN_SOURCE_SERUM();
		static jint SPECIMEN_SOURCE_TEARS();
		static jint SPECIMEN_SOURCE_UNKNOWN();
		static jint SPECIMEN_SOURCE_WHOLE_BLOOD();
		
		// QJniObject forward
		template<typename ...Ts> explicit BloodGlucoseRecord_SpecimenSource(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BloodGlucoseRecord_SpecimenSource(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::health::connect::datatypes

