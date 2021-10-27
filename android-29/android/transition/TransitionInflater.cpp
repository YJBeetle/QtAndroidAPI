#include "../content/Context.hpp"
#include "./Transition.hpp"
#include "./TransitionManager.hpp"
#include "../view/ViewGroup.hpp"
#include "./TransitionInflater.hpp"

namespace android::transition
{
	// Fields
	
	TransitionInflater::TransitionInflater(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject TransitionInflater::from(android::content::Context arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.transition.TransitionInflater",
			"from",
			"(Landroid/content/Context;)Landroid/transition/TransitionInflater;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject TransitionInflater::inflateTransition(jint arg0)
	{
		return __thiz.callObjectMethod(
			"inflateTransition",
			"(I)Landroid/transition/Transition;",
			arg0
		);
	}
	QAndroidJniObject TransitionInflater::inflateTransitionManager(jint arg0, android::view::ViewGroup arg1)
	{
		return __thiz.callObjectMethod(
			"inflateTransitionManager",
			"(ILandroid/view/ViewGroup;)Landroid/transition/TransitionManager;",
			arg0,
			arg1.__jniObject().object()
		);
	}
} // namespace android::transition

