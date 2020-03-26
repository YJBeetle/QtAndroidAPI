#pragma once

#ifndef ANDROID_ANIMATION_LAYOUTTRANSITION
#define ANDROID_ANIMATION_LAYOUTTRANSITION

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::view
{
	class ViewGroup;
}
namespace __jni_impl::android::view
{
	class View;
}
namespace __jni_impl::android::animation
{
	class Animator;
}

namespace __jni_impl::android::animation
{
	class LayoutTransition : public __JniBaseClass
	{
	public:
		// Fields
		static jint APPEARING();
		static jint CHANGE_APPEARING();
		static jint CHANGE_DISAPPEARING();
		static jint CHANGING();
		static jint DISAPPEARING();
		
		// Constructors
		void __constructor();
		
		// Methods
		jlong getDuration(jint arg0);
		void addChild(__jni_impl::android::view::ViewGroup arg0, __jni_impl::android::view::View arg1);
		void removeChild(__jni_impl::android::view::ViewGroup arg0, __jni_impl::android::view::View arg1);
		void enableTransitionType(jint arg0);
		void disableTransitionType(jint arg0);
		jboolean isTransitionTypeEnabled(jint arg0);
		void setStagger(jint arg0, jlong arg1);
		jlong getStagger(jint arg0);
		void setAnimator(jint arg0, __jni_impl::android::animation::Animator arg1);
		QAndroidJniObject getAnimator(jint arg0);
		void setAnimateParentHierarchy(jboolean arg0);
		jboolean isChangingLayout();
		void showChild(__jni_impl::android::view::ViewGroup arg0, __jni_impl::android::view::View arg1, jint arg2);
		void showChild(__jni_impl::android::view::ViewGroup arg0, __jni_impl::android::view::View arg1);
		void hideChild(__jni_impl::android::view::ViewGroup arg0, __jni_impl::android::view::View arg1);
		void hideChild(__jni_impl::android::view::ViewGroup arg0, __jni_impl::android::view::View arg1, jint arg2);
		void addTransitionListener(__jni_impl::__JniBaseClass arg0);
		void removeTransitionListener(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getTransitionListeners();
		void setDuration(jlong arg0);
		void setDuration(jint arg0, jlong arg1);
		void setStartDelay(jint arg0, jlong arg1);
		jlong getStartDelay(jint arg0);
		void setInterpolator(jint arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject getInterpolator(jint arg0);
		jboolean isRunning();
	};
} // namespace __jni_impl::android::animation

#include "../view/ViewGroup.hpp"
#include "../view/View.hpp"
#include "Animator.hpp"

namespace __jni_impl::android::animation
{
	// Fields
	jint LayoutTransition::APPEARING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.animation.LayoutTransition",
			"APPEARING"
		);
	}
	jint LayoutTransition::CHANGE_APPEARING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.animation.LayoutTransition",
			"CHANGE_APPEARING"
		);
	}
	jint LayoutTransition::CHANGE_DISAPPEARING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.animation.LayoutTransition",
			"CHANGE_DISAPPEARING"
		);
	}
	jint LayoutTransition::CHANGING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.animation.LayoutTransition",
			"CHANGING"
		);
	}
	jint LayoutTransition::DISAPPEARING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.animation.LayoutTransition",
			"DISAPPEARING"
		);
	}
	
	// Constructors
	void LayoutTransition::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.animation.LayoutTransition",
			"()V");
	}
	
	// Methods
	jlong LayoutTransition::getDuration(jint arg0)
	{
		return __thiz.callMethod<jlong>(
			"getDuration",
			"(I)J",
			arg0
		);
	}
	void LayoutTransition::addChild(__jni_impl::android::view::ViewGroup arg0, __jni_impl::android::view::View arg1)
	{
		__thiz.callMethod<void>(
			"addChild",
			"(Landroid/view/ViewGroup;Landroid/view/View;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void LayoutTransition::removeChild(__jni_impl::android::view::ViewGroup arg0, __jni_impl::android::view::View arg1)
	{
		__thiz.callMethod<void>(
			"removeChild",
			"(Landroid/view/ViewGroup;Landroid/view/View;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void LayoutTransition::enableTransitionType(jint arg0)
	{
		__thiz.callMethod<void>(
			"enableTransitionType",
			"(I)V",
			arg0
		);
	}
	void LayoutTransition::disableTransitionType(jint arg0)
	{
		__thiz.callMethod<void>(
			"disableTransitionType",
			"(I)V",
			arg0
		);
	}
	jboolean LayoutTransition::isTransitionTypeEnabled(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isTransitionTypeEnabled",
			"(I)Z",
			arg0
		);
	}
	void LayoutTransition::setStagger(jint arg0, jlong arg1)
	{
		__thiz.callMethod<void>(
			"setStagger",
			"(IJ)V",
			arg0,
			arg1
		);
	}
	jlong LayoutTransition::getStagger(jint arg0)
	{
		return __thiz.callMethod<jlong>(
			"getStagger",
			"(I)J",
			arg0
		);
	}
	void LayoutTransition::setAnimator(jint arg0, __jni_impl::android::animation::Animator arg1)
	{
		__thiz.callMethod<void>(
			"setAnimator",
			"(ILandroid/animation/Animator;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject LayoutTransition::getAnimator(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getAnimator",
			"(I)Landroid/animation/Animator;",
			arg0
		);
	}
	void LayoutTransition::setAnimateParentHierarchy(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setAnimateParentHierarchy",
			"(Z)V",
			arg0
		);
	}
	jboolean LayoutTransition::isChangingLayout()
	{
		return __thiz.callMethod<jboolean>(
			"isChangingLayout",
			"()Z"
		);
	}
	void LayoutTransition::showChild(__jni_impl::android::view::ViewGroup arg0, __jni_impl::android::view::View arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"showChild",
			"(Landroid/view/ViewGroup;Landroid/view/View;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void LayoutTransition::showChild(__jni_impl::android::view::ViewGroup arg0, __jni_impl::android::view::View arg1)
	{
		__thiz.callMethod<void>(
			"showChild",
			"(Landroid/view/ViewGroup;Landroid/view/View;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void LayoutTransition::hideChild(__jni_impl::android::view::ViewGroup arg0, __jni_impl::android::view::View arg1)
	{
		__thiz.callMethod<void>(
			"hideChild",
			"(Landroid/view/ViewGroup;Landroid/view/View;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void LayoutTransition::hideChild(__jni_impl::android::view::ViewGroup arg0, __jni_impl::android::view::View arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"hideChild",
			"(Landroid/view/ViewGroup;Landroid/view/View;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void LayoutTransition::addTransitionListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"addTransitionListener",
			"(Landroid/animation/LayoutTransition$TransitionListener;)V",
			arg0.__jniObject().object()
		);
	}
	void LayoutTransition::removeTransitionListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"removeTransitionListener",
			"(Landroid/animation/LayoutTransition$TransitionListener;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject LayoutTransition::getTransitionListeners()
	{
		return __thiz.callObjectMethod(
			"getTransitionListeners",
			"()Ljava/util/List;"
		);
	}
	void LayoutTransition::setDuration(jlong arg0)
	{
		__thiz.callMethod<void>(
			"setDuration",
			"(J)V",
			arg0
		);
	}
	void LayoutTransition::setDuration(jint arg0, jlong arg1)
	{
		__thiz.callMethod<void>(
			"setDuration",
			"(IJ)V",
			arg0,
			arg1
		);
	}
	void LayoutTransition::setStartDelay(jint arg0, jlong arg1)
	{
		__thiz.callMethod<void>(
			"setStartDelay",
			"(IJ)V",
			arg0,
			arg1
		);
	}
	jlong LayoutTransition::getStartDelay(jint arg0)
	{
		return __thiz.callMethod<jlong>(
			"getStartDelay",
			"(I)J",
			arg0
		);
	}
	void LayoutTransition::setInterpolator(jint arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"setInterpolator",
			"(ILandroid/animation/TimeInterpolator;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject LayoutTransition::getInterpolator(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getInterpolator",
			"(I)Landroid/animation/TimeInterpolator;",
			arg0
		);
	}
	jboolean LayoutTransition::isRunning()
	{
		return __thiz.callMethod<jboolean>(
			"isRunning",
			"()Z"
		);
	}
} // namespace __jni_impl::android::animation

namespace android::animation
{
	class LayoutTransition : public __jni_impl::android::animation::LayoutTransition
	{
	public:
		LayoutTransition(QAndroidJniObject obj) { __thiz = obj; }
		LayoutTransition()
		{
			__constructor();
		}
	};
} // namespace android::animation

#endif // ANDROID_ANIMATION_LAYOUTTRANSITION

