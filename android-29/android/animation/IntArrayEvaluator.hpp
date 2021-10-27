#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::animation
{
	class IntArrayEvaluator : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jintArray arg0);
		
		// Methods
		jintArray evaluate(jfloat arg0, jintArray arg1, jintArray arg2);
		jobject evaluate(jfloat arg0, jobject arg1, jobject arg2);
	};
} // namespace __jni_impl::android::animation


namespace __jni_impl::android::animation
{
	// Fields
	
	// Constructors
	void IntArrayEvaluator::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.animation.IntArrayEvaluator",
			"()V"
		);
	}
	void IntArrayEvaluator::__constructor(jintArray arg0)
	{
		__thiz = QAndroidJniObject(
			"android.animation.IntArrayEvaluator",
			"([I)V",
			arg0
		);
	}
	
	// Methods
	jintArray IntArrayEvaluator::evaluate(jfloat arg0, jintArray arg1, jintArray arg2)
	{
		return __thiz.callObjectMethod(
			"evaluate",
			"(F[I[I)[I",
			arg0,
			arg1,
			arg2
		).object<jintArray>();
	}
	jobject IntArrayEvaluator::evaluate(jfloat arg0, jobject arg1, jobject arg2)
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
	class IntArrayEvaluator : public __jni_impl::android::animation::IntArrayEvaluator
	{
	public:
		IntArrayEvaluator(QAndroidJniObject obj) { __thiz = obj; }
		IntArrayEvaluator()
		{
			__constructor();
		}
		IntArrayEvaluator(jintArray arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::animation

