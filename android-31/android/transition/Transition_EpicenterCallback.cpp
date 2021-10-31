#include "../graphics/Rect.hpp"
#include "./Transition.hpp"
#include "./Transition_EpicenterCallback.hpp"

namespace android::transition
{
	// Fields
	
	// QJniObject forward
	Transition_EpicenterCallback::Transition_EpicenterCallback(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Transition_EpicenterCallback::Transition_EpicenterCallback()
		: __JniBaseClass(
			"android.transition.Transition$EpicenterCallback",
			"()V"
		) {}
	
	// Methods
	android::graphics::Rect Transition_EpicenterCallback::onGetEpicenter(android::transition::Transition arg0)
	{
		return callObjectMethod(
			"onGetEpicenter",
			"(Landroid/transition/Transition;)Landroid/graphics/Rect;",
			arg0.object()
		);
	}
} // namespace android::transition

