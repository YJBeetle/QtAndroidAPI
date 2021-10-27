#pragma once

#include "../../__JniBaseClass.hpp"
#include "Transition.hpp"

namespace __jni_impl::android::animation
{
	class Animator;
}
namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::transition
{
	class TransitionValues;
}
namespace __jni_impl::android::view
{
	class ViewGroup;
}

namespace __jni_impl::android::transition
{
	class ChangeBounds : public __jni_impl::android::transition::Transition
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		
		// Methods
		void captureEndValues(__jni_impl::android::transition::TransitionValues arg0);
		void captureStartValues(__jni_impl::android::transition::TransitionValues arg0);
		QAndroidJniObject createAnimator(__jni_impl::android::view::ViewGroup arg0, __jni_impl::android::transition::TransitionValues arg1, __jni_impl::android::transition::TransitionValues arg2);
		jboolean getResizeClip();
		jarray getTransitionProperties();
		void setReparent(jboolean arg0);
		void setResizeClip(jboolean arg0);
	};
} // namespace __jni_impl::android::transition

#include "../animation/Animator.hpp"
#include "../content/Context.hpp"
#include "TransitionValues.hpp"
#include "../view/ViewGroup.hpp"

namespace __jni_impl::android::transition
{
	// Fields
	
	// Constructors
	void ChangeBounds::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.transition.ChangeBounds",
			"()V"
		);
	}
	void ChangeBounds::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.transition.ChangeBounds",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	void ChangeBounds::captureEndValues(__jni_impl::android::transition::TransitionValues arg0)
	{
		__thiz.callMethod<void>(
			"captureEndValues",
			"(Landroid/transition/TransitionValues;)V",
			arg0.__jniObject().object()
		);
	}
	void ChangeBounds::captureStartValues(__jni_impl::android::transition::TransitionValues arg0)
	{
		__thiz.callMethod<void>(
			"captureStartValues",
			"(Landroid/transition/TransitionValues;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ChangeBounds::createAnimator(__jni_impl::android::view::ViewGroup arg0, __jni_impl::android::transition::TransitionValues arg1, __jni_impl::android::transition::TransitionValues arg2)
	{
		return __thiz.callObjectMethod(
			"createAnimator",
			"(Landroid/view/ViewGroup;Landroid/transition/TransitionValues;Landroid/transition/TransitionValues;)Landroid/animation/Animator;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	jboolean ChangeBounds::getResizeClip()
	{
		return __thiz.callMethod<jboolean>(
			"getResizeClip",
			"()Z"
		);
	}
	jarray ChangeBounds::getTransitionProperties()
	{
		return __thiz.callObjectMethod(
			"getTransitionProperties",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	void ChangeBounds::setReparent(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setReparent",
			"(Z)V",
			arg0
		);
	}
	void ChangeBounds::setResizeClip(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setResizeClip",
			"(Z)V",
			arg0
		);
	}
} // namespace __jni_impl::android::transition

namespace android::transition
{
	class ChangeBounds : public __jni_impl::android::transition::ChangeBounds
	{
	public:
		ChangeBounds(QAndroidJniObject obj) { __thiz = obj; }
		ChangeBounds()
		{
			__constructor();
		}
		ChangeBounds(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::transition

