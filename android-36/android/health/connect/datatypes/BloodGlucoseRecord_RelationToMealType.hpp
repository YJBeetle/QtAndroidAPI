#pragma once

#include "./BloodGlucoseRecord_RelationToMealType.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	inline jint BloodGlucoseRecord_RelationToMealType::RELATION_TO_MEAL_AFTER_MEAL()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.BloodGlucoseRecord$RelationToMealType",
			"RELATION_TO_MEAL_AFTER_MEAL"
		);
	}
	inline jint BloodGlucoseRecord_RelationToMealType::RELATION_TO_MEAL_BEFORE_MEAL()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.BloodGlucoseRecord$RelationToMealType",
			"RELATION_TO_MEAL_BEFORE_MEAL"
		);
	}
	inline jint BloodGlucoseRecord_RelationToMealType::RELATION_TO_MEAL_FASTING()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.BloodGlucoseRecord$RelationToMealType",
			"RELATION_TO_MEAL_FASTING"
		);
	}
	inline jint BloodGlucoseRecord_RelationToMealType::RELATION_TO_MEAL_GENERAL()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.BloodGlucoseRecord$RelationToMealType",
			"RELATION_TO_MEAL_GENERAL"
		);
	}
	inline jint BloodGlucoseRecord_RelationToMealType::RELATION_TO_MEAL_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.BloodGlucoseRecord$RelationToMealType",
			"RELATION_TO_MEAL_UNKNOWN"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::health::connect::datatypes

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect::datatypes;
#endif
