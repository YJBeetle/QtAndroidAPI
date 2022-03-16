#pragma once

#include "../../JIntArray.hpp"
#include "../animation/LayoutTransition.def.hpp"
#include "../content/Context.def.hpp"
#include "../content/res/Configuration.def.hpp"
#include "../graphics/Canvas.def.hpp"
#include "../graphics/Point.def.hpp"
#include "../graphics/Rect.def.hpp"
#include "../graphics/Region.def.hpp"
#include "../os/Bundle.def.hpp"
#include "../util/SparseArray.def.hpp"
#include "./ActionMode.def.hpp"
#include "./DragEvent.def.hpp"
#include "./KeyEvent.def.hpp"
#include "./MotionEvent.def.hpp"
#include "./PointerIcon.def.hpp"
#include "./View.def.hpp"
#include "./ViewGroup_LayoutParams.def.hpp"
#include "./ViewGroupOverlay.def.hpp"
#include "./ViewOverlay.def.hpp"
#include "./ViewStructure.def.hpp"
#include "./WindowInsets.def.hpp"
#include "./WindowInsetsAnimation.def.hpp"
#include "./WindowInsetsAnimation_Bounds.def.hpp"
#include "./WindowInsetsAnimation_Callback.def.hpp"
#include "./accessibility/AccessibilityEvent.def.hpp"
#include "./accessibility/AccessibilityNodeInfo.def.hpp"
#include "./animation/LayoutAnimationController.def.hpp"
#include "./animation/Transformation.def.hpp"
#include "../../JString.hpp"
#include "../../JString.hpp"
#include "../../java/util/ArrayList.def.hpp"
#include "./ViewGroup.def.hpp"

namespace android::view
{
	// Fields
	inline jint ViewGroup::FOCUS_AFTER_DESCENDANTS()
	{
		return getStaticField<jint>(
			"android.view.ViewGroup",
			"FOCUS_AFTER_DESCENDANTS"
		);
	}
	inline jint ViewGroup::FOCUS_BEFORE_DESCENDANTS()
	{
		return getStaticField<jint>(
			"android.view.ViewGroup",
			"FOCUS_BEFORE_DESCENDANTS"
		);
	}
	inline jint ViewGroup::FOCUS_BLOCK_DESCENDANTS()
	{
		return getStaticField<jint>(
			"android.view.ViewGroup",
			"FOCUS_BLOCK_DESCENDANTS"
		);
	}
	inline jint ViewGroup::LAYOUT_MODE_CLIP_BOUNDS()
	{
		return getStaticField<jint>(
			"android.view.ViewGroup",
			"LAYOUT_MODE_CLIP_BOUNDS"
		);
	}
	inline jint ViewGroup::LAYOUT_MODE_OPTICAL_BOUNDS()
	{
		return getStaticField<jint>(
			"android.view.ViewGroup",
			"LAYOUT_MODE_OPTICAL_BOUNDS"
		);
	}
	inline jint ViewGroup::PERSISTENT_ALL_CACHES()
	{
		return getStaticField<jint>(
			"android.view.ViewGroup",
			"PERSISTENT_ALL_CACHES"
		);
	}
	inline jint ViewGroup::PERSISTENT_ANIMATION_CACHE()
	{
		return getStaticField<jint>(
			"android.view.ViewGroup",
			"PERSISTENT_ANIMATION_CACHE"
		);
	}
	inline jint ViewGroup::PERSISTENT_NO_CACHE()
	{
		return getStaticField<jint>(
			"android.view.ViewGroup",
			"PERSISTENT_NO_CACHE"
		);
	}
	inline jint ViewGroup::PERSISTENT_SCROLLING_CACHE()
	{
		return getStaticField<jint>(
			"android.view.ViewGroup",
			"PERSISTENT_SCROLLING_CACHE"
		);
	}
	
