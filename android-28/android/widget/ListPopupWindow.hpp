#pragma once

#include "../content/Context.def.hpp"
#include "../graphics/drawable/Drawable.def.hpp"
#include "../view/KeyEvent.def.hpp"
#include "../view/View.def.hpp"
#include "./ListView.def.hpp"
#include "../../JObject.hpp"
#include "./ListPopupWindow.def.hpp"

namespace android::widget
{
	// Fields
	inline jint ListPopupWindow::INPUT_METHOD_FROM_FOCUSABLE()
	{
		return getStaticField<jint>(
			"android.widget.ListPopupWindow",
			"INPUT_METHOD_FROM_FOCUSABLE"
		);
	}
	inline jint ListPopupWindow::INPUT_METHOD_NEEDED()
	{
		return getStaticField<jint>(
			"android.widget.ListPopupWindow",
			"INPUT_METHOD_NEEDED"
		);
	}
	inline jint ListPopupWindow::INPUT_METHOD_NOT_NEEDED()
	{
		return getStaticField<jint>(
			"android.widget.ListPopupWindow",
			"INPUT_METHOD_NOT_NEEDED"
		);
	}
	inline jint ListPopupWindow::MATCH_PARENT()
	{
		return getStaticField<jint>(
			"android.widget.ListPopupWindow",
			"MATCH_PARENT"
		);
	}
	inline jint ListPopupWindow::POSITION_PROMPT_ABOVE()
	{
		return getStaticField<jint>(
			"android.widget.ListPopupWindow",
			"POSITION_PROMPT_ABOVE"
		);
	}
	inline jint ListPopupWindow::POSITION_PROMPT_BELOW()
	{
		return getStaticField<jint>(
			"android.widget.ListPopupWindow",
			"POSITION_PROMPT_BELOW"
		);
	}
	inline jint ListPopupWindow::WRAP_CONTENT()
	{
		return getStaticField<jint>(
			"android.widget.ListPopupWindow",
			"WRAP_CONTENT"
		);
	}
	
