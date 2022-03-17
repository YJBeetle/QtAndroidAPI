#pragma once

#include "../../JFloatArray.hpp"
#include "./Gesture.def.hpp"
#include "./GestureStroke.def.hpp"
#include "./OrientedBoundingBox.def.hpp"
#include "../../java/util/ArrayList.def.hpp"
#include "./GestureUtils.def.hpp"

namespace android::gesture
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::gesture::OrientedBoundingBox GestureUtils::computeOrientedBoundingBox(JFloatArray arg0)
	{
		return callStaticObjectMethod(
			"android.gesture.GestureUtils",
			"computeOrientedBoundingBox",
			"([F)Landroid/gesture/OrientedBoundingBox;",
			arg0.object<jfloatArray>()
		);
	}
	inline android::gesture::OrientedBoundingBox GestureUtils::computeOrientedBoundingBox(java::util::ArrayList arg0)
	{
		return callStaticObjectMethod(
			"android.gesture.GestureUtils",
			"computeOrientedBoundingBox",
			"(Ljava/util/ArrayList;)Landroid/gesture/OrientedBoundingBox;",
			arg0.object()
		);
	}
	inline JFloatArray GestureUtils::spatialSampling(android::gesture::Gesture arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.gesture.GestureUtils",
			"spatialSampling",
			"(Landroid/gesture/Gesture;I)[F",
			arg0.object(),
			arg1
		);
	}
	inline JFloatArray GestureUtils::spatialSampling(android::gesture::Gesture arg0, jint arg1, jboolean arg2)
	{
		return callStaticObjectMethod(
			"android.gesture.GestureUtils",
			"spatialSampling",
			"(Landroid/gesture/Gesture;IZ)[F",
			arg0.object(),
			arg1,
			arg2
		);
	}
	inline JFloatArray GestureUtils::temporalSampling(android::gesture::GestureStroke arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.gesture.GestureUtils",
			"temporalSampling",
			"(Landroid/gesture/GestureStroke;I)[F",
			arg0.object(),
			arg1
		);
	}
} // namespace android::gesture

// Base class headers

