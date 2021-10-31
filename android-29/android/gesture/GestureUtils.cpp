#include "./Gesture.hpp"
#include "./GestureStroke.hpp"
#include "./OrientedBoundingBox.hpp"
#include "../../java/util/ArrayList.hpp"
#include "./GestureUtils.hpp"

namespace android::gesture
{
	// Fields
	
	// QAndroidJniObject forward
	GestureUtils::GestureUtils(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject GestureUtils::computeOrientedBoundingBox(jfloatArray arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.gesture.GestureUtils",
			"computeOrientedBoundingBox",
			"([F)Landroid/gesture/OrientedBoundingBox;",
			arg0
		);
	}
	QAndroidJniObject GestureUtils::computeOrientedBoundingBox(java::util::ArrayList arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.gesture.GestureUtils",
			"computeOrientedBoundingBox",
			"(Ljava/util/ArrayList;)Landroid/gesture/OrientedBoundingBox;",
			arg0.object()
		);
	}
	jfloatArray GestureUtils::spatialSampling(android::gesture::Gesture arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.gesture.GestureUtils",
			"spatialSampling",
			"(Landroid/gesture/Gesture;I)[F",
			arg0.object(),
			arg1
		).object<jfloatArray>();
	}
	jfloatArray GestureUtils::spatialSampling(android::gesture::Gesture arg0, jint arg1, jboolean arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
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
		return QAndroidJniObject::callStaticObjectMethod(
			"android.gesture.GestureUtils",
			"temporalSampling",
			"(Landroid/gesture/GestureStroke;I)[F",
			arg0.object(),
			arg1
		).object<jfloatArray>();
	}
} // namespace android::gesture

