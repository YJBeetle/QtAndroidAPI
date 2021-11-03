#include "../content/Context.hpp"
#include "../content/Intent.hpp"
#include "../graphics/Rect.hpp"
#include "../view/KeyEvent.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup_LayoutParams.hpp"
#include "../view/accessibility/AccessibilityNodeInfo.hpp"
#include "../../JString.hpp"
#include "./GridView.hpp"

namespace android::widget
{
	// Fields
	jint GridView::AUTO_FIT()
	{
		return getStaticField<jint>(
			"android.widget.GridView",
			"AUTO_FIT"
		);
	}
	jint GridView::NO_STRETCH()
	{
		return getStaticField<jint>(
			"android.widget.GridView",
			"NO_STRETCH"
		);
	}
	jint GridView::STRETCH_COLUMN_WIDTH()
	{
		return getStaticField<jint>(
			"android.widget.GridView",
			"STRETCH_COLUMN_WIDTH"
		);
	}
	jint GridView::STRETCH_SPACING()
	{
		return getStaticField<jint>(
			"android.widget.GridView",
			"STRETCH_SPACING"
		);
	}
	jint GridView::STRETCH_SPACING_UNIFORM()
	{
		return getStaticField<jint>(
			"android.widget.GridView",
			"STRETCH_SPACING_UNIFORM"
		);
	}
	
	// QJniObject forward
	GridView::GridView(QJniObject obj) : android::widget::AbsListView(obj) {}
	
	// Constructors
	GridView::GridView(android::content::Context arg0)
		: android::widget::AbsListView(
			"android.widget.GridView",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	GridView::GridView(android::content::Context arg0, JObject arg1)
		: android::widget::AbsListView(
			"android.widget.GridView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	GridView::GridView(android::content::Context arg0, JObject arg1, jint arg2)
		: android::widget::AbsListView(
			"android.widget.GridView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	GridView::GridView(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::widget::AbsListView(
			"android.widget.GridView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	JString GridView::getAccessibilityClassName()
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		);
	}
	JObject GridView::getAdapter()
	{
		return callObjectMethod(
			"getAdapter",
			"()Landroid/widget/ListAdapter;"
		);
	}
	jint GridView::getColumnWidth()
	{
		return callMethod<jint>(
			"getColumnWidth",
			"()I"
		);
	}
	jint GridView::getGravity()
	{
		return callMethod<jint>(
			"getGravity",
			"()I"
		);
	}
	jint GridView::getHorizontalSpacing()
	{
		return callMethod<jint>(
			"getHorizontalSpacing",
			"()I"
		);
	}
	jint GridView::getNumColumns()
	{
		return callMethod<jint>(
			"getNumColumns",
			"()I"
		);
	}
	jint GridView::getRequestedColumnWidth()
	{
		return callMethod<jint>(
			"getRequestedColumnWidth",
			"()I"
		);
	}
	jint GridView::getRequestedHorizontalSpacing()
	{
		return callMethod<jint>(
			"getRequestedHorizontalSpacing",
			"()I"
		);
	}
	jint GridView::getStretchMode()
	{
		return callMethod<jint>(
			"getStretchMode",
			"()I"
		);
	}
	jint GridView::getVerticalSpacing()
	{
		return callMethod<jint>(
			"getVerticalSpacing",
			"()I"
		);
	}
	void GridView::onInitializeAccessibilityNodeInfoForItem(android::view::View arg0, jint arg1, android::view::accessibility::AccessibilityNodeInfo arg2)
	{
		callMethod<void>(
			"onInitializeAccessibilityNodeInfoForItem",
			"(Landroid/view/View;ILandroid/view/accessibility/AccessibilityNodeInfo;)V",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	jboolean GridView::onKeyDown(jint arg0, android::view::KeyEvent arg1)
	{
		return callMethod<jboolean>(
			"onKeyDown",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	jboolean GridView::onKeyMultiple(jint arg0, jint arg1, android::view::KeyEvent arg2)
	{
		return callMethod<jboolean>(
			"onKeyMultiple",
			"(IILandroid/view/KeyEvent;)Z",
			arg0,
			arg1,
			arg2.object()
		);
	}
	jboolean GridView::onKeyUp(jint arg0, android::view::KeyEvent arg1)
	{
		return callMethod<jboolean>(
			"onKeyUp",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	void GridView::setAdapter(JObject arg0)
	{
		callMethod<void>(
			"setAdapter",
			"(Landroid/widget/Adapter;)V",
			arg0.object()
		);
	}
	void GridView::setColumnWidth(jint arg0)
	{
		callMethod<void>(
			"setColumnWidth",
			"(I)V",
			arg0
		);
	}
	void GridView::setGravity(jint arg0)
	{
		callMethod<void>(
			"setGravity",
			"(I)V",
			arg0
		);
	}
	void GridView::setHorizontalSpacing(jint arg0)
	{
		callMethod<void>(
			"setHorizontalSpacing",
			"(I)V",
			arg0
		);
	}
	void GridView::setNumColumns(jint arg0)
	{
		callMethod<void>(
			"setNumColumns",
			"(I)V",
			arg0
		);
	}
	void GridView::setRemoteViewsAdapter(android::content::Intent arg0)
	{
		callMethod<void>(
			"setRemoteViewsAdapter",
			"(Landroid/content/Intent;)V",
			arg0.object()
		);
	}
	void GridView::setSelection(jint arg0)
	{
		callMethod<void>(
			"setSelection",
			"(I)V",
			arg0
		);
	}
	void GridView::setStretchMode(jint arg0)
	{
		callMethod<void>(
			"setStretchMode",
			"(I)V",
			arg0
		);
	}
	void GridView::setVerticalSpacing(jint arg0)
	{
		callMethod<void>(
			"setVerticalSpacing",
			"(I)V",
			arg0
		);
	}
	void GridView::smoothScrollByOffset(jint arg0)
	{
		callMethod<void>(
			"smoothScrollByOffset",
			"(I)V",
			arg0
		);
	}
	void GridView::smoothScrollToPosition(jint arg0)
	{
		callMethod<void>(
			"smoothScrollToPosition",
			"(I)V",
			arg0
		);
	}
} // namespace android::widget

