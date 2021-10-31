#include "../content/Context.hpp"
#include "./Transition.hpp"
#include "./TransitionManager.hpp"
#include "../view/ViewGroup.hpp"
#include "./TransitionInflater.hpp"

namespace android::transition
{
	// Fields
	
	// QAndroidJniObject forward
	TransitionInflater::TransitionInflater(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject TransitionInflater::from(android::content::Context arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.transition.TransitionInflater",
			"from",
			"(Landroid/content/Context;)Landroid/transition/TransitionInflater;",
			arg0.object()
		);
	}
	QAndroidJniObject TransitionInflater::inflateTransition(jint arg0)
	{
		return callObjectMethod(
			"inflateTransition",
			"(I)Landroid/transition/Transition;",
			arg0
		);
	}
	QAndroidJniObject TransitionInflater::inflateTransitionManager(jint arg0, android::view::ViewGroup arg1)
	{
		return callObjectMethod(
			"inflateTransitionManager",
			"(ILandroid/view/ViewGroup;)Landroid/transition/TransitionManager;",
			arg0,
			arg1.object()
		);
	}
} // namespace android::transition

