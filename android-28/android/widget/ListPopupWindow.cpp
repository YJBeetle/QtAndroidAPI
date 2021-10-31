#include "../content/Context.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "../view/KeyEvent.hpp"
#include "../view/View.hpp"
#include "./ListView.hpp"
#include "./ListPopupWindow.hpp"

namespace android::widget
{
	// Fields
	jint ListPopupWindow::INPUT_METHOD_FROM_FOCUSABLE()
	{
		return getStaticField<jint>(
			"android.widget.ListPopupWindow",
			"INPUT_METHOD_FROM_FOCUSABLE"
		);
	}
	jint ListPopupWindow::INPUT_METHOD_NEEDED()
	{
		return getStaticField<jint>(
			"android.widget.ListPopupWindow",
			"INPUT_METHOD_NEEDED"
		);
	}
	jint ListPopupWindow::INPUT_METHOD_NOT_NEEDED()
	{
		return getStaticField<jint>(
			"android.widget.ListPopupWindow",
			"INPUT_METHOD_NOT_NEEDED"
		);
	}
	jint ListPopupWindow::MATCH_PARENT()
	{
		return getStaticField<jint>(
			"android.widget.ListPopupWindow",
			"MATCH_PARENT"
		);
	}
	jint ListPopupWindow::POSITION_PROMPT_ABOVE()
	{
		return getStaticField<jint>(
			"android.widget.ListPopupWindow",
			"POSITION_PROMPT_ABOVE"
		);
	}
	jint ListPopupWindow::POSITION_PROMPT_BELOW()
	{
		return getStaticField<jint>(
			"android.widget.ListPopupWindow",
			"POSITION_PROMPT_BELOW"
		);
	}
	jint ListPopupWindow::WRAP_CONTENT()
	{
		return getStaticField<jint>(
			"android.widget.ListPopupWindow",
			"WRAP_CONTENT"
		);
	}
	
