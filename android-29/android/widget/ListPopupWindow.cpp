#include "../content/Context.hpp"
#include "../graphics/Rect.hpp"
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
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.ListPopupWindow",
			"INPUT_METHOD_FROM_FOCUSABLE"
		);
	}
	jint ListPopupWindow::INPUT_METHOD_NEEDED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.ListPopupWindow",
			"INPUT_METHOD_NEEDED"
		);
	}
	jint ListPopupWindow::INPUT_METHOD_NOT_NEEDED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.ListPopupWindow",
			"INPUT_METHOD_NOT_NEEDED"
		);
	}
	jint ListPopupWindow::MATCH_PARENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.ListPopupWindow",
			"MATCH_PARENT"
		);
	}
	jint ListPopupWindow::POSITION_PROMPT_ABOVE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.ListPopupWindow",
			"POSITION_PROMPT_ABOVE"
		);
	}
	jint ListPopupWindow::POSITION_PROMPT_BELOW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.ListPopupWindow",
			"POSITION_PROMPT_BELOW"
		);
	}
	jint ListPopupWindow::WRAP_CONTENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.ListPopupWindow",
			"WRAP_CONTENT"
		);
	}
	
	ListPopupWindow::ListPopupWindow(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ListPopupWindow::ListPopupWindow(android::content::Context &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ListPopupWindow",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	ListPopupWindow::ListPopupWindow(android::content::Context &arg0, __JniBaseClass &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ListPopupWindow",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	ListPopupWindow::ListPopupWindow(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ListPopupWindow",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	ListPopupWindow::ListPopupWindow(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2, jint &arg3)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ListPopupWindow",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	
	// Methods
	void ListPopupWindow::clearListSelection()
	{
		__thiz.callMethod<void>(
			"clearListSelection",
			"()V"
		);
	}
	QAndroidJniObject ListPopupWindow::createDragToOpenListener(android::view::View arg0)
	{
		return __thiz.callObjectMethod(
			"createDragToOpenListener",
			"(Landroid/view/View;)Landroid/view/View$OnTouchListener;",
			arg0.__jniObject().object()
		);
	}
	void ListPopupWindow::dismiss()
	{
		__thiz.callMethod<void>(
			"dismiss",
			"()V"
		);
	}
	QAndroidJniObject ListPopupWindow::getAnchorView()
	{
		return __thiz.callObjectMethod(
			"getAnchorView",
			"()Landroid/view/View;"
		);
	}
	jint ListPopupWindow::getAnimationStyle()
	{
		return __thiz.callMethod<jint>(
			"getAnimationStyle",
			"()I"
		);
	}
	QAndroidJniObject ListPopupWindow::getBackground()
	{
		return __thiz.callObjectMethod(
			"getBackground",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	QAndroidJniObject ListPopupWindow::getEpicenterBounds()
	{
		return __thiz.callObjectMethod(
			"getEpicenterBounds",
			"()Landroid/graphics/Rect;"
		);
	}
	jint ListPopupWindow::getHeight()
	{
		return __thiz.callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	jint ListPopupWindow::getHorizontalOffset()
	{
		return __thiz.callMethod<jint>(
			"getHorizontalOffset",
			"()I"
		);
	}
	jint ListPopupWindow::getInputMethodMode()
	{
		return __thiz.callMethod<jint>(
			"getInputMethodMode",
			"()I"
		);
	}
	QAndroidJniObject ListPopupWindow::getListView()
	{
		return __thiz.callObjectMethod(
			"getListView",
			"()Landroid/widget/ListView;"
		);
	}
	jint ListPopupWindow::getPromptPosition()
	{
		return __thiz.callMethod<jint>(
			"getPromptPosition",
			"()I"
		);
	}
	jobject ListPopupWindow::getSelectedItem()
	{
		return __thiz.callObjectMethod(
			"getSelectedItem",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jlong ListPopupWindow::getSelectedItemId()
	{
		return __thiz.callMethod<jlong>(
			"getSelectedItemId",
			"()J"
		);
	}
	jint ListPopupWindow::getSelectedItemPosition()
	{
		return __thiz.callMethod<jint>(
			"getSelectedItemPosition",
			"()I"
		);
	}
	QAndroidJniObject ListPopupWindow::getSelectedView()
	{
		return __thiz.callObjectMethod(
			"getSelectedView",
			"()Landroid/view/View;"
		);
	}
	jint ListPopupWindow::getSoftInputMode()
	{
		return __thiz.callMethod<jint>(
			"getSoftInputMode",
			"()I"
		);
	}
	jint ListPopupWindow::getVerticalOffset()
	{
		return __thiz.callMethod<jint>(
			"getVerticalOffset",
			"()I"
		);
	}
	jint ListPopupWindow::getWidth()
	{
		return __thiz.callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
	jboolean ListPopupWindow::isInputMethodNotNeeded()
	{
		return __thiz.callMethod<jboolean>(
			"isInputMethodNotNeeded",
			"()Z"
		);
	}
	jboolean ListPopupWindow::isModal()
	{
		return __thiz.callMethod<jboolean>(
			"isModal",
			"()Z"
		);
	}
	jboolean ListPopupWindow::isShowing()
	{
		return __thiz.callMethod<jboolean>(
			"isShowing",
			"()Z"
		);
	}
	jboolean ListPopupWindow::onKeyDown(jint arg0, android::view::KeyEvent arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyDown",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean ListPopupWindow::onKeyPreIme(jint arg0, android::view::KeyEvent arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyPreIme",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean ListPopupWindow::onKeyUp(jint arg0, android::view::KeyEvent arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyUp",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean ListPopupWindow::performItemClick(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"performItemClick",
			"(I)Z",
			arg0
		);
	}
	void ListPopupWindow::postShow()
	{
		__thiz.callMethod<void>(
			"postShow",
			"()V"
		);
	}
	void ListPopupWindow::setAdapter(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setAdapter",
			"(Landroid/widget/ListAdapter;)V",
			arg0.__jniObject().object()
		);
	}
	void ListPopupWindow::setAnchorView(android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"setAnchorView",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
	void ListPopupWindow::setAnimationStyle(jint arg0)
	{
		__thiz.callMethod<void>(
			"setAnimationStyle",
			"(I)V",
			arg0
		);
	}
	void ListPopupWindow::setBackgroundDrawable(android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setBackgroundDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
	void ListPopupWindow::setContentWidth(jint arg0)
	{
		__thiz.callMethod<void>(
			"setContentWidth",
			"(I)V",
			arg0
		);
	}
	void ListPopupWindow::setDropDownGravity(jint arg0)
	{
		__thiz.callMethod<void>(
			"setDropDownGravity",
			"(I)V",
			arg0
		);
	}
	void ListPopupWindow::setEpicenterBounds(android::graphics::Rect arg0)
	{
		__thiz.callMethod<void>(
			"setEpicenterBounds",
			"(Landroid/graphics/Rect;)V",
			arg0.__jniObject().object()
		);
	}
	void ListPopupWindow::setHeight(jint arg0)
	{
		__thiz.callMethod<void>(
			"setHeight",
			"(I)V",
			arg0
		);
	}
	void ListPopupWindow::setHorizontalOffset(jint arg0)
	{
		__thiz.callMethod<void>(
			"setHorizontalOffset",
			"(I)V",
			arg0
		);
	}
	void ListPopupWindow::setInputMethodMode(jint arg0)
	{
		__thiz.callMethod<void>(
			"setInputMethodMode",
			"(I)V",
			arg0
		);
	}
	void ListPopupWindow::setListSelector(android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setListSelector",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
	void ListPopupWindow::setModal(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setModal",
			"(Z)V",
			arg0
		);
	}
	void ListPopupWindow::setOnDismissListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnDismissListener",
			"(Landroid/widget/PopupWindow$OnDismissListener;)V",
			arg0.__jniObject().object()
		);
	}
	void ListPopupWindow::setOnItemClickListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnItemClickListener",
			"(Landroid/widget/AdapterView$OnItemClickListener;)V",
			arg0.__jniObject().object()
		);
	}
	void ListPopupWindow::setOnItemSelectedListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnItemSelectedListener",
			"(Landroid/widget/AdapterView$OnItemSelectedListener;)V",
			arg0.__jniObject().object()
		);
	}
	void ListPopupWindow::setPromptPosition(jint arg0)
	{
		__thiz.callMethod<void>(
			"setPromptPosition",
			"(I)V",
			arg0
		);
	}
	void ListPopupWindow::setPromptView(android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"setPromptView",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
	void ListPopupWindow::setSelection(jint arg0)
	{
		__thiz.callMethod<void>(
			"setSelection",
			"(I)V",
			arg0
		);
	}
	void ListPopupWindow::setSoftInputMode(jint arg0)
	{
		__thiz.callMethod<void>(
			"setSoftInputMode",
			"(I)V",
			arg0
		);
	}
	void ListPopupWindow::setVerticalOffset(jint arg0)
	{
		__thiz.callMethod<void>(
			"setVerticalOffset",
			"(I)V",
			arg0
		);
	}
	void ListPopupWindow::setWidth(jint arg0)
	{
		__thiz.callMethod<void>(
			"setWidth",
			"(I)V",
			arg0
		);
	}
	void ListPopupWindow::setWindowLayoutType(jint arg0)
	{
		__thiz.callMethod<void>(
			"setWindowLayoutType",
			"(I)V",
			arg0
		);
	}
	void ListPopupWindow::show()
	{
		__thiz.callMethod<void>(
			"show",
			"()V"
		);
	}
} // namespace android::widget

