#include "../content/Context.hpp"
#include "../content/Intent.hpp"
#include "../graphics/Canvas.hpp"
#include "../graphics/Rect.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "../util/SparseBooleanArray.hpp"
#include "../view/KeyEvent.hpp"
#include "../view/MotionEvent.hpp"
#include "../view/PointerIcon.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup_LayoutParams.hpp"
#include "../view/accessibility/AccessibilityEvent.hpp"
#include "../view/accessibility/AccessibilityNodeInfo.hpp"
#include "../view/inputmethod/EditorInfo.hpp"
#include "./AbsListView_LayoutParams.hpp"
#include "../../java/util/ArrayList.hpp"
#include "./AbsListView.hpp"

namespace android::widget
{
	// Fields
	jint AbsListView::CHOICE_MODE_MULTIPLE()
	{
		return getStaticField<jint>(
			"android.widget.AbsListView",
			"CHOICE_MODE_MULTIPLE"
		);
	}
	jint AbsListView::CHOICE_MODE_MULTIPLE_MODAL()
	{
		return getStaticField<jint>(
			"android.widget.AbsListView",
			"CHOICE_MODE_MULTIPLE_MODAL"
		);
	}
	jint AbsListView::CHOICE_MODE_NONE()
	{
		return getStaticField<jint>(
			"android.widget.AbsListView",
			"CHOICE_MODE_NONE"
		);
	}
	jint AbsListView::CHOICE_MODE_SINGLE()
	{
		return getStaticField<jint>(
			"android.widget.AbsListView",
			"CHOICE_MODE_SINGLE"
		);
	}
	jint AbsListView::TRANSCRIPT_MODE_ALWAYS_SCROLL()
	{
		return getStaticField<jint>(
			"android.widget.AbsListView",
			"TRANSCRIPT_MODE_ALWAYS_SCROLL"
		);
	}
	jint AbsListView::TRANSCRIPT_MODE_DISABLED()
	{
		return getStaticField<jint>(
			"android.widget.AbsListView",
			"TRANSCRIPT_MODE_DISABLED"
		);
	}
	jint AbsListView::TRANSCRIPT_MODE_NORMAL()
	{
		return getStaticField<jint>(
			"android.widget.AbsListView",
			"TRANSCRIPT_MODE_NORMAL"
		);
	}
	
	// QAndroidJniObject forward
	AbsListView::AbsListView(QAndroidJniObject obj) : android::widget::AdapterView(obj) {}
	
