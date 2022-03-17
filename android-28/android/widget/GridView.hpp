#pragma once

#include "../content/Context.def.hpp"
#include "../content/Intent.def.hpp"
#include "../graphics/Rect.def.hpp"
#include "../view/KeyEvent.def.hpp"
#include "../view/View.def.hpp"
#include "../view/ViewGroup_LayoutParams.def.hpp"
#include "../view/accessibility/AccessibilityNodeInfo.def.hpp"
#include "../../JString.hpp"
#include "./GridView.def.hpp"

namespace android::widget
{
	// Fields
	inline jint GridView::AUTO_FIT()
	{
		return getStaticField<jint>(
			"android.widget.GridView",
			"AUTO_FIT"
		);
	}
	inline jint GridView::NO_STRETCH()
	{
		return getStaticField<jint>(
			"android.widget.GridView",
			"NO_STRETCH"
		);
	}
	inline jint GridView::STRETCH_COLUMN_WIDTH()
	{
		return getStaticField<jint>(
			"android.widget.GridView",
			"STRETCH_COLUMN_WIDTH"
		);
	}
	inline jint GridView::STRETCH_SPACING()
	{
		return getStaticField<jint>(
			"android.widget.GridView",
			"STRETCH_SPACING"
		);
	}
	inline jint GridView::STRETCH_SPACING_UNIFORM()
	{
		return getStaticField<jint>(
			"android.widget.GridView",
			"STRETCH_SPACING_UNIFORM"
		);
	}
	
	// Constructors
	inline GridView::GridView(android::content::Context arg0)
		: android::widget::AbsListView(
			"android.widget.GridView",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	inline GridView::GridView(android::content::Context arg0, JObject arg1)
		: android::widget::AbsListView(
			"android.widget.GridView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline GridView::GridView(android::content::Context arg0, JObject arg1, jint arg2)
		: android::widget::AbsListView(
			"android.widget.GridView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	inline GridView::GridView(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::widget::AbsListView(
			"android.widget.GridView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	inline JString GridView::getAccessibilityClassName() const
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline JObject GridView::getAdapter() const
	{
		return callObjectMethod(
			"getAdapter",
			"()Landroid/widget/ListAdapter;"
		);
	}
	inline jint GridView::getColumnWidth() const
	{
		return callMethod<jint>(
			"getColumnWidth",
			"()I"
		);
	}
	inline jint GridView::getGravity() const
	{
		return callMethod<jint>(
			"getGravity",
			"()I"
		);
	}
	inline jint GridView::getHorizontalSpacing() const
	{
		return callMethod<jint>(
			"getHorizontalSpacing",
			"()I"
		);
	}
	inline jint GridView::getNumColumns() const
	{
		return callMethod<jint>(
			"getNumColumns",
			"()I"
		);
	}
	inline jint GridView::getRequestedColumnWidth() const
	{
		return callMethod<jint>(
			"getRequestedColumnWidth",
			"()I"
		);
	}
	inline jint GridView::getRequestedHorizontalSpacing() const
	{
		return callMethod<jint>(
			"getRequestedHorizontalSpacing",
			"()I"
		);
	}
	inline jint GridView::getStretchMode() const
	{
		return callMethod<jint>(
			"getStretchMode",
			"()I"
		);
	}
	inline jint GridView::getVerticalSpacing() const
	{
		return callMethod<jint>(
			"getVerticalSpacing",
			"()I"
		);
	}
	inline void GridView::onInitializeAccessibilityNodeInfoForItem(android::view::View arg0, jint arg1, android::view::accessibility::AccessibilityNodeInfo arg2) const
	{
		callMethod<void>(
			"onInitializeAccessibilityNodeInfoForItem",
			"(Landroid/view/View;ILandroid/view/accessibility/AccessibilityNodeInfo;)V",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	inline jboolean GridView::onKeyDown(jint arg0, android::view::KeyEvent arg1) const
	{
		return callMethod<jboolean>(
			"onKeyDown",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	inline jboolean GridView::onKeyMultiple(jint arg0, jint arg1, android::view::KeyEvent arg2) const
	{
		return callMethod<jboolean>(
			"onKeyMultiple",
			"(IILandroid/view/KeyEvent;)Z",
			arg0,
			arg1,
			arg2.object()
		);
	}
	inline jboolean GridView::onKeyUp(jint arg0, android::view::KeyEvent arg1) const
	{
		return callMethod<jboolean>(
			"onKeyUp",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	inline void GridView::setAdapter(JObject arg0) const
	{
		callMethod<void>(
			"setAdapter",
			"(Landroid/widget/Adapter;)V",
			arg0.object()
		);
	}
	inline void GridView::setColumnWidth(jint arg0) const
	{
		callMethod<void>(
			"setColumnWidth",
			"(I)V",
			arg0
		);
	}
	inline void GridView::setGravity(jint arg0) const
	{
		callMethod<void>(
			"setGravity",
			"(I)V",
			arg0
		);
	}
	inline void GridView::setHorizontalSpacing(jint arg0) const
	{
		callMethod<void>(
			"setHorizontalSpacing",
			"(I)V",
			arg0
		);
	}
	inline void GridView::setNumColumns(jint arg0) const
	{
		callMethod<void>(
			"setNumColumns",
			"(I)V",
			arg0
		);
	}
	inline void GridView::setRemoteViewsAdapter(android::content::Intent arg0) const
	{
		callMethod<void>(
			"setRemoteViewsAdapter",
			"(Landroid/content/Intent;)V",
			arg0.object()
		);
	}
	inline void GridView::setSelection(jint arg0) const
	{
		callMethod<void>(
			"setSelection",
			"(I)V",
			arg0
		);
	}
	inline void GridView::setStretchMode(jint arg0) const
	{
		callMethod<void>(
			"setStretchMode",
			"(I)V",
			arg0
		);
	}
	inline void GridView::setVerticalSpacing(jint arg0) const
	{
		callMethod<void>(
			"setVerticalSpacing",
			"(I)V",
			arg0
		);
	}
	inline void GridView::smoothScrollByOffset(jint arg0) const
	{
		callMethod<void>(
			"smoothScrollByOffset",
			"(I)V",
			arg0
		);
	}
	inline void GridView::smoothScrollToPosition(jint arg0) const
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

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::widget;
#endif
