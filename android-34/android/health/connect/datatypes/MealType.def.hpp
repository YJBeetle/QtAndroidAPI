#pragma once

#include "../../../../JObject.hpp"

namespace android::health::connect::datatypes
{
	class MealType : public JObject
	{
	public:
		// Fields
		static jint MEAL_TYPE_BREAKFAST();
		static jint MEAL_TYPE_DINNER();
		static jint MEAL_TYPE_LUNCH();
		static jint MEAL_TYPE_SNACK();
		static jint MEAL_TYPE_UNKNOWN();
		
		// QJniObject forward
		template<typename ...Ts> explicit MealType(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MealType(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::health::connect::datatypes

