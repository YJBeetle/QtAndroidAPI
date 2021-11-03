#include "../graphics/Rect.hpp"
#include "./ActionMode.hpp"
#include "./View.hpp"
#include "./ActionMode_Callback2.hpp"

namespace android::view
{
	// Fields
	
	// QJniObject forward
	ActionMode_Callback2::ActionMode_Callback2(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	ActionMode_Callback2::ActionMode_Callback2()
		: JObject(
			"android.view.ActionMode$Callback2",
			"()V"
		) {}
	
	// Methods
	void ActionMode_Callback2::onGetContentRect(android::view::ActionMode arg0, android::view::View arg1, android::graphics::Rect arg2)
	{
		callMethod<void>(
			"onGetContentRect",
			"(Landroid/view/ActionMode;Landroid/view/View;Landroid/graphics/Rect;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
} // namespace android::view