	// Constructors
	inline ViewGroup::ViewGroup(android::content::Context arg0)
		: android::view::View(
			"android.view.ViewGroup",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	inline ViewGroup::ViewGroup(android::content::Context arg0, JObject arg1)
		: android::view::View(
			"android.view.ViewGroup",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline ViewGroup::ViewGroup(android::content::Context arg0, JObject arg1, jint arg2)
		: android::view::View(
			"android.view.ViewGroup",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	inline ViewGroup::ViewGroup(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::view::View(
			"android.view.ViewGroup",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	inline jint ViewGroup::getChildMeasureSpec(jint arg0, jint arg1, jint arg2)
	{
		return callStaticMethod<jint>(
			"android.view.ViewGroup",
			"getChildMeasureSpec",
			"(III)I",
			arg0,
			arg1,
			arg2
		);
	}
	inline void ViewGroup::addChildrenForAccessibility(java::util::ArrayList arg0) const
	{
		callMethod<void>(
			"addChildrenForAccessibility",
			"(Ljava/util/ArrayList;)V",
			arg0.object()
		);
	}
	inline void ViewGroup::addExtraDataToAccessibilityNodeInfo(android::view::accessibility::AccessibilityNodeInfo arg0, JString arg1, android::os::Bundle arg2) const
	{
		callMethod<void>(
			"addExtraDataToAccessibilityNodeInfo",
			"(Landroid/view/accessibility/AccessibilityNodeInfo;Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	inline void ViewGroup::addFocusables(java::util::ArrayList arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"addFocusables",
			"(Ljava/util/ArrayList;II)V",
			arg0.object(),
			arg1,
			arg2
		);
	}
	inline void ViewGroup::addKeyboardNavigationClusters(JObject arg0, jint arg1) const
	{
		callMethod<void>(
			"addKeyboardNavigationClusters",
			"(Ljava/util/Collection;I)V",
			arg0.object(),
			arg1
		);
	}
	inline jboolean ViewGroup::addStatesFromChildren() const
	{
		return callMethod<jboolean>(
			"addStatesFromChildren",
			"()Z"
		);
	}
	inline void ViewGroup::addTouchables(java::util::ArrayList arg0) const
	{
		callMethod<void>(
			"addTouchables",
			"(Ljava/util/ArrayList;)V",
			arg0.object()
		);
	}
	inline void ViewGroup::addView(android::view::View arg0) const
	{
		callMethod<void>(
			"addView",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	inline void ViewGroup::addView(android::view::View arg0, android::view::ViewGroup_LayoutParams arg1) const
	{
		callMethod<void>(
			"addView",
			"(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void ViewGroup::addView(android::view::View arg0, jint arg1) const
	{
		callMethod<void>(
			"addView",
			"(Landroid/view/View;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void ViewGroup::addView(android::view::View arg0, jint arg1, android::view::ViewGroup_LayoutParams arg2) const
	{
		callMethod<void>(
			"addView",
			"(Landroid/view/View;ILandroid/view/ViewGroup$LayoutParams;)V",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	inline void ViewGroup::addView(android::view::View arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"addView",
			"(Landroid/view/View;II)V",
			arg0.object(),
			arg1,
			arg2
		);
	}
	inline void ViewGroup::bringChildToFront(android::view::View arg0) const
	{
		callMethod<void>(
			"bringChildToFront",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	inline void ViewGroup::childDrawableStateChanged(android::view::View arg0) const
	{
		callMethod<void>(
			"childDrawableStateChanged",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	inline void ViewGroup::childHasTransientStateChanged(android::view::View arg0, jboolean arg1) const
	{
		callMethod<void>(
			"childHasTransientStateChanged",
			"(Landroid/view/View;Z)V",
			arg0.object(),
			arg1
		);
	}
	inline void ViewGroup::clearChildFocus(android::view::View arg0) const
	{
		callMethod<void>(
			"clearChildFocus",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	inline void ViewGroup::clearDisappearingChildren() const
	{
		callMethod<void>(
			"clearDisappearingChildren",
			"()V"
		);
	}
	inline void ViewGroup::clearFocus() const
	{
		callMethod<void>(
			"clearFocus",
			"()V"
		);
	}
	inline android::view::WindowInsets ViewGroup::dispatchApplyWindowInsets(android::view::WindowInsets arg0) const
	{
		return callObjectMethod(
			"dispatchApplyWindowInsets",
			"(Landroid/view/WindowInsets;)Landroid/view/WindowInsets;",
			arg0.object()
		);
	}
	inline jboolean ViewGroup::dispatchCapturedPointerEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"dispatchCapturedPointerEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	inline void ViewGroup::dispatchConfigurationChanged(android::content::res::Configuration arg0) const
	{
		callMethod<void>(
			"dispatchConfigurationChanged",
			"(Landroid/content/res/Configuration;)V",
			arg0.object()
		);
	}
	inline void ViewGroup::dispatchDisplayHint(jint arg0) const
	{
		callMethod<void>(
			"dispatchDisplayHint",
			"(I)V",
			arg0
		);
	}
	inline jboolean ViewGroup::dispatchDragEvent(android::view::DragEvent arg0) const
	{
		return callMethod<jboolean>(
			"dispatchDragEvent",
			"(Landroid/view/DragEvent;)Z",
			arg0.object()
		);
	}
	inline void ViewGroup::dispatchDrawableHotspotChanged(jfloat arg0, jfloat arg1) const
	{
		callMethod<void>(
			"dispatchDrawableHotspotChanged",
			"(FF)V",
			arg0,
			arg1
		);
	}
	inline void ViewGroup::dispatchFinishTemporaryDetach() const
	{
		callMethod<void>(
			"dispatchFinishTemporaryDetach",
			"()V"
		);
	}
	inline jboolean ViewGroup::dispatchKeyEvent(android::view::KeyEvent arg0) const
	{
		return callMethod<jboolean>(
			"dispatchKeyEvent",
			"(Landroid/view/KeyEvent;)Z",
			arg0.object()
		);
	}
	inline jboolean ViewGroup::dispatchKeyEventPreIme(android::view::KeyEvent arg0) const
	{
		return callMethod<jboolean>(
			"dispatchKeyEventPreIme",
			"(Landroid/view/KeyEvent;)Z",
			arg0.object()
		);
	}
	inline jboolean ViewGroup::dispatchKeyShortcutEvent(android::view::KeyEvent arg0) const
	{
		return callMethod<jboolean>(
			"dispatchKeyShortcutEvent",
			"(Landroid/view/KeyEvent;)Z",
			arg0.object()
		);
	}
	inline void ViewGroup::dispatchPointerCaptureChanged(jboolean arg0) const
	{
		callMethod<void>(
			"dispatchPointerCaptureChanged",
			"(Z)V",
			arg0
		);
	}
	inline void ViewGroup::dispatchProvideAutofillStructure(android::view::ViewStructure arg0, jint arg1) const
	{
		callMethod<void>(
			"dispatchProvideAutofillStructure",
			"(Landroid/view/ViewStructure;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void ViewGroup::dispatchProvideStructure(android::view::ViewStructure arg0) const
	{
		callMethod<void>(
			"dispatchProvideStructure",
			"(Landroid/view/ViewStructure;)V",
			arg0.object()
		);
	}
	inline void ViewGroup::dispatchSetActivated(jboolean arg0) const
	{
		callMethod<void>(
			"dispatchSetActivated",
			"(Z)V",
			arg0
		);
	}
	inline void ViewGroup::dispatchSetSelected(jboolean arg0) const
	{
		callMethod<void>(
			"dispatchSetSelected",
			"(Z)V",
			arg0
		);
	}
	inline void ViewGroup::dispatchStartTemporaryDetach() const
	{
		callMethod<void>(
			"dispatchStartTemporaryDetach",
			"()V"
		);
	}
	inline void ViewGroup::dispatchSystemUiVisibilityChanged(jint arg0) const
	{
		callMethod<void>(
			"dispatchSystemUiVisibilityChanged",
			"(I)V",
			arg0
		);
	}
	inline jboolean ViewGroup::dispatchTouchEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"dispatchTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	inline jboolean ViewGroup::dispatchTrackballEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"dispatchTrackballEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	inline jboolean ViewGroup::dispatchUnhandledMove(android::view::View arg0, jint arg1) const
	{
		return callMethod<jboolean>(
			"dispatchUnhandledMove",
			"(Landroid/view/View;I)Z",
			arg0.object(),
			arg1
		);
	}
	inline void ViewGroup::dispatchWindowFocusChanged(jboolean arg0) const
	{
		callMethod<void>(
			"dispatchWindowFocusChanged",
			"(Z)V",
			arg0
		);
	}
	inline void ViewGroup::dispatchWindowInsetsAnimationEnd(android::view::WindowInsetsAnimation arg0) const
	{
		callMethod<void>(
			"dispatchWindowInsetsAnimationEnd",
			"(Landroid/view/WindowInsetsAnimation;)V",
			arg0.object()
		);
	}
	inline void ViewGroup::dispatchWindowInsetsAnimationPrepare(android::view::WindowInsetsAnimation arg0) const
	{
		callMethod<void>(
			"dispatchWindowInsetsAnimationPrepare",
			"(Landroid/view/WindowInsetsAnimation;)V",
			arg0.object()
		);
	}
	inline android::view::WindowInsets ViewGroup::dispatchWindowInsetsAnimationProgress(android::view::WindowInsets arg0, JObject arg1) const
	{
		return callObjectMethod(
			"dispatchWindowInsetsAnimationProgress",
			"(Landroid/view/WindowInsets;Ljava/util/List;)Landroid/view/WindowInsets;",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::view::WindowInsetsAnimation_Bounds ViewGroup::dispatchWindowInsetsAnimationStart(android::view::WindowInsetsAnimation arg0, android::view::WindowInsetsAnimation_Bounds arg1) const
	{
		return callObjectMethod(
			"dispatchWindowInsetsAnimationStart",
			"(Landroid/view/WindowInsetsAnimation;Landroid/view/WindowInsetsAnimation$Bounds;)Landroid/view/WindowInsetsAnimation$Bounds;",
			arg0.object(),
			arg1.object()
		);
	}
	inline void ViewGroup::dispatchWindowSystemUiVisiblityChanged(jint arg0) const
	{
		callMethod<void>(
			"dispatchWindowSystemUiVisiblityChanged",
			"(I)V",
			arg0
		);
	}
	inline void ViewGroup::dispatchWindowVisibilityChanged(jint arg0) const
	{
		callMethod<void>(
			"dispatchWindowVisibilityChanged",
			"(I)V",
			arg0
		);
	}
	inline void ViewGroup::endViewTransition(android::view::View arg0) const
	{
		callMethod<void>(
			"endViewTransition",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	inline android::view::View ViewGroup::findFocus() const
	{
		return callObjectMethod(
			"findFocus",
			"()Landroid/view/View;"
		);
	}
	inline void ViewGroup::findViewsWithText(java::util::ArrayList arg0, JString arg1, jint arg2) const
	{
		callMethod<void>(
			"findViewsWithText",
			"(Ljava/util/ArrayList;Ljava/lang/CharSequence;I)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2
		);
	}
	inline android::view::View ViewGroup::focusSearch(android::view::View arg0, jint arg1) const
	{
		return callObjectMethod(
			"focusSearch",
			"(Landroid/view/View;I)Landroid/view/View;",
			arg0.object(),
			arg1
		);
	}
	inline void ViewGroup::focusableViewAvailable(android::view::View arg0) const
	{
		callMethod<void>(
			"focusableViewAvailable",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	inline jboolean ViewGroup::gatherTransparentRegion(android::graphics::Region arg0) const
	{
		return callMethod<jboolean>(
			"gatherTransparentRegion",
			"(Landroid/graphics/Region;)Z",
			arg0.object()
		);
	}
	inline android::view::ViewGroup_LayoutParams ViewGroup::generateLayoutParams(JObject arg0) const
	{
		return callObjectMethod(
			"generateLayoutParams",
			"(Landroid/util/AttributeSet;)Landroid/view/ViewGroup$LayoutParams;",
			arg0.object()
		);
	}
	inline JString ViewGroup::getAccessibilityClassName() const
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline android::view::View ViewGroup::getChildAt(jint arg0) const
	{
		return callObjectMethod(
			"getChildAt",
			"(I)Landroid/view/View;",
			arg0
		);
	}
	inline jint ViewGroup::getChildCount() const
	{
		return callMethod<jint>(
			"getChildCount",
			"()I"
		);
	}
	inline jint ViewGroup::getChildDrawingOrder(jint arg0) const
	{
		return callMethod<jint>(
			"getChildDrawingOrder",
			"(I)I",
			arg0
		);
	}
	inline jboolean ViewGroup::getChildVisibleRect(android::view::View arg0, android::graphics::Rect arg1, android::graphics::Point arg2) const
	{
		return callMethod<jboolean>(
			"getChildVisibleRect",
			"(Landroid/view/View;Landroid/graphics/Rect;Landroid/graphics/Point;)Z",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline jboolean ViewGroup::getClipChildren() const
	{
		return callMethod<jboolean>(
			"getClipChildren",
			"()Z"
		);
	}
	inline jboolean ViewGroup::getClipToPadding() const
	{
		return callMethod<jboolean>(
			"getClipToPadding",
			"()Z"
		);
	}
	inline jint ViewGroup::getDescendantFocusability() const
	{
		return callMethod<jint>(
			"getDescendantFocusability",
			"()I"
		);
	}
	inline android::view::View ViewGroup::getFocusedChild() const
	{
		return callObjectMethod(
			"getFocusedChild",
			"()Landroid/view/View;"
		);
	}
	inline android::view::animation::LayoutAnimationController ViewGroup::getLayoutAnimation() const
	{
		return callObjectMethod(
			"getLayoutAnimation",
			"()Landroid/view/animation/LayoutAnimationController;"
		);
	}
	inline JObject ViewGroup::getLayoutAnimationListener() const
	{
		return callObjectMethod(
			"getLayoutAnimationListener",
			"()Landroid/view/animation/Animation$AnimationListener;"
		);
	}
	inline jint ViewGroup::getLayoutMode() const
	{
		return callMethod<jint>(
			"getLayoutMode",
			"()I"
		);
	}
	inline android::animation::LayoutTransition ViewGroup::getLayoutTransition() const
	{
		return callObjectMethod(
			"getLayoutTransition",
			"()Landroid/animation/LayoutTransition;"
		);
	}
	inline jint ViewGroup::getNestedScrollAxes() const
	{
		return callMethod<jint>(
			"getNestedScrollAxes",
			"()I"
		);
	}
	inline android::view::ViewGroupOverlay ViewGroup::getOverlay() const
	{
		return callObjectMethod(
			"getOverlay",
			"()Landroid/view/ViewGroupOverlay;"
		);
	}
	inline jint ViewGroup::getPersistentDrawingCache() const
	{
		return callMethod<jint>(
			"getPersistentDrawingCache",
			"()I"
		);
	}
	inline jboolean ViewGroup::getTouchscreenBlocksFocus() const
	{
		return callMethod<jboolean>(
			"getTouchscreenBlocksFocus",
			"()Z"
		);
	}
	inline jboolean ViewGroup::hasFocus() const
	{
		return callMethod<jboolean>(
			"hasFocus",
			"()Z"
		);
	}
	inline jboolean ViewGroup::hasTransientState() const
	{
		return callMethod<jboolean>(
			"hasTransientState",
			"()Z"
		);
	}
	inline jint ViewGroup::indexOfChild(android::view::View arg0) const
	{
		return callMethod<jint>(
			"indexOfChild",
			"(Landroid/view/View;)I",
			arg0.object()
		);
	}
	inline void ViewGroup::invalidateChild(android::view::View arg0, android::graphics::Rect arg1) const
	{
		callMethod<void>(
			"invalidateChild",
			"(Landroid/view/View;Landroid/graphics/Rect;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline JObject ViewGroup::invalidateChildInParent(JIntArray arg0, android::graphics::Rect arg1) const
	{
		return callObjectMethod(
			"invalidateChildInParent",
			"([ILandroid/graphics/Rect;)Landroid/view/ViewParent;",
			arg0.object<jintArray>(),
			arg1.object()
		);
	}
	inline jboolean ViewGroup::isAlwaysDrawnWithCacheEnabled() const
	{
		return callMethod<jboolean>(
			"isAlwaysDrawnWithCacheEnabled",
			"()Z"
		);
	}
	inline jboolean ViewGroup::isAnimationCacheEnabled() const
	{
		return callMethod<jboolean>(
			"isAnimationCacheEnabled",
			"()Z"
		);
	}
	inline jboolean ViewGroup::isLayoutSuppressed() const
	{
		return callMethod<jboolean>(
			"isLayoutSuppressed",
			"()Z"
		);
	}
	inline jboolean ViewGroup::isMotionEventSplittingEnabled() const
	{
		return callMethod<jboolean>(
			"isMotionEventSplittingEnabled",
			"()Z"
		);
	}
	inline jboolean ViewGroup::isTransitionGroup() const
	{
		return callMethod<jboolean>(
			"isTransitionGroup",
			"()Z"
		);
	}
	inline void ViewGroup::jumpDrawablesToCurrentState() const
	{
		callMethod<void>(
			"jumpDrawablesToCurrentState",
			"()V"
		);
	}
	inline void ViewGroup::layout(jint arg0, jint arg1, jint arg2, jint arg3) const
	{
		callMethod<void>(
			"layout",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	inline void ViewGroup::notifySubtreeAccessibilityStateChanged(android::view::View arg0, android::view::View arg1, jint arg2) const
	{
		callMethod<void>(
			"notifySubtreeAccessibilityStateChanged",
			"(Landroid/view/View;Landroid/view/View;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	inline void ViewGroup::offsetDescendantRectToMyCoords(android::view::View arg0, android::graphics::Rect arg1) const
	{
		callMethod<void>(
			"offsetDescendantRectToMyCoords",
			"(Landroid/view/View;Landroid/graphics/Rect;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void ViewGroup::offsetRectIntoDescendantCoords(android::view::View arg0, android::graphics::Rect arg1) const
	{
		callMethod<void>(
			"offsetRectIntoDescendantCoords",
			"(Landroid/view/View;Landroid/graphics/Rect;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void ViewGroup::onDescendantInvalidated(android::view::View arg0, android::view::View arg1) const
	{
		callMethod<void>(
			"onDescendantInvalidated",
			"(Landroid/view/View;Landroid/view/View;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline jboolean ViewGroup::onInterceptHoverEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onInterceptHoverEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	inline jboolean ViewGroup::onInterceptTouchEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onInterceptTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	inline jboolean ViewGroup::onNestedFling(android::view::View arg0, jfloat arg1, jfloat arg2, jboolean arg3) const
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
	inline jboolean ViewGroup::onNestedPreFling(android::view::View arg0, jfloat arg1, jfloat arg2) const
	{
		return callMethod<jboolean>(
			"onNestedPreFling",
			"(Landroid/view/View;FF)Z",
			arg0.object(),
			arg1,
			arg2
		);
	}
	inline jboolean ViewGroup::onNestedPrePerformAccessibilityAction(android::view::View arg0, jint arg1, android::os::Bundle arg2) const
	{
		return callMethod<jboolean>(
			"onNestedPrePerformAccessibilityAction",
			"(Landroid/view/View;ILandroid/os/Bundle;)Z",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	inline void ViewGroup::onNestedPreScroll(android::view::View arg0, jint arg1, jint arg2, JIntArray arg3) const
	{
		callMethod<void>(
			"onNestedPreScroll",
			"(Landroid/view/View;II[I)V",
			arg0.object(),
			arg1,
			arg2,
			arg3.object<jintArray>()
		);
	}
	inline void ViewGroup::onNestedScroll(android::view::View arg0, jint arg1, jint arg2, jint arg3, jint arg4) const
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
	inline void ViewGroup::onNestedScrollAccepted(android::view::View arg0, android::view::View arg1, jint arg2) const
	{
		callMethod<void>(
			"onNestedScrollAccepted",
			"(Landroid/view/View;Landroid/view/View;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	inline jboolean ViewGroup::onRequestSendAccessibilityEvent(android::view::View arg0, android::view::accessibility::AccessibilityEvent arg1) const
	{
		return callMethod<jboolean>(
			"onRequestSendAccessibilityEvent",
			"(Landroid/view/View;Landroid/view/accessibility/AccessibilityEvent;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::view::PointerIcon ViewGroup::onResolvePointerIcon(android::view::MotionEvent arg0, jint arg1) const
	{
		return callObjectMethod(
			"onResolvePointerIcon",
			"(Landroid/view/MotionEvent;I)Landroid/view/PointerIcon;",
			arg0.object(),
			arg1
		);
	}
	inline jboolean ViewGroup::onStartNestedScroll(android::view::View arg0, android::view::View arg1, jint arg2) const
	{
		return callMethod<jboolean>(
			"onStartNestedScroll",
			"(Landroid/view/View;Landroid/view/View;I)Z",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	inline void ViewGroup::onStopNestedScroll(android::view::View arg0) const
	{
		callMethod<void>(
			"onStopNestedScroll",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	inline void ViewGroup::onViewAdded(android::view::View arg0) const
	{
		callMethod<void>(
			"onViewAdded",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	inline void ViewGroup::onViewRemoved(android::view::View arg0) const
	{
		callMethod<void>(
			"onViewRemoved",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	inline void ViewGroup::recomputeViewAttributes(android::view::View arg0) const
	{
		callMethod<void>(
			"recomputeViewAttributes",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	inline void ViewGroup::removeAllViews() const
	{
		callMethod<void>(
			"removeAllViews",
			"()V"
		);
	}
	inline void ViewGroup::removeAllViewsInLayout() const
	{
		callMethod<void>(
			"removeAllViewsInLayout",
			"()V"
		);
	}
	inline void ViewGroup::removeView(android::view::View arg0) const
	{
		callMethod<void>(
			"removeView",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	inline void ViewGroup::removeViewAt(jint arg0) const
	{
		callMethod<void>(
			"removeViewAt",
			"(I)V",
			arg0
		);
	}
	inline void ViewGroup::removeViewInLayout(android::view::View arg0) const
	{
		callMethod<void>(
			"removeViewInLayout",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	inline void ViewGroup::removeViews(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"removeViews",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void ViewGroup::removeViewsInLayout(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"removeViewsInLayout",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void ViewGroup::requestChildFocus(android::view::View arg0, android::view::View arg1) const
	{
		callMethod<void>(
			"requestChildFocus",
			"(Landroid/view/View;Landroid/view/View;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline jboolean ViewGroup::requestChildRectangleOnScreen(android::view::View arg0, android::graphics::Rect arg1, jboolean arg2) const
	{
		return callMethod<jboolean>(
			"requestChildRectangleOnScreen",
			"(Landroid/view/View;Landroid/graphics/Rect;Z)Z",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	inline void ViewGroup::requestDisallowInterceptTouchEvent(jboolean arg0) const
	{
		callMethod<void>(
			"requestDisallowInterceptTouchEvent",
			"(Z)V",
			arg0
		);
	}
	inline jboolean ViewGroup::requestFocus(jint arg0, android::graphics::Rect arg1) const
	{
		return callMethod<jboolean>(
			"requestFocus",
			"(ILandroid/graphics/Rect;)Z",
			arg0,
			arg1.object()
		);
	}
	inline jboolean ViewGroup::requestSendAccessibilityEvent(android::view::View arg0, android::view::accessibility::AccessibilityEvent arg1) const
	{
		return callMethod<jboolean>(
			"requestSendAccessibilityEvent",
			"(Landroid/view/View;Landroid/view/accessibility/AccessibilityEvent;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	inline void ViewGroup::requestTransparentRegion(android::view::View arg0) const
	{
		callMethod<void>(
			"requestTransparentRegion",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	inline jboolean ViewGroup::restoreDefaultFocus() const
	{
		return callMethod<jboolean>(
			"restoreDefaultFocus",
			"()Z"
		);
	}
	inline void ViewGroup::scheduleLayoutAnimation() const
	{
		callMethod<void>(
			"scheduleLayoutAnimation",
			"()V"
		);
	}
	inline void ViewGroup::setAddStatesFromChildren(jboolean arg0) const
	{
		callMethod<void>(
			"setAddStatesFromChildren",
			"(Z)V",
			arg0
		);
	}
	inline void ViewGroup::setAlwaysDrawnWithCacheEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setAlwaysDrawnWithCacheEnabled",
			"(Z)V",
			arg0
		);
	}
	inline void ViewGroup::setAnimationCacheEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setAnimationCacheEnabled",
			"(Z)V",
			arg0
		);
	}
	inline void ViewGroup::setClipChildren(jboolean arg0) const
	{
		callMethod<void>(
			"setClipChildren",
			"(Z)V",
			arg0
		);
	}
	inline void ViewGroup::setClipToPadding(jboolean arg0) const
	{
		callMethod<void>(
			"setClipToPadding",
			"(Z)V",
			arg0
		);
	}
	inline void ViewGroup::setDescendantFocusability(jint arg0) const
	{
		callMethod<void>(
			"setDescendantFocusability",
			"(I)V",
			arg0
		);
	}
	inline void ViewGroup::setLayoutAnimation(android::view::animation::LayoutAnimationController arg0) const
	{
		callMethod<void>(
			"setLayoutAnimation",
			"(Landroid/view/animation/LayoutAnimationController;)V",
			arg0.object()
		);
	}
	inline void ViewGroup::setLayoutAnimationListener(JObject arg0) const
	{
		callMethod<void>(
			"setLayoutAnimationListener",
			"(Landroid/view/animation/Animation$AnimationListener;)V",
			arg0.object()
		);
	}
	inline void ViewGroup::setLayoutMode(jint arg0) const
	{
		callMethod<void>(
			"setLayoutMode",
			"(I)V",
			arg0
		);
	}
	inline void ViewGroup::setLayoutTransition(android::animation::LayoutTransition arg0) const
	{
		callMethod<void>(
			"setLayoutTransition",
			"(Landroid/animation/LayoutTransition;)V",
			arg0.object()
		);
	}
	inline void ViewGroup::setMotionEventSplittingEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setMotionEventSplittingEnabled",
			"(Z)V",
			arg0
		);
	}
	inline void ViewGroup::setOnHierarchyChangeListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnHierarchyChangeListener",
			"(Landroid/view/ViewGroup$OnHierarchyChangeListener;)V",
			arg0.object()
		);
	}
	inline void ViewGroup::setPersistentDrawingCache(jint arg0) const
	{
		callMethod<void>(
			"setPersistentDrawingCache",
			"(I)V",
			arg0
		);
	}
	inline void ViewGroup::setTouchscreenBlocksFocus(jboolean arg0) const
	{
		callMethod<void>(
			"setTouchscreenBlocksFocus",
			"(Z)V",
			arg0
		);
	}
	inline void ViewGroup::setTransitionGroup(jboolean arg0) const
	{
		callMethod<void>(
			"setTransitionGroup",
			"(Z)V",
			arg0
		);
	}
	inline void ViewGroup::setWindowInsetsAnimationCallback(android::view::WindowInsetsAnimation_Callback arg0) const
	{
		callMethod<void>(
			"setWindowInsetsAnimationCallback",
			"(Landroid/view/WindowInsetsAnimation$Callback;)V",
			arg0.object()
		);
	}
	inline jboolean ViewGroup::shouldDelayChildPressedState() const
	{
		return callMethod<jboolean>(
			"shouldDelayChildPressedState",
			"()Z"
		);
	}
	inline jboolean ViewGroup::showContextMenuForChild(android::view::View arg0) const
	{
		return callMethod<jboolean>(
			"showContextMenuForChild",
			"(Landroid/view/View;)Z",
			arg0.object()
		);
	}
	inline jboolean ViewGroup::showContextMenuForChild(android::view::View arg0, jfloat arg1, jfloat arg2) const
	{
		return callMethod<jboolean>(
			"showContextMenuForChild",
			"(Landroid/view/View;FF)Z",
			arg0.object(),
			arg1,
			arg2
		);
	}
	inline android::view::ActionMode ViewGroup::startActionModeForChild(android::view::View arg0, JObject arg1) const
	{
		return callObjectMethod(
			"startActionModeForChild",
			"(Landroid/view/View;Landroid/view/ActionMode$Callback;)Landroid/view/ActionMode;",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::view::ActionMode ViewGroup::startActionModeForChild(android::view::View arg0, JObject arg1, jint arg2) const
	{
		return callObjectMethod(
			"startActionModeForChild",
			"(Landroid/view/View;Landroid/view/ActionMode$Callback;I)Landroid/view/ActionMode;",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	inline void ViewGroup::startLayoutAnimation() const
	{
		callMethod<void>(
			"startLayoutAnimation",
			"()V"
		);
	}
	inline void ViewGroup::startViewTransition(android::view::View arg0) const
	{
		callMethod<void>(
			"startViewTransition",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	inline void ViewGroup::suppressLayout(jboolean arg0) const
	{
		callMethod<void>(
			"suppressLayout",
			"(Z)V",
			arg0
		);
	}
	inline void ViewGroup::updateViewLayout(android::view::View arg0, android::view::ViewGroup_LayoutParams arg1) const
	{
		callMethod<void>(
			"updateViewLayout",
			"(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::view

// Base class headers
#include "./View.hpp"

