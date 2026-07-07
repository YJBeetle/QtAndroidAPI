#pragma once

#include "./BloodPressureRecord_BodyPosition.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	inline jint BloodPressureRecord_BodyPosition::BODY_POSITION_LYING_DOWN()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.BloodPressureRecord$BodyPosition",
			"BODY_POSITION_LYING_DOWN"
		);
	}
	inline jint BloodPressureRecord_BodyPosition::BODY_POSITION_RECLINING()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.BloodPressureRecord$BodyPosition",
			"BODY_POSITION_RECLINING"
		);
	}
	inline jint BloodPressureRecord_BodyPosition::BODY_POSITION_SITTING_DOWN()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.BloodPressureRecord$BodyPosition",
			"BODY_POSITION_SITTING_DOWN"
		);
	}
	inline jint BloodPressureRecord_BodyPosition::BODY_POSITION_STANDING_UP()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.BloodPressureRecord$BodyPosition",
			"BODY_POSITION_STANDING_UP"
		);
	}
	inline jint BloodPressureRecord_BodyPosition::BODY_POSITION_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.BloodPressureRecord$BodyPosition",
			"BODY_POSITION_UNKNOWN"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::health::connect::datatypes

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect::datatypes;
#endif
