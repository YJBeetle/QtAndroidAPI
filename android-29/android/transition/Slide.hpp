#pragma once

#ifndef ANDROID_TRANSITION_SLIDE
#define ANDROID_TRANSITION_SLIDE

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
	class Slide : public __jni_impl::android::transition::Visibility
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(jint arg0);
		void __constructor();
		
		// Methods
		void setSlideEdge(jint arg0);
		jint getSlideEdge();
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
	void Slide::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.transition.Slide",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void Slide::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"android.transition.Slide",
			"(I)V",
			arg0);
	}
	void Slide::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.transition.Slide",
			"()V");
	}
	
	// Methods
	void Slide::setSlideEdge(jint arg0)
	{
		__thiz.callMethod<void>(
			"setSlideEdge",
			"(I)V",
			arg0);
	}
	jint Slide::getSlideEdge()
	{
		return __thiz.callMethod<jint>(
			"getSlideEdge",
			"()I");
	}
	void Slide::captureStartValues(__jni_impl::android::transition::TransitionValues arg0)
	{
		__thiz.callMethod<void>(
			"captureStartValues",
			"(Landroid/transition/TransitionValues;)V",
			arg0.__jniObject().object());
	}
	void Slide::captureEndValues(__jni_impl::android::transition::TransitionValues arg0)
	{
		__thiz.callMethod<void>(
			"captureEndValues",
			"(Landroid/transition/TransitionValues;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Slide::onAppear(__jni_impl::android::view::ViewGroup arg0, __jni_impl::android::view::View arg1, __jni_impl::android::transition::TransitionValues arg2, __jni_impl::android::transition::TransitionValues arg3)
	{
		return __thiz.callObjectMethod(
			"onAppear",
			"(Landroid/view/ViewGroup;Landroid/view/View;Landroid/transition/TransitionValues;Landroid/transition/TransitionValues;)Landroid/animation/Animator;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object());
	}
	QAndroidJniObject Slide::onDisappear(__jni_impl::android::view::ViewGroup arg0, __jni_impl::android::view::View arg1, __jni_impl::android::transition::TransitionValues arg2, __jni_impl::android::transition::TransitionValues arg3)
	{
		return __thiz.callObjectMethod(
			"onDisappear",
			"(Landroid/view/ViewGroup;Landroid/view/View;Landroid/transition/TransitionValues;Landroid/transition/TransitionValues;)Landroid/animation/Animator;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object());
	}
} // namespace __jni_impl::android::transition

namespace android::transition
{
	class Slide : public __jni_impl::android::transition::Slide
	{
	public:
		Slide(QAndroidJniObject obj) { __thiz = obj; }
		Slide(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		Slide(jint arg0)
		{
			__constructor(
				arg0);
		}
		Slide()
		{
			__constructor();
		}
	};
} // namespace android::transition

#endif // ANDROID_TRANSITION_SLIDE

