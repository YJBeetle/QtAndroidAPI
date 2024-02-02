#pragma once

#include "../../../../JObject.hpp"

namespace android::health::connect::datatypes
{
	class BloodGlucoseRecord_RelationToMealType : public JObject
	{
	public:
		// Fields
		static jint RELATION_TO_MEAL_AFTER_MEAL();
		static jint RELATION_TO_MEAL_BEFORE_MEAL();
		static jint RELATION_TO_MEAL_FASTING();
		static jint RELATION_TO_MEAL_GENERAL();
		static jint RELATION_TO_MEAL_UNKNOWN();
		
		// QJniObject forward
		template<typename ...Ts> explicit BloodGlucoseRecord_RelationToMealType(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BloodGlucoseRecord_RelationToMealType(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::health::connect::datatypes

