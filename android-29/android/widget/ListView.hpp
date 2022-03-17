#pragma once

#include "../../JLongArray.hpp"
#include "../content/Context.def.hpp"
#include "../content/Intent.def.hpp"
#include "../graphics/Canvas.def.hpp"
#include "../graphics/Rect.def.hpp"
#include "../graphics/drawable/Drawable.def.hpp"
#include "../view/KeyEvent.def.hpp"
#include "../view/View.def.hpp"
#include "../view/accessibility/AccessibilityNodeInfo.def.hpp"
#include "../../JString.hpp"
#include "../../JObject.hpp"
#include "./ListView.def.hpp"

namespace android::widget
{
	// Fields
	
	// Constructors
	inline ListView::ListView(android::content::Context arg0)
		: android::widget::AbsListView(
			"android.widget.ListView",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	inline ListView::ListView(android::content::Context arg0, JObject arg1)
		: android::widget::AbsListView(
			"android.widget.ListView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline ListView::ListView(android::content::Context arg0, JObject arg1, jint arg2)
		: android::widget::AbsListView(
			"android.widget.ListView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	inline ListView::ListView(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::widget::AbsListView(
			"android.widget.ListView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	inline void ListView::addFooterView(android::view::View arg0) const
	{
		callMethod<void>(
			"addFooterView",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	inline void ListView::addFooterView(android::view::View arg0, JObject arg1, jboolean arg2) const
	{
		callMethod<void>(
			"addFooterView",
			"(Landroid/view/View;Ljava/lang/Object;Z)V",
			arg0.object(),
			arg1.object<jobject>(),
			arg2
		);
	}
	inline void ListView::addHeaderView(android::view::View arg0) const
	{
		callMethod<void>(
			"addHeaderView",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	inline void ListView::addHeaderView(android::view::View arg0, JObject arg1, jboolean arg2) const
	{
		callMethod<void>(
			"addHeaderView",
			"(Landroid/view/View;Ljava/lang/Object;Z)V",
			arg0.object(),
			arg1.object<jobject>(),
			arg2
		);
	}
	inline jboolean ListView::areFooterDividersEnabled() const
	{
		return callMethod<jboolean>(
			"areFooterDividersEnabled",
			"()Z"
		);
	}
	inline jboolean ListView::areHeaderDividersEnabled() const
	{
		return callMethod<jboolean>(
			"areHeaderDividersEnabled",
			"()Z"
		);
	}
	inline jboolean ListView::dispatchKeyEvent(android::view::KeyEvent arg0) const
	{
		return callMethod<jboolean>(
			"dispatchKeyEvent",
			"(Landroid/view/KeyEvent;)Z",
			arg0.object()
		);
	}
	inline JString ListView::getAccessibilityClassName() const
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline JObject ListView::getAdapter() const
	{
		return callObjectMethod(
			"getAdapter",
			"()Landroid/widget/ListAdapter;"
		);
	}
	inline JLongArray ListView::getCheckItemIds() const
	{
		return callObjectMethod(
			"getCheckItemIds",
			"()[J"
		);
	}
	inline android::graphics::drawable::Drawable ListView::getDivider() const
	{
		return callObjectMethod(
			"getDivider",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	inline jint ListView::getDividerHeight() const
	{
		return callMethod<jint>(
			"getDividerHeight",
			"()I"
		);
	}
	inline jint ListView::getFooterViewsCount() const
	{
		return callMethod<jint>(
			"getFooterViewsCount",
			"()I"
		);
	}
	inline jint ListView::getHeaderViewsCount() const
	{
		return callMethod<jint>(
			"getHeaderViewsCount",
			"()I"
		);
	}
	inline jboolean ListView::getItemsCanFocus() const
	{
		return callMethod<jboolean>(
			"getItemsCanFocus",
			"()Z"
		);
	}
	inline jint ListView::getMaxScrollAmount() const
	{
		return callMethod<jint>(
			"getMaxScrollAmount",
			"()I"
		);
	}
	inline android::graphics::drawable::Drawable ListView::getOverscrollFooter() const
	{
		return callObjectMethod(
			"getOverscrollFooter",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	inline android::graphics::drawable::Drawable ListView::getOverscrollHeader() const
	{
		return callObjectMethod(
			"getOverscrollHeader",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	inline jboolean ListView::isOpaque() const
	{
		return callMethod<jboolean>(
			"isOpaque",
			"()Z"
		);
	}
	inline void ListView::onInitializeAccessibilityNodeInfoForItem(android::view::View arg0, jint arg1, android::view::accessibility::AccessibilityNodeInfo arg2) const
	{
		callMethod<void>(
			"onInitializeAccessibilityNodeInfoForItem",
			"(Landroid/view/View;ILandroid/view/accessibility/AccessibilityNodeInfo;)V",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	inline jboolean ListView::onKeyDown(jint arg0, android::view::KeyEvent arg1) const
	{
		return callMethod<jboolean>(
			"onKeyDown",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	inline jboolean ListView::onKeyMultiple(jint arg0, jint arg1, android::view::KeyEvent arg2) const
	{
		return callMethod<jboolean>(
			"onKeyMultiple",
			"(IILandroid/view/KeyEvent;)Z",
			arg0,
			arg1,
			arg2.object()
		);
	}
	inline jboolean ListView::onKeyUp(jint arg0, android::view::KeyEvent arg1) const
	{
		return callMethod<jboolean>(
			"onKeyUp",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	inline jboolean ListView::removeFooterView(android::view::View arg0) const
	{
		return callMethod<jboolean>(
			"removeFooterView",
			"(Landroid/view/View;)Z",
			arg0.object()
		);
	}
	inline jboolean ListView::removeHeaderView(android::view::View arg0) const
	{
		return callMethod<jboolean>(
			"removeHeaderView",
			"(Landroid/view/View;)Z",
			arg0.object()
		);
	}
	inline jboolean ListView::requestChildRectangleOnScreen(android::view::View arg0, android::graphics::Rect arg1, jboolean arg2) const
	{
		return callMethod<jboolean>(
			"requestChildRectangleOnScreen",
			"(Landroid/view/View;Landroid/graphics/Rect;Z)Z",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	inline void ListView::setAdapter(JObject arg0) const
	{
		callMethod<void>(
			"setAdapter",
			"(Landroid/widget/Adapter;)V",
			arg0.object()
		);
	}
	inline void ListView::setCacheColorHint(jint arg0) const
	{
		callMethod<void>(
			"setCacheColorHint",
			"(I)V",
			arg0
		);
	}
	inline void ListView::setDivider(android::graphics::drawable::Drawable arg0) const
	{
		callMethod<void>(
			"setDivider",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	inline void ListView::setDividerHeight(jint arg0) const
	{
		callMethod<void>(
			"setDividerHeight",
			"(I)V",
			arg0
		);
	}
	inline void ListView::setFooterDividersEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setFooterDividersEnabled",
			"(Z)V",
			arg0
		);
	}
	inline void ListView::setHeaderDividersEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setHeaderDividersEnabled",
			"(Z)V",
			arg0
		);
	}
	inline void ListView::setItemsCanFocus(jboolean arg0) const
	{
		callMethod<void>(
			"setItemsCanFocus",
			"(Z)V",
			arg0
		);
	}
	inline void ListView::setOverscrollFooter(android::graphics::drawable::Drawable arg0) const
	{
		callMethod<void>(
			"setOverscrollFooter",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	inline void ListView::setOverscrollHeader(android::graphics::drawable::Drawable arg0) const
	{
		callMethod<void>(
			"setOverscrollHeader",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	inline void ListView::setRemoteViewsAdapter(android::content::Intent arg0) const
	{
		callMethod<void>(
			"setRemoteViewsAdapter",
			"(Landroid/content/Intent;)V",
			arg0.object()
		);
	}
	inline void ListView::setSelection(jint arg0) const
	{
		callMethod<void>(
			"setSelection",
			"(I)V",
			arg0
		);
	}
	inline void ListView::setSelectionAfterHeaderView() const
	{
		callMethod<void>(
			"setSelectionAfterHeaderView",
			"()V"
		);
	}
	inline void ListView::smoothScrollByOffset(jint arg0) const
	{
		callMethod<void>(
			"smoothScrollByOffset",
			"(I)V",
			arg0
		);
	}
	inline void ListView::smoothScrollToPosition(jint arg0) const
	{
		callMethod<void>(
			"smoothScrollToPosition",
			"(I)V",
			arg0
		);
	}
} // namespace android::widget

// Base class headers
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "./AdapterView.hpp"
#include "./AbsListView.hpp"

