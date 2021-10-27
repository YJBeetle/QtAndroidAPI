#include "./Scene.hpp"
#include "./Transition.hpp"
#include "../view/ViewGroup.hpp"
#include "./TransitionManager.hpp"

namespace android::transition
{
	// Fields
	
	TransitionManager::TransitionManager(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	TransitionManager::TransitionManager()
	{
		__thiz = QAndroidJniObject(
			"android.transition.TransitionManager",
			"()V"
		);
	}
	
	// Methods
	void TransitionManager::beginDelayedTransition(android::view::ViewGroup arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.transition.TransitionManager",
			"beginDelayedTransition",
			"(Landroid/view/ViewGroup;)V",
			arg0.__jniObject().object()
		);
	}
	void TransitionManager::beginDelayedTransition(android::view::ViewGroup arg0, android::transition::Transition arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.transition.TransitionManager",
			"beginDelayedTransition",
			"(Landroid/view/ViewGroup;Landroid/transition/Transition;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void TransitionManager::endTransitions(android::view::ViewGroup arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.transition.TransitionManager",
			"endTransitions",
			"(Landroid/view/ViewGroup;)V",
			arg0.__jniObject().object()
		);
	}
	void TransitionManager::go(android::transition::Scene arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.transition.TransitionManager",
			"go",
			"(Landroid/transition/Scene;)V",
			arg0.__jniObject().object()
		);
	}
	void TransitionManager::go(android::transition::Scene arg0, android::transition::Transition arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.transition.TransitionManager",
			"go",
			"(Landroid/transition/Scene;Landroid/transition/Transition;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void TransitionManager::setTransition(android::transition::Scene arg0, android::transition::Transition arg1)
	{
		__thiz.callMethod<void>(
			"setTransition",
			"(Landroid/transition/Scene;Landroid/transition/Transition;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void TransitionManager::setTransition(android::transition::Scene arg0, android::transition::Scene arg1, android::transition::Transition arg2)
	{
		__thiz.callMethod<void>(
			"setTransition",
			"(Landroid/transition/Scene;Landroid/transition/Scene;Landroid/transition/Transition;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void TransitionManager::transitionTo(android::transition::Scene arg0)
	{
		__thiz.callMethod<void>(
			"transitionTo",
			"(Landroid/transition/Scene;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::transition

