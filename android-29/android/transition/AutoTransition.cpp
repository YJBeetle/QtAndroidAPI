#include "../content/Context.hpp"
#include "./AutoTransition.hpp"

namespace android::transition
{
	// Fields
	
	AutoTransition::AutoTransition(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AutoTransition::AutoTransition()
	{
		__thiz = QAndroidJniObject(
			"android.transition.AutoTransition",
			"()V"
		);
	}
	AutoTransition::AutoTransition(android::content::Context arg0, __JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.transition.AutoTransition",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
} // namespace android::transition

