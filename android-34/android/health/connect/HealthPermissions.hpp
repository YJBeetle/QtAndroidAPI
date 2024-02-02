#pragma once

#include "../../../JString.hpp"
#include "./HealthPermissions.def.hpp"

namespace android::health::connect
{
	// Fields
	inline JString HealthPermissions::READ_ACTIVE_CALORIES_BURNED()
	{
		return getStaticObjectField(
			"android.health.connect.HealthPermissions",
			"READ_ACTIVE_CALORIES_BURNED",
			"Ljava/lang/String;"
		);
	}
	inline JString HealthPermissions::READ_BASAL_BODY_TEMPERATURE()
	{
		return getStaticObjectField(
			"android.health.connect.HealthPermissions",
			"READ_BASAL_BODY_TEMPERATURE",
			"Ljava/lang/String;"
		);
	}
	inline JString HealthPermissions::READ_BASAL_METABOLIC_RATE()
	{
		return getStaticObjectField(
			"android.health.connect.HealthPermissions",
			"READ_BASAL_METABOLIC_RATE",
			"Ljava/lang/String;"
		);
	}
	inline JString HealthPermissions::READ_BLOOD_GLUCOSE()
	{
		return getStaticObjectField(
			"android.health.connect.HealthPermissions",
			"READ_BLOOD_GLUCOSE",
			"Ljava/lang/String;"
		);
	}
	inline JString HealthPermissions::READ_BLOOD_PRESSURE()
	{
		return getStaticObjectField(
			"android.health.connect.HealthPermissions",
			"READ_BLOOD_PRESSURE",
			"Ljava/lang/String;"
		);
	}
	inline JString HealthPermissions::READ_BODY_FAT()
	{
		return getStaticObjectField(
			"android.health.connect.HealthPermissions",
			"READ_BODY_FAT",
			"Ljava/lang/String;"
		);
	}
	inline JString HealthPermissions::READ_BODY_TEMPERATURE()
	{
		return getStaticObjectField(
			"android.health.connect.HealthPermissions",
			"READ_BODY_TEMPERATURE",
			"Ljava/lang/String;"
		);
	}
	inline JString HealthPermissions::READ_BODY_WATER_MASS()
	{
		return getStaticObjectField(
			"android.health.connect.HealthPermissions",
			"READ_BODY_WATER_MASS",
			"Ljava/lang/String;"
		);
	}
	inline JString HealthPermissions::READ_BONE_MASS()
	{
		return getStaticObjectField(
			"android.health.connect.HealthPermissions",
			"READ_BONE_MASS",
			"Ljava/lang/String;"
		);
	}
	inline JString HealthPermissions::READ_CERVICAL_MUCUS()
	{
		return getStaticObjectField(
			"android.health.connect.HealthPermissions",
			"READ_CERVICAL_MUCUS",
			"Ljava/lang/String;"
		);
	}
	inline JString HealthPermissions::READ_DISTANCE()
	{
		return getStaticObjectField(
			"android.health.connect.HealthPermissions",
			"READ_DISTANCE",
			"Ljava/lang/String;"
		);
	}
	inline JString HealthPermissions::READ_ELEVATION_GAINED()
	{
		return getStaticObjectField(
			"android.health.connect.HealthPermissions",
			"READ_ELEVATION_GAINED",
			"Ljava/lang/String;"
		);
	}
	inline JString HealthPermissions::READ_EXERCISE()
	{
		return getStaticObjectField(
			"android.health.connect.HealthPermissions",
			"READ_EXERCISE",
			"Ljava/lang/String;"
		);
	}
	inline JString HealthPermissions::READ_FLOORS_CLIMBED()
	{
		return getStaticObjectField(
			"android.health.connect.HealthPermissions",
			"READ_FLOORS_CLIMBED",
			"Ljava/lang/String;"
		);
	}
	inline JString HealthPermissions::READ_HEART_RATE()
	{
		return getStaticObjectField(
			"android.health.connect.HealthPermissions",
			"READ_HEART_RATE",
			"Ljava/lang/String;"
		);
	}
	inline JString HealthPermissions::READ_HEART_RATE_VARIABILITY()
	{
		return getStaticObjectField(
			"android.health.connect.HealthPermissions",
			"READ_HEART_RATE_VARIABILITY",
			"Ljava/lang/String;"
		);
	}
	inline JString HealthPermissions::READ_HEIGHT()
	{
		return getStaticObjectField(
			"android.health.connect.HealthPermissions",
			"READ_HEIGHT",
			"Ljava/lang/String;"
		);
	}
	inline JString HealthPermissions::READ_HYDRATION()
	{
		return getStaticObjectField(
			"android.health.connect.HealthPermissions",
			"READ_HYDRATION",
			"Ljava/lang/String;"
		);
	}
	inline JString HealthPermissions::READ_INTERMENSTRUAL_BLEEDING()
	{
		return getStaticObjectField(
			"android.health.connect.HealthPermissions",
			"READ_INTERMENSTRUAL_BLEEDING",
			"Ljava/lang/String;"
		);
	}
	inline JString HealthPermissions::READ_LEAN_BODY_MASS()
	{
		return getStaticObjectField(
			"android.health.connect.HealthPermissions",
			"READ_LEAN_BODY_MASS",
			"Ljava/lang/String;"
		);
	}
	inline JString HealthPermissions::READ_MENSTRUATION()
	{
		return getStaticObjectField(
			"android.health.connect.HealthPermissions",
			"READ_MENSTRUATION",
			"Ljava/lang/String;"
		);
	}
	inline JString HealthPermissions::READ_NUTRITION()
	{
		return getStaticObjectField(
			"android.health.connect.HealthPermissions",
			"READ_NUTRITION",
			"Ljava/lang/String;"
		);
	}
	inline JString HealthPermissions::READ_OVULATION_TEST()
	{
		return getStaticObjectField(
			"android.health.connect.HealthPermissions",
			"READ_OVULATION_TEST",
			"Ljava/lang/String;"
		);
	}
	inline JString HealthPermissions::READ_OXYGEN_SATURATION()
	{
		return getStaticObjectField(
			"android.health.connect.HealthPermissions",
			"READ_OXYGEN_SATURATION",
			"Ljava/lang/String;"
		);
	}
	inline JString HealthPermissions::READ_POWER()
	{
		return getStaticObjectField(
			"android.health.connect.HealthPermissions",
			"READ_POWER",
			"Ljava/lang/String;"
		);
	}
	inline JString HealthPermissions::READ_RESPIRATORY_RATE()
	{
		return getStaticObjectField(
			"android.health.connect.HealthPermissions",
			"READ_RESPIRATORY_RATE",
			"Ljava/lang/String;"
		);
	}
	inline JString HealthPermissions::READ_RESTING_HEART_RATE()
	{
		return getStaticObjectField(
			"android.health.connect.HealthPermissions",
			"READ_RESTING_HEART_RATE",
			"Ljava/lang/String;"
		);
	}
	inline JString HealthPermissions::READ_SEXUAL_ACTIVITY()
	{
		return getStaticObjectField(
			"android.health.connect.HealthPermissions",
			"READ_SEXUAL_ACTIVITY",
			"Ljava/lang/String;"
		);
	}
	inline JString HealthPermissions::READ_SLEEP()
	{
		return getStaticObjectField(
			"android.health.connect.HealthPermissions",
			"READ_SLEEP",
			"Ljava/lang/String;"
		);
	}
	inline JString HealthPermissions::READ_SPEED()
	{
		return getStaticObjectField(
			"android.health.connect.HealthPermissions",
			"READ_SPEED",
			"Ljava/lang/String;"
		);
	}
	inline JString HealthPermissions::READ_STEPS()
	{
		return getStaticObjectField(
			"android.health.connect.HealthPermissions",
			"READ_STEPS",
			"Ljava/lang/String;"
		);
	}
	inline JString HealthPermissions::READ_TOTAL_CALORIES_BURNED()
	{
		return getStaticObjectField(
			"android.health.connect.HealthPermissions",
			"READ_TOTAL_CALORIES_BURNED",
			"Ljava/lang/String;"
		);
	}
	inline JString HealthPermissions::READ_VO2_MAX()
	{
		return getStaticObjectField(
			"android.health.connect.HealthPermissions",
			"READ_VO2_MAX",
			"Ljava/lang/String;"
		);
	}
	inline JString HealthPermissions::READ_WEIGHT()
	{
		return getStaticObjectField(
			"android.health.connect.HealthPermissions",
			"READ_WEIGHT",
			"Ljava/lang/String;"
		);
	}
	inline JString HealthPermissions::READ_WHEELCHAIR_PUSHES()
	{
		return getStaticObjectField(
			"android.health.connect.HealthPermissions",
			"READ_WHEELCHAIR_PUSHES",
			"Ljava/lang/String;"
		);
	}
	inline JString HealthPermissions::WRITE_ACTIVE_CALORIES_BURNED()
	{
		return getStaticObjectField(
			"android.health.connect.HealthPermissions",
			"WRITE_ACTIVE_CALORIES_BURNED",
			"Ljava/lang/String;"
		);
	}
	inline JString HealthPermissions::WRITE_BASAL_BODY_TEMPERATURE()
	{
		return getStaticObjectField(
			"android.health.connect.HealthPermissions",
			"WRITE_BASAL_BODY_TEMPERATURE",
			"Ljava/lang/String;"
		);
	}
	inline JString HealthPermissions::WRITE_BASAL_METABOLIC_RATE()
	{
		return getStaticObjectField(
			"android.health.connect.HealthPermissions",
			"WRITE_BASAL_METABOLIC_RATE",
			"Ljava/lang/String;"
		);
	}
	inline JString HealthPermissions::WRITE_BLOOD_GLUCOSE()
	{
		return getStaticObjectField(
			"android.health.connect.HealthPermissions",
			"WRITE_BLOOD_GLUCOSE",
			"Ljava/lang/String;"
		);
	}
	inline JString HealthPermissions::WRITE_BLOOD_PRESSURE()
	{
		return getStaticObjectField(
			"android.health.connect.HealthPermissions",
			"WRITE_BLOOD_PRESSURE",
			"Ljava/lang/String;"
		);
	}
	inline JString HealthPermissions::WRITE_BODY_FAT()
	{
		return getStaticObjectField(
			"android.health.connect.HealthPermissions",
			"WRITE_BODY_FAT",
			"Ljava/lang/String;"
		);
	}
	inline JString HealthPermissions::WRITE_BODY_TEMPERATURE()
	{
		return getStaticObjectField(
			"android.health.connect.HealthPermissions",
			"WRITE_BODY_TEMPERATURE",
			"Ljava/lang/String;"
		);
	}
	inline JString HealthPermissions::WRITE_BODY_WATER_MASS()
	{
		return getStaticObjectField(
			"android.health.connect.HealthPermissions",
			"WRITE_BODY_WATER_MASS",
			"Ljava/lang/String;"
		);
	}
	inline JString HealthPermissions::WRITE_BONE_MASS()
	{
		return getStaticObjectField(
			"android.health.connect.HealthPermissions",
			"WRITE_BONE_MASS",
			"Ljava/lang/String;"
		);
	}
	inline JString HealthPermissions::WRITE_CERVICAL_MUCUS()
	{
		return getStaticObjectField(
			"android.health.connect.HealthPermissions",
			"WRITE_CERVICAL_MUCUS",
			"Ljava/lang/String;"
		);
	}
	inline JString HealthPermissions::WRITE_DISTANCE()
	{
		return getStaticObjectField(
			"android.health.connect.HealthPermissions",
			"WRITE_DISTANCE",
			"Ljava/lang/String;"
		);
	}
	inline JString HealthPermissions::WRITE_ELEVATION_GAINED()
	{
		return getStaticObjectField(
			"android.health.connect.HealthPermissions",
			"WRITE_ELEVATION_GAINED",
			"Ljava/lang/String;"
		);
	}
	inline JString HealthPermissions::WRITE_EXERCISE()
	{
		return getStaticObjectField(
			"android.health.connect.HealthPermissions",
			"WRITE_EXERCISE",
			"Ljava/lang/String;"
		);
	}
	inline JString HealthPermissions::WRITE_EXERCISE_ROUTE()
	{
		return getStaticObjectField(
			"android.health.connect.HealthPermissions",
			"WRITE_EXERCISE_ROUTE",
			"Ljava/lang/String;"
		);
	}
	inline JString HealthPermissions::WRITE_FLOORS_CLIMBED()
	{
		return getStaticObjectField(
			"android.health.connect.HealthPermissions",
			"WRITE_FLOORS_CLIMBED",
			"Ljava/lang/String;"
		);
	}
	inline JString HealthPermissions::WRITE_HEART_RATE()
	{
		return getStaticObjectField(
			"android.health.connect.HealthPermissions",
			"WRITE_HEART_RATE",
			"Ljava/lang/String;"
		);
	}
	inline JString HealthPermissions::WRITE_HEART_RATE_VARIABILITY()
	{
		return getStaticObjectField(
			"android.health.connect.HealthPermissions",
			"WRITE_HEART_RATE_VARIABILITY",
			"Ljava/lang/String;"
		);
	}
	inline JString HealthPermissions::WRITE_HEIGHT()
	{
		return getStaticObjectField(
			"android.health.connect.HealthPermissions",
			"WRITE_HEIGHT",
			"Ljava/lang/String;"
		);
	}
	inline JString HealthPermissions::WRITE_HYDRATION()
	{
		return getStaticObjectField(
			"android.health.connect.HealthPermissions",
			"WRITE_HYDRATION",
			"Ljava/lang/String;"
		);
	}
	inline JString HealthPermissions::WRITE_INTERMENSTRUAL_BLEEDING()
	{
		return getStaticObjectField(
			"android.health.connect.HealthPermissions",
			"WRITE_INTERMENSTRUAL_BLEEDING",
			"Ljava/lang/String;"
		);
	}
	inline JString HealthPermissions::WRITE_LEAN_BODY_MASS()
	{
		return getStaticObjectField(
			"android.health.connect.HealthPermissions",
			"WRITE_LEAN_BODY_MASS",
			"Ljava/lang/String;"
		);
	}
	inline JString HealthPermissions::WRITE_MENSTRUATION()
	{
		return getStaticObjectField(
			"android.health.connect.HealthPermissions",
			"WRITE_MENSTRUATION",
			"Ljava/lang/String;"
		);
	}
	inline JString HealthPermissions::WRITE_NUTRITION()
	{
		return getStaticObjectField(
			"android.health.connect.HealthPermissions",
			"WRITE_NUTRITION",
			"Ljava/lang/String;"
		);
	}
	inline JString HealthPermissions::WRITE_OVULATION_TEST()
	{
		return getStaticObjectField(
			"android.health.connect.HealthPermissions",
			"WRITE_OVULATION_TEST",
			"Ljava/lang/String;"
		);
	}
	inline JString HealthPermissions::WRITE_OXYGEN_SATURATION()
	{
		return getStaticObjectField(
			"android.health.connect.HealthPermissions",
			"WRITE_OXYGEN_SATURATION",
			"Ljava/lang/String;"
		);
	}
	inline JString HealthPermissions::WRITE_POWER()
	{
		return getStaticObjectField(
			"android.health.connect.HealthPermissions",
			"WRITE_POWER",
			"Ljava/lang/String;"
		);
	}
	inline JString HealthPermissions::WRITE_RESPIRATORY_RATE()
	{
		return getStaticObjectField(
			"android.health.connect.HealthPermissions",
			"WRITE_RESPIRATORY_RATE",
			"Ljava/lang/String;"
		);
	}
	inline JString HealthPermissions::WRITE_RESTING_HEART_RATE()
	{
		return getStaticObjectField(
			"android.health.connect.HealthPermissions",
			"WRITE_RESTING_HEART_RATE",
			"Ljava/lang/String;"
		);
	}
	inline JString HealthPermissions::WRITE_SEXUAL_ACTIVITY()
	{
		return getStaticObjectField(
			"android.health.connect.HealthPermissions",
			"WRITE_SEXUAL_ACTIVITY",
			"Ljava/lang/String;"
		);
	}
	inline JString HealthPermissions::WRITE_SLEEP()
	{
		return getStaticObjectField(
			"android.health.connect.HealthPermissions",
			"WRITE_SLEEP",
			"Ljava/lang/String;"
		);
	}
	inline JString HealthPermissions::WRITE_SPEED()
	{
		return getStaticObjectField(
			"android.health.connect.HealthPermissions",
			"WRITE_SPEED",
			"Ljava/lang/String;"
		);
	}
	inline JString HealthPermissions::WRITE_STEPS()
	{
		return getStaticObjectField(
			"android.health.connect.HealthPermissions",
			"WRITE_STEPS",
			"Ljava/lang/String;"
		);
	}
	inline JString HealthPermissions::WRITE_TOTAL_CALORIES_BURNED()
	{
		return getStaticObjectField(
			"android.health.connect.HealthPermissions",
			"WRITE_TOTAL_CALORIES_BURNED",
			"Ljava/lang/String;"
		);
	}
	inline JString HealthPermissions::WRITE_VO2_MAX()
	{
		return getStaticObjectField(
			"android.health.connect.HealthPermissions",
			"WRITE_VO2_MAX",
			"Ljava/lang/String;"
		);
	}
	inline JString HealthPermissions::WRITE_WEIGHT()
	{
		return getStaticObjectField(
			"android.health.connect.HealthPermissions",
			"WRITE_WEIGHT",
			"Ljava/lang/String;"
		);
	}
	inline JString HealthPermissions::WRITE_WHEELCHAIR_PUSHES()
	{
		return getStaticObjectField(
			"android.health.connect.HealthPermissions",
			"WRITE_WHEELCHAIR_PUSHES",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::health::connect

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect;
#endif