	// QAndroidJniObject forward
	ListPopupWindow::ListPopupWindow(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	ListPopupWindow::ListPopupWindow(android::content::Context arg0)
		: __JniBaseClass(
			"android.widget.ListPopupWindow",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	ListPopupWindow::ListPopupWindow(android::content::Context arg0, __JniBaseClass arg1)
		: __JniBaseClass(
			"android.widget.ListPopupWindow",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	ListPopupWindow::ListPopupWindow(android::content::Context arg0, __JniBaseClass arg1, jint arg2)
		: __JniBaseClass(
			"android.widget.ListPopupWindow",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	ListPopupWindow::ListPopupWindow(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3)
		: __JniBaseClass(
			"android.widget.ListPopupWindow",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	void ListPopupWindow::clearListSelection()
	{
		callMethod<void>(
			"clearListSelection",
			"()V"
		);
	}
	__JniBaseClass ListPopupWindow::createDragToOpenListener(android::view::View arg0)
	{
		return callObjectMethod(
			"createDragToOpenListener",
			"(Landroid/view/View;)Landroid/view/View$OnTouchListener;",
			arg0.object()
		);
	}
	void ListPopupWindow::dismiss()
	{
		callMethod<void>(
			"dismiss",
			"()V"
		);
	}
	android::view::View ListPopupWindow::getAnchorView()
	{
		return callObjectMethod(
			"getAnchorView",
			"()Landroid/view/View;"
		);
	}
	jint ListPopupWindow::getAnimationStyle()
	{
		return callMethod<jint>(
			"getAnimationStyle",
			"()I"
		);
	}
	android::graphics::drawable::Drawable ListPopupWindow::getBackground()
	{
		return callObjectMethod(
			"getBackground",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	jint ListPopupWindow::getHeight()
	{
		return callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	jint ListPopupWindow::getHorizontalOffset()
	{
		return callMethod<jint>(
			"getHorizontalOffset",
			"()I"
		);
	}
	jint ListPopupWindow::getInputMethodMode()
	{
		return callMethod<jint>(
			"getInputMethodMode",
			"()I"
		);
	}
	android::widget::ListView ListPopupWindow::getListView()
	{
		return callObjectMethod(
			"getListView",
			"()Landroid/widget/ListView;"
		);
	}
	jint ListPopupWindow::getPromptPosition()
	{
		return callMethod<jint>(
			"getPromptPosition",
			"()I"
		);
	}
	jobject ListPopupWindow::getSelectedItem()
	{
		return callObjectMethod(
			"getSelectedItem",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jlong ListPopupWindow::getSelectedItemId()
	{
		return callMethod<jlong>(
			"getSelectedItemId",
			"()J"
		);
	}
	jint ListPopupWindow::getSelectedItemPosition()
	{
		return callMethod<jint>(
			"getSelectedItemPosition",
			"()I"
		);
	}
	android::view::View ListPopupWindow::getSelectedView()
	{
		return callObjectMethod(
			"getSelectedView",
			"()Landroid/view/View;"
		);
	}
	jint ListPopupWindow::getSoftInputMode()
	{
		return callMethod<jint>(
			"getSoftInputMode",
			"()I"
		);
	}
	jint ListPopupWindow::getVerticalOffset()
	{
		return callMethod<jint>(
			"getVerticalOffset",
			"()I"
		);
	}
	jint ListPopupWindow::getWidth()
	{
		return callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
	jboolean ListPopupWindow::isInputMethodNotNeeded()
	{
		return callMethod<jboolean>(
			"isInputMethodNotNeeded",
			"()Z"
		);
	}
	jboolean ListPopupWindow::isModal()
	{
		return callMethod<jboolean>(
			"isModal",
			"()Z"
		);
	}
	jboolean ListPopupWindow::isShowing()
	{
		return callMethod<jboolean>(
			"isShowing",
			"()Z"
		);
	}
	jboolean ListPopupWindow::onKeyDown(jint arg0, android::view::KeyEvent arg1)
	{
		return callMethod<jboolean>(
			"onKeyDown",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	jboolean ListPopupWindow::onKeyPreIme(jint arg0, android::view::KeyEvent arg1)
	{
		return callMethod<jboolean>(
			"onKeyPreIme",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	jboolean ListPopupWindow::onKeyUp(jint arg0, android::view::KeyEvent arg1)
	{
		return callMethod<jboolean>(
			"onKeyUp",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	jboolean ListPopupWindow::performItemClick(jint arg0)
	{
		return callMethod<jboolean>(
			"performItemClick",
			"(I)Z",
			arg0
		);
	}
	void ListPopupWindow::postShow()
	{
		callMethod<void>(
			"postShow",
			"()V"
		);
	}
	void ListPopupWindow::setAdapter(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setAdapter",
			"(Landroid/widget/ListAdapter;)V",
			arg0.object()
		);
	}
	void ListPopupWindow::setAnchorView(android::view::View arg0)
	{
		callMethod<void>(
			"setAnchorView",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	void ListPopupWindow::setAnimationStyle(jint arg0)
	{
		callMethod<void>(
			"setAnimationStyle",
			"(I)V",
			arg0
		);
	}
	void ListPopupWindow::setBackgroundDrawable(android::graphics::drawable::Drawable arg0)
	{
		callMethod<void>(
			"setBackgroundDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	void ListPopupWindow::setContentWidth(jint arg0)
	{
		callMethod<void>(
			"setContentWidth",
			"(I)V",
			arg0
		);
	}
	void ListPopupWindow::setDropDownGravity(jint arg0)
	{
		callMethod<void>(
			"setDropDownGravity",
			"(I)V",
			arg0
		);
	}
	void ListPopupWindow::setHeight(jint arg0)
	{
		callMethod<void>(
			"setHeight",
			"(I)V",
			arg0
		);
	}
	void ListPopupWindow::setHorizontalOffset(jint arg0)
	{
		callMethod<void>(
			"setHorizontalOffset",
			"(I)V",
			arg0
		);
	}
	void ListPopupWindow::setInputMethodMode(jint arg0)
	{
		callMethod<void>(
			"setInputMethodMode",
			"(I)V",
			arg0
		);
	}
	void ListPopupWindow::setListSelector(android::graphics::drawable::Drawable arg0)
	{
		callMethod<void>(
			"setListSelector",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	void ListPopupWindow::setModal(jboolean arg0)
	{
		callMethod<void>(
			"setModal",
			"(Z)V",
			arg0
		);
	}
	void ListPopupWindow::setOnDismissListener(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setOnDismissListener",
			"(Landroid/widget/PopupWindow$OnDismissListener;)V",
			arg0.object()
		);
	}
	void ListPopupWindow::setOnItemClickListener(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setOnItemClickListener",
			"(Landroid/widget/AdapterView$OnItemClickListener;)V",
			arg0.object()
		);
	}
	void ListPopupWindow::setOnItemSelectedListener(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setOnItemSelectedListener",
			"(Landroid/widget/AdapterView$OnItemSelectedListener;)V",
			arg0.object()
		);
	}
	void ListPopupWindow::setPromptPosition(jint arg0)
	{
		callMethod<void>(
			"setPromptPosition",
			"(I)V",
			arg0
		);
	}
	void ListPopupWindow::setPromptView(android::view::View arg0)
	{
		callMethod<void>(
			"setPromptView",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	void ListPopupWindow::setSelection(jint arg0)
	{
		callMethod<void>(
			"setSelection",
			"(I)V",
			arg0
		);
	}
	void ListPopupWindow::setSoftInputMode(jint arg0)
	{
		callMethod<void>(
			"setSoftInputMode",
			"(I)V",
			arg0
		);
	}
	void ListPopupWindow::setVerticalOffset(jint arg0)
	{
		callMethod<void>(
			"setVerticalOffset",
			"(I)V",
			arg0
		);
	}
	void ListPopupWindow::setWidth(jint arg0)
	{
		callMethod<void>(
			"setWidth",
			"(I)V",
			arg0
		);
	}
	void ListPopupWindow::setWindowLayoutType(jint arg0)
	{
		callMethod<void>(
			"setWindowLayoutType",
			"(I)V",
			arg0
		);
	}
	void ListPopupWindow::show()
	{
		callMethod<void>(
			"show",
			"()V"
		);
	}
} // namespace android::widget

