#include "../content/Context.hpp"
#include "../view/MenuInflater.hpp"
#include "../view/View.hpp"
#include "./PopupMenu.hpp"

namespace android::widget
{
	// Fields
	
	// QJniObject forward
	PopupMenu::PopupMenu(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	PopupMenu::PopupMenu(android::content::Context arg0, android::view::View arg1)
		: __JniBaseClass(
			"android.widget.PopupMenu",
			"(Landroid/content/Context;Landroid/view/View;)V",
			arg0.object(),
			arg1.object()
		) {}
	PopupMenu::PopupMenu(android::content::Context arg0, android::view::View arg1, jint arg2)
		: __JniBaseClass(
			"android.widget.PopupMenu",
			"(Landroid/content/Context;Landroid/view/View;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	PopupMenu::PopupMenu(android::content::Context arg0, android::view::View arg1, jint arg2, jint arg3, jint arg4)
		: __JniBaseClass(
			"android.widget.PopupMenu",
			"(Landroid/content/Context;Landroid/view/View;III)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3,
			arg4
		) {}
	
	// Methods
	void PopupMenu::dismiss()
	{
		callMethod<void>(
			"dismiss",
			"()V"
		);
	}
	__JniBaseClass PopupMenu::getDragToOpenListener()
	{
		return callObjectMethod(
			"getDragToOpenListener",
			"()Landroid/view/View$OnTouchListener;"
		);
	}
	jint PopupMenu::getGravity()
	{
		return callMethod<jint>(
			"getGravity",
			"()I"
		);
	}
	__JniBaseClass PopupMenu::getMenu()
	{
		return callObjectMethod(
			"getMenu",
			"()Landroid/view/Menu;"
		);
	}
	android::view::MenuInflater PopupMenu::getMenuInflater()
	{
		return callObjectMethod(
			"getMenuInflater",
			"()Landroid/view/MenuInflater;"
		);
	}
	void PopupMenu::inflate(jint arg0)
	{
		callMethod<void>(
			"inflate",
			"(I)V",
			arg0
		);
	}
	void PopupMenu::setForceShowIcon(jboolean arg0)
	{
		callMethod<void>(
			"setForceShowIcon",
			"(Z)V",
			arg0
		);
	}
	void PopupMenu::setGravity(jint arg0)
	{
		callMethod<void>(
			"setGravity",
			"(I)V",
			arg0
		);
	}
	void PopupMenu::setOnDismissListener(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setOnDismissListener",
			"(Landroid/widget/PopupMenu$OnDismissListener;)V",
			arg0.object()
		);
	}
	void PopupMenu::setOnMenuItemClickListener(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setOnMenuItemClickListener",
			"(Landroid/widget/PopupMenu$OnMenuItemClickListener;)V",
			arg0.object()
		);
	}
	void PopupMenu::show()
	{
		callMethod<void>(
			"show",
			"()V"
		);
	}
} // namespace android::widget

