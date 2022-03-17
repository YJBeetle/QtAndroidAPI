#pragma once

#include "../content/Context.def.hpp"
#include "../graphics/drawable/Drawable.def.hpp"
#include "../transition/Transition.def.hpp"
#include "../view/View.def.hpp"
#include "./PopupWindow.def.hpp"

namespace android::widget
{
	// Fields
	inline jint PopupWindow::INPUT_METHOD_FROM_FOCUSABLE()
	{
		return getStaticField<jint>(
			"android.widget.PopupWindow",
			"INPUT_METHOD_FROM_FOCUSABLE"
		);
	}
	inline jint PopupWindow::INPUT_METHOD_NEEDED()
	{
		return getStaticField<jint>(
			"android.widget.PopupWindow",
			"INPUT_METHOD_NEEDED"
		);
	}
	inline jint PopupWindow::INPUT_METHOD_NOT_NEEDED()
	{
		return getStaticField<jint>(
			"android.widget.PopupWindow",
			"INPUT_METHOD_NOT_NEEDED"
		);
	}
	
	// Constructors
	inline PopupWindow::PopupWindow()
		: JObject(
			"android.widget.PopupWindow",
			"()V"
		) {}
	inline PopupWindow::PopupWindow(android::content::Context arg0)
		: JObject(
			"android.widget.PopupWindow",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	inline PopupWindow::PopupWindow(android::view::View arg0)
		: JObject(
			"android.widget.PopupWindow",
			"(Landroid/view/View;)V",
			arg0.object()
		) {}
	inline PopupWindow::PopupWindow(android::content::Context arg0, JObject arg1)
		: JObject(
			"android.widget.PopupWindow",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline PopupWindow::PopupWindow(jint arg0, jint arg1)
		: JObject(
			"android.widget.PopupWindow",
			"(II)V",
			arg0,
			arg1
		) {}
	inline PopupWindow::PopupWindow(android::content::Context arg0, JObject arg1, jint arg2)
		: JObject(
			"android.widget.PopupWindow",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	inline PopupWindow::PopupWindow(android::view::View arg0, jint arg1, jint arg2)
		: JObject(
			"android.widget.PopupWindow",
			"(Landroid/view/View;II)V",
			arg0.object(),
			arg1,
			arg2
		) {}
	inline PopupWindow::PopupWindow(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: JObject(
			"android.widget.PopupWindow",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	inline PopupWindow::PopupWindow(android::view::View arg0, jint arg1, jint arg2, jboolean arg3)
		: JObject(
			"android.widget.PopupWindow",
			"(Landroid/view/View;IIZ)V",
			arg0.object(),
			arg1,
			arg2,
			arg3
		) {}
	
	// Methods
	inline void PopupWindow::dismiss() const
	{
		callMethod<void>(
			"dismiss",
			"()V"
		);
	}
	inline jint PopupWindow::getAnimationStyle() const
	{
		return callMethod<jint>(
			"getAnimationStyle",
			"()I"
		);
	}
	inline android::graphics::drawable::Drawable PopupWindow::getBackground() const
	{
		return callObjectMethod(
			"getBackground",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	inline android::view::View PopupWindow::getContentView() const
	{
		return callObjectMethod(
			"getContentView",
			"()Landroid/view/View;"
		);
	}
	inline jfloat PopupWindow::getElevation() const
	{
		return callMethod<jfloat>(
			"getElevation",
			"()F"
		);
	}
	inline android::transition::Transition PopupWindow::getEnterTransition() const
	{
		return callObjectMethod(
			"getEnterTransition",
			"()Landroid/transition/Transition;"
		);
	}
	inline android::transition::Transition PopupWindow::getExitTransition() const
	{
		return callObjectMethod(
			"getExitTransition",
			"()Landroid/transition/Transition;"
		);
	}
	inline jint PopupWindow::getHeight() const
	{
		return callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	inline jint PopupWindow::getInputMethodMode() const
	{
		return callMethod<jint>(
			"getInputMethodMode",
			"()I"
		);
	}
	inline jint PopupWindow::getMaxAvailableHeight(android::view::View arg0) const
	{
		return callMethod<jint>(
			"getMaxAvailableHeight",
			"(Landroid/view/View;)I",
			arg0.object()
		);
	}
	inline jint PopupWindow::getMaxAvailableHeight(android::view::View arg0, jint arg1) const
	{
		return callMethod<jint>(
			"getMaxAvailableHeight",
			"(Landroid/view/View;I)I",
			arg0.object(),
			arg1
		);
	}
	inline jint PopupWindow::getMaxAvailableHeight(android::view::View arg0, jint arg1, jboolean arg2) const
	{
		return callMethod<jint>(
			"getMaxAvailableHeight",
			"(Landroid/view/View;IZ)I",
			arg0.object(),
			arg1,
			arg2
		);
	}
	inline jboolean PopupWindow::getOverlapAnchor() const
	{
		return callMethod<jboolean>(
			"getOverlapAnchor",
			"()Z"
		);
	}
	inline jint PopupWindow::getSoftInputMode() const
	{
		return callMethod<jint>(
			"getSoftInputMode",
			"()I"
		);
	}
	inline jint PopupWindow::getWidth() const
	{
		return callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
	inline jint PopupWindow::getWindowLayoutType() const
	{
		return callMethod<jint>(
			"getWindowLayoutType",
			"()I"
		);
	}
	inline jboolean PopupWindow::isAboveAnchor() const
	{
		return callMethod<jboolean>(
			"isAboveAnchor",
			"()Z"
		);
	}
	inline jboolean PopupWindow::isAttachedInDecor() const
	{
		return callMethod<jboolean>(
			"isAttachedInDecor",
			"()Z"
		);
	}
	inline jboolean PopupWindow::isClippingEnabled() const
	{
		return callMethod<jboolean>(
			"isClippingEnabled",
			"()Z"
		);
	}
	inline jboolean PopupWindow::isFocusable() const
	{
		return callMethod<jboolean>(
			"isFocusable",
			"()Z"
		);
	}
	inline jboolean PopupWindow::isOutsideTouchable() const
	{
		return callMethod<jboolean>(
			"isOutsideTouchable",
			"()Z"
		);
	}
	inline jboolean PopupWindow::isShowing() const
	{
		return callMethod<jboolean>(
			"isShowing",
			"()Z"
		);
	}
	inline jboolean PopupWindow::isSplitTouchEnabled() const
	{
		return callMethod<jboolean>(
			"isSplitTouchEnabled",
			"()Z"
		);
	}
	inline jboolean PopupWindow::isTouchable() const
	{
		return callMethod<jboolean>(
			"isTouchable",
			"()Z"
		);
	}
	inline void PopupWindow::setAnimationStyle(jint arg0) const
	{
		callMethod<void>(
			"setAnimationStyle",
			"(I)V",
			arg0
		);
	}
	inline void PopupWindow::setAttachedInDecor(jboolean arg0) const
	{
		callMethod<void>(
			"setAttachedInDecor",
			"(Z)V",
			arg0
		);
	}
	inline void PopupWindow::setBackgroundDrawable(android::graphics::drawable::Drawable arg0) const
	{
		callMethod<void>(
			"setBackgroundDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	inline void PopupWindow::setClippingEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setClippingEnabled",
			"(Z)V",
			arg0
		);
	}
	inline void PopupWindow::setContentView(android::view::View arg0) const
	{
		callMethod<void>(
			"setContentView",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	inline void PopupWindow::setElevation(jfloat arg0) const
	{
		callMethod<void>(
			"setElevation",
			"(F)V",
			arg0
		);
	}
	inline void PopupWindow::setEnterTransition(android::transition::Transition arg0) const
	{
		callMethod<void>(
			"setEnterTransition",
			"(Landroid/transition/Transition;)V",
			arg0.object()
		);
	}
	inline void PopupWindow::setExitTransition(android::transition::Transition arg0) const
	{
		callMethod<void>(
			"setExitTransition",
			"(Landroid/transition/Transition;)V",
			arg0.object()
		);
	}
	inline void PopupWindow::setFocusable(jboolean arg0) const
	{
		callMethod<void>(
			"setFocusable",
			"(Z)V",
			arg0
		);
	}
	inline void PopupWindow::setHeight(jint arg0) const
	{
		callMethod<void>(
			"setHeight",
			"(I)V",
			arg0
		);
	}
	inline void PopupWindow::setIgnoreCheekPress() const
	{
		callMethod<void>(
			"setIgnoreCheekPress",
			"()V"
		);
	}
	inline void PopupWindow::setInputMethodMode(jint arg0) const
	{
		callMethod<void>(
			"setInputMethodMode",
			"(I)V",
			arg0
		);
	}
	inline void PopupWindow::setOnDismissListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnDismissListener",
			"(Landroid/widget/PopupWindow$OnDismissListener;)V",
			arg0.object()
		);
	}
	inline void PopupWindow::setOutsideTouchable(jboolean arg0) const
	{
		callMethod<void>(
			"setOutsideTouchable",
			"(Z)V",
			arg0
		);
	}
	inline void PopupWindow::setOverlapAnchor(jboolean arg0) const
	{
		callMethod<void>(
			"setOverlapAnchor",
			"(Z)V",
			arg0
		);
	}
	inline void PopupWindow::setSoftInputMode(jint arg0) const
	{
		callMethod<void>(
			"setSoftInputMode",
			"(I)V",
			arg0
		);
	}
	inline void PopupWindow::setSplitTouchEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setSplitTouchEnabled",
			"(Z)V",
			arg0
		);
	}
	inline void PopupWindow::setTouchInterceptor(JObject arg0) const
	{
		callMethod<void>(
			"setTouchInterceptor",
			"(Landroid/view/View$OnTouchListener;)V",
			arg0.object()
		);
	}
	inline void PopupWindow::setTouchable(jboolean arg0) const
	{
		callMethod<void>(
			"setTouchable",
			"(Z)V",
			arg0
		);
	}
	inline void PopupWindow::setWidth(jint arg0) const
	{
		callMethod<void>(
			"setWidth",
			"(I)V",
			arg0
		);
	}
	inline void PopupWindow::setWindowLayoutMode(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setWindowLayoutMode",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void PopupWindow::setWindowLayoutType(jint arg0) const
	{
		callMethod<void>(
			"setWindowLayoutType",
			"(I)V",
			arg0
		);
	}
	inline void PopupWindow::showAsDropDown(android::view::View arg0) const
	{
		callMethod<void>(
			"showAsDropDown",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	inline void PopupWindow::showAsDropDown(android::view::View arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"showAsDropDown",
			"(Landroid/view/View;II)V",
			arg0.object(),
			arg1,
			arg2
		);
	}
	inline void PopupWindow::showAsDropDown(android::view::View arg0, jint arg1, jint arg2, jint arg3) const
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
	inline void PopupWindow::showAtLocation(android::view::View arg0, jint arg1, jint arg2, jint arg3) const
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
	inline void PopupWindow::update() const
	{
		callMethod<void>(
			"update",
			"()V"
		);
	}
	inline void PopupWindow::update(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"update",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void PopupWindow::update(android::view::View arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"update",
			"(Landroid/view/View;II)V",
			arg0.object(),
			arg1,
			arg2
		);
	}
	inline void PopupWindow::update(jint arg0, jint arg1, jint arg2, jint arg3) const
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
	inline void PopupWindow::update(android::view::View arg0, jint arg1, jint arg2, jint arg3, jint arg4) const
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
	inline void PopupWindow::update(jint arg0, jint arg1, jint arg2, jint arg3, jboolean arg4) const
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

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::widget;
#endif