	// Constructors
	inline ListPopupWindow::ListPopupWindow(android::content::Context arg0)
		: JObject(
			"android.widget.ListPopupWindow",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	inline ListPopupWindow::ListPopupWindow(android::content::Context arg0, JObject arg1)
		: JObject(
			"android.widget.ListPopupWindow",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline ListPopupWindow::ListPopupWindow(android::content::Context arg0, JObject arg1, jint arg2)
		: JObject(
			"android.widget.ListPopupWindow",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	inline ListPopupWindow::ListPopupWindow(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: JObject(
			"android.widget.ListPopupWindow",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	inline void ListPopupWindow::clearListSelection() const
	{
		callMethod<void>(
			"clearListSelection",
			"()V"
		);
	}
	inline JObject ListPopupWindow::createDragToOpenListener(android::view::View arg0) const
	{
		return callObjectMethod(
			"createDragToOpenListener",
			"(Landroid/view/View;)Landroid/view/View$OnTouchListener;",
			arg0.object()
		);
	}
	inline void ListPopupWindow::dismiss() const
	{
		callMethod<void>(
			"dismiss",
			"()V"
		);
	}
	inline android::view::View ListPopupWindow::getAnchorView() const
	{
		return callObjectMethod(
			"getAnchorView",
			"()Landroid/view/View;"
		);
	}
	inline jint ListPopupWindow::getAnimationStyle() const
	{
		return callMethod<jint>(
			"getAnimationStyle",
			"()I"
		);
	}
	inline android::graphics::drawable::Drawable ListPopupWindow::getBackground() const
	{
		return callObjectMethod(
			"getBackground",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	inline jint ListPopupWindow::getHeight() const
	{
		return callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	inline jint ListPopupWindow::getHorizontalOffset() const
	{
		return callMethod<jint>(
			"getHorizontalOffset",
			"()I"
		);
	}
	inline jint ListPopupWindow::getInputMethodMode() const
	{
		return callMethod<jint>(
			"getInputMethodMode",
			"()I"
		);
	}
	inline android::widget::ListView ListPopupWindow::getListView() const
	{
		return callObjectMethod(
			"getListView",
			"()Landroid/widget/ListView;"
		);
	}
	inline jint ListPopupWindow::getPromptPosition() const
	{
		return callMethod<jint>(
			"getPromptPosition",
			"()I"
		);
	}
	inline JObject ListPopupWindow::getSelectedItem() const
	{
		return callObjectMethod(
			"getSelectedItem",
			"()Ljava/lang/Object;"
		);
	}
	inline jlong ListPopupWindow::getSelectedItemId() const
	{
		return callMethod<jlong>(
			"getSelectedItemId",
			"()J"
		);
	}
	inline jint ListPopupWindow::getSelectedItemPosition() const
	{
		return callMethod<jint>(
			"getSelectedItemPosition",
			"()I"
		);
	}
	inline android::view::View ListPopupWindow::getSelectedView() const
	{
		return callObjectMethod(
			"getSelectedView",
			"()Landroid/view/View;"
		);
	}
	inline jint ListPopupWindow::getSoftInputMode() const
	{
		return callMethod<jint>(
			"getSoftInputMode",
			"()I"
		);
	}
	inline jint ListPopupWindow::getVerticalOffset() const
	{
		return callMethod<jint>(
			"getVerticalOffset",
			"()I"
		);
	}
	inline jint ListPopupWindow::getWidth() const
	{
		return callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
	inline jboolean ListPopupWindow::isInputMethodNotNeeded() const
	{
		return callMethod<jboolean>(
			"isInputMethodNotNeeded",
			"()Z"
		);
	}
	inline jboolean ListPopupWindow::isModal() const
	{
		return callMethod<jboolean>(
			"isModal",
			"()Z"
		);
	}
	inline jboolean ListPopupWindow::isShowing() const
	{
		return callMethod<jboolean>(
			"isShowing",
			"()Z"
		);
	}
	inline jboolean ListPopupWindow::onKeyDown(jint arg0, android::view::KeyEvent arg1) const
	{
		return callMethod<jboolean>(
			"onKeyDown",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	inline jboolean ListPopupWindow::onKeyPreIme(jint arg0, android::view::KeyEvent arg1) const
	{
		return callMethod<jboolean>(
			"onKeyPreIme",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	inline jboolean ListPopupWindow::onKeyUp(jint arg0, android::view::KeyEvent arg1) const
	{
		return callMethod<jboolean>(
			"onKeyUp",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	inline jboolean ListPopupWindow::performItemClick(jint arg0) const
	{
		return callMethod<jboolean>(
			"performItemClick",
			"(I)Z",
			arg0
		);
	}
	inline void ListPopupWindow::postShow() const
	{
		callMethod<void>(
			"postShow",
			"()V"
		);
	}
	inline void ListPopupWindow::setAdapter(JObject arg0) const
	{
		callMethod<void>(
			"setAdapter",
			"(Landroid/widget/ListAdapter;)V",
			arg0.object()
		);
	}
	inline void ListPopupWindow::setAnchorView(android::view::View arg0) const
	{
		callMethod<void>(
			"setAnchorView",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	inline void ListPopupWindow::setAnimationStyle(jint arg0) const
	{
		callMethod<void>(
			"setAnimationStyle",
			"(I)V",
			arg0
		);
	}
	inline void ListPopupWindow::setBackgroundDrawable(android::graphics::drawable::Drawable arg0) const
	{
		callMethod<void>(
			"setBackgroundDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	inline void ListPopupWindow::setContentWidth(jint arg0) const
	{
		callMethod<void>(
			"setContentWidth",
			"(I)V",
			arg0
		);
	}
	inline void ListPopupWindow::setDropDownGravity(jint arg0) const
	{
		callMethod<void>(
			"setDropDownGravity",
			"(I)V",
			arg0
		);
	}
	inline void ListPopupWindow::setHeight(jint arg0) const
	{
		callMethod<void>(
			"setHeight",
			"(I)V",
			arg0
		);
	}
	inline void ListPopupWindow::setHorizontalOffset(jint arg0) const
	{
		callMethod<void>(
			"setHorizontalOffset",
			"(I)V",
			arg0
		);
	}
	inline void ListPopupWindow::setInputMethodMode(jint arg0) const
	{
		callMethod<void>(
			"setInputMethodMode",
			"(I)V",
			arg0
		);
	}
	inline void ListPopupWindow::setListSelector(android::graphics::drawable::Drawable arg0) const
	{
		callMethod<void>(
			"setListSelector",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	inline void ListPopupWindow::setModal(jboolean arg0) const
	{
		callMethod<void>(
			"setModal",
			"(Z)V",
			arg0
		);
	}
	inline void ListPopupWindow::setOnDismissListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnDismissListener",
			"(Landroid/widget/PopupWindow$OnDismissListener;)V",
			arg0.object()
		);
	}
	inline void ListPopupWindow::setOnItemClickListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnItemClickListener",
			"(Landroid/widget/AdapterView$OnItemClickListener;)V",
			arg0.object()
		);
	}
	inline void ListPopupWindow::setOnItemSelectedListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnItemSelectedListener",
			"(Landroid/widget/AdapterView$OnItemSelectedListener;)V",
			arg0.object()
		);
	}
	inline void ListPopupWindow::setPromptPosition(jint arg0) const
	{
		callMethod<void>(
			"setPromptPosition",
			"(I)V",
			arg0
		);
	}
	inline void ListPopupWindow::setPromptView(android::view::View arg0) const
	{
		callMethod<void>(
			"setPromptView",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	inline void ListPopupWindow::setSelection(jint arg0) const
	{
		callMethod<void>(
			"setSelection",
			"(I)V",
			arg0
		);
	}
	inline void ListPopupWindow::setSoftInputMode(jint arg0) const
	{
		callMethod<void>(
			"setSoftInputMode",
			"(I)V",
			arg0
		);
	}
	inline void ListPopupWindow::setVerticalOffset(jint arg0) const
	{
		callMethod<void>(
			"setVerticalOffset",
			"(I)V",
			arg0
		);
	}
	inline void ListPopupWindow::setWidth(jint arg0) const
	{
		callMethod<void>(
			"setWidth",
			"(I)V",
			arg0
		);
	}
	inline void ListPopupWindow::setWindowLayoutType(jint arg0) const
	{
		callMethod<void>(
			"setWindowLayoutType",
			"(I)V",
			arg0
		);
	}
	inline void ListPopupWindow::show() const
	{
		callMethod<void>(
			"show",
			"()V"
		);
	}
} // namespace android::widget

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::widget;
#endif
