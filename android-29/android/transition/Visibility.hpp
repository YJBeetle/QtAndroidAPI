#pragma once

#ifndef ANDROID_TRANSITION_VISIBILITY
#define ANDROID_TRANSITION_VISIBILITY

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
namespace __jni_impl::android::view
{
	class View;
}

namespace __jni_impl::android::transition
{
	class Visibility : public __jni_impl::android::transition::Transition
	{
	public:
		// Fields
		static jint MODE_IN();
		static jint MODE_OUT();
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		
		// Methods
		jarray getTransitionProperties();
		QAndroidJniObject createAnimator(__jni_impl::android::view::ViewGroup arg0, __jni_impl::android::transition::TransitionValues arg1, __jni_impl::android::transition::TransitionValues arg2);
		void captureStartValues(__jni_impl::android::transition::TransitionValues arg0);
		void captureEndValues(__jni_impl::android::transition::TransitionValues arg0);
		jboolean isTransitionRequired(__jni_impl::android::transition::TransitionValues arg0, __jni_impl::android::transition::TransitionValues arg1);
		jint getMode();
		jboolean isVisible(__jni_impl::android::transition::TransitionValues arg0);
		QAndroidJniObject onAppear(__jni_impl::android::view::ViewGroup arg0, __jni_impl::android::view::View arg1, __jni_impl::android::transition::TransitionValues arg2, __jni_impl::android::transition::TransitionValues arg3);
		QAndroidJniObject onAppear(__jni_impl::android::view::ViewGroup arg0, __jni_impl::android::transition::TransitionValues arg1, jint arg2, __jni_impl::android::transition::TransitionValues arg3, jint arg4);
		QAndroidJniObject onDisappear(__jni_impl::android::view::ViewGroup arg0, __jni_impl::android::view::View arg1, __jni_impl::android::transition::TransitionValues arg2, __jni_impl::android::transition::TransitionValues arg3);
		QAndroidJniObject onDisappear(__jni_impl::android::view::ViewGroup arg0, __jni_impl::android::transition::TransitionValues arg1, jint arg2, __jni_impl::android::transition::TransitionValues arg3, jint arg4);
		void setMode(jint arg0);
	};
} // namespace __jni_impl::android::transition

#include "../content/Context.hpp"
#include "../animation/Animator.hpp"
#include "../view/ViewGroup.hpp"
#include "TransitionValues.hpp"
#include "../view/View.hpp"

namespace __jni_impl::android::transition
{
	// Fields
	jint Visibility::MODE_IN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.transition.Visibility",
			"MODE_IN"
		);
	}
	jint Visibility::MODE_OUT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.transition.Visibility",
			"MODE_OUT"
		);
	}
	
	// Constructors
	void Visibility::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.transition.Visibility",
			"()V"
		);
	}
	void Visibility::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.transition.Visibility",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	jarray Visibility::getTransitionProperties()
	{
		return __thiz.callObjectMethod(
			"getTransitionProperties",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	QAndroidJniObject Visibility::createAnimator(__jni_impl::android::view::ViewGroup arg0, __jni_impl::android::transition::TransitionValues arg1, __jni_impl::android::transition::TransitionValues arg2)
	{
		return __thiz.callObjectMethod(
			"createAnimator",
			"(Landroid/view/ViewGroup;Landroid/transition/TransitionValues;Landroid/transition/TransitionValues;)Landroid/animation/Animator;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void Visibility::captureStartValues(__jni_impl::android::transition::TransitionValues arg0)
	{
		__thiz.callMethod<void>(
			"captureStartValues",
			"(Landroid/transition/TransitionValues;)V",
			arg0.__jniObject().object()
		);
	}
	void Visibility::captureEndValues(__jni_impl::android::transition::TransitionValues arg0)
	{
		__thiz.callMethod<void>(
			"captureEndValues",
			"(Landroid/transition/TransitionValues;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean Visibility::isTransitionRequired(__jni_impl::android::transition::TransitionValues arg0, __jni_impl::android::transition::TransitionValues arg1)
	{
		return __thiz.callMethod<jboolean>(
			"isTransitionRequired",
			"(Landroid/transition/TransitionValues;Landroid/transition/TransitionValues;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jint Visibility::getMode()
	{
		return __thiz.callMethod<jint>(
			"getMode",
			"()I"
		);
	}
	jboolean Visibility::isVisible(__jni_impl::android::transition::TransitionValues arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isVisible",
			"(Landroid/transition/TransitionValues;)Z",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Visibility::onAppear(__jni_impl::android::view::ViewGroup arg0, __jni_impl::android::view::View arg1, __jni_impl::android::transition::TransitionValues arg2, __jni_impl::android::transition::TransitionValues arg3)
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
	QAndroidJniObject Visibility::onAppear(__jni_impl::android::view::ViewGroup arg0, __jni_impl::android::transition::TransitionValues arg1, jint arg2, __jni_impl::android::transition::TransitionValues arg3, jint arg4)
	{
		return __thiz.callObjectMethod(
			"onAppear",
			"(Landroid/view/ViewGroup;Landroid/transition/TransitionValues;ILandroid/transition/TransitionValues;I)Landroid/animation/Animator;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object(),
			arg4
		);
	}
	QAndroidJniObject Visibility::onDisappear(__jni_impl::android::view::ViewGroup arg0, __jni_impl::android::view::View arg1, __jni_impl::android::transition::TransitionValues arg2, __jni_impl::android::transition::TransitionValues arg3)
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
	QAndroidJniObject Visibility::onDisappear(__jni_impl::android::view::ViewGroup arg0, __jni_impl::android::transition::TransitionValues arg1, jint arg2, __jni_impl::android::transition::TransitionValues arg3, jint arg4)
	{
		return __thiz.callObjectMethod(
			"onDisappear",
			"(Landroid/view/ViewGroup;Landroid/transition/TransitionValues;ILandroid/transition/TransitionValues;I)Landroid/animation/Animator;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object(),
			arg4
		);
	}
	void Visibility::setMode(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMode",
			"(I)V",
			arg0
		);
	}
} // namespace __jni_impl::android::transition

namespace android::transition
{
	class Visibility : public __jni_impl::android::transition::Visibility
	{
	public:
		Visibility(QAndroidJniObject obj) { __thiz = obj; }
		Visibility()
		{
			__constructor();
		}
		Visibility(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::transition

#endif // ANDROID_TRANSITION_VISIBILITY

