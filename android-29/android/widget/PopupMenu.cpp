#include "../content/Context.hpp"
#include "../view/MenuInflater.hpp"
#include "../view/View.hpp"
#include "./PopupMenu.hpp"

namespace android::widget
{
	// Fields
	
	PopupMenu::PopupMenu(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	PopupMenu::PopupMenu(android::content::Context &arg0, android::view::View &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.PopupMenu",
			"(Landroid/content/Context;Landroid/view/View;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	PopupMenu::PopupMenu(android::content::Context &arg0, android::view::View &arg1, jint &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.PopupMenu",
			"(Landroid/content/Context;Landroid/view/View;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	PopupMenu::PopupMenu(android::content::Context &arg0, android::view::View &arg1, jint &arg2, jint &arg3, jint &arg4)
	{
		__thiz = QAndroidJniObject(
			"android.widget.PopupMenu",
			"(Landroid/content/Context;Landroid/view/View;III)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3,
			arg4
		);
	}
	
	// Methods
	void PopupMenu::dismiss()
	{
		__thiz.callMethod<void>(
			"dismiss",
			"()V"
		);
	}
	QAndroidJniObject PopupMenu::getDragToOpenListener()
	{
		return __thiz.callObjectMethod(
			"getDragToOpenListener",
			"()Landroid/view/View$OnTouchListener;"
		);
	}
	jint PopupMenu::getGravity()
	{
		return __thiz.callMethod<jint>(
			"getGravity",
			"()I"
		);
	}
	QAndroidJniObject PopupMenu::getMenu()
	{
		return __thiz.callObjectMethod(
			"getMenu",
			"()Landroid/view/Menu;"
		);
	}
	QAndroidJniObject PopupMenu::getMenuInflater()
	{
		return __thiz.callObjectMethod(
			"getMenuInflater",
			"()Landroid/view/MenuInflater;"
		);
	}
	void PopupMenu::inflate(jint arg0)
	{
		__thiz.callMethod<void>(
			"inflate",
			"(I)V",
			arg0
		);
	}
	void PopupMenu::setForceShowIcon(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setForceShowIcon",
			"(Z)V",
			arg0
		);
	}
	void PopupMenu::setGravity(jint arg0)
	{
		__thiz.callMethod<void>(
			"setGravity",
			"(I)V",
			arg0
		);
	}
	void PopupMenu::setOnDismissListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnDismissListener",
			"(Landroid/widget/PopupMenu$OnDismissListener;)V",
			arg0.__jniObject().object()
		);
	}
	void PopupMenu::setOnMenuItemClickListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnMenuItemClickListener",
			"(Landroid/widget/PopupMenu$OnMenuItemClickListener;)V",
			arg0.__jniObject().object()
		);
	}
	void PopupMenu::show()
	{
		__thiz.callMethod<void>(
			"show",
			"()V"
		);
	}
} // namespace android::widget