	// Constructors
	AbsListView::AbsListView(android::content::Context arg0)
		: android::widget::AdapterView(
			"android.widget.AbsListView",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	AbsListView::AbsListView(android::content::Context arg0, __JniBaseClass arg1)
		: android::widget::AdapterView(
			"android.widget.AbsListView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	AbsListView::AbsListView(android::content::Context arg0, __JniBaseClass arg1, jint arg2)
		: android::widget::AdapterView(
			"android.widget.AbsListView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	AbsListView::AbsListView(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3)
		: android::widget::AdapterView(
			"android.widget.AbsListView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	void AbsListView::addTouchables(java::util::ArrayList arg0)
	{
		callMethod<void>(
			"addTouchables",
			"(Ljava/util/ArrayList;)V",
			arg0.object()
		);
	}
	void AbsListView::afterTextChanged(__JniBaseClass arg0)
	{
		callMethod<void>(
			"afterTextChanged",
			"(Landroid/text/Editable;)V",
			arg0.object()
		);
	}
	void AbsListView::beforeTextChanged(jstring arg0, jint arg1, jint arg2, jint arg3)
	{
		callMethod<void>(
			"beforeTextChanged",
			"(Ljava/lang/CharSequence;III)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jboolean AbsListView::canScrollList(jint arg0)
	{
		return callMethod<jboolean>(
			"canScrollList",
			"(I)Z",
			arg0
		);
	}
	jboolean AbsListView::checkInputConnectionProxy(android::view::View arg0)
	{
		return callMethod<jboolean>(
			"checkInputConnectionProxy",
			"(Landroid/view/View;)Z",
			arg0.object()
		);
	}
	void AbsListView::clearChoices()
	{
		callMethod<void>(
			"clearChoices",
			"()V"
		);
	}
	void AbsListView::clearTextFilter()
	{
		callMethod<void>(
			"clearTextFilter",
			"()V"
		);
	}
	void AbsListView::deferNotifyDataSetChanged()
	{
		callMethod<void>(
			"deferNotifyDataSetChanged",
			"()V"
		);
	}
	void AbsListView::dispatchDrawableHotspotChanged(jfloat arg0, jfloat arg1)
	{
		callMethod<void>(
			"dispatchDrawableHotspotChanged",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void AbsListView::draw(android::graphics::Canvas arg0)
	{
		callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.object()
		);
	}
	void AbsListView::fling(jint arg0)
	{
		callMethod<void>(
			"fling",
			"(I)V",
			arg0
		);
	}
	android::widget::AbsListView_LayoutParams AbsListView::generateLayoutParams(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"generateLayoutParams",
			"(Landroid/util/AttributeSet;)Landroid/widget/AbsListView$LayoutParams;",
			arg0.object()
		);
	}
	jstring AbsListView::getAccessibilityClassName()
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint AbsListView::getBottomEdgeEffectColor()
	{
		return callMethod<jint>(
			"getBottomEdgeEffectColor",
			"()I"
		);
	}
	jint AbsListView::getCacheColorHint()
	{
		return callMethod<jint>(
			"getCacheColorHint",
			"()I"
		);
	}
	jint AbsListView::getCheckedItemCount()
	{
		return callMethod<jint>(
			"getCheckedItemCount",
			"()I"
		);
	}
	jlongArray AbsListView::getCheckedItemIds()
	{
		return callObjectMethod(
			"getCheckedItemIds",
			"()[J"
		).object<jlongArray>();
	}
	jint AbsListView::getCheckedItemPosition()
	{
		return callMethod<jint>(
			"getCheckedItemPosition",
			"()I"
		);
	}
	android::util::SparseBooleanArray AbsListView::getCheckedItemPositions()
	{
		return callObjectMethod(
			"getCheckedItemPositions",
			"()Landroid/util/SparseBooleanArray;"
		);
	}
	jint AbsListView::getChoiceMode()
	{
		return callMethod<jint>(
			"getChoiceMode",
			"()I"
		);
	}
	void AbsListView::getFocusedRect(android::graphics::Rect arg0)
	{
		callMethod<void>(
			"getFocusedRect",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		);
	}
	jint AbsListView::getListPaddingBottom()
	{
		return callMethod<jint>(
			"getListPaddingBottom",
			"()I"
		);
	}
	jint AbsListView::getListPaddingLeft()
	{
		return callMethod<jint>(
			"getListPaddingLeft",
			"()I"
		);
	}
	jint AbsListView::getListPaddingRight()
	{
		return callMethod<jint>(
			"getListPaddingRight",
			"()I"
		);
	}
	jint AbsListView::getListPaddingTop()
	{
		return callMethod<jint>(
			"getListPaddingTop",
			"()I"
		);
	}
	android::view::View AbsListView::getSelectedView()
	{
		return callObjectMethod(
			"getSelectedView",
			"()Landroid/view/View;"
		);
	}
	android::graphics::drawable::Drawable AbsListView::getSelector()
	{
		return callObjectMethod(
			"getSelector",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	jint AbsListView::getSolidColor()
	{
		return callMethod<jint>(
			"getSolidColor",
			"()I"
		);
	}
	jstring AbsListView::getTextFilter()
	{
		return callObjectMethod(
			"getTextFilter",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint AbsListView::getTopEdgeEffectColor()
	{
		return callMethod<jint>(
			"getTopEdgeEffectColor",
			"()I"
		);
	}
	jint AbsListView::getTranscriptMode()
	{
		return callMethod<jint>(
			"getTranscriptMode",
			"()I"
		);
	}
	jint AbsListView::getVerticalScrollbarWidth()
	{
		return callMethod<jint>(
			"getVerticalScrollbarWidth",
			"()I"
		);
	}
	jboolean AbsListView::hasTextFilter()
	{
		return callMethod<jboolean>(
			"hasTextFilter",
			"()Z"
		);
	}
	void AbsListView::invalidateViews()
	{
		callMethod<void>(
			"invalidateViews",
			"()V"
		);
	}
	jboolean AbsListView::isDrawSelectorOnTop()
	{
		return callMethod<jboolean>(
			"isDrawSelectorOnTop",
			"()Z"
		);
	}
	jboolean AbsListView::isFastScrollAlwaysVisible()
	{
		return callMethod<jboolean>(
			"isFastScrollAlwaysVisible",
			"()Z"
		);
	}
	jboolean AbsListView::isFastScrollEnabled()
	{
		return callMethod<jboolean>(
			"isFastScrollEnabled",
			"()Z"
		);
	}
	jboolean AbsListView::isItemChecked(jint arg0)
	{
		return callMethod<jboolean>(
			"isItemChecked",
			"(I)Z",
			arg0
		);
	}
	jboolean AbsListView::isScrollingCacheEnabled()
	{
		return callMethod<jboolean>(
			"isScrollingCacheEnabled",
			"()Z"
		);
	}
	jboolean AbsListView::isSmoothScrollbarEnabled()
	{
		return callMethod<jboolean>(
			"isSmoothScrollbarEnabled",
			"()Z"
		);
	}
	jboolean AbsListView::isStackFromBottom()
	{
		return callMethod<jboolean>(
			"isStackFromBottom",
			"()Z"
		);
	}
	jboolean AbsListView::isTextFilterEnabled()
	{
		return callMethod<jboolean>(
			"isTextFilterEnabled",
			"()Z"
		);
	}
	void AbsListView::jumpDrawablesToCurrentState()
	{
		callMethod<void>(
			"jumpDrawablesToCurrentState",
			"()V"
		);
	}
	void AbsListView::onCancelPendingInputEvents()
	{
		callMethod<void>(
			"onCancelPendingInputEvents",
			"()V"
		);
	}
	__JniBaseClass AbsListView::onCreateInputConnection(android::view::inputmethod::EditorInfo arg0)
	{
		return callObjectMethod(
			"onCreateInputConnection",
			"(Landroid/view/inputmethod/EditorInfo;)Landroid/view/inputmethod/InputConnection;",
			arg0.object()
		);
	}
	void AbsListView::onFilterComplete(jint arg0)
	{
		callMethod<void>(
			"onFilterComplete",
			"(I)V",
			arg0
		);
	}
	jboolean AbsListView::onGenericMotionEvent(android::view::MotionEvent arg0)
	{
		return callMethod<jboolean>(
			"onGenericMotionEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	void AbsListView::onGlobalLayout()
	{
		callMethod<void>(
			"onGlobalLayout",
			"()V"
		);
	}
	void AbsListView::onInitializeAccessibilityNodeInfoForItem(android::view::View arg0, jint arg1, android::view::accessibility::AccessibilityNodeInfo arg2)
	{
		callMethod<void>(
			"onInitializeAccessibilityNodeInfoForItem",
			"(Landroid/view/View;ILandroid/view/accessibility/AccessibilityNodeInfo;)V",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	jboolean AbsListView::onInterceptHoverEvent(android::view::MotionEvent arg0)
	{
		return callMethod<jboolean>(
			"onInterceptHoverEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	jboolean AbsListView::onInterceptTouchEvent(android::view::MotionEvent arg0)
	{
		return callMethod<jboolean>(
			"onInterceptTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	jboolean AbsListView::onKeyDown(jint arg0, android::view::KeyEvent arg1)
	{
		return callMethod<jboolean>(
			"onKeyDown",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	jboolean AbsListView::onKeyUp(jint arg0, android::view::KeyEvent arg1)
	{
		return callMethod<jboolean>(
			"onKeyUp",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	jboolean AbsListView::onNestedFling(android::view::View arg0, jfloat arg1, jfloat arg2, jboolean arg3)
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
	void AbsListView::onNestedScroll(android::view::View arg0, jint arg1, jint arg2, jint arg3, jint arg4)
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
	void AbsListView::onNestedScrollAccepted(android::view::View arg0, android::view::View arg1, jint arg2)
	{
		callMethod<void>(
			"onNestedScrollAccepted",
			"(Landroid/view/View;Landroid/view/View;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	jboolean AbsListView::onRemoteAdapterConnected()
	{
		return callMethod<jboolean>(
			"onRemoteAdapterConnected",
			"()Z"
		);
	}
	void AbsListView::onRemoteAdapterDisconnected()
	{
		callMethod<void>(
			"onRemoteAdapterDisconnected",
			"()V"
		);
	}
	android::view::PointerIcon AbsListView::onResolvePointerIcon(android::view::MotionEvent arg0, jint arg1)
	{
		return callObjectMethod(
			"onResolvePointerIcon",
			"(Landroid/view/MotionEvent;I)Landroid/view/PointerIcon;",
			arg0.object(),
			arg1
		);
	}
	void AbsListView::onRestoreInstanceState(__JniBaseClass arg0)
	{
		callMethod<void>(
			"onRestoreInstanceState",
			"(Landroid/os/Parcelable;)V",
			arg0.object()
		);
	}
	void AbsListView::onRtlPropertiesChanged(jint arg0)
	{
		callMethod<void>(
			"onRtlPropertiesChanged",
			"(I)V",
			arg0
		);
	}
	__JniBaseClass AbsListView::onSaveInstanceState()
	{
		return callObjectMethod(
			"onSaveInstanceState",
			"()Landroid/os/Parcelable;"
		);
	}
	jboolean AbsListView::onStartNestedScroll(android::view::View arg0, android::view::View arg1, jint arg2)
	{
		return callMethod<jboolean>(
			"onStartNestedScroll",
			"(Landroid/view/View;Landroid/view/View;I)Z",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	void AbsListView::onTextChanged(jstring arg0, jint arg1, jint arg2, jint arg3)
	{
		callMethod<void>(
			"onTextChanged",
			"(Ljava/lang/CharSequence;III)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jboolean AbsListView::onTouchEvent(android::view::MotionEvent arg0)
	{
		return callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	void AbsListView::onTouchModeChanged(jboolean arg0)
	{
		callMethod<void>(
			"onTouchModeChanged",
			"(Z)V",
			arg0
		);
	}
	void AbsListView::onWindowFocusChanged(jboolean arg0)
	{
		callMethod<void>(
			"onWindowFocusChanged",
			"(Z)V",
			arg0
		);
	}
	jboolean AbsListView::performItemClick(android::view::View arg0, jint arg1, jlong arg2)
	{
		return callMethod<jboolean>(
			"performItemClick",
			"(Landroid/view/View;IJ)Z",
			arg0.object(),
			arg1,
			arg2
		);
	}
	jint AbsListView::pointToPosition(jint arg0, jint arg1)
	{
		return callMethod<jint>(
			"pointToPosition",
			"(II)I",
			arg0,
			arg1
		);
	}
	jlong AbsListView::pointToRowId(jint arg0, jint arg1)
	{
		return callMethod<jlong>(
			"pointToRowId",
			"(II)J",
			arg0,
			arg1
		);
	}
	void AbsListView::reclaimViews(__JniBaseClass arg0)
	{
		callMethod<void>(
			"reclaimViews",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	void AbsListView::requestDisallowInterceptTouchEvent(jboolean arg0)
	{
		callMethod<void>(
			"requestDisallowInterceptTouchEvent",
			"(Z)V",
			arg0
		);
	}
	void AbsListView::requestLayout()
	{
		callMethod<void>(
			"requestLayout",
			"()V"
		);
	}
	void AbsListView::scrollListBy(jint arg0)
	{
		callMethod<void>(
			"scrollListBy",
			"(I)V",
			arg0
		);
	}
	void AbsListView::sendAccessibilityEventUnchecked(android::view::accessibility::AccessibilityEvent arg0)
	{
		callMethod<void>(
			"sendAccessibilityEventUnchecked",
			"(Landroid/view/accessibility/AccessibilityEvent;)V",
			arg0.object()
		);
	}
	void AbsListView::setAdapter(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setAdapter",
			"(Landroid/widget/Adapter;)V",
			arg0.object()
		);
	}
	void AbsListView::setBottomEdgeEffectColor(jint arg0)
	{
		callMethod<void>(
			"setBottomEdgeEffectColor",
			"(I)V",
			arg0
		);
	}
	void AbsListView::setCacheColorHint(jint arg0)
	{
		callMethod<void>(
			"setCacheColorHint",
			"(I)V",
			arg0
		);
	}
	void AbsListView::setChoiceMode(jint arg0)
	{
		callMethod<void>(
			"setChoiceMode",
			"(I)V",
			arg0
		);
	}
	void AbsListView::setDrawSelectorOnTop(jboolean arg0)
	{
		callMethod<void>(
			"setDrawSelectorOnTop",
			"(Z)V",
			arg0
		);
	}
	void AbsListView::setEdgeEffectColor(jint arg0)
	{
		callMethod<void>(
			"setEdgeEffectColor",
			"(I)V",
			arg0
		);
	}
	void AbsListView::setFastScrollAlwaysVisible(jboolean arg0)
	{
		callMethod<void>(
			"setFastScrollAlwaysVisible",
			"(Z)V",
			arg0
		);
	}
	void AbsListView::setFastScrollEnabled(jboolean arg0)
	{
		callMethod<void>(
			"setFastScrollEnabled",
			"(Z)V",
			arg0
		);
	}
	void AbsListView::setFastScrollStyle(jint arg0)
	{
		callMethod<void>(
			"setFastScrollStyle",
			"(I)V",
			arg0
		);
	}
	void AbsListView::setFilterText(jstring arg0)
	{
		callMethod<void>(
			"setFilterText",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void AbsListView::setFriction(jfloat arg0)
	{
		callMethod<void>(
			"setFriction",
			"(F)V",
			arg0
		);
	}
	void AbsListView::setItemChecked(jint arg0, jboolean arg1)
	{
		callMethod<void>(
			"setItemChecked",
			"(IZ)V",
			arg0,
			arg1
		);
	}
	void AbsListView::setMultiChoiceModeListener(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setMultiChoiceModeListener",
			"(Landroid/widget/AbsListView$MultiChoiceModeListener;)V",
			arg0.object()
		);
	}
	void AbsListView::setOnScrollListener(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setOnScrollListener",
			"(Landroid/widget/AbsListView$OnScrollListener;)V",
			arg0.object()
		);
	}
	void AbsListView::setRecyclerListener(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setRecyclerListener",
			"(Landroid/widget/AbsListView$RecyclerListener;)V",
			arg0.object()
		);
	}
	void AbsListView::setRemoteViewsAdapter(android::content::Intent arg0)
	{
		callMethod<void>(
			"setRemoteViewsAdapter",
			"(Landroid/content/Intent;)V",
			arg0.object()
		);
	}
	void AbsListView::setScrollBarStyle(jint arg0)
	{
		callMethod<void>(
			"setScrollBarStyle",
			"(I)V",
			arg0
		);
	}
	void AbsListView::setScrollIndicators(android::view::View arg0, android::view::View arg1)
	{
		callMethod<void>(
			"setScrollIndicators",
			"(Landroid/view/View;Landroid/view/View;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void AbsListView::setScrollingCacheEnabled(jboolean arg0)
	{
		callMethod<void>(
			"setScrollingCacheEnabled",
			"(Z)V",
			arg0
		);
	}
	void AbsListView::setSelectionFromTop(jint arg0, jint arg1)
	{
		callMethod<void>(
			"setSelectionFromTop",
			"(II)V",
			arg0,
			arg1
		);
	}
	void AbsListView::setSelector(android::graphics::drawable::Drawable arg0)
	{
		callMethod<void>(
			"setSelector",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	void AbsListView::setSelector(jint arg0)
	{
		callMethod<void>(
			"setSelector",
			"(I)V",
			arg0
		);
	}
	void AbsListView::setSmoothScrollbarEnabled(jboolean arg0)
	{
		callMethod<void>(
			"setSmoothScrollbarEnabled",
			"(Z)V",
			arg0
		);
	}
	void AbsListView::setStackFromBottom(jboolean arg0)
	{
		callMethod<void>(
			"setStackFromBottom",
			"(Z)V",
			arg0
		);
	}
	void AbsListView::setTextFilterEnabled(jboolean arg0)
	{
		callMethod<void>(
			"setTextFilterEnabled",
			"(Z)V",
			arg0
		);
	}
	void AbsListView::setTopEdgeEffectColor(jint arg0)
	{
		callMethod<void>(
			"setTopEdgeEffectColor",
			"(I)V",
			arg0
		);
	}
	void AbsListView::setTranscriptMode(jint arg0)
	{
		callMethod<void>(
			"setTranscriptMode",
			"(I)V",
			arg0
		);
	}
	void AbsListView::setVelocityScale(jfloat arg0)
	{
		callMethod<void>(
			"setVelocityScale",
			"(F)V",
			arg0
		);
	}
	void AbsListView::setVerticalScrollbarPosition(jint arg0)
	{
		callMethod<void>(
			"setVerticalScrollbarPosition",
			"(I)V",
			arg0
		);
	}
	jboolean AbsListView::showContextMenu()
	{
		return callMethod<jboolean>(
			"showContextMenu",
			"()Z"
		);
	}
	jboolean AbsListView::showContextMenu(jfloat arg0, jfloat arg1)
	{
		return callMethod<jboolean>(
			"showContextMenu",
			"(FF)Z",
			arg0,
			arg1
		);
	}
	jboolean AbsListView::showContextMenuForChild(android::view::View arg0)
	{
		return callMethod<jboolean>(
			"showContextMenuForChild",
			"(Landroid/view/View;)Z",
			arg0.object()
		);
	}
	jboolean AbsListView::showContextMenuForChild(android::view::View arg0, jfloat arg1, jfloat arg2)
	{
		return callMethod<jboolean>(
			"showContextMenuForChild",
			"(Landroid/view/View;FF)Z",
			arg0.object(),
			arg1,
			arg2
		);
	}
	void AbsListView::smoothScrollBy(jint arg0, jint arg1)
	{
		callMethod<void>(
			"smoothScrollBy",
			"(II)V",
			arg0,
			arg1
		);
	}
	void AbsListView::smoothScrollToPosition(jint arg0)
	{
		callMethod<void>(
			"smoothScrollToPosition",
			"(I)V",
			arg0
		);
	}
	void AbsListView::smoothScrollToPosition(jint arg0, jint arg1)
	{
		callMethod<void>(
			"smoothScrollToPosition",
			"(II)V",
			arg0,
			arg1
		);
	}
	void AbsListView::smoothScrollToPositionFromTop(jint arg0, jint arg1)
	{
		callMethod<void>(
			"smoothScrollToPositionFromTop",
			"(II)V",
			arg0,
			arg1
		);
	}
	void AbsListView::smoothScrollToPositionFromTop(jint arg0, jint arg1, jint arg2)
	{
		callMethod<void>(
			"smoothScrollToPositionFromTop",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean AbsListView::verifyDrawable(android::graphics::drawable::Drawable arg0)
	{
		return callMethod<jboolean>(
			"verifyDrawable",
			"(Landroid/graphics/drawable/Drawable;)Z",
			arg0.object()
		);
	}
} // namespace android::widget

