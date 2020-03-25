#pragma once

#ifndef ANDROID_VIEW_ANIMATION_CYCLEINTERPOLATOR
#define ANDROID_VIEW_ANIMATION_CYCLEINTERPOLATOR

#include "../../../__JniBaseClass.hpp"
#include "BaseInterpolator.hpp"

namespace __jni_impl::android::content
{
	class Context;
}

namespace __jni_impl::android::view::animation
{
	class CycleInterpolator : public __jni_impl::android::view::animation::BaseInterpolator
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jfloat arg0);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		
		// Methods
		jfloat getInterpolation(jfloat arg0);
	};
} // namespace __jni_impl::android::view::animation

#include "../../content/Context.hpp"

namespace __jni_impl::android::view::animation
{
	// Fields
	
	// Constructors
	void CycleInterpolator::__constructor(jfloat arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.animation.CycleInterpolator",
			"(F)V",
			arg0);
	}
	void CycleInterpolator::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.view.animation.CycleInterpolator",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	
	// Methods
	jfloat CycleInterpolator::getInterpolation(jfloat arg0)
	{
		return __thiz.callMethod<jfloat>(
			"getInterpolation",
			"(F)F",
			arg0);
	}
} // namespace __jni_impl::android::view::animation

namespace android::view::animation
{
	class CycleInterpolator : public __jni_impl::android::view::animation::CycleInterpolator
	{
	public:
		CycleInterpolator(QAndroidJniObject obj) { __thiz = obj; }
		CycleInterpolator(jfloat arg0)
		{
			__constructor(
				arg0);
		}
		CycleInterpolator(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::view::animation

#endif // ANDROID_VIEW_ANIMATION_CYCLEINTERPOLATOR

