#include "../view/View.hpp"
#include "./FragmentContainer.hpp"

namespace android::app
{
	// Fields
	
	FragmentContainer::FragmentContainer(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	FragmentContainer::FragmentContainer()
	{
		__thiz = QAndroidJniObject(
			"android.app.FragmentContainer",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject FragmentContainer::onFindViewById(jint arg0)
	{
		return __thiz.callObjectMethod(
			"onFindViewById",
			"(I)Landroid/view/View;",
			arg0
		);
	}
	jboolean FragmentContainer::onHasView()
	{
		return __thiz.callMethod<jboolean>(
			"onHasView",
			"()Z"
		);
	}
} // namespace android::app

