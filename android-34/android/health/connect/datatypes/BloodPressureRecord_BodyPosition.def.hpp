#pragma once

#include "../../../../JObject.hpp"

namespace android::health::connect::datatypes
{
	class BloodPressureRecord_BodyPosition : public JObject
	{
	public:
		// Fields
		static jint BODY_POSITION_LYING_DOWN();
		static jint BODY_POSITION_RECLINING();
		static jint BODY_POSITION_SITTING_DOWN();
		static jint BODY_POSITION_STANDING_UP();
		static jint BODY_POSITION_UNKNOWN();
		
		// QJniObject forward
		template<typename ...Ts> explicit BloodPressureRecord_BodyPosition(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BloodPressureRecord_BodyPosition(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::health::connect::datatypes

