#include "../view/View.hpp"
#include "./FragmentContainer.hpp"

namespace android::app
{
	// Fields
	
	// QJniObject forward
	FragmentContainer::FragmentContainer(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	FragmentContainer::FragmentContainer()
		: __JniBaseClass(
			"android.app.FragmentContainer",
			"()V"
		) {}
	
	// Methods
	android::view::View FragmentContainer::onFindViewById(jint arg0)
	{
		return callObjectMethod(
			"onFindViewById",
			"(I)Landroid/view/View;",
			arg0
		);
	}
	jboolean FragmentContainer::onHasView()
	{
		return callMethod<jboolean>(
			"onHasView",
			"()Z"
		);
	}
} // namespace android::app

