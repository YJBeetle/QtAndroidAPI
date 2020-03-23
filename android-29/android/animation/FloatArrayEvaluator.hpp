#pragma once

#ifndef ANDROID_ANIMATION_FLOATARRAYEVALUATOR
#define ANDROID_ANIMATION_FLOATARRAYEVALUATOR

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::animation
{
	class FloatArrayEvaluator : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jfloatArray arg0);
		
		// Methods
		QAndroidJniObject evaluate(jfloat arg0, jobject arg1, jobject arg2);
		QAndroidJniObject evaluate(jfloat arg0, jfloatArray arg1, jfloatArray arg2);
	};
} // namespace __jni_impl::android::animation


namespace __jni_impl::android::animation
{
	// Fields
	
	// Constructors
	void FloatArrayEvaluator::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.animation.FloatArrayEvaluator",
			"()V");
	}
	void FloatArrayEvaluator::__constructor(jfloatArray arg0)
	{
		__thiz = QAndroidJniObject(
			"android.animation.FloatArrayEvaluator",
			"([F)V",
			arg0);
	}
	
	// Methods
	QAndroidJniObject FloatArrayEvaluator::evaluate(jfloat arg0, jobject arg1, jobject arg2)
	{
		return __thiz.callObjectMethod(
			"evaluate",
			"(FLjava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1,
			arg2);
	}
	QAndroidJniObject FloatArrayEvaluator::evaluate(jfloat arg0, jfloatArray arg1, jfloatArray arg2)
	{
		return __thiz.callObjectMethod(
			"evaluate",
			"(F[F[F)[F",
			arg0,
			arg1,
			arg2);
	}
} // namespace __jni_impl::android::animation

namespace android::animation
{
	class FloatArrayEvaluator : public __jni_impl::android::animation::FloatArrayEvaluator
	{
	public:
		FloatArrayEvaluator(QAndroidJniObject obj) { __thiz = obj; }
		FloatArrayEvaluator()
		{
			__constructor();
		}
		FloatArrayEvaluator(jfloatArray arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::animation

#endif // ANDROID_ANIMATION_FLOATARRAYEVALUATOR

