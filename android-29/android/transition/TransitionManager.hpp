#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::transition
{
	class Scene;
}
namespace __jni_impl::android::transition
{
	class Transition;
}
namespace __jni_impl::android::view
{
	class ViewGroup;
}

namespace __jni_impl::android::transition
{
	class TransitionManager : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static void beginDelayedTransition(__jni_impl::android::view::ViewGroup arg0);
		static void beginDelayedTransition(__jni_impl::android::view::ViewGroup arg0, __jni_impl::android::transition::Transition arg1);
		static void endTransitions(__jni_impl::android::view::ViewGroup arg0);
		static void go(__jni_impl::android::transition::Scene arg0);
		static void go(__jni_impl::android::transition::Scene arg0, __jni_impl::android::transition::Transition arg1);
		void setTransition(__jni_impl::android::transition::Scene arg0, __jni_impl::android::transition::Transition arg1);
		void setTransition(__jni_impl::android::transition::Scene arg0, __jni_impl::android::transition::Scene arg1, __jni_impl::android::transition::Transition arg2);
		void transitionTo(__jni_impl::android::transition::Scene arg0);
	};
} // namespace __jni_impl::android::transition

#include "./Scene.hpp"
#include "./Transition.hpp"
#include "../view/ViewGroup.hpp"

namespace __jni_impl::android::transition
{
	// Fields
	
	// Constructors
	void TransitionManager::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.transition.TransitionManager",
			"()V"
		);
	}
	
	// Methods
	void TransitionManager::beginDelayedTransition(__jni_impl::android::view::ViewGroup arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.transition.TransitionManager",
			"beginDelayedTransition",
			"(Landroid/view/ViewGroup;)V",
			arg0.__jniObject().object()
		);
	}
	void TransitionManager::beginDelayedTransition(__jni_impl::android::view::ViewGroup arg0, __jni_impl::android::transition::Transition arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.transition.TransitionManager",
			"beginDelayedTransition",
			"(Landroid/view/ViewGroup;Landroid/transition/Transition;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void TransitionManager::endTransitions(__jni_impl::android::view::ViewGroup arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.transition.TransitionManager",
			"endTransitions",
			"(Landroid/view/ViewGroup;)V",
			arg0.__jniObject().object()
		);
	}
	void TransitionManager::go(__jni_impl::android::transition::Scene arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.transition.TransitionManager",
			"go",
			"(Landroid/transition/Scene;)V",
			arg0.__jniObject().object()
		);
	}
	void TransitionManager::go(__jni_impl::android::transition::Scene arg0, __jni_impl::android::transition::Transition arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.transition.TransitionManager",
			"go",
			"(Landroid/transition/Scene;Landroid/transition/Transition;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void TransitionManager::setTransition(__jni_impl::android::transition::Scene arg0, __jni_impl::android::transition::Transition arg1)
	{
		__thiz.callMethod<void>(
			"setTransition",
			"(Landroid/transition/Scene;Landroid/transition/Transition;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void TransitionManager::setTransition(__jni_impl::android::transition::Scene arg0, __jni_impl::android::transition::Scene arg1, __jni_impl::android::transition::Transition arg2)
	{
		__thiz.callMethod<void>(
			"setTransition",
			"(Landroid/transition/Scene;Landroid/transition/Scene;Landroid/transition/Transition;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void TransitionManager::transitionTo(__jni_impl::android::transition::Scene arg0)
	{
		__thiz.callMethod<void>(
			"transitionTo",
			"(Landroid/transition/Scene;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::transition

namespace android::transition
{
	class TransitionManager : public __jni_impl::android::transition::TransitionManager
	{
	public:
		TransitionManager(QAndroidJniObject obj) { __thiz = obj; }
		TransitionManager()
		{
			__constructor();
		}
	};
} // namespace android::transition

