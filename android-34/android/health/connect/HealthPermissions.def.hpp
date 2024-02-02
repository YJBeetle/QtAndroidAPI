#pragma once

#include "../../../JObject.hpp"

class JString;

namespace android::health::connect
{
	class HealthPermissions : public JObject
	{
	public:
		// Fields
		static JString READ_ACTIVE_CALORIES_BURNED();
		static JString READ_BASAL_BODY_TEMPERATURE();
		static JString READ_BASAL_METABOLIC_RATE();
		static JString READ_BLOOD_GLUCOSE();
		static JString READ_BLOOD_PRESSURE();
		static JString READ_BODY_FAT();
		static JString READ_BODY_TEMPERATURE();
		static JString READ_BODY_WATER_MASS();
		static JString READ_BONE_MASS();
		static JString READ_CERVICAL_MUCUS();
		static JString READ_DISTANCE();
		static JString READ_ELEVATION_GAINED();
		static JString READ_EXERCISE();
		static JString READ_FLOORS_CLIMBED();
		static JString READ_HEART_RATE();
		static JString READ_HEART_RATE_VARIABILITY();
		static JString READ_HEIGHT();
		static JString READ_HYDRATION();
		static JString READ_INTERMENSTRUAL_BLEEDING();
		static JString READ_LEAN_BODY_MASS();
		static JString READ_MENSTRUATION();
		static JString READ_NUTRITION();
		static JString READ_OVULATION_TEST();
		static JString READ_OXYGEN_SATURATION();
		static JString READ_POWER();
		static JString READ_RESPIRATORY_RATE();
		static JString READ_RESTING_HEART_RATE();
		static JString READ_SEXUAL_ACTIVITY();
		static JString READ_SLEEP();
		static JString READ_SPEED();
		static JString READ_STEPS();
		static JString READ_TOTAL_CALORIES_BURNED();
		static JString READ_VO2_MAX();
		static JString READ_WEIGHT();
		static JString READ_WHEELCHAIR_PUSHES();
		static JString WRITE_ACTIVE_CALORIES_BURNED();
		static JString WRITE_BASAL_BODY_TEMPERATURE();
		static JString WRITE_BASAL_METABOLIC_RATE();
		static JString WRITE_BLOOD_GLUCOSE();
		static JString WRITE_BLOOD_PRESSURE();
		static JString WRITE_BODY_FAT();
		static JString WRITE_BODY_TEMPERATURE();
		static JString WRITE_BODY_WATER_MASS();
		static JString WRITE_BONE_MASS();
		static JString WRITE_CERVICAL_MUCUS();
		static JString WRITE_DISTANCE();
		static JString WRITE_ELEVATION_GAINED();
		static JString WRITE_EXERCISE();
		static JString WRITE_EXERCISE_ROUTE();
		static JString WRITE_FLOORS_CLIMBED();
		static JString WRITE_HEART_RATE();
		static JString WRITE_HEART_RATE_VARIABILITY();
		static JString WRITE_HEIGHT();
		static JString WRITE_HYDRATION();
		static JString WRITE_INTERMENSTRUAL_BLEEDING();
		static JString WRITE_LEAN_BODY_MASS();
		static JString WRITE_MENSTRUATION();
		static JString WRITE_NUTRITION();
		static JString WRITE_OVULATION_TEST();
		static JString WRITE_OXYGEN_SATURATION();
		static JString WRITE_POWER();
		static JString WRITE_RESPIRATORY_RATE();
		static JString WRITE_RESTING_HEART_RATE();
		static JString WRITE_SEXUAL_ACTIVITY();
		static JString WRITE_SLEEP();
		static JString WRITE_SPEED();
		static JString WRITE_STEPS();
		static JString WRITE_TOTAL_CALORIES_BURNED();
		static JString WRITE_VO2_MAX();
		static JString WRITE_WEIGHT();
		static JString WRITE_WHEELCHAIR_PUSHES();
		
		// QJniObject forward
		template<typename ...Ts> explicit HealthPermissions(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		HealthPermissions(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::health::connect

