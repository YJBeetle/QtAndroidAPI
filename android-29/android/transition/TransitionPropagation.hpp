#pragma once

#ifndef ANDROID_TRANSITION_TRANSITIONPROPAGATION
#define ANDROID_TRANSITION_TRANSITIONPROPAGATION

#include "../../__JniBaseClass.hpp"

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
	class TransitionPropagation : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void captureValues(__jni_impl::android::transition::TransitionValues arg0);
		jarray getPropagationProperties();
		jlong getStartDelay(__jni_impl::android::view::ViewGroup arg0, __jni_impl::android::transition::Transition arg1, __jni_impl::android::transition::TransitionValues arg2, __jni_impl::android::transition::TransitionValues arg3);
	};
} // namespace __jni_impl::android::transition

#include "Transition.hpp"
#include "TransitionValues.hpp"
#include "../view/ViewGroup.hpp"

namespace __jni_impl::android::transition
{
	// Fields
	
	// Constructors
	void TransitionPropagation::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.transition.TransitionPropagation",
			"()V"
		);
	}
	
	// Methods
	void TransitionPropagation::captureValues(__jni_impl::android::transition::TransitionValues arg0)
	{
		__thiz.callMethod<void>(
			"captureValues",
			"(Landroid/transition/TransitionValues;)V",
			arg0.__jniObject().object()
		);
	}
	jarray TransitionPropagation::getPropagationProperties()
	{
		return __thiz.callObjectMethod(
			"getPropagationProperties",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jlong TransitionPropagation::getStartDelay(__jni_impl::android::view::ViewGroup arg0, __jni_impl::android::transition::Transition arg1, __jni_impl::android::transition::TransitionValues arg2, __jni_impl::android::transition::TransitionValues arg3)
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
	class TransitionPropagation : public __jni_impl::android::transition::TransitionPropagation
	{
	public:
		TransitionPropagation(QAndroidJniObject obj) { __thiz = obj; }
		TransitionPropagation()
		{
			__constructor();
		}
	};
} // namespace android::transition

#endif // ANDROID_TRANSITION_TRANSITIONPROPAGATION

