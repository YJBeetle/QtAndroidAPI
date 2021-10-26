#pragma once

#ifndef ANDROID_ANIMATION_INTEVALUATOR
#define ANDROID_ANIMATION_INTEVALUATOR

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::lang
{
	class Integer;
}

namespace __jni_impl::android::animation
{
	class IntEvaluator : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject evaluate(jfloat arg0, __jni_impl::java::lang::Integer arg1, __jni_impl::java::lang::Integer arg2);
		jobject evaluate(jfloat arg0, jobject arg1, jobject arg2);
	};
} // namespace __jni_impl::android::animation

#include "../../java/lang/Integer.hpp"

namespace __jni_impl::android::animation
{
	// Fields
	
	// Constructors
	void IntEvaluator::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.animation.IntEvaluator",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject IntEvaluator::evaluate(jfloat arg0, __jni_impl::java::lang::Integer arg1, __jni_impl::java::lang::Integer arg2)
	{
		return __thiz.callObjectMethod(
			"evaluate",
			"(FLjava/lang/Integer;Ljava/lang/Integer;)Ljava/lang/Integer;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	jobject IntEvaluator::evaluate(jfloat arg0, jobject arg1, jobject arg2)
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
	class IntEvaluator : public __jni_impl::android::animation::IntEvaluator
	{
	public:
		IntEvaluator(QAndroidJniObject obj) { __thiz = obj; }
		IntEvaluator()
		{
			__constructor();
		}
	};
} // namespace android::animation

#endif // ANDROID_ANIMATION_INTEVALUATOR

