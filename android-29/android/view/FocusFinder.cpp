#include "../graphics/Rect.hpp"
#include "./View.hpp"
#include "./ViewGroup.hpp"
#include "./FocusFinder.hpp"

namespace android::view
{
	// Fields
	
	FocusFinder::FocusFinder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject FocusFinder::getInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.FocusFinder",
			"getInstance",
			"()Landroid/view/FocusFinder;"
		);
	}
	QAndroidJniObject FocusFinder::findNearestTouchable(android::view::ViewGroup arg0, jint arg1, jint arg2, jint arg3, jintArray arg4)
	{
		return __thiz.callObjectMethod(
			"findNearestTouchable",
			"(Landroid/view/ViewGroup;III[I)Landroid/view/View;",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	QAndroidJniObject FocusFinder::findNextFocus(android::view::ViewGroup arg0, android::view::View arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"findNextFocus",
			"(Landroid/view/ViewGroup;Landroid/view/View;I)Landroid/view/View;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	QAndroidJniObject FocusFinder::findNextFocusFromRect(android::view::ViewGroup arg0, android::graphics::Rect arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"findNextFocusFromRect",
			"(Landroid/view/ViewGroup;Landroid/graphics/Rect;I)Landroid/view/View;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	QAndroidJniObject FocusFinder::findNextKeyboardNavigationCluster(android::view::View arg0, android::view::View arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"findNextKeyboardNavigationCluster",
			"(Landroid/view/View;Landroid/view/View;I)Landroid/view/View;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
} // namespace android::view

