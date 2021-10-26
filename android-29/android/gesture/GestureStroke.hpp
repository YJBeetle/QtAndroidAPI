#pragma once

#ifndef ANDROID_GESTURE_GESTURESTROKE
#define ANDROID_GESTURE_GESTURESTROKE

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::graphics
{
	class RectF;
}
namespace __jni_impl::java::util
{
	class ArrayList;
}
namespace __jni_impl::android::graphics
{
	class Path;
}
namespace __jni_impl::android::gesture
{
	class OrientedBoundingBox;
}

namespace __jni_impl::android::gesture
{
	class GestureStroke : public __JniBaseClass
	{
	public:
		// Fields
		QAndroidJniObject boundingBox();
		jfloat length();
		jfloatArray points();
		
		// Constructors
		void __constructor(__jni_impl::java::util::ArrayList arg0);
		
		// Methods
		jobject clone();
		QAndroidJniObject getPath();
		QAndroidJniObject toPath(jfloat arg0, jfloat arg1, jint arg2);
		void clearPath();
		QAndroidJniObject computeOrientedBoundingBox();
	};
} // namespace __jni_impl::android::gesture

#include "../graphics/RectF.hpp"
#include "../../java/util/ArrayList.hpp"
#include "../graphics/Path.hpp"
#include "OrientedBoundingBox.hpp"

namespace __jni_impl::android::gesture
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
	
	// Constructors
	void GestureStroke::__constructor(__jni_impl::java::util::ArrayList arg0)
	{
		__thiz = QAndroidJniObject(
			"android.gesture.GestureStroke",
			"(Ljava/util/ArrayList;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jobject GestureStroke::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
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
	void GestureStroke::clearPath()
	{
		__thiz.callMethod<void>(
			"clearPath",
			"()V"
		);
	}
	QAndroidJniObject GestureStroke::computeOrientedBoundingBox()
	{
		return __thiz.callObjectMethod(
			"computeOrientedBoundingBox",
			"()Landroid/gesture/OrientedBoundingBox;"
		);
	}
} // namespace __jni_impl::android::gesture

namespace android::gesture
{
	class GestureStroke : public __jni_impl::android::gesture::GestureStroke
	{
	public:
		GestureStroke(QAndroidJniObject obj) { __thiz = obj; }
		GestureStroke(__jni_impl::java::util::ArrayList arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::gesture

#endif // ANDROID_GESTURE_GESTURESTROKE

