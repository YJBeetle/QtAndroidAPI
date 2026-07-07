#pragma once

#include "./BloodGlucoseRecord_SpecimenSource.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	inline jint BloodGlucoseRecord_SpecimenSource::SPECIMEN_SOURCE_CAPILLARY_BLOOD()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.BloodGlucoseRecord$SpecimenSource",
			"SPECIMEN_SOURCE_CAPILLARY_BLOOD"
		);
	}
	inline jint BloodGlucoseRecord_SpecimenSource::SPECIMEN_SOURCE_INTERSTITIAL_FLUID()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.BloodGlucoseRecord$SpecimenSource",
			"SPECIMEN_SOURCE_INTERSTITIAL_FLUID"
		);
	}
	inline jint BloodGlucoseRecord_SpecimenSource::SPECIMEN_SOURCE_PLASMA()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.BloodGlucoseRecord$SpecimenSource",
			"SPECIMEN_SOURCE_PLASMA"
		);
	}
	inline jint BloodGlucoseRecord_SpecimenSource::SPECIMEN_SOURCE_SERUM()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.BloodGlucoseRecord$SpecimenSource",
			"SPECIMEN_SOURCE_SERUM"
		);
	}
	inline jint BloodGlucoseRecord_SpecimenSource::SPECIMEN_SOURCE_TEARS()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.BloodGlucoseRecord$SpecimenSource",
			"SPECIMEN_SOURCE_TEARS"
		);
	}
	inline jint BloodGlucoseRecord_SpecimenSource::SPECIMEN_SOURCE_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.BloodGlucoseRecord$SpecimenSource",
			"SPECIMEN_SOURCE_UNKNOWN"
		);
	}
	inline jint BloodGlucoseRecord_SpecimenSource::SPECIMEN_SOURCE_WHOLE_BLOOD()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.BloodGlucoseRecord$SpecimenSource",
			"SPECIMEN_SOURCE_WHOLE_BLOOD"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::health::connect::datatypes

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect::datatypes;
#endif
