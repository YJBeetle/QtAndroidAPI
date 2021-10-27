#pragma once

#ifndef ANDROID_ANIMATION_POINTFEVALUATOR
#define ANDROID_ANIMATION_POINTFEVALUATOR

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::graphics
{
	class PointF;
}

namespace __jni_impl::android::animation
{
	class PointFEvaluator : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::android::graphics::PointF arg0);
		
		// Methods
		QAndroidJniObject evaluate(jfloat arg0, __jni_impl::android::graphics::PointF arg1, __jni_impl::android::graphics::PointF arg2);
		jobject evaluate(jfloat arg0, jobject arg1, jobject arg2);
	};
} // namespace __jni_impl::android::animation

#include "../graphics/PointF.hpp"

namespace __jni_impl::android::animation
{
	// Fields
	
	// Constructors
	void PointFEvaluator::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.animation.PointFEvaluator",
			"()V"
		);
	}
	void PointFEvaluator::__constructor(__jni_impl::android::graphics::PointF arg0)
	{
		__thiz = QAndroidJniObject(
			"android.animation.PointFEvaluator",
			"(Landroid/graphics/PointF;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject PointFEvaluator::evaluate(jfloat arg0, __jni_impl::android::graphics::PointF arg1, __jni_impl::android::graphics::PointF arg2)
	{
		return __thiz.callObjectMethod(
			"evaluate",
			"(FLandroid/graphics/PointF;Landroid/graphics/PointF;)Landroid/graphics/PointF;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	jobject PointFEvaluator::evaluate(jfloat arg0, jobject arg1, jobject arg2)
	{
		return __thiz.callObjectMethod(
			"evaluate",
			"(FLjava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1,
			arg2
		).object<jobject>();
	}
} // namespace __jni_impl::android::animation

namespace android::animation
{
	class PointFEvaluator : public __jni_impl::android::animation::PointFEvaluator
	{
	public:
		PointFEvaluator(QAndroidJniObject obj) { __thiz = obj; }
		PointFEvaluator()
		{
			__constructor();
		}
		PointFEvaluator(__jni_impl::android::graphics::PointF arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::animation

#endif // ANDROID_ANIMATION_POINTFEVALUATOR

