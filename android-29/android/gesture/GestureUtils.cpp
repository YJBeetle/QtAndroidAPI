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
	android::gesture::OrientedBoundingBox GestureUtils::computeOrientedBoundingBox(jfloatArray arg0)
	{
		return callStaticObjectMethod(
			"android.gesture.GestureUtils",
			"computeOrientedBoundingBox",
			"([F)Landroid/gesture/OrientedBoundingBox;",
			arg0
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
	jfloatArray GestureUtils::spatialSampling(android::gesture::Gesture arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.gesture.GestureUtils",
			"spatialSampling",
			"(Landroid/gesture/Gesture;I)[F",
			arg0.object(),
			arg1
		).object<jfloatArray>();
	}
	jfloatArray GestureUtils::spatialSampling(android::gesture::Gesture arg0, jint arg1, jboolean arg2)
	{
		return callStaticObjectMethod(
			"android.gesture.GestureUtils",
			"spatialSampling",
			"(Landroid/gesture/Gesture;IZ)[F",
			arg0.object(),
			arg1,
			arg2
		).object<jfloatArray>();
	}
	jfloatArray GestureUtils::temporalSampling(android::gesture::GestureStroke arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.gesture.GestureUtils",
			"temporalSampling",
			"(Landroid/gesture/GestureStroke;I)[F",
			arg0.object(),
			arg1
		).object<jfloatArray>();
	}
} // namespace android::gesture

