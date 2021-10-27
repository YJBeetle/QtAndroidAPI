#pragma once

#include "../../__JniBaseClass.hpp"
#include "Transition.hpp"
#include "Visibility.hpp"

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
	class View;
}
namespace __jni_impl::android::view
{
	class ViewGroup;
}

namespace __jni_impl::android::transition
{
	class Fade : public __jni_impl::android::transition::Visibility
	{
	public:
		// Fields
		static jint IN();
		static jint OUT();
		
		// Constructors
		void __constructor();
		void __constructor(jint arg0);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		
		// Methods
		void captureStartValues(__jni_impl::android::transition::TransitionValues arg0);
		QAndroidJniObject onAppear(__jni_impl::android::view::ViewGroup arg0, __jni_impl::android::view::View arg1, __jni_impl::android::transition::TransitionValues arg2, __jni_impl::android::transition::TransitionValues arg3);
		QAndroidJniObject onDisappear(__jni_impl::android::view::ViewGroup arg0, __jni_impl::android::view::View arg1, __jni_impl::android::transition::TransitionValues arg2, __jni_impl::android::transition::TransitionValues arg3);
	};
} // namespace __jni_impl::android::transition

#include "../animation/Animator.hpp"
#include "../content/Context.hpp"
#include "TransitionValues.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"

namespace __jni_impl::android::transition
{
	// Fields
	jint Fade::IN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.transition.Fade",
			"IN"
		);
	}
	jint Fade::OUT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.transition.Fade",
			"OUT"
		);
	}
	
	// Constructors
	void Fade::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.transition.Fade",
			"()V"
		);
	}
	void Fade::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"android.transition.Fade",
			"(I)V",
			arg0
		);
	}
	void Fade::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.transition.Fade",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	void Fade::captureStartValues(__jni_impl::android::transition::TransitionValues arg0)
	{
		__thiz.callMethod<void>(
			"captureStartValues",
			"(Landroid/transition/TransitionValues;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Fade::onAppear(__jni_impl::android::view::ViewGroup arg0, __jni_impl::android::view::View arg1, __jni_impl::android::transition::TransitionValues arg2, __jni_impl::android::transition::TransitionValues arg3)
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
	QAndroidJniObject Fade::onDisappear(__jni_impl::android::view::ViewGroup arg0, __jni_impl::android::view::View arg1, __jni_impl::android::transition::TransitionValues arg2, __jni_impl::android::transition::TransitionValues arg3)
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
	class Fade : public __jni_impl::android::transition::Fade
	{
	public:
		Fade(QAndroidJniObject obj) { __thiz = obj; }
		Fade()
		{
			__constructor();
		}
		Fade(jint arg0)
		{
			__constructor(
				arg0);
		}
		Fade(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::transition

