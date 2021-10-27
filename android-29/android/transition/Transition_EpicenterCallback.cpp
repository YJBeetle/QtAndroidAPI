#include "../graphics/Rect.hpp"
#include "./Transition.hpp"
#include "./Transition_EpicenterCallback.hpp"

namespace android::transition
{
	// Fields
	
	Transition_EpicenterCallback::Transition_EpicenterCallback(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Transition_EpicenterCallback::Transition_EpicenterCallback()
	{
		__thiz = QAndroidJniObject(
			"android.transition.Transition$EpicenterCallback",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject Transition_EpicenterCallback::onGetEpicenter(android::transition::Transition arg0)
	{
		return __thiz.callObjectMethod(
			"onGetEpicenter",
			"(Landroid/transition/Transition;)Landroid/graphics/Rect;",
			arg0.__jniObject().object()
		);
	}
} // namespace android::transition

