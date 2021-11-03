#include "../../JLongArray.hpp"
#include "../content/Context.hpp"
#include "../content/Intent.hpp"
#include "../graphics/Canvas.hpp"
#include "../graphics/Rect.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "../view/KeyEvent.hpp"
#include "../view/View.hpp"
#include "../view/accessibility/AccessibilityNodeInfo.hpp"
#include "../../JString.hpp"
#include "../../JObject.hpp"
#include "./ListView.hpp"

namespace android::widget
{
	// Fields
	
	// QAndroidJniObject forward
	ListView::ListView(QAndroidJniObject obj) : android::widget::AbsListView(obj) {}
	
	// Constructors
	ListView::ListView(android::content::Context arg0)
		: android::widget::AbsListView(
			"android.widget.ListView",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	ListView::ListView(android::content::Context arg0, JObject arg1)
		: android::widget::AbsListView(
			"android.widget.ListView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	ListView::ListView(android::content::Context arg0, JObject arg1, jint arg2)
		: android::widget::AbsListView(
			"android.widget.ListView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	ListView::ListView(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::widget::AbsListView(
			"android.widget.ListView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	void ListView::addFooterView(android::view::View arg0)
	{
		callMethod<void>(
			"addFooterView",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	void ListView::addFooterView(android::view::View arg0, JObject arg1, jboolean arg2)
	{
		callMethod<void>(
			"addFooterView",
			"(Landroid/view/View;Ljava/lang/Object;Z)V",
			arg0.object(),
			arg1.object<jobject>(),
			arg2
		);
	}
	void ListView::addHeaderView(android::view::View arg0)
	{
		callMethod<void>(
			"addHeaderView",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	void ListView::addHeaderView(android::view::View arg0, JObject arg1, jboolean arg2)
	{
		callMethod<void>(
			"addHeaderView",
			"(Landroid/view/View;Ljava/lang/Object;Z)V",
			arg0.object(),
			arg1.object<jobject>(),
			arg2
		);
	}
	jboolean ListView::areFooterDividersEnabled()
	{
		return callMethod<jboolean>(
			"areFooterDividersEnabled",
			"()Z"
		);
	}
	jboolean ListView::areHeaderDividersEnabled()
	{
		return callMethod<jboolean>(
			"areHeaderDividersEnabled",
			"()Z"
		);
	}
	jboolean ListView::dispatchKeyEvent(android::view::KeyEvent arg0)
	{
		return callMethod<jboolean>(
			"dispatchKeyEvent",
			"(Landroid/view/KeyEvent;)Z",
			arg0.object()
		);
	}
	JString ListView::getAccessibilityClassName()
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		);
	}
	JObject ListView::getAdapter()
	{
		return callObjectMethod(
			"getAdapter",
			"()Landroid/widget/ListAdapter;"
		);
	}
	JLongArray ListView::getCheckItemIds()
	{
		return callObjectMethod(
			"getCheckItemIds",
			"()[J"
		);
	}
	android::graphics::drawable::Drawable ListView::getDivider()
	{
		return callObjectMethod(
			"getDivider",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	jint ListView::getDividerHeight()
	{
		return callMethod<jint>(
			"getDividerHeight",
			"()I"
		);
	}
	jint ListView::getFooterViewsCount()
	{
		return callMethod<jint>(
			"getFooterViewsCount",
			"()I"
		);
	}
	jint ListView::getHeaderViewsCount()
	{
		return callMethod<jint>(
			"getHeaderViewsCount",
			"()I"
		);
	}
	jboolean ListView::getItemsCanFocus()
	{
		return callMethod<jboolean>(
			"getItemsCanFocus",
			"()Z"
		);
	}
	jint ListView::getMaxScrollAmount()
	{
		return callMethod<jint>(
			"getMaxScrollAmount",
			"()I"
		);
	}
	android::graphics::drawable::Drawable ListView::getOverscrollFooter()
	{
		return callObjectMethod(
			"getOverscrollFooter",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	android::graphics::drawable::Drawable ListView::getOverscrollHeader()
	{
		return callObjectMethod(
			"getOverscrollHeader",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	jboolean ListView::isOpaque()
	{
		return callMethod<jboolean>(
			"isOpaque",
			"()Z"
		);
	}
	void ListView::onInitializeAccessibilityNodeInfoForItem(android::view::View arg0, jint arg1, android::view::accessibility::AccessibilityNodeInfo arg2)
	{
		callMethod<void>(
			"onInitializeAccessibilityNodeInfoForItem",
			"(Landroid/view/View;ILandroid/view/accessibility/AccessibilityNodeInfo;)V",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	jboolean ListView::onKeyDown(jint arg0, android::view::KeyEvent arg1)
	{
		return callMethod<jboolean>(
			"onKeyDown",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	jboolean ListView::onKeyMultiple(jint arg0, jint arg1, android::view::KeyEvent arg2)
	{
		return callMethod<jboolean>(
			"onKeyMultiple",
			"(IILandroid/view/KeyEvent;)Z",
			arg0,
			arg1,
			arg2.object()
		);
	}
	jboolean ListView::onKeyUp(jint arg0, android::view::KeyEvent arg1)
	{
		return callMethod<jboolean>(
			"onKeyUp",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	jboolean ListView::removeFooterView(android::view::View arg0)
	{
		return callMethod<jboolean>(
			"removeFooterView",
			"(Landroid/view/View;)Z",
			arg0.object()
		);
	}
	jboolean ListView::removeHeaderView(android::view::View arg0)
	{
		return callMethod<jboolean>(
			"removeHeaderView",
			"(Landroid/view/View;)Z",
			arg0.object()
		);
	}
	jboolean ListView::requestChildRectangleOnScreen(android::view::View arg0, android::graphics::Rect arg1, jboolean arg2)
	{
		return callMethod<jboolean>(
			"requestChildRectangleOnScreen",
			"(Landroid/view/View;Landroid/graphics/Rect;Z)Z",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	void ListView::setAdapter(JObject arg0)
	{
		callMethod<void>(
			"setAdapter",
			"(Landroid/widget/Adapter;)V",
			arg0.object()
		);
	}
	void ListView::setCacheColorHint(jint arg0)
	{
		callMethod<void>(
			"setCacheColorHint",
			"(I)V",
			arg0
		);
	}
	void ListView::setDivider(android::graphics::drawable::Drawable arg0)
	{
		callMethod<void>(
			"setDivider",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	void ListView::setDividerHeight(jint arg0)
	{
		callMethod<void>(
			"setDividerHeight",
			"(I)V",
			arg0
		);
	}
	void ListView::setFooterDividersEnabled(jboolean arg0)
	{
		callMethod<void>(
			"setFooterDividersEnabled",
			"(Z)V",
			arg0
		);
	}
	void ListView::setHeaderDividersEnabled(jboolean arg0)
	{
		callMethod<void>(
			"setHeaderDividersEnabled",
			"(Z)V",
			arg0
		);
	}
	void ListView::setItemsCanFocus(jboolean arg0)
	{
		callMethod<void>(
			"setItemsCanFocus",
			"(Z)V",
			arg0
		);
	}
	void ListView::setOverscrollFooter(android::graphics::drawable::Drawable arg0)
	{
		callMethod<void>(
			"setOverscrollFooter",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	void ListView::setOverscrollHeader(android::graphics::drawable::Drawable arg0)
	{
		callMethod<void>(
			"setOverscrollHeader",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	void ListView::setRemoteViewsAdapter(android::content::Intent arg0)
	{
		callMethod<void>(
			"setRemoteViewsAdapter",
			"(Landroid/content/Intent;)V",
			arg0.object()
		);
	}
	void ListView::setSelection(jint arg0)
	{
		callMethod<void>(
			"setSelection",
			"(I)V",
			arg0
		);
	}
	void ListView::setSelectionAfterHeaderView()
	{
		callMethod<void>(
			"setSelectionAfterHeaderView",
			"()V"
		);
	}
	void ListView::smoothScrollByOffset(jint arg0)
	{
		callMethod<void>(
			"smoothScrollByOffset",
			"(I)V",
			arg0
		);
	}
	void ListView::smoothScrollToPosition(jint arg0)
	{
		callMethod<void>(
			"smoothScrollToPosition",
			"(I)V",
			arg0
		);
	}
} // namespace android::widget

