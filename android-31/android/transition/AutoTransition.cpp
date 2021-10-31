#include "../content/Context.hpp"
#include "./AutoTransition.hpp"

namespace android::transition
{
	// Fields
	
	// QJniObject forward
	AutoTransition::AutoTransition(QJniObject obj) : android::transition::TransitionSet(obj) {}
	
	// Constructors
	AutoTransition::AutoTransition()
		: android::transition::TransitionSet(
			"android.transition.AutoTransition",
			"()V"
		) {}
	AutoTransition::AutoTransition(android::content::Context arg0, __JniBaseClass arg1)
		: android::transition::TransitionSet(
			"android.transition.AutoTransition",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
} // namespace android::transition

