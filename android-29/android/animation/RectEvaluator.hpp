#pragma once

#ifndef ANDROID_ANIMATION_RECTEVALUATOR
#define ANDROID_ANIMATION_RECTEVALUATOR

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::graphics
{
	class Rect;
}

namespace __jni_impl::android::animation
{
	class RectEvaluator : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::android::graphics::Rect arg0);
		
		// Methods
		QAndroidJniObject evaluate(jfloat arg0, __jni_impl::android::graphics::Rect arg1, __jni_impl::android::graphics::Rect arg2);
		jobject evaluate(jfloat arg0, jobject arg1, jobject arg2);
	};
} // namespace __jni_impl::android::animation

#include "../graphics/Rect.hpp"

namespace __jni_impl::android::animation
{
	// Fields
	
	// Constructors
	void RectEvaluator::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.animation.RectEvaluator",
			"()V"
		);
	}
	void RectEvaluator::__constructor(__jni_impl::android::graphics::Rect arg0)
	{
		__thiz = QAndroidJniObject(
			"android.animation.RectEvaluator",
			"(Landroid/graphics/Rect;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject RectEvaluator::evaluate(jfloat arg0, __jni_impl::android::graphics::Rect arg1, __jni_impl::android::graphics::Rect arg2)
	{
		return __thiz.callObjectMethod(
			"evaluate",
			"(FLandroid/graphics/Rect;Landroid/graphics/Rect;)Landroid/graphics/Rect;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	jobject RectEvaluator::evaluate(jfloat arg0, jobject arg1, jobject arg2)
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
	class RectEvaluator : public __jni_impl::android::animation::RectEvaluator
	{
	public:
		RectEvaluator(QAndroidJniObject obj) { __thiz = obj; }
		RectEvaluator()
		{
			__constructor();
		}
		RectEvaluator(__jni_impl::android::graphics::Rect arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::animation

#endif // ANDROID_ANIMATION_RECTEVALUATOR

