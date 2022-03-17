#pragma once

#include "../../JLongArray.hpp"
#include "../content/Context.def.hpp"
#include "../content/Intent.def.hpp"
#include "../graphics/Canvas.def.hpp"
#include "../graphics/Rect.def.hpp"
#include "../graphics/drawable/Drawable.def.hpp"
#include "../util/SparseBooleanArray.def.hpp"
#include "../view/KeyEvent.def.hpp"
#include "../view/MotionEvent.def.hpp"
#include "../view/PointerIcon.def.hpp"
#include "../view/View.def.hpp"
#include "../view/ViewGroup_LayoutParams.def.hpp"
#include "../view/accessibility/AccessibilityNodeInfo.def.hpp"
#include "../view/inputmethod/EditorInfo.def.hpp"
#include "./AbsListView_LayoutParams.def.hpp"
#include "../../JString.hpp"
#include "../../JString.hpp"
#include "../../java/util/ArrayList.def.hpp"
#include "./AbsListView.def.hpp"

namespace android::widget
{
	// Fields
	inline jint AbsListView::CHOICE_MODE_MULTIPLE()
	{
		return getStaticField<jint>(
			"android.widget.AbsListView",
			"CHOICE_MODE_MULTIPLE"
		);
	}
	inline jint AbsListView::CHOICE_MODE_MULTIPLE_MODAL()
	{
		return getStaticField<jint>(
			"android.widget.AbsListView",
			"CHOICE_MODE_MULTIPLE_MODAL"
		);
	}
	inline jint AbsListView::CHOICE_MODE_NONE()
	{
		return getStaticField<jint>(
			"android.widget.AbsListView",
			"CHOICE_MODE_NONE"
		);
	}
	inline jint AbsListView::CHOICE_MODE_SINGLE()
	{
		return getStaticField<jint>(
			"android.widget.AbsListView",
			"CHOICE_MODE_SINGLE"
		);
	}
	inline jint AbsListView::TRANSCRIPT_MODE_ALWAYS_SCROLL()
	{
		return getStaticField<jint>(
			"android.widget.AbsListView",
			"TRANSCRIPT_MODE_ALWAYS_SCROLL"
		);
	}
	inline jint AbsListView::TRANSCRIPT_MODE_DISABLED()
	{
		return getStaticField<jint>(
			"android.widget.AbsListView",
			"TRANSCRIPT_MODE_DISABLED"
		);
	}
	inline jint AbsListView::TRANSCRIPT_MODE_NORMAL()
	{
		return getStaticField<jint>(
			"android.widget.AbsListView",
			"TRANSCRIPT_MODE_NORMAL"
		);
	}
	
