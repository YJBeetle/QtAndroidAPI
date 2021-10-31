#include "./OrientedBoundingBox.hpp"
#include "../graphics/Path.hpp"
#include "../graphics/RectF.hpp"
#include "../../java/util/ArrayList.hpp"
#include "./GestureStroke.hpp"

namespace android::gesture
{
	// Fields
	QAndroidJniObject GestureStroke::boundingBox()
	{
		return getObjectField(
			"boundingBox",
			"Landroid/graphics/RectF;"
		);
	}
	jfloat GestureStroke::length()
	{
		return getField<jfloat>(
			"length"
		);
	}
	jfloatArray GestureStroke::points()
	{
		return getObjectField(
			"points",
			"[F"
		).object<jfloatArray>();
	}
	
	// QAndroidJniObject forward
	GestureStroke::GestureStroke(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	GestureStroke::GestureStroke(java::util::ArrayList arg0)
		: __JniBaseClass(
			"android.gesture.GestureStroke",
			"(Ljava/util/ArrayList;)V",
			arg0.object()
		) {}
	
	// Methods
	void GestureStroke::clearPath()
	{
		callMethod<void>(
			"clearPath",
			"()V"
		);
	}
	jobject GestureStroke::clone()
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	QAndroidJniObject GestureStroke::computeOrientedBoundingBox()
	{
		return callObjectMethod(
			"computeOrientedBoundingBox",
			"()Landroid/gesture/OrientedBoundingBox;"
		);
	}
	QAndroidJniObject GestureStroke::getPath()
	{
		return callObjectMethod(
			"getPath",
			"()Landroid/graphics/Path;"
		);
	}
	QAndroidJniObject GestureStroke::toPath(jfloat arg0, jfloat arg1, jint arg2)
	{
		return callObjectMethod(
			"toPath",
			"(FFI)Landroid/graphics/Path;",
			arg0,
			arg1,
			arg2
		);
	}
} // namespace android::gesture
