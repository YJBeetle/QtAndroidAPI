#pragma once

#include "./MealType.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	inline jint MealType::MEAL_TYPE_BREAKFAST()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.MealType",
			"MEAL_TYPE_BREAKFAST"
		);
	}
	inline jint MealType::MEAL_TYPE_DINNER()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.MealType",
			"MEAL_TYPE_DINNER"
		);
	}
	inline jint MealType::MEAL_TYPE_LUNCH()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.MealType",
			"MEAL_TYPE_LUNCH"
		);
	}
	inline jint MealType::MEAL_TYPE_SNACK()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.MealType",
			"MEAL_TYPE_SNACK"
		);
	}
	inline jint MealType::MEAL_TYPE_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.MealType",
			"MEAL_TYPE_UNKNOWN"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::health::connect::datatypes

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect::datatypes;
#endif
