#pragma once

#ifndef ANDROID_TRANSITION_SIDEPROPAGATION
#define ANDROID_TRANSITION_SIDEPROPAGATION

#include "../../__JniBaseClass.hpp"
#include "TransitionPropagation.hpp"
#include "VisibilityPropagation.hpp"

namespace __jni_impl::android::view
{
	class ViewGroup;
}
namespace __jni_impl::android::transition
{
	class Transition;
}
namespace __jni_impl::android::transition
{
	class TransitionValues;
}

namespace __jni_impl::android::transition
{
	class SidePropagation : public __jni_impl::android::transition::VisibilityPropagation
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void setPropagationSpeed(jfloat arg0);
		void setSide(jint arg0);
		jlong getStartDelay(__jni_impl::android::view::ViewGroup arg0, __jni_impl::android::transition::Transition arg1, __jni_impl::android::transition::TransitionValues arg2, __jni_impl::android::transition::TransitionValues arg3);
	};
} // namespace __jni_impl::android::transition

#include "../view/ViewGroup.hpp"
#include "Transition.hpp"
#include "TransitionValues.hpp"

namespace __jni_impl::android::transition
{
	// Fields
	
	// Constructors
	void SidePropagation::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.transition.SidePropagation",
			"()V");
	}
	
	// Methods
	void SidePropagation::setPropagationSpeed(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setPropagationSpeed",
			"(F)V",
			arg0
		);
	}
	void SidePropagation::setSide(jint arg0)
	{
		__thiz.callMethod<void>(
			"setSide",
			"(I)V",
			arg0
		);
	}
	jlong SidePropagation::getStartDelay(__jni_impl::android::view::ViewGroup arg0, __jni_impl::android::transition::Transition arg1, __jni_impl::android::transition::TransitionValues arg2, __jni_impl::android::transition::TransitionValues arg3)
	{
		return __thiz.callMethod<jlong>(
			"getStartDelay",
			"(Landroid/view/ViewGroup;Landroid/transition/Transition;Landroid/transition/TransitionValues;Landroid/transition/TransitionValues;)J",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::transition

namespace android::transition
{
	class SidePropagation : public __jni_impl::android::transition::SidePropagation
	{
	public:
		SidePropagation(QAndroidJniObject obj) { __thiz = obj; }
		SidePropagation()
		{
			__constructor();
		}
	};
} // namespace android::transition

#endif // ANDROID_TRANSITION_SIDEPROPAGATION

