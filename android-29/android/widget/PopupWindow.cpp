#include "../content/Context.hpp"
#include "../graphics/Rect.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "../transition/Transition.hpp"
#include "../view/View.hpp"
#include "./PopupWindow.hpp"

namespace android::widget
{
	// Fields
	jint PopupWindow::INPUT_METHOD_FROM_FOCUSABLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.PopupWindow",
			"INPUT_METHOD_FROM_FOCUSABLE"
		);
	}
	jint PopupWindow::INPUT_METHOD_NEEDED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.PopupWindow",
			"INPUT_METHOD_NEEDED"
		);
	}
	jint PopupWindow::INPUT_METHOD_NOT_NEEDED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.PopupWindow",
			"INPUT_METHOD_NOT_NEEDED"
		);
	}
	
	PopupWindow::PopupWindow(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	PopupWindow::PopupWindow()
	{
		__thiz = QAndroidJniObject(
			"android.widget.PopupWindow",
			"()V"
		);
	}
	PopupWindow::PopupWindow(android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.PopupWindow",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	PopupWindow::PopupWindow(android::view::View arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.PopupWindow",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
	PopupWindow::PopupWindow(android::content::Context arg0, __JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.PopupWindow",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	PopupWindow::PopupWindow(jint arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.PopupWindow",
			"(II)V",
			arg0,
			arg1
		);
	}
	PopupWindow::PopupWindow(android::content::Context arg0, __JniBaseClass arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.PopupWindow",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	PopupWindow::PopupWindow(android::view::View arg0, jint arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.PopupWindow",
			"(Landroid/view/View;II)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	PopupWindow::PopupWindow(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.widget.PopupWindow",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	PopupWindow::PopupWindow(android::view::View arg0, jint arg1, jint arg2, jboolean arg3)
	{
		__thiz = QAndroidJniObject(
			"android.widget.PopupWindow",
			"(Landroid/view/View;IIZ)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3
		);
	}
	
	// Methods
	void PopupWindow::dismiss()
	{
		__thiz.callMethod<void>(
			"dismiss",
			"()V"
		);
	}
	jint PopupWindow::getAnimationStyle()
	{
		return __thiz.callMethod<jint>(
			"getAnimationStyle",
			"()I"
		);
	}
	QAndroidJniObject PopupWindow::getBackground()
	{
		return __thiz.callObjectMethod(
			"getBackground",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	QAndroidJniObject PopupWindow::getContentView()
	{
		return __thiz.callObjectMethod(
			"getContentView",
			"()Landroid/view/View;"
		);
	}
	jfloat PopupWindow::getElevation()
	{
		return __thiz.callMethod<jfloat>(
			"getElevation",
			"()F"
		);
	}
	QAndroidJniObject PopupWindow::getEnterTransition()
	{
		return __thiz.callObjectMethod(
			"getEnterTransition",
			"()Landroid/transition/Transition;"
		);
	}
	QAndroidJniObject PopupWindow::getEpicenterBounds()
	{
		return __thiz.callObjectMethod(
			"getEpicenterBounds",
			"()Landroid/graphics/Rect;"
		);
	}
	QAndroidJniObject PopupWindow::getExitTransition()
	{
		return __thiz.callObjectMethod(
			"getExitTransition",
			"()Landroid/transition/Transition;"
		);
	}
	jint PopupWindow::getHeight()
	{
		return __thiz.callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	jint PopupWindow::getInputMethodMode()
	{
		return __thiz.callMethod<jint>(
			"getInputMethodMode",
			"()I"
		);
	}
	jint PopupWindow::getMaxAvailableHeight(android::view::View arg0)
	{
		return __thiz.callMethod<jint>(
			"getMaxAvailableHeight",
			"(Landroid/view/View;)I",
			arg0.__jniObject().object()
		);
	}
	jint PopupWindow::getMaxAvailableHeight(android::view::View arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"getMaxAvailableHeight",
			"(Landroid/view/View;I)I",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jint PopupWindow::getMaxAvailableHeight(android::view::View arg0, jint arg1, jboolean arg2)
	{
		return __thiz.callMethod<jint>(
			"getMaxAvailableHeight",
			"(Landroid/view/View;IZ)I",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	jboolean PopupWindow::getOverlapAnchor()
	{
		return __thiz.callMethod<jboolean>(
			"getOverlapAnchor",
			"()Z"
		);
	}
	jint PopupWindow::getSoftInputMode()
	{
		return __thiz.callMethod<jint>(
			"getSoftInputMode",
			"()I"
		);
	}
	jint PopupWindow::getWidth()
	{
		return __thiz.callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
	jint PopupWindow::getWindowLayoutType()
	{
		return __thiz.callMethod<jint>(
			"getWindowLayoutType",
			"()I"
		);
	}
	jboolean PopupWindow::isAboveAnchor()
	{
		return __thiz.callMethod<jboolean>(
			"isAboveAnchor",
			"()Z"
		);
	}
	jboolean PopupWindow::isAttachedInDecor()
	{
		return __thiz.callMethod<jboolean>(
			"isAttachedInDecor",
			"()Z"
		);
	}
	jboolean PopupWindow::isClippedToScreen()
	{
		return __thiz.callMethod<jboolean>(
			"isClippedToScreen",
			"()Z"
		);
	}
	jboolean PopupWindow::isClippingEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isClippingEnabled",
			"()Z"
		);
	}
	jboolean PopupWindow::isFocusable()
	{
		return __thiz.callMethod<jboolean>(
			"isFocusable",
			"()Z"
		);
	}
	jboolean PopupWindow::isLaidOutInScreen()
	{
		return __thiz.callMethod<jboolean>(
			"isLaidOutInScreen",
			"()Z"
		);
	}
	jboolean PopupWindow::isOutsideTouchable()
	{
		return __thiz.callMethod<jboolean>(
			"isOutsideTouchable",
			"()Z"
		);
	}
	jboolean PopupWindow::isShowing()
	{
		return __thiz.callMethod<jboolean>(
			"isShowing",
			"()Z"
		);
	}
	jboolean PopupWindow::isSplitTouchEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isSplitTouchEnabled",
			"()Z"
		);
	}
	jboolean PopupWindow::isTouchModal()
	{
		return __thiz.callMethod<jboolean>(
			"isTouchModal",
			"()Z"
		);
	}
	jboolean PopupWindow::isTouchable()
	{
		return __thiz.callMethod<jboolean>(
			"isTouchable",
			"()Z"
		);
	}
	void PopupWindow::setAnimationStyle(jint arg0)
	{
		__thiz.callMethod<void>(
			"setAnimationStyle",
			"(I)V",
			arg0
		);
	}
	void PopupWindow::setAttachedInDecor(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setAttachedInDecor",
			"(Z)V",
			arg0
		);
	}
	void PopupWindow::setBackgroundDrawable(android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setBackgroundDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
	void PopupWindow::setClippingEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setClippingEnabled",
			"(Z)V",
			arg0
		);
	}
	void PopupWindow::setContentView(android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"setContentView",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
	void PopupWindow::setElevation(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setElevation",
			"(F)V",
			arg0
		);
	}
	void PopupWindow::setEnterTransition(android::transition::Transition arg0)
	{
		__thiz.callMethod<void>(
			"setEnterTransition",
			"(Landroid/transition/Transition;)V",
			arg0.__jniObject().object()
		);
	}
	void PopupWindow::setEpicenterBounds(android::graphics::Rect arg0)
	{
		__thiz.callMethod<void>(
			"setEpicenterBounds",
			"(Landroid/graphics/Rect;)V",
			arg0.__jniObject().object()
		);
	}
	void PopupWindow::setExitTransition(android::transition::Transition arg0)
	{
		__thiz.callMethod<void>(
			"setExitTransition",
			"(Landroid/transition/Transition;)V",
			arg0.__jniObject().object()
		);
	}
	void PopupWindow::setFocusable(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setFocusable",
			"(Z)V",
			arg0
		);
	}
	void PopupWindow::setHeight(jint arg0)
	{
		__thiz.callMethod<void>(
			"setHeight",
			"(I)V",
			arg0
		);
	}
	void PopupWindow::setIgnoreCheekPress()
	{
		__thiz.callMethod<void>(
			"setIgnoreCheekPress",
			"()V"
		);
	}
	void PopupWindow::setInputMethodMode(jint arg0)
	{
		__thiz.callMethod<void>(
			"setInputMethodMode",
			"(I)V",
			arg0
		);
	}
	void PopupWindow::setIsClippedToScreen(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setIsClippedToScreen",
			"(Z)V",
			arg0
		);
	}
	void PopupWindow::setIsLaidOutInScreen(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setIsLaidOutInScreen",
			"(Z)V",
			arg0
		);
	}
	void PopupWindow::setOnDismissListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnDismissListener",
			"(Landroid/widget/PopupWindow$OnDismissListener;)V",
			arg0.__jniObject().object()
		);
	}
	void PopupWindow::setOutsideTouchable(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setOutsideTouchable",
			"(Z)V",
			arg0
		);
	}
	void PopupWindow::setOverlapAnchor(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setOverlapAnchor",
			"(Z)V",
			arg0
		);
	}
	void PopupWindow::setSoftInputMode(jint arg0)
	{
		__thiz.callMethod<void>(
			"setSoftInputMode",
			"(I)V",
			arg0
		);
	}
	void PopupWindow::setSplitTouchEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setSplitTouchEnabled",
			"(Z)V",
			arg0
		);
	}
	void PopupWindow::setTouchInterceptor(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setTouchInterceptor",
			"(Landroid/view/View$OnTouchListener;)V",
			arg0.__jniObject().object()
		);
	}
	void PopupWindow::setTouchModal(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setTouchModal",
			"(Z)V",
			arg0
		);
	}
	void PopupWindow::setTouchable(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setTouchable",
			"(Z)V",
			arg0
		);
	}
	void PopupWindow::setWidth(jint arg0)
	{
		__thiz.callMethod<void>(
			"setWidth",
			"(I)V",
			arg0
		);
	}
	void PopupWindow::setWindowLayoutMode(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setWindowLayoutMode",
			"(II)V",
			arg0,
			arg1
		);
	}
	void PopupWindow::setWindowLayoutType(jint arg0)
	{
		__thiz.callMethod<void>(
			"setWindowLayoutType",
			"(I)V",
			arg0
		);
	}
	void PopupWindow::showAsDropDown(android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"showAsDropDown",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
	void PopupWindow::showAsDropDown(android::view::View arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"showAsDropDown",
			"(Landroid/view/View;II)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void PopupWindow::showAsDropDown(android::view::View arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"showAsDropDown",
			"(Landroid/view/View;III)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3
		);
	}
	void PopupWindow::showAtLocation(android::view::View arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"showAtLocation",
			"(Landroid/view/View;III)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3
		);
	}
	void PopupWindow::update()
	{
		__thiz.callMethod<void>(
			"update",
			"()V"
		);
	}
	void PopupWindow::update(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"update",
			"(II)V",
			arg0,
			arg1
		);
	}
	void PopupWindow::update(android::view::View arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"update",
			"(Landroid/view/View;II)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void PopupWindow::update(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"update",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void PopupWindow::update(android::view::View arg0, jint arg1, jint arg2, jint arg3, jint arg4)
	{
		__thiz.callMethod<void>(
			"update",
			"(Landroid/view/View;IIII)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	void PopupWindow::update(jint arg0, jint arg1, jint arg2, jint arg3, jboolean arg4)
	{
		__thiz.callMethod<void>(
			"update",
			"(IIIIZ)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
} // namespace android::widget

