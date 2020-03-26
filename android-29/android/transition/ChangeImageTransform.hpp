#pragma once

#ifndef ANDROID_TRANSITION_CHANGEIMAGETRANSFORM
#define ANDROID_TRANSITION_CHANGEIMAGETRANSFORM

#include "../../__JniBaseClass.hpp"
#include "Transition.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::animation
{
	class Animator;
}
namespace __jni_impl::android::view
{
	class ViewGroup;
}
namespace __jni_impl::android::transition
{
	class TransitionValues;
}

namespace __jni_impl::android::transition
{
	class ChangeImageTransform : public __jni_impl::android::transition::Transition
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		
		// Methods
		jarray getTransitionProperties();
		QAndroidJniObject createAnimator(__jni_impl::android::view::ViewGroup arg0, __jni_impl::android::transition::TransitionValues arg1, __jni_impl::android::transition::TransitionValues arg2);
		void captureStartValues(__jni_impl::android::transition::TransitionValues arg0);
		void captureEndValues(__jni_impl::android::transition::TransitionValues arg0);
	};
} // namespace __jni_impl::android::transition

#include "../content/Context.hpp"
#include "../animation/Animator.hpp"
#include "../view/ViewGroup.hpp"
#include "TransitionValues.hpp"

namespace __jni_impl::android::transition
{
	// Fields
	
	// Constructors
	void ChangeImageTransform::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.transition.ChangeImageTransform",
			"()V");
	}
	void ChangeImageTransform::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.transition.ChangeImageTransform",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	
	// Methods
	jarray ChangeImageTransform::getTransitionProperties()
	{
		return __thiz.callObjectMethod(
			"getTransitionProperties",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	QAndroidJniObject ChangeImageTransform::createAnimator(__jni_impl::android::view::ViewGroup arg0, __jni_impl::android::transition::TransitionValues arg1, __jni_impl::android::transition::TransitionValues arg2)
	{
		return __thiz.callObjectMethod(
			"createAnimator",
			"(Landroid/view/ViewGroup;Landroid/transition/TransitionValues;Landroid/transition/TransitionValues;)Landroid/animation/Animator;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void ChangeImageTransform::captureStartValues(__jni_impl::android::transition::TransitionValues arg0)
	{
		__thiz.callMethod<void>(
			"captureStartValues",
			"(Landroid/transition/TransitionValues;)V",
			arg0.__jniObject().object()
		);
	}
	void ChangeImageTransform::captureEndValues(__jni_impl::android::transition::TransitionValues arg0)
	{
		__thiz.callMethod<void>(
			"captureEndValues",
			"(Landroid/transition/TransitionValues;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::transition

namespace android::transition
{
	class ChangeImageTransform : public __jni_impl::android::transition::ChangeImageTransform
	{
	public:
		ChangeImageTransform(QAndroidJniObject obj) { __thiz = obj; }
		ChangeImageTransform()
		{
			__constructor();
		}
		ChangeImageTransform(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::transition

#endif // ANDROID_TRANSITION_CHANGEIMAGETRANSFORM

