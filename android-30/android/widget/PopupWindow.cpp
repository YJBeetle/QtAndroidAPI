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
		return getStaticField<jint>(
			"android.widget.PopupWindow",
			"INPUT_METHOD_FROM_FOCUSABLE"
		);
	}
	jint PopupWindow::INPUT_METHOD_NEEDED()
	{
		return getStaticField<jint>(
			"android.widget.PopupWindow",
			"INPUT_METHOD_NEEDED"
		);
	}
	jint PopupWindow::INPUT_METHOD_NOT_NEEDED()
	{
		return getStaticField<jint>(
			"android.widget.PopupWindow",
			"INPUT_METHOD_NOT_NEEDED"
		);
	}
	
	// QAndroidJniObject forward
	PopupWindow::PopupWindow(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	PopupWindow::PopupWindow()
		: JObject(
			"android.widget.PopupWindow",
			"()V"
		) {}
	PopupWindow::PopupWindow(android::content::Context arg0)
		: JObject(
			"android.widget.PopupWindow",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	PopupWindow::PopupWindow(android::view::View arg0)
		: JObject(
			"android.widget.PopupWindow",
			"(Landroid/view/View;)V",
			arg0.object()
		) {}
	PopupWindow::PopupWindow(android::content::Context arg0, JObject arg1)
		: JObject(
			"android.widget.PopupWindow",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	PopupWindow::PopupWindow(jint arg0, jint arg1)
		: JObject(
			"android.widget.PopupWindow",
			"(II)V",
			arg0,
			arg1
		) {}
	PopupWindow::PopupWindow(android::content::Context arg0, JObject arg1, jint arg2)
		: JObject(
			"android.widget.PopupWindow",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	PopupWindow::PopupWindow(android::view::View arg0, jint arg1, jint arg2)
		: JObject(
			"android.widget.PopupWindow",
			"(Landroid/view/View;II)V",
			arg0.object(),
			arg1,
			arg2
		) {}
	PopupWindow::PopupWindow(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: JObject(
			"android.widget.PopupWindow",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	PopupWindow::PopupWindow(android::view::View arg0, jint arg1, jint arg2, jboolean arg3)
		: JObject(
			"android.widget.PopupWindow",
			"(Landroid/view/View;IIZ)V",
			arg0.object(),
			arg1,
			arg2,
			arg3
		) {}
	
	// Methods
	void PopupWindow::dismiss() const
	{
		callMethod<void>(
			"dismiss",
			"()V"
		);
	}
	jint PopupWindow::getAnimationStyle() const
	{
		return callMethod<jint>(
			"getAnimationStyle",
			"()I"
		);
	}
	android::graphics::drawable::Drawable PopupWindow::getBackground() const
	{
		return callObjectMethod(
			"getBackground",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	android::view::View PopupWindow::getContentView() const
	{
		return callObjectMethod(
			"getContentView",
			"()Landroid/view/View;"
		);
	}
	jfloat PopupWindow::getElevation() const
	{
		return callMethod<jfloat>(
			"getElevation",
			"()F"
		);
	}
	android::transition::Transition PopupWindow::getEnterTransition() const
	{
		return callObjectMethod(
			"getEnterTransition",
			"()Landroid/transition/Transition;"
		);
	}
	android::graphics::Rect PopupWindow::getEpicenterBounds() const
	{
		return callObjectMethod(
			"getEpicenterBounds",
			"()Landroid/graphics/Rect;"
		);
	}
	android::transition::Transition PopupWindow::getExitTransition() const
	{
		return callObjectMethod(
			"getExitTransition",
			"()Landroid/transition/Transition;"
		);
	}
	jint PopupWindow::getHeight() const
	{
		return callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	jint PopupWindow::getInputMethodMode() const
	{
		return callMethod<jint>(
			"getInputMethodMode",
			"()I"
		);
	}
	jint PopupWindow::getMaxAvailableHeight(android::view::View arg0) const
	{
		return callMethod<jint>(
			"getMaxAvailableHeight",
			"(Landroid/view/View;)I",
			arg0.object()
		);
	}
	jint PopupWindow::getMaxAvailableHeight(android::view::View arg0, jint arg1) const
	{
		return callMethod<jint>(
			"getMaxAvailableHeight",
			"(Landroid/view/View;I)I",
			arg0.object(),
			arg1
		);
	}
	jint PopupWindow::getMaxAvailableHeight(android::view::View arg0, jint arg1, jboolean arg2) const
	{
		return callMethod<jint>(
			"getMaxAvailableHeight",
			"(Landroid/view/View;IZ)I",
			arg0.object(),
			arg1,
			arg2
		);
	}
	jboolean PopupWindow::getOverlapAnchor() const
	{
		return callMethod<jboolean>(
			"getOverlapAnchor",
			"()Z"
		);
	}
	jint PopupWindow::getSoftInputMode() const
	{
		return callMethod<jint>(
			"getSoftInputMode",
			"()I"
		);
	}
	jint PopupWindow::getWidth() const
	{
		return callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
	jint PopupWindow::getWindowLayoutType() const
	{
		return callMethod<jint>(
			"getWindowLayoutType",
			"()I"
		);
	}
	jboolean PopupWindow::isAboveAnchor() const
	{
		return callMethod<jboolean>(
			"isAboveAnchor",
			"()Z"
		);
	}
	jboolean PopupWindow::isAttachedInDecor() const
	{
		return callMethod<jboolean>(
			"isAttachedInDecor",
			"()Z"
		);
	}
	jboolean PopupWindow::isClippedToScreen() const
	{
		return callMethod<jboolean>(
			"isClippedToScreen",
			"()Z"
		);
	}
	jboolean PopupWindow::isClippingEnabled() const
	{
		return callMethod<jboolean>(
			"isClippingEnabled",
			"()Z"
		);
	}
	jboolean PopupWindow::isFocusable() const
	{
		return callMethod<jboolean>(
			"isFocusable",
			"()Z"
		);
	}
	jboolean PopupWindow::isLaidOutInScreen() const
	{
		return callMethod<jboolean>(
			"isLaidOutInScreen",
			"()Z"
		);
	}
	jboolean PopupWindow::isOutsideTouchable() const
	{
		return callMethod<jboolean>(
			"isOutsideTouchable",
			"()Z"
		);
	}
	jboolean PopupWindow::isShowing() const
	{
		return callMethod<jboolean>(
			"isShowing",
			"()Z"
		);
	}
	jboolean PopupWindow::isSplitTouchEnabled() const
	{
		return callMethod<jboolean>(
			"isSplitTouchEnabled",
			"()Z"
		);
	}
	jboolean PopupWindow::isTouchModal() const
	{
		return callMethod<jboolean>(
			"isTouchModal",
			"()Z"
		);
	}
	jboolean PopupWindow::isTouchable() const
	{
		return callMethod<jboolean>(
			"isTouchable",
			"()Z"
		);
	}
	void PopupWindow::setAnimationStyle(jint arg0) const
	{
		callMethod<void>(
			"setAnimationStyle",
			"(I)V",
			arg0
		);
	}
	void PopupWindow::setAttachedInDecor(jboolean arg0) const
	{
		callMethod<void>(
			"setAttachedInDecor",
			"(Z)V",
			arg0
		);
	}
	void PopupWindow::setBackgroundDrawable(android::graphics::drawable::Drawable arg0) const
	{
		callMethod<void>(
			"setBackgroundDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	void PopupWindow::setClippingEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setClippingEnabled",
			"(Z)V",
			arg0
		);
	}
	void PopupWindow::setContentView(android::view::View arg0) const
	{
		callMethod<void>(
			"setContentView",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	void PopupWindow::setElevation(jfloat arg0) const
	{
		callMethod<void>(
			"setElevation",
			"(F)V",
			arg0
		);
	}
	void PopupWindow::setEnterTransition(android::transition::Transition arg0) const
	{
		callMethod<void>(
			"setEnterTransition",
			"(Landroid/transition/Transition;)V",
			arg0.object()
		);
	}
	void PopupWindow::setEpicenterBounds(android::graphics::Rect arg0) const
	{
		callMethod<void>(
			"setEpicenterBounds",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		);
	}
	void PopupWindow::setExitTransition(android::transition::Transition arg0) const
	{
		callMethod<void>(
			"setExitTransition",
			"(Landroid/transition/Transition;)V",
			arg0.object()
		);
	}
	void PopupWindow::setFocusable(jboolean arg0) const
	{
		callMethod<void>(
			"setFocusable",
			"(Z)V",
			arg0
		);
	}
	void PopupWindow::setHeight(jint arg0) const
	{
		callMethod<void>(
			"setHeight",
			"(I)V",
			arg0
		);
	}
	void PopupWindow::setIgnoreCheekPress() const
	{
		callMethod<void>(
			"setIgnoreCheekPress",
			"()V"
		);
	}
	void PopupWindow::setInputMethodMode(jint arg0) const
	{
		callMethod<void>(
			"setInputMethodMode",
			"(I)V",
			arg0
		);
	}
	void PopupWindow::setIsClippedToScreen(jboolean arg0) const
	{
		callMethod<void>(
			"setIsClippedToScreen",
			"(Z)V",
			arg0
		);
	}
	void PopupWindow::setIsLaidOutInScreen(jboolean arg0) const
	{
		callMethod<void>(
			"setIsLaidOutInScreen",
			"(Z)V",
			arg0
		);
	}
	void PopupWindow::setOnDismissListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnDismissListener",
			"(Landroid/widget/PopupWindow$OnDismissListener;)V",
			arg0.object()
		);
	}
	void PopupWindow::setOutsideTouchable(jboolean arg0) const
	{
		callMethod<void>(
			"setOutsideTouchable",
			"(Z)V",
			arg0
		);
	}
	void PopupWindow::setOverlapAnchor(jboolean arg0) const
	{
		callMethod<void>(
			"setOverlapAnchor",
			"(Z)V",
			arg0
		);
	}
	void PopupWindow::setSoftInputMode(jint arg0) const
	{
		callMethod<void>(
			"setSoftInputMode",
			"(I)V",
			arg0
		);
	}
	void PopupWindow::setSplitTouchEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setSplitTouchEnabled",
			"(Z)V",
			arg0
		);
	}
	void PopupWindow::setTouchInterceptor(JObject arg0) const
	{
		callMethod<void>(
			"setTouchInterceptor",
			"(Landroid/view/View$OnTouchListener;)V",
			arg0.object()
		);
	}
	void PopupWindow::setTouchModal(jboolean arg0) const
	{
		callMethod<void>(
			"setTouchModal",
			"(Z)V",
			arg0
		);
	}
	void PopupWindow::setTouchable(jboolean arg0) const
	{
		callMethod<void>(
			"setTouchable",
			"(Z)V",
			arg0
		);
	}
	void PopupWindow::setWidth(jint arg0) const
	{
		callMethod<void>(
			"setWidth",
			"(I)V",
			arg0
		);
	}
	void PopupWindow::setWindowLayoutMode(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setWindowLayoutMode",
			"(II)V",
			arg0,
			arg1
		);
	}
	void PopupWindow::setWindowLayoutType(jint arg0) const
	{
		callMethod<void>(
			"setWindowLayoutType",
			"(I)V",
			arg0
		);
	}
	void PopupWindow::showAsDropDown(android::view::View arg0) const
	{
		callMethod<void>(
			"showAsDropDown",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	void PopupWindow::showAsDropDown(android::view::View arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"showAsDropDown",
			"(Landroid/view/View;II)V",
			arg0.object(),
			arg1,
			arg2
		);
	}
	void PopupWindow::showAsDropDown(android::view::View arg0, jint arg1, jint arg2, jint arg3) const
	{
		callMethod<void>(
			"showAsDropDown",
			"(Landroid/view/View;III)V",
			arg0.object(),
			arg1,
			arg2,
			arg3
		);
	}
	void PopupWindow::showAtLocation(android::view::View arg0, jint arg1, jint arg2, jint arg3) const
	{
		callMethod<void>(
			"showAtLocation",
			"(Landroid/view/View;III)V",
			arg0.object(),
			arg1,
			arg2,
			arg3
		);
	}
	void PopupWindow::update() const
	{
		callMethod<void>(
			"update",
			"()V"
		);
	}
	void PopupWindow::update(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"update",
			"(II)V",
			arg0,
			arg1
		);
	}
	void PopupWindow::update(android::view::View arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"update",
			"(Landroid/view/View;II)V",
			arg0.object(),
			arg1,
			arg2
		);
	}
	void PopupWindow::update(jint arg0, jint arg1, jint arg2, jint arg3) const
	{
		callMethod<void>(
			"update",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void PopupWindow::update(android::view::View arg0, jint arg1, jint arg2, jint arg3, jint arg4) const
	{
		callMethod<void>(
			"update",
			"(Landroid/view/View;IIII)V",
			arg0.object(),
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	void PopupWindow::update(jint arg0, jint arg1, jint arg2, jint arg3, jboolean arg4) const
	{
		callMethod<void>(
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

