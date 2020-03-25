#pragma once

#ifndef ANDROID_GESTURE_GESTUREUTILS
#define ANDROID_GESTURE_GESTUREUTILS

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::gesture
{
	class OrientedBoundingBox;
}
namespace __jni_impl::java::util
{
	class ArrayList;
}
namespace __jni_impl::android::gesture
{
	class Gesture;
}
namespace __jni_impl::android::gesture
{
	class GestureStroke;
}

namespace __jni_impl::android::gesture
{
	class GestureUtils : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject computeOrientedBoundingBox(__jni_impl::java::util::ArrayList arg0);
		static QAndroidJniObject computeOrientedBoundingBox(jfloatArray arg0);
		static QAndroidJniObject spatialSampling(__jni_impl::android::gesture::Gesture arg0, jint arg1, jboolean arg2);
		static QAndroidJniObject spatialSampling(__jni_impl::android::gesture::Gesture arg0, jint arg1);
		static QAndroidJniObject temporalSampling(__jni_impl::android::gesture::GestureStroke arg0, jint arg1);
	};
} // namespace __jni_impl::android::gesture

#include "OrientedBoundingBox.hpp"
#include "../../java/util/ArrayList.hpp"
#include "Gesture.hpp"
#include "GestureStroke.hpp"

namespace __jni_impl::android::gesture
{
	// Fields
	
	// Constructors
	void GestureUtils::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.gesture.GestureUtils",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject GestureUtils::computeOrientedBoundingBox(__jni_impl::java::util::ArrayList arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.gesture.GestureUtils",
			"computeOrientedBoundingBox",
			"(Ljava/util/ArrayList;)Landroid/gesture/OrientedBoundingBox;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject GestureUtils::computeOrientedBoundingBox(jfloatArray arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.gesture.GestureUtils",
			"computeOrientedBoundingBox",
			"([F)Landroid/gesture/OrientedBoundingBox;",
			arg0);
	}
	QAndroidJniObject GestureUtils::spatialSampling(__jni_impl::android::gesture::Gesture arg0, jint arg1, jboolean arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.gesture.GestureUtils",
			"spatialSampling",
			"(Landroid/gesture/Gesture;IZ)[F",
			arg0.__jniObject().object(),
			arg1,
			arg2);
	}
	QAndroidJniObject GestureUtils::spatialSampling(__jni_impl::android::gesture::Gesture arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.gesture.GestureUtils",
			"spatialSampling",
			"(Landroid/gesture/Gesture;I)[F",
			arg0.__jniObject().object(),
			arg1);
	}
	QAndroidJniObject GestureUtils::temporalSampling(__jni_impl::android::gesture::GestureStroke arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.gesture.GestureUtils",
			"temporalSampling",
			"(Landroid/gesture/GestureStroke;I)[F",
			arg0.__jniObject().object(),
			arg1);
	}
} // namespace __jni_impl::android::gesture

namespace android::gesture
{
	class GestureUtils : public __jni_impl::android::gesture::GestureUtils
	{
	public:
		GestureUtils(QAndroidJniObject obj) { __thiz = obj; }
		GestureUtils()
		{
			__constructor();
		}
	};
} // namespace android::gesture

#endif // ANDROID_GESTURE_GESTUREUTILS

