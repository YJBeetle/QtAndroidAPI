#pragma once

#ifndef ANDROID_TRANSITION_EXPLODE
#define ANDROID_TRANSITION_EXPLODE

#include "../../__JniBaseClass.hpp"
#include "Transition.hpp"
#include "Visibility.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::transition
{
	class TransitionValues;
}
namespace __jni_impl::android::animation
{
	class Animator;
}
namespace __jni_impl::android::view
{
	class ViewGroup;
}
namespace __jni_impl::android::view
{
	class View;
}

namespace __jni_impl::android::transition
{
	class Explode : public __jni_impl::android::transition::Visibility
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		
		// Methods
		void captureStartValues(__jni_impl::android::transition::TransitionValues arg0);
		void captureEndValues(__jni_impl::android::transition::TransitionValues arg0);
		QAndroidJniObject onAppear(__jni_impl::android::view::ViewGroup arg0, __jni_impl::android::view::View arg1, __jni_impl::android::transition::TransitionValues arg2, __jni_impl::android::transition::TransitionValues arg3);
		QAndroidJniObject onDisappear(__jni_impl::android::view::ViewGroup arg0, __jni_impl::android::view::View arg1, __jni_impl::android::transition::TransitionValues arg2, __jni_impl::android::transition::TransitionValues arg3);
	};
} // namespace __jni_impl::android::transition

#include "../content/Context.hpp"
#include "TransitionValues.hpp"
#include "../animation/Animator.hpp"
#include "../view/ViewGroup.hpp"
#include "../view/View.hpp"

namespace __jni_impl::android::transition
{
	// Fields
	
	// Constructors
	void Explode::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.transition.Explode",
			"()V"
		);
	}
	void Explode::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.transition.Explode",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	void Explode::captureStartValues(__jni_impl::android::transition::TransitionValues arg0)
	{
		__thiz.callMethod<void>(
			"captureStartValues",
			"(Landroid/transition/TransitionValues;)V",
			arg0.__jniObject().object()
		);
	}
	void Explode::captureEndValues(__jni_impl::android::transition::TransitionValues arg0)
	{
		__thiz.callMethod<void>(
			"captureEndValues",
			"(Landroid/transition/TransitionValues;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Explode::onAppear(__jni_impl::android::view::ViewGroup arg0, __jni_impl::android::view::View arg1, __jni_impl::android::transition::TransitionValues arg2, __jni_impl::android::transition::TransitionValues arg3)
	{
		return __thiz.callObjectMethod(
			"onAppear",
			"(Landroid/view/ViewGroup;Landroid/view/View;Landroid/transition/TransitionValues;Landroid/transition/TransitionValues;)Landroid/animation/Animator;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	QAndroidJniObject Explode::onDisappear(__jni_impl::android::view::ViewGroup arg0, __jni_impl::android::view::View arg1, __jni_impl::android::transition::TransitionValues arg2, __jni_impl::android::transition::TransitionValues arg3)
	{
		return __thiz.callObjectMethod(
			"onDisappear",
			"(Landroid/view/ViewGroup;Landroid/view/View;Landroid/transition/TransitionValues;Landroid/transition/TransitionValues;)Landroid/animation/Animator;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::transition

namespace android::transition
{
	class Explode : public __jni_impl::android::transition::Explode
	{
	public:
		Explode(QAndroidJniObject obj) { __thiz = obj; }
		Explode()
		{
			__constructor();
		}
		Explode(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::transition

#endif // ANDROID_TRANSITION_EXPLODE

