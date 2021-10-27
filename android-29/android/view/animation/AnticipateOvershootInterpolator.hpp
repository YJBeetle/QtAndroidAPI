#pragma once

#include "../../../__JniBaseClass.hpp"
#include "BaseInterpolator.hpp"

namespace __jni_impl::android::content
{
	class Context;
}

namespace __jni_impl::android::view::animation
{
	class AnticipateOvershootInterpolator : public __jni_impl::android::view::animation::BaseInterpolator
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jfloat arg0);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(jfloat arg0, jfloat arg1);
		
		// Methods
		jfloat getInterpolation(jfloat arg0);
	};
} // namespace __jni_impl::android::view::animation

#include "../../content/Context.hpp"

namespace __jni_impl::android::view::animation
{
	// Fields
	
	// Constructors
	void AnticipateOvershootInterpolator::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.animation.AnticipateOvershootInterpolator",
			"()V"
		);
	}
	void AnticipateOvershootInterpolator::__constructor(jfloat arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.animation.AnticipateOvershootInterpolator",
			"(F)V",
			arg0
		);
	}
	void AnticipateOvershootInterpolator::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.view.animation.AnticipateOvershootInterpolator",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void AnticipateOvershootInterpolator::__constructor(jfloat arg0, jfloat arg1)
	{
		__thiz = QAndroidJniObject(
			"android.view.animation.AnticipateOvershootInterpolator",
			"(FF)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	jfloat AnticipateOvershootInterpolator::getInterpolation(jfloat arg0)
	{
		return __thiz.callMethod<jfloat>(
			"getInterpolation",
			"(F)F",
			arg0
		);
	}
} // namespace __jni_impl::android::view::animation

namespace android::view::animation
{
	class AnticipateOvershootInterpolator : public __jni_impl::android::view::animation::AnticipateOvershootInterpolator
	{
	public:
		AnticipateOvershootInterpolator(QAndroidJniObject obj) { __thiz = obj; }
		AnticipateOvershootInterpolator()
		{
			__constructor();
		}
		AnticipateOvershootInterpolator(jfloat arg0)
		{
			__constructor(
				arg0);
		}
		AnticipateOvershootInterpolator(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		AnticipateOvershootInterpolator(jfloat arg0, jfloat arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::view::animation

