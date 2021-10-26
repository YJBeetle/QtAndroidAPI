#pragma once

#ifndef ANDROID_ANIMATION_ARGBEVALUATOR
#define ANDROID_ANIMATION_ARGBEVALUATOR

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::animation
{
	class ArgbEvaluator : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jobject evaluate(jfloat arg0, jobject arg1, jobject arg2);
	};
} // namespace __jni_impl::android::animation


namespace __jni_impl::android::animation
{
	// Fields
	
	// Constructors
	void ArgbEvaluator::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.animation.ArgbEvaluator",
			"()V"
		);
	}
	
	// Methods
	jobject ArgbEvaluator::evaluate(jfloat arg0, jobject arg1, jobject arg2)
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
	class ArgbEvaluator : public __jni_impl::android::animation::ArgbEvaluator
	{
	public:
		ArgbEvaluator(QAndroidJniObject obj) { __thiz = obj; }
		ArgbEvaluator()
		{
			__constructor();
		}
	};
} // namespace android::animation

#endif // ANDROID_ANIMATION_ARGBEVALUATOR

