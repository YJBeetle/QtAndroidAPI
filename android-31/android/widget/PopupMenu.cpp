#include "../content/Context.hpp"
#include "../view/MenuInflater.hpp"
#include "../view/View.hpp"
#include "./PopupMenu.hpp"

namespace android::widget
{
	// Fields
	
	// QAndroidJniObject forward
	PopupMenu::PopupMenu(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	PopupMenu::PopupMenu(android::content::Context arg0, android::view::View arg1)
		: JObject(
			"android.widget.PopupMenu",
			"(Landroid/content/Context;Landroid/view/View;)V",
			arg0.object(),
			arg1.object()
		) {}
	PopupMenu::PopupMenu(android::content::Context arg0, android::view::View arg1, jint arg2)
		: JObject(
			"android.widget.PopupMenu",
			"(Landroid/content/Context;Landroid/view/View;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	PopupMenu::PopupMenu(android::content::Context arg0, android::view::View arg1, jint arg2, jint arg3, jint arg4)
		: JObject(
			"android.widget.PopupMenu",
			"(Landroid/content/Context;Landroid/view/View;III)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3,
			arg4
		) {}
	
	// Methods
	void PopupMenu::dismiss() const
	{
		callMethod<void>(
			"dismiss",
			"()V"
		);
	}
	JObject PopupMenu::getDragToOpenListener() const
	{
		return callObjectMethod(
			"getDragToOpenListener",
			"()Landroid/view/View$OnTouchListener;"
		);
	}
	jint PopupMenu::getGravity() const
	{
		return callMethod<jint>(
			"getGravity",
			"()I"
		);
	}
	JObject PopupMenu::getMenu() const
	{
		return callObjectMethod(
			"getMenu",
			"()Landroid/view/Menu;"
		);
	}
	android::view::MenuInflater PopupMenu::getMenuInflater() const
	{
		return callObjectMethod(
			"getMenuInflater",
			"()Landroid/view/MenuInflater;"
		);
	}
	void PopupMenu::inflate(jint arg0) const
	{
		callMethod<void>(
			"inflate",
			"(I)V",
			arg0
		);
	}
	void PopupMenu::setForceShowIcon(jboolean arg0) const
	{
		callMethod<void>(
			"setForceShowIcon",
			"(Z)V",
			arg0
		);
	}
	void PopupMenu::setGravity(jint arg0) const
	{
		callMethod<void>(
			"setGravity",
			"(I)V",
			arg0
		);
	}
	void PopupMenu::setOnDismissListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnDismissListener",
			"(Landroid/widget/PopupMenu$OnDismissListener;)V",
			arg0.object()
		);
	}
	void PopupMenu::setOnMenuItemClickListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnMenuItemClickListener",
			"(Landroid/widget/PopupMenu$OnMenuItemClickListener;)V",
			arg0.object()
		);
	}
	void PopupMenu::show() const
	{
		callMethod<void>(
			"show",
			"()V"
		);
	}
} // namespace android::widget

