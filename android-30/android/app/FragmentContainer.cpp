#include "../view/View.hpp"
#include "./FragmentContainer.hpp"

namespace android::app
{
	// Fields
	
	// Constructors
	FragmentContainer::FragmentContainer()
		: JObject(
			"android.app.FragmentContainer",
			"()V"
		) {}
	
	// Methods
	android::view::View FragmentContainer::onFindViewById(jint arg0) const
	{
		return callObjectMethod(
			"onFindViewById",
			"(I)Landroid/view/View;",
			arg0
		);
	}
	jboolean FragmentContainer::onHasView() const
	{
		return callMethod<jboolean>(
			"onHasView",
			"()Z"
		);
	}
} // namespace android::app

