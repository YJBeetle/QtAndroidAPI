#include "../../JFloatArray.hpp"
#include "./Gesture.hpp"
#include "./GestureStroke.hpp"
#include "./OrientedBoundingBox.hpp"
#include "../../java/util/ArrayList.hpp"
#include "./GestureUtils.hpp"

namespace android::gesture
{
	// Fields
	
	// QJniObject forward
	GestureUtils::GestureUtils(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::gesture::OrientedBoundingBox GestureUtils::computeOrientedBoundingBox(JFloatArray arg0)
	{
		return callStaticObjectMethod(
			"android.gesture.GestureUtils",
			"computeOrientedBoundingBox",
			"([F)Landroid/gesture/OrientedBoundingBox;",
			arg0.object<jfloatArray>()
		);
	}
	android::gesture::OrientedBoundingBox GestureUtils::computeOrientedBoundingBox(java::util::ArrayList arg0)
	{
		return callStaticObjectMethod(
			"android.gesture.GestureUtils",
			"computeOrientedBoundingBox",
			"(Ljava/util/ArrayList;)Landroid/gesture/OrientedBoundingBox;",
			arg0.object()
		);
	}
	JFloatArray GestureUtils::spatialSampling(android::gesture::Gesture arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.gesture.GestureUtils",
			"spatialSampling",
			"(Landroid/gesture/Gesture;I)[F",
			arg0.object(),
			arg1
		);
	}
	JFloatArray GestureUtils::spatialSampling(android::gesture::Gesture arg0, jint arg1, jboolean arg2)
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
	JFloatArray GestureUtils::temporalSampling(android::gesture::GestureStroke arg0, jint arg1)
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

