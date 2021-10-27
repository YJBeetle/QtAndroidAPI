#pragma once

#ifndef ANDROID_TRANSITION_TRANSITIONLISTENERADAPTER
#define ANDROID_TRANSITION_TRANSITIONLISTENERADAPTER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::transition
{
	class Transition;
}

namespace __jni_impl::android::transition
{
	class TransitionListenerAdapter : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void onTransitionCancel(__jni_impl::android::transition::Transition arg0);
		void onTransitionEnd(__jni_impl::android::transition::Transition arg0);
		void onTransitionPause(__jni_impl::android::transition::Transition arg0);
		void onTransitionResume(__jni_impl::android::transition::Transition arg0);
		void onTransitionStart(__jni_impl::android::transition::Transition arg0);
	};
} // namespace __jni_impl::android::transition

#include "Transition.hpp"

namespace __jni_impl::android::transition
{
	// Fields
	
	// Constructors
	void TransitionListenerAdapter::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.transition.TransitionListenerAdapter",
			"()V"
		);
	}
	
	// Methods
	void TransitionListenerAdapter::onTransitionCancel(__jni_impl::android::transition::Transition arg0)
	{
		__thiz.callMethod<void>(
			"onTransitionCancel",
			"(Landroid/transition/Transition;)V",
			arg0.__jniObject().object()
		);
	}
	void TransitionListenerAdapter::onTransitionEnd(__jni_impl::android::transition::Transition arg0)
	{
		__thiz.callMethod<void>(
			"onTransitionEnd",
			"(Landroid/transition/Transition;)V",
			arg0.__jniObject().object()
		);
	}
	void TransitionListenerAdapter::onTransitionPause(__jni_impl::android::transition::Transition arg0)
	{
		__thiz.callMethod<void>(
			"onTransitionPause",
			"(Landroid/transition/Transition;)V",
			arg0.__jniObject().object()
		);
	}
	void TransitionListenerAdapter::onTransitionResume(__jni_impl::android::transition::Transition arg0)
	{
		__thiz.callMethod<void>(
			"onTransitionResume",
			"(Landroid/transition/Transition;)V",
			arg0.__jniObject().object()
		);
	}
	void TransitionListenerAdapter::onTransitionStart(__jni_impl::android::transition::Transition arg0)
	{
		__thiz.callMethod<void>(
			"onTransitionStart",
			"(Landroid/transition/Transition;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::transition

namespace android::transition
{
	class TransitionListenerAdapter : public __jni_impl::android::transition::TransitionListenerAdapter
	{
	public:
		TransitionListenerAdapter(QAndroidJniObject obj) { __thiz = obj; }
		TransitionListenerAdapter()
		{
			__constructor();
		}
	};
} // namespace android::transition

#endif // ANDROID_TRANSITION_TRANSITIONLISTENERADAPTER

