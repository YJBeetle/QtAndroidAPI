#pragma once

#ifndef ANDROID_TRANSITION_CIRCULARPROPAGATION
#define ANDROID_TRANSITION_CIRCULARPROPAGATION

#include "../../__JniBaseClass.hpp"
#include "TransitionPropagation.hpp"
#include "VisibilityPropagation.hpp"

namespace __jni_impl::android::transition
{
	class Transition;
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
	class CircularPropagation : public __jni_impl::android::transition::VisibilityPropagation
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jlong getStartDelay(__jni_impl::android::view::ViewGroup arg0, __jni_impl::android::transition::Transition arg1, __jni_impl::android::transition::TransitionValues arg2, __jni_impl::android::transition::TransitionValues arg3);
		void setPropagationSpeed(jfloat arg0);
	};
} // namespace __jni_impl::android::transition

#include "Transition.hpp"
#include "TransitionValues.hpp"
#include "../view/ViewGroup.hpp"

namespace __jni_impl::android::transition
{
	// Fields
	
	// Constructors
	void CircularPropagation::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.transition.CircularPropagation",
			"()V"
		);
	}
	
	// Methods
	jlong CircularPropagation::getStartDelay(__jni_impl::android::view::ViewGroup arg0, __jni_impl::android::transition::Transition arg1, __jni_impl::android::transition::TransitionValues arg2, __jni_impl::android::transition::TransitionValues arg3)
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
	void CircularPropagation::setPropagationSpeed(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setPropagationSpeed",
			"(F)V",
			arg0
		);
	}
} // namespace __jni_impl::android::transition

namespace android::transition
{
	class CircularPropagation : public __jni_impl::android::transition::CircularPropagation
	{
	public:
		CircularPropagation(QAndroidJniObject obj) { __thiz = obj; }
		CircularPropagation()
		{
			__constructor();
		}
	};
} // namespace android::transition

#endif // ANDROID_TRANSITION_CIRCULARPROPAGATION

