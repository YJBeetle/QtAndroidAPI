#include "../graphics/Rect.hpp"
#include "./View.hpp"
#include "./ViewGroup.hpp"
#include "./FocusFinder.hpp"

namespace android::view
{
	// Fields
	
	// QAndroidJniObject forward
	FocusFinder::FocusFinder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	android::view::FocusFinder FocusFinder::getInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.FocusFinder",
			"getInstance",
			"()Landroid/view/FocusFinder;"
		);
	}
	android::view::View FocusFinder::findNearestTouchable(android::view::ViewGroup arg0, jint arg1, jint arg2, jint arg3, jintArray arg4)
	{
		return callObjectMethod(
			"findNearestTouchable",
			"(Landroid/view/ViewGroup;III[I)Landroid/view/View;",
			arg0.object(),
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	android::view::View FocusFinder::findNextFocus(android::view::ViewGroup arg0, android::view::View arg1, jint arg2)
	{
		return callObjectMethod(
			"findNextFocus",
			"(Landroid/view/ViewGroup;Landroid/view/View;I)Landroid/view/View;",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	android::view::View FocusFinder::findNextFocusFromRect(android::view::ViewGroup arg0, android::graphics::Rect arg1, jint arg2)
	{
		return callObjectMethod(
			"findNextFocusFromRect",
			"(Landroid/view/ViewGroup;Landroid/graphics/Rect;I)Landroid/view/View;",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	android::view::View FocusFinder::findNextKeyboardNavigationCluster(android::view::View arg0, android::view::View arg1, jint arg2)
	{
		return callObjectMethod(
			"findNextKeyboardNavigationCluster",
			"(Landroid/view/View;Landroid/view/View;I)Landroid/view/View;",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
} // namespace android::view