	// Constructors
	inline AbsListView::AbsListView(android::content::Context arg0)
		: android::widget::AdapterView(
			"android.widget.AbsListView",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	inline AbsListView::AbsListView(android::content::Context arg0, JObject arg1)
		: android::widget::AdapterView(
			"android.widget.AbsListView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline AbsListView::AbsListView(android::content::Context arg0, JObject arg1, jint arg2)
		: android::widget::AdapterView(
			"android.widget.AbsListView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	inline AbsListView::AbsListView(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::widget::AdapterView(
			"android.widget.AbsListView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	inline void AbsListView::addTouchables(java::util::ArrayList arg0) const
	{
		callMethod<void>(
			"addTouchables",
			"(Ljava/util/ArrayList;)V",
			arg0.object()
		);
	}
	inline void AbsListView::afterTextChanged(JObject arg0) const
	{
		callMethod<void>(
			"afterTextChanged",
			"(Landroid/text/Editable;)V",
			arg0.object()
		);
	}
	inline void AbsListView::beforeTextChanged(JString arg0, jint arg1, jint arg2, jint arg3) const
	{
		callMethod<void>(
			"beforeTextChanged",
			"(Ljava/lang/CharSequence;III)V",
			arg0.object<jstring>(),
			arg1,
			arg2,
			arg3
		);
	}
	inline jboolean AbsListView::canScrollList(jint arg0) const
	{
		return callMethod<jboolean>(
			"canScrollList",
			"(I)Z",
			arg0
		);
	}
	inline jboolean AbsListView::checkInputConnectionProxy(android::view::View arg0) const
	{
		return callMethod<jboolean>(
			"checkInputConnectionProxy",
			"(Landroid/view/View;)Z",
			arg0.object()
		);
	}
	inline void AbsListView::clearChoices() const
	{
		callMethod<void>(
			"clearChoices",
			"()V"
		);
	}
	inline void AbsListView::clearTextFilter() const
	{
		callMethod<void>(
			"clearTextFilter",
			"()V"
		);
	}
	inline void AbsListView::deferNotifyDataSetChanged() const
	{
		callMethod<void>(
			"deferNotifyDataSetChanged",
			"()V"
		);
	}
	inline void AbsListView::dispatchDrawableHotspotChanged(jfloat arg0, jfloat arg1) const
	{
		callMethod<void>(
			"dispatchDrawableHotspotChanged",
			"(FF)V",
			arg0,
			arg1
		);
	}
	inline void AbsListView::draw(android::graphics::Canvas arg0) const
	{
		callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.object()
		);
	}
	inline void AbsListView::fling(jint arg0) const
	{
		callMethod<void>(
			"fling",
			"(I)V",
			arg0
		);
	}
	inline android::widget::AbsListView_LayoutParams AbsListView::generateLayoutParams(JObject arg0) const
	{
		return callObjectMethod(
			"generateLayoutParams",
			"(Landroid/util/AttributeSet;)Landroid/widget/AbsListView$LayoutParams;",
			arg0.object()
		);
	}
	inline JString AbsListView::getAccessibilityClassName() const
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline jint AbsListView::getBottomEdgeEffectColor() const
	{
		return callMethod<jint>(
			"getBottomEdgeEffectColor",
			"()I"
		);
	}
	inline jint AbsListView::getCacheColorHint() const
	{
		return callMethod<jint>(
			"getCacheColorHint",
			"()I"
		);
	}
	inline jint AbsListView::getCheckedItemCount() const
	{
		return callMethod<jint>(
			"getCheckedItemCount",
			"()I"
		);
	}
	inline JLongArray AbsListView::getCheckedItemIds() const
	{
		return callObjectMethod(
			"getCheckedItemIds",
			"()[J"
		);
	}
	inline jint AbsListView::getCheckedItemPosition() const
	{
		return callMethod<jint>(
			"getCheckedItemPosition",
			"()I"
		);
	}
	inline android::util::SparseBooleanArray AbsListView::getCheckedItemPositions() const
	{
		return callObjectMethod(
			"getCheckedItemPositions",
			"()Landroid/util/SparseBooleanArray;"
		);
	}
	inline jint AbsListView::getChoiceMode() const
	{
		return callMethod<jint>(
			"getChoiceMode",
			"()I"
		);
	}
	inline void AbsListView::getFocusedRect(android::graphics::Rect arg0) const
	{
		callMethod<void>(
			"getFocusedRect",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		);
	}
	inline jint AbsListView::getListPaddingBottom() const
	{
		return callMethod<jint>(
			"getListPaddingBottom",
			"()I"
		);
	}
	inline jint AbsListView::getListPaddingLeft() const
	{
		return callMethod<jint>(
			"getListPaddingLeft",
			"()I"
		);
	}
	inline jint AbsListView::getListPaddingRight() const
	{
		return callMethod<jint>(
			"getListPaddingRight",
			"()I"
		);
	}
	inline jint AbsListView::getListPaddingTop() const
	{
		return callMethod<jint>(
			"getListPaddingTop",
			"()I"
		);
	}
	inline android::view::View AbsListView::getSelectedView() const
	{
		return callObjectMethod(
			"getSelectedView",
			"()Landroid/view/View;"
		);
	}
	inline android::graphics::drawable::Drawable AbsListView::getSelector() const
	{
		return callObjectMethod(
			"getSelector",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	inline jint AbsListView::getSolidColor() const
	{
		return callMethod<jint>(
			"getSolidColor",
			"()I"
		);
	}
	inline JString AbsListView::getTextFilter() const
	{
		return callObjectMethod(
			"getTextFilter",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline jint AbsListView::getTopEdgeEffectColor() const
	{
		return callMethod<jint>(
			"getTopEdgeEffectColor",
			"()I"
		);
	}
	inline jint AbsListView::getTranscriptMode() const
	{
		return callMethod<jint>(
			"getTranscriptMode",
			"()I"
		);
	}
	inline jint AbsListView::getVerticalScrollbarWidth() const
	{
		return callMethod<jint>(
			"getVerticalScrollbarWidth",
			"()I"
		);
	}
	inline jboolean AbsListView::hasTextFilter() const
	{
		return callMethod<jboolean>(
			"hasTextFilter",
			"()Z"
		);
	}
	inline void AbsListView::invalidateViews() const
	{
		callMethod<void>(
			"invalidateViews",
			"()V"
		);
	}
	inline jboolean AbsListView::isDrawSelectorOnTop() const
	{
		return callMethod<jboolean>(
			"isDrawSelectorOnTop",
			"()Z"
		);
	}
	inline jboolean AbsListView::isFastScrollAlwaysVisible() const
	{
		return callMethod<jboolean>(
			"isFastScrollAlwaysVisible",
			"()Z"
		);
	}
	inline jboolean AbsListView::isFastScrollEnabled() const
	{
		return callMethod<jboolean>(
			"isFastScrollEnabled",
			"()Z"
		);
	}
	inline jboolean AbsListView::isItemChecked(jint arg0) const
	{
		return callMethod<jboolean>(
			"isItemChecked",
			"(I)Z",
			arg0
		);
	}
	inline jboolean AbsListView::isScrollingCacheEnabled() const
	{
		return callMethod<jboolean>(
			"isScrollingCacheEnabled",
			"()Z"
		);
	}
	inline jboolean AbsListView::isSmoothScrollbarEnabled() const
	{
		return callMethod<jboolean>(
			"isSmoothScrollbarEnabled",
			"()Z"
		);
	}
	inline jboolean AbsListView::isStackFromBottom() const
	{
		return callMethod<jboolean>(
			"isStackFromBottom",
			"()Z"
		);
	}
	inline jboolean AbsListView::isTextFilterEnabled() const
	{
		return callMethod<jboolean>(
			"isTextFilterEnabled",
			"()Z"
		);
	}
	inline void AbsListView::jumpDrawablesToCurrentState() const
	{
		callMethod<void>(
			"jumpDrawablesToCurrentState",
			"()V"
		);
	}
	inline void AbsListView::onCancelPendingInputEvents() const
	{
		callMethod<void>(
			"onCancelPendingInputEvents",
			"()V"
		);
	}
	inline JObject AbsListView::onCreateInputConnection(android::view::inputmethod::EditorInfo arg0) const
	{
		return callObjectMethod(
			"onCreateInputConnection",
			"(Landroid/view/inputmethod/EditorInfo;)Landroid/view/inputmethod/InputConnection;",
			arg0.object()
		);
	}
	inline void AbsListView::onFilterComplete(jint arg0) const
	{
		callMethod<void>(
			"onFilterComplete",
			"(I)V",
			arg0
		);
	}
	inline jboolean AbsListView::onGenericMotionEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onGenericMotionEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	inline void AbsListView::onGlobalLayout() const
	{
		callMethod<void>(
			"onGlobalLayout",
			"()V"
		);
	}
	inline void AbsListView::onInitializeAccessibilityNodeInfoForItem(android::view::View arg0, jint arg1, android::view::accessibility::AccessibilityNodeInfo arg2) const
	{
		callMethod<void>(
			"onInitializeAccessibilityNodeInfoForItem",
			"(Landroid/view/View;ILandroid/view/accessibility/AccessibilityNodeInfo;)V",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	inline jboolean AbsListView::onInterceptHoverEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onInterceptHoverEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	inline jboolean AbsListView::onInterceptTouchEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onInterceptTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	inline jboolean AbsListView::onKeyDown(jint arg0, android::view::KeyEvent arg1) const
	{
		return callMethod<jboolean>(
			"onKeyDown",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	inline jboolean AbsListView::onKeyUp(jint arg0, android::view::KeyEvent arg1) const
	{
		return callMethod<jboolean>(
			"onKeyUp",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	inline jboolean AbsListView::onNestedFling(android::view::View arg0, jfloat arg1, jfloat arg2, jboolean arg3) const
	{
		return callMethod<jboolean>(
			"onNestedFling",
			"(Landroid/view/View;FFZ)Z",
			arg0.object(),
			arg1,
			arg2,
			arg3
		);
	}
	inline void AbsListView::onNestedScroll(android::view::View arg0, jint arg1, jint arg2, jint arg3, jint arg4) const
	{
		callMethod<void>(
			"onNestedScroll",
			"(Landroid/view/View;IIII)V",
			arg0.object(),
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	inline void AbsListView::onNestedScrollAccepted(android::view::View arg0, android::view::View arg1, jint arg2) const
	{
		callMethod<void>(
			"onNestedScrollAccepted",
			"(Landroid/view/View;Landroid/view/View;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	inline jboolean AbsListView::onRemoteAdapterConnected() const
	{
		return callMethod<jboolean>(
			"onRemoteAdapterConnected",
			"()Z"
		);
	}
	inline void AbsListView::onRemoteAdapterDisconnected() const
	{
		callMethod<void>(
			"onRemoteAdapterDisconnected",
			"()V"
		);
	}
	inline android::view::PointerIcon AbsListView::onResolvePointerIcon(android::view::MotionEvent arg0, jint arg1) const
	{
		return callObjectMethod(
			"onResolvePointerIcon",
			"(Landroid/view/MotionEvent;I)Landroid/view/PointerIcon;",
			arg0.object(),
			arg1
		);
	}
	inline void AbsListView::onRestoreInstanceState(JObject arg0) const
	{
		callMethod<void>(
			"onRestoreInstanceState",
			"(Landroid/os/Parcelable;)V",
			arg0.object()
		);
	}
	inline void AbsListView::onRtlPropertiesChanged(jint arg0) const
	{
		callMethod<void>(
			"onRtlPropertiesChanged",
			"(I)V",
			arg0
		);
	}
	inline JObject AbsListView::onSaveInstanceState() const
	{
		return callObjectMethod(
			"onSaveInstanceState",
			"()Landroid/os/Parcelable;"
		);
	}
	inline jboolean AbsListView::onStartNestedScroll(android::view::View arg0, android::view::View arg1, jint arg2) const
	{
		return callMethod<jboolean>(
			"onStartNestedScroll",
			"(Landroid/view/View;Landroid/view/View;I)Z",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	inline void AbsListView::onTextChanged(JString arg0, jint arg1, jint arg2, jint arg3) const
	{
		callMethod<void>(
			"onTextChanged",
			"(Ljava/lang/CharSequence;III)V",
			arg0.object<jstring>(),
			arg1,
			arg2,
			arg3
		);
	}
	inline jboolean AbsListView::onTouchEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	inline void AbsListView::onTouchModeChanged(jboolean arg0) const
	{
		callMethod<void>(
			"onTouchModeChanged",
			"(Z)V",
			arg0
		);
	}
	inline void AbsListView::onWindowFocusChanged(jboolean arg0) const
	{
		callMethod<void>(
			"onWindowFocusChanged",
			"(Z)V",
			arg0
		);
	}
	inline jboolean AbsListView::performItemClick(android::view::View arg0, jint arg1, jlong arg2) const
	{
		return callMethod<jboolean>(
			"performItemClick",
			"(Landroid/view/View;IJ)Z",
			arg0.object(),
			arg1,
			arg2
		);
	}
	inline jint AbsListView::pointToPosition(jint arg0, jint arg1) const
	{
		return callMethod<jint>(
			"pointToPosition",
			"(II)I",
			arg0,
			arg1
		);
	}
	inline jlong AbsListView::pointToRowId(jint arg0, jint arg1) const
	{
		return callMethod<jlong>(
			"pointToRowId",
			"(II)J",
			arg0,
			arg1
		);
	}
	inline void AbsListView::reclaimViews(JObject arg0) const
	{
		callMethod<void>(
			"reclaimViews",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	inline void AbsListView::requestDisallowInterceptTouchEvent(jboolean arg0) const
	{
		callMethod<void>(
			"requestDisallowInterceptTouchEvent",
			"(Z)V",
			arg0
		);
	}
	inline void AbsListView::requestLayout() const
	{
		callMethod<void>(
			"requestLayout",
			"()V"
		);
	}
	inline void AbsListView::scrollListBy(jint arg0) const
	{
		callMethod<void>(
			"scrollListBy",
			"(I)V",
			arg0
		);
	}
	inline void AbsListView::setAdapter(JObject arg0) const
	{
		callMethod<void>(
			"setAdapter",
			"(Landroid/widget/Adapter;)V",
			arg0.object()
		);
	}
	inline void AbsListView::setBottomEdgeEffectColor(jint arg0) const
	{
		callMethod<void>(
			"setBottomEdgeEffectColor",
			"(I)V",
			arg0
		);
	}
	inline void AbsListView::setCacheColorHint(jint arg0) const
	{
		callMethod<void>(
			"setCacheColorHint",
			"(I)V",
			arg0
		);
	}
	inline void AbsListView::setChoiceMode(jint arg0) const
	{
		callMethod<void>(
			"setChoiceMode",
			"(I)V",
			arg0
		);
	}
	inline void AbsListView::setDrawSelectorOnTop(jboolean arg0) const
	{
		callMethod<void>(
			"setDrawSelectorOnTop",
			"(Z)V",
			arg0
		);
	}
	inline void AbsListView::setEdgeEffectColor(jint arg0) const
	{
		callMethod<void>(
			"setEdgeEffectColor",
			"(I)V",
			arg0
		);
	}
	inline void AbsListView::setFastScrollAlwaysVisible(jboolean arg0) const
	{
		callMethod<void>(
			"setFastScrollAlwaysVisible",
			"(Z)V",
			arg0
		);
	}
	inline void AbsListView::setFastScrollEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setFastScrollEnabled",
			"(Z)V",
			arg0
		);
	}
	inline void AbsListView::setFastScrollStyle(jint arg0) const
	{
		callMethod<void>(
			"setFastScrollStyle",
			"(I)V",
			arg0
		);
	}
	inline void AbsListView::setFilterText(JString arg0) const
	{
		callMethod<void>(
			"setFilterText",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void AbsListView::setFriction(jfloat arg0) const
	{
		callMethod<void>(
			"setFriction",
			"(F)V",
			arg0
		);
	}
	inline void AbsListView::setItemChecked(jint arg0, jboolean arg1) const
	{
		callMethod<void>(
			"setItemChecked",
			"(IZ)V",
			arg0,
			arg1
		);
	}
	inline void AbsListView::setMultiChoiceModeListener(JObject arg0) const
	{
		callMethod<void>(
			"setMultiChoiceModeListener",
			"(Landroid/widget/AbsListView$MultiChoiceModeListener;)V",
			arg0.object()
		);
	}
	inline void AbsListView::setOnScrollListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnScrollListener",
			"(Landroid/widget/AbsListView$OnScrollListener;)V",
			arg0.object()
		);
	}
	inline void AbsListView::setRecyclerListener(JObject arg0) const
	{
		callMethod<void>(
			"setRecyclerListener",
			"(Landroid/widget/AbsListView$RecyclerListener;)V",
			arg0.object()
		);
	}
	inline void AbsListView::setRemoteViewsAdapter(android::content::Intent arg0) const
	{
		callMethod<void>(
			"setRemoteViewsAdapter",
			"(Landroid/content/Intent;)V",
			arg0.object()
		);
	}
	inline void AbsListView::setScrollBarStyle(jint arg0) const
	{
		callMethod<void>(
			"setScrollBarStyle",
			"(I)V",
			arg0
		);
	}
	inline void AbsListView::setScrollIndicators(android::view::View arg0, android::view::View arg1) const
	{
		callMethod<void>(
			"setScrollIndicators",
			"(Landroid/view/View;Landroid/view/View;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void AbsListView::setScrollingCacheEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setScrollingCacheEnabled",
			"(Z)V",
			arg0
		);
	}
	inline void AbsListView::setSelectionFromTop(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setSelectionFromTop",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void AbsListView::setSelector(android::graphics::drawable::Drawable arg0) const
	{
		callMethod<void>(
			"setSelector",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	inline void AbsListView::setSelector(jint arg0) const
	{
		callMethod<void>(
			"setSelector",
			"(I)V",
			arg0
		);
	}
	inline void AbsListView::setSmoothScrollbarEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setSmoothScrollbarEnabled",
			"(Z)V",
			arg0
		);
	}
	inline void AbsListView::setStackFromBottom(jboolean arg0) const
	{
		callMethod<void>(
			"setStackFromBottom",
			"(Z)V",
			arg0
		);
	}
	inline void AbsListView::setTextFilterEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setTextFilterEnabled",
			"(Z)V",
			arg0
		);
	}
	inline void AbsListView::setTopEdgeEffectColor(jint arg0) const
	{
		callMethod<void>(
			"setTopEdgeEffectColor",
			"(I)V",
			arg0
		);
	}
	inline void AbsListView::setTranscriptMode(jint arg0) const
	{
		callMethod<void>(
			"setTranscriptMode",
			"(I)V",
			arg0
		);
	}
	inline void AbsListView::setVelocityScale(jfloat arg0) const
	{
		callMethod<void>(
			"setVelocityScale",
			"(F)V",
			arg0
		);
	}
	inline void AbsListView::setVerticalScrollbarPosition(jint arg0) const
	{
		callMethod<void>(
			"setVerticalScrollbarPosition",
			"(I)V",
			arg0
		);
	}
	inline jboolean AbsListView::showContextMenu() const
	{
		return callMethod<jboolean>(
			"showContextMenu",
			"()Z"
		);
	}
	inline jboolean AbsListView::showContextMenu(jfloat arg0, jfloat arg1) const
	{
		return callMethod<jboolean>(
			"showContextMenu",
			"(FF)Z",
			arg0,
			arg1
		);
	}
	inline jboolean AbsListView::showContextMenuForChild(android::view::View arg0) const
	{
		return callMethod<jboolean>(
			"showContextMenuForChild",
			"(Landroid/view/View;)Z",
			arg0.object()
		);
	}
	inline jboolean AbsListView::showContextMenuForChild(android::view::View arg0, jfloat arg1, jfloat arg2) const
	{
		return callMethod<jboolean>(
			"showContextMenuForChild",
			"(Landroid/view/View;FF)Z",
			arg0.object(),
			arg1,
			arg2
		);
	}
	inline void AbsListView::smoothScrollBy(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"smoothScrollBy",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void AbsListView::smoothScrollToPosition(jint arg0) const
	{
		callMethod<void>(
			"smoothScrollToPosition",
			"(I)V",
			arg0
		);
	}
	inline void AbsListView::smoothScrollToPosition(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"smoothScrollToPosition",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void AbsListView::smoothScrollToPositionFromTop(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"smoothScrollToPositionFromTop",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void AbsListView::smoothScrollToPositionFromTop(jint arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"smoothScrollToPositionFromTop",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	inline jboolean AbsListView::verifyDrawable(android::graphics::drawable::Drawable arg0) const
	{
		return callMethod<jboolean>(
			"verifyDrawable",
			"(Landroid/graphics/drawable/Drawable;)Z",
			arg0.object()
		);
	}
} // namespace android::widget

// Base class headers
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "./AdapterView.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::widget;
#endif
