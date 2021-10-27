#include "../graphics/Rect.hpp"
#include "./ActionMode.hpp"
#include "./View.hpp"
#include "./ActionMode_Callback2.hpp"

namespace android::view
{
	// Fields
	
	ActionMode_Callback2::ActionMode_Callback2(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ActionMode_Callback2::ActionMode_Callback2()
	{
		__thiz = QAndroidJniObject(
			"android.view.ActionMode$Callback2",
			"()V"
		);
	}
	
	// Methods
	void ActionMode_Callback2::onGetContentRect(android::view::ActionMode arg0, android::view::View arg1, android::graphics::Rect arg2)
	{
		__thiz.callMethod<void>(
			"onGetContentRect",
			"(Landroid/view/ActionMode;Landroid/view/View;Landroid/graphics/Rect;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
} // namespace android::view

