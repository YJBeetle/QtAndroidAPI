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
		return __thiz.getObjectField(
			"boundingBox",
			"Landroid/graphics/RectF;"
		);
	}
	jfloat GestureStroke::length()
	{
		return __thiz.getField<jfloat>(
			"length"
		);
	}
	jfloatArray GestureStroke::points()
	{
		return __thiz.getObjectField(
			"points",
			"[F"
		).object<jfloatArray>();
	}
	
	GestureStroke::GestureStroke(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	GestureStroke::GestureStroke(java::util::ArrayList arg0)
	{
		__thiz = QAndroidJniObject(
			"android.gesture.GestureStroke",
			"(Ljava/util/ArrayList;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	void GestureStroke::clearPath()
	{
		__thiz.callMethod<void>(
			"clearPath",
			"()V"
		);
	}
	jobject GestureStroke::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	QAndroidJniObject GestureStroke::computeOrientedBoundingBox()
	{
		return __thiz.callObjectMethod(
			"computeOrientedBoundingBox",
			"()Landroid/gesture/OrientedBoundingBox;"
		);
	}
	QAndroidJniObject GestureStroke::getPath()
	{
		return __thiz.callObjectMethod(
			"getPath",
			"()Landroid/graphics/Path;"
		);
	}
	QAndroidJniObject GestureStroke::toPath(jfloat arg0, jfloat arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"toPath",
			"(FFI)Landroid/graphics/Path;",
			arg0,
			arg1,
			arg2
		);
	}
} // namespace android::gesture

