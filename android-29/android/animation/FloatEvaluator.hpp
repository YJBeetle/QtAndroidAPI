#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::lang
{
	class Float;
}
namespace __jni_impl::java::lang
{
	class Number;
}

namespace __jni_impl::android::animation
{
	class FloatEvaluator : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject evaluate(jfloat arg0, __jni_impl::java::lang::Number arg1, __jni_impl::java::lang::Number arg2);
		jobject evaluate(jfloat arg0, jobject arg1, jobject arg2);
	};
} // namespace __jni_impl::android::animation

#include "../../java/lang/Float.hpp"
#include "../../java/lang/Number.hpp"

namespace __jni_impl::android::animation
{
	// Fields
	
	// Constructors
	void FloatEvaluator::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.animation.FloatEvaluator",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject FloatEvaluator::evaluate(jfloat arg0, __jni_impl::java::lang::Number arg1, __jni_impl::java::lang::Number arg2)
	{
		return __thiz.callObjectMethod(
			"evaluate",
			"(FLjava/lang/Number;Ljava/lang/Number;)Ljava/lang/Float;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	jobject FloatEvaluator::evaluate(jfloat arg0, jobject arg1, jobject arg2)
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
	class FloatEvaluator : public __jni_impl::android::animation::FloatEvaluator
	{
	public:
		FloatEvaluator(QAndroidJniObject obj) { __thiz = obj; }
		FloatEvaluator()
		{
			__constructor();
		}
	};
} // namespace android::animation

