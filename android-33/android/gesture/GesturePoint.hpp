#pragma once

#include "../../JObject.hpp"
#include "./GesturePoint.def.hpp"

namespace android::gesture
{
	// Fields
	inline jlong GesturePoint::timestamp()
	{
		return getField<jlong>(
			"timestamp"
		);
	}
	inline jfloat GesturePoint::x()
	{
		return getField<jfloat>(
			"x"
		);
	}
	inline jfloat GesturePoint::y()
	{
		return getField<jfloat>(
			"y"
		);
	}
	
	// Constructors
	inline GesturePoint::GesturePoint(jfloat arg0, jfloat arg1, jlong arg2)
		: JObject(
			"android.gesture.GesturePoint",
			"(FFJ)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
	inline JObject GesturePoint::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
} // namespace android::gesture

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::gesture;
#endif
