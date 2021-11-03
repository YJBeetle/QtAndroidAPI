#include "../../JIntArray.hpp"
#include "../animation/LayoutTransition.hpp"
#include "../content/Context.hpp"
#include "../content/res/Configuration.hpp"
#include "../graphics/Canvas.hpp"
#include "../graphics/Point.hpp"
#include "../graphics/Rect.hpp"
#include "../graphics/Region.hpp"
#include "../os/Bundle.hpp"
#include "../util/SparseArray.hpp"
#include "./ActionMode.hpp"
#include "./DragEvent.hpp"
#include "./KeyEvent.hpp"
#include "./MotionEvent.hpp"
#include "./PointerIcon.hpp"
#include "./View.hpp"
#include "./ViewGroup_LayoutParams.hpp"
#include "./ViewGroupOverlay.hpp"
#include "./ViewOverlay.hpp"
#include "./ViewStructure.hpp"
#include "./WindowInsets.hpp"
#include "./accessibility/AccessibilityEvent.hpp"
#include "./animation/LayoutAnimationController.hpp"
#include "./animation/Transformation.hpp"
#include "../../JString.hpp"
#include "../../java/util/ArrayList.hpp"
#include "./ViewGroup.hpp"

namespace android::view
{
	// Fields
	jint ViewGroup::FOCUS_AFTER_DESCENDANTS()
	{
		return getStaticField<jint>(
			"android.view.ViewGroup",
			"FOCUS_AFTER_DESCENDANTS"
		);
	}
	jint ViewGroup::FOCUS_BEFORE_DESCENDANTS()
	{
		return getStaticField<jint>(
			"android.view.ViewGroup",
			"FOCUS_BEFORE_DESCENDANTS"
		);
	}
	jint ViewGroup::FOCUS_BLOCK_DESCENDANTS()
	{
		return getStaticField<jint>(
			"android.view.ViewGroup",
			"FOCUS_BLOCK_DESCENDANTS"
		);
	}
	jint ViewGroup::LAYOUT_MODE_CLIP_BOUNDS()
	{
		return getStaticField<jint>(
			"android.view.ViewGroup",
			"LAYOUT_MODE_CLIP_BOUNDS"
		);
	}
	jint ViewGroup::LAYOUT_MODE_OPTICAL_BOUNDS()
	{
		return getStaticField<jint>(
			"android.view.ViewGroup",
			"LAYOUT_MODE_OPTICAL_BOUNDS"
		);
	}
	jint ViewGroup::PERSISTENT_ALL_CACHES()
	{
		return getStaticField<jint>(
			"android.view.ViewGroup",
			"PERSISTENT_ALL_CACHES"
		);
	}
	jint ViewGroup::PERSISTENT_ANIMATION_CACHE()
	{
		return getStaticField<jint>(
			"android.view.ViewGroup",
			"PERSISTENT_ANIMATION_CACHE"
		);
	}
	jint ViewGroup::PERSISTENT_NO_CACHE()
	{
		return getStaticField<jint>(
			"android.view.ViewGroup",
			"PERSISTENT_NO_CACHE"
		);
	}
	jint ViewGroup::PERSISTENT_SCROLLING_CACHE()
	{
		return getStaticField<jint>(
			"android.view.ViewGroup",
			"PERSISTENT_SCROLLING_CACHE"
		);
	}
	
	// QAndroidJniObject forward
	ViewGroup::ViewGroup(QAndroidJniObject obj) : android::view::View(obj) {}
	
	// Constructors
	ViewGroup::ViewGroup(android::content::Context arg0)
		: android::view::View(
			"android.view.ViewGroup",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	ViewGroup::ViewGroup(android::content::Context arg0, JObject arg1)
		: android::view::View(
			"android.view.ViewGroup",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	ViewGroup::ViewGroup(android::content::Context arg0, JObject arg1, jint arg2)
		: android::view::View(
			"android.view.ViewGroup",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	ViewGroup::ViewGroup(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::view::View(
			"android.view.ViewGroup",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	jint ViewGroup::getChildMeasureSpec(jint arg0, jint arg1, jint arg2)
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
	void ViewGroup::addChildrenForAccessibility(java::util::ArrayList arg0) const
	{
		callMethod<void>(
			"addChildrenForAccessibility",
			"(Ljava/util/ArrayList;)V",
			arg0.object()
		);
	}
	void ViewGroup::addFocusables(java::util::ArrayList arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"addFocusables",
			"(Ljava/util/ArrayList;II)V",
			arg0.object(),
			arg1,
			arg2
		);
	}
	void ViewGroup::addKeyboardNavigationClusters(JObject arg0, jint arg1) const
	{
		callMethod<void>(
			"addKeyboardNavigationClusters",
			"(Ljava/util/Collection;I)V",
			arg0.object(),
			arg1
		);
	}
	jboolean ViewGroup::addStatesFromChildren() const
	{
		return callMethod<jboolean>(
			"addStatesFromChildren",
			"()Z"
		);
	}
	void ViewGroup::addTouchables(java::util::ArrayList arg0) const
	{
		callMethod<void>(
			"addTouchables",
			"(Ljava/util/ArrayList;)V",
			arg0.object()
		);
	}
	void ViewGroup::addView(android::view::View arg0) const
	{
		callMethod<void>(
			"addView",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	void ViewGroup::addView(android::view::View arg0, android::view::ViewGroup_LayoutParams arg1) const
	{
		callMethod<void>(
			"addView",
			"(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void ViewGroup::addView(android::view::View arg0, jint arg1) const
	{
		callMethod<void>(
			"addView",
			"(Landroid/view/View;I)V",
			arg0.object(),
			arg1
		);
	}
	void ViewGroup::addView(android::view::View arg0, jint arg1, android::view::ViewGroup_LayoutParams arg2) const
	{
		callMethod<void>(
			"addView",
			"(Landroid/view/View;ILandroid/view/ViewGroup$LayoutParams;)V",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	void ViewGroup::addView(android::view::View arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"addView",
			"(Landroid/view/View;II)V",
			arg0.object(),
			arg1,
			arg2
		);
	}
	void ViewGroup::bringChildToFront(android::view::View arg0) const
	{
		callMethod<void>(
			"bringChildToFront",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	void ViewGroup::childDrawableStateChanged(android::view::View arg0) const
	{
		callMethod<void>(
			"childDrawableStateChanged",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	void ViewGroup::childHasTransientStateChanged(android::view::View arg0, jboolean arg1) const
	{
		callMethod<void>(
			"childHasTransientStateChanged",
			"(Landroid/view/View;Z)V",
			arg0.object(),
			arg1
		);
	}
	void ViewGroup::clearChildFocus(android::view::View arg0) const
	{
		callMethod<void>(
			"clearChildFocus",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	void ViewGroup::clearDisappearingChildren() const
	{
		callMethod<void>(
			"clearDisappearingChildren",
			"()V"
		);
	}
	void ViewGroup::clearFocus() const
	{
		callMethod<void>(
			"clearFocus",
			"()V"
		);
	}
	android::view::WindowInsets ViewGroup::dispatchApplyWindowInsets(android::view::WindowInsets arg0) const
	{
		return callObjectMethod(
			"dispatchApplyWindowInsets",
			"(Landroid/view/WindowInsets;)Landroid/view/WindowInsets;",
			arg0.object()
		);
	}
	jboolean ViewGroup::dispatchCapturedPointerEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"dispatchCapturedPointerEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	void ViewGroup::dispatchConfigurationChanged(android::content::res::Configuration arg0) const
	{
		callMethod<void>(
			"dispatchConfigurationChanged",
			"(Landroid/content/res/Configuration;)V",
			arg0.object()
		);
	}
	void ViewGroup::dispatchDisplayHint(jint arg0) const
	{
		callMethod<void>(
			"dispatchDisplayHint",
			"(I)V",
			arg0
		);
	}
	jboolean ViewGroup::dispatchDragEvent(android::view::DragEvent arg0) const
	{
		return callMethod<jboolean>(
			"dispatchDragEvent",
			"(Landroid/view/DragEvent;)Z",
			arg0.object()
		);
	}
	void ViewGroup::dispatchDrawableHotspotChanged(jfloat arg0, jfloat arg1) const
	{
		callMethod<void>(
			"dispatchDrawableHotspotChanged",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void ViewGroup::dispatchFinishTemporaryDetach() const
	{
		callMethod<void>(
			"dispatchFinishTemporaryDetach",
			"()V"
		);
	}
	jboolean ViewGroup::dispatchKeyEvent(android::view::KeyEvent arg0) const
	{
		return callMethod<jboolean>(
			"dispatchKeyEvent",
			"(Landroid/view/KeyEvent;)Z",
			arg0.object()
		);
	}
	jboolean ViewGroup::dispatchKeyEventPreIme(android::view::KeyEvent arg0) const
	{
		return callMethod<jboolean>(
			"dispatchKeyEventPreIme",
			"(Landroid/view/KeyEvent;)Z",
			arg0.object()
		);
	}
	jboolean ViewGroup::dispatchKeyShortcutEvent(android::view::KeyEvent arg0) const
	{
		return callMethod<jboolean>(
			"dispatchKeyShortcutEvent",
			"(Landroid/view/KeyEvent;)Z",
			arg0.object()
		);
	}
	void ViewGroup::dispatchPointerCaptureChanged(jboolean arg0) const
	{
		callMethod<void>(
			"dispatchPointerCaptureChanged",
			"(Z)V",
			arg0
		);
	}
	void ViewGroup::dispatchProvideAutofillStructure(android::view::ViewStructure arg0, jint arg1) const
	{
		callMethod<void>(
			"dispatchProvideAutofillStructure",
			"(Landroid/view/ViewStructure;I)V",
			arg0.object(),
			arg1
		);
	}
	void ViewGroup::dispatchProvideStructure(android::view::ViewStructure arg0) const
	{
		callMethod<void>(
			"dispatchProvideStructure",
			"(Landroid/view/ViewStructure;)V",
			arg0.object()
		);
	}
	void ViewGroup::dispatchSetActivated(jboolean arg0) const
	{
		callMethod<void>(
			"dispatchSetActivated",
			"(Z)V",
			arg0
		);
	}
	void ViewGroup::dispatchSetSelected(jboolean arg0) const
	{
		callMethod<void>(
			"dispatchSetSelected",
			"(Z)V",
			arg0
		);
	}
	void ViewGroup::dispatchStartTemporaryDetach() const
	{
		callMethod<void>(
			"dispatchStartTemporaryDetach",
			"()V"
		);
	}
	void ViewGroup::dispatchSystemUiVisibilityChanged(jint arg0) const
	{
		callMethod<void>(
			"dispatchSystemUiVisibilityChanged",
			"(I)V",
			arg0
		);
	}
	jboolean ViewGroup::dispatchTouchEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"dispatchTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	jboolean ViewGroup::dispatchTrackballEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"dispatchTrackballEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	jboolean ViewGroup::dispatchUnhandledMove(android::view::View arg0, jint arg1) const
	{
		return callMethod<jboolean>(
			"dispatchUnhandledMove",
			"(Landroid/view/View;I)Z",
			arg0.object(),
			arg1
		);
	}
	void ViewGroup::dispatchWindowFocusChanged(jboolean arg0) const
	{
		callMethod<void>(
			"dispatchWindowFocusChanged",
			"(Z)V",
			arg0
		);
	}
	void ViewGroup::dispatchWindowSystemUiVisiblityChanged(jint arg0) const
	{
		callMethod<void>(
			"dispatchWindowSystemUiVisiblityChanged",
			"(I)V",
			arg0
		);
	}
	void ViewGroup::dispatchWindowVisibilityChanged(jint arg0) const
	{
		callMethod<void>(
			"dispatchWindowVisibilityChanged",
			"(I)V",
			arg0
		);
	}
	void ViewGroup::endViewTransition(android::view::View arg0) const
	{
		callMethod<void>(
			"endViewTransition",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	android::view::View ViewGroup::findFocus() const
	{
		return callObjectMethod(
			"findFocus",
			"()Landroid/view/View;"
		);
	}
	void ViewGroup::findViewsWithText(java::util::ArrayList arg0, JString arg1, jint arg2) const
	{
		callMethod<void>(
			"findViewsWithText",
			"(Ljava/util/ArrayList;Ljava/lang/CharSequence;I)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2
		);
	}
	android::view::View ViewGroup::focusSearch(android::view::View arg0, jint arg1) const
	{
		return callObjectMethod(
			"focusSearch",
			"(Landroid/view/View;I)Landroid/view/View;",
			arg0.object(),
			arg1
		);
	}
	void ViewGroup::focusableViewAvailable(android::view::View arg0) const
	{
		callMethod<void>(
			"focusableViewAvailable",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	jboolean ViewGroup::gatherTransparentRegion(android::graphics::Region arg0) const
	{
		return callMethod<jboolean>(
			"gatherTransparentRegion",
			"(Landroid/graphics/Region;)Z",
			arg0.object()
		);
	}
	android::view::ViewGroup_LayoutParams ViewGroup::generateLayoutParams(JObject arg0) const
	{
		return callObjectMethod(
			"generateLayoutParams",
			"(Landroid/util/AttributeSet;)Landroid/view/ViewGroup$LayoutParams;",
			arg0.object()
		);
	}
	JString ViewGroup::getAccessibilityClassName() const
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		);
	}
	android::view::View ViewGroup::getChildAt(jint arg0) const
	{
		return callObjectMethod(
			"getChildAt",
			"(I)Landroid/view/View;",
			arg0
		);
	}
	jint ViewGroup::getChildCount() const
	{
		return callMethod<jint>(
			"getChildCount",
			"()I"
		);
	}
	jboolean ViewGroup::getChildVisibleRect(android::view::View arg0, android::graphics::Rect arg1, android::graphics::Point arg2) const
	{
		return callMethod<jboolean>(
			"getChildVisibleRect",
			"(Landroid/view/View;Landroid/graphics/Rect;Landroid/graphics/Point;)Z",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	jboolean ViewGroup::getClipChildren() const
	{
		return callMethod<jboolean>(
			"getClipChildren",
			"()Z"
		);
	}
	jboolean ViewGroup::getClipToPadding() const
	{
		return callMethod<jboolean>(
			"getClipToPadding",
			"()Z"
		);
	}
	jint ViewGroup::getDescendantFocusability() const
	{
		return callMethod<jint>(
			"getDescendantFocusability",
			"()I"
		);
	}
	android::view::View ViewGroup::getFocusedChild() const
	{
		return callObjectMethod(
			"getFocusedChild",
			"()Landroid/view/View;"
		);
	}
	android::view::animation::LayoutAnimationController ViewGroup::getLayoutAnimation() const
	{
		return callObjectMethod(
			"getLayoutAnimation",
			"()Landroid/view/animation/LayoutAnimationController;"
		);
	}
	JObject ViewGroup::getLayoutAnimationListener() const
	{
		return callObjectMethod(
			"getLayoutAnimationListener",
			"()Landroid/view/animation/Animation$AnimationListener;"
		);
	}
	jint ViewGroup::getLayoutMode() const
	{
		return callMethod<jint>(
			"getLayoutMode",
			"()I"
		);
	}
	android::animation::LayoutTransition ViewGroup::getLayoutTransition() const
	{
		return callObjectMethod(
			"getLayoutTransition",
			"()Landroid/animation/LayoutTransition;"
		);
	}
	jint ViewGroup::getNestedScrollAxes() const
	{
		return callMethod<jint>(
			"getNestedScrollAxes",
			"()I"
		);
	}
	android::view::ViewGroupOverlay ViewGroup::getOverlay() const
	{
		return callObjectMethod(
			"getOverlay",
			"()Landroid/view/ViewGroupOverlay;"
		);
	}
	jint ViewGroup::getPersistentDrawingCache() const
	{
		return callMethod<jint>(
			"getPersistentDrawingCache",
			"()I"
		);
	}
	jboolean ViewGroup::getTouchscreenBlocksFocus() const
	{
		return callMethod<jboolean>(
			"getTouchscreenBlocksFocus",
			"()Z"
		);
	}
	jboolean ViewGroup::hasFocus() const
	{
		return callMethod<jboolean>(
			"hasFocus",
			"()Z"
		);
	}
	jboolean ViewGroup::hasTransientState() const
	{
		return callMethod<jboolean>(
			"hasTransientState",
			"()Z"
		);
	}
	jint ViewGroup::indexOfChild(android::view::View arg0) const
	{
		return callMethod<jint>(
			"indexOfChild",
			"(Landroid/view/View;)I",
			arg0.object()
		);
	}
	void ViewGroup::invalidateChild(android::view::View arg0, android::graphics::Rect arg1) const
	{
		callMethod<void>(
			"invalidateChild",
			"(Landroid/view/View;Landroid/graphics/Rect;)V",
			arg0.object(),
			arg1.object()
		);
	}
	JObject ViewGroup::invalidateChildInParent(JIntArray arg0, android::graphics::Rect arg1) const
	{
		return callObjectMethod(
			"invalidateChildInParent",
			"([ILandroid/graphics/Rect;)Landroid/view/ViewParent;",
			arg0.object<jintArray>(),
			arg1.object()
		);
	}
	jboolean ViewGroup::isAlwaysDrawnWithCacheEnabled() const
	{
		return callMethod<jboolean>(
			"isAlwaysDrawnWithCacheEnabled",
			"()Z"
		);
	}
	jboolean ViewGroup::isAnimationCacheEnabled() const
	{
		return callMethod<jboolean>(
			"isAnimationCacheEnabled",
			"()Z"
		);
	}
	jboolean ViewGroup::isMotionEventSplittingEnabled() const
	{
		return callMethod<jboolean>(
			"isMotionEventSplittingEnabled",
			"()Z"
		);
	}
	jboolean ViewGroup::isTransitionGroup() const
	{
		return callMethod<jboolean>(
			"isTransitionGroup",
			"()Z"
		);
	}
	void ViewGroup::jumpDrawablesToCurrentState() const
	{
		callMethod<void>(
			"jumpDrawablesToCurrentState",
			"()V"
		);
	}
	void ViewGroup::layout(jint arg0, jint arg1, jint arg2, jint arg3) const
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
	void ViewGroup::notifySubtreeAccessibilityStateChanged(android::view::View arg0, android::view::View arg1, jint arg2) const
	{
		callMethod<void>(
			"notifySubtreeAccessibilityStateChanged",
			"(Landroid/view/View;Landroid/view/View;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	void ViewGroup::offsetDescendantRectToMyCoords(android::view::View arg0, android::graphics::Rect arg1) const
	{
		callMethod<void>(
			"offsetDescendantRectToMyCoords",
			"(Landroid/view/View;Landroid/graphics/Rect;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void ViewGroup::offsetRectIntoDescendantCoords(android::view::View arg0, android::graphics::Rect arg1) const
	{
		callMethod<void>(
			"offsetRectIntoDescendantCoords",
			"(Landroid/view/View;Landroid/graphics/Rect;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void ViewGroup::onDescendantInvalidated(android::view::View arg0, android::view::View arg1) const
	{
		callMethod<void>(
			"onDescendantInvalidated",
			"(Landroid/view/View;Landroid/view/View;)V",
			arg0.object(),
			arg1.object()
		);
	}
	jboolean ViewGroup::onInterceptHoverEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onInterceptHoverEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	jboolean ViewGroup::onInterceptTouchEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onInterceptTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	jboolean ViewGroup::onNestedFling(android::view::View arg0, jfloat arg1, jfloat arg2, jboolean arg3) const
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
	jboolean ViewGroup::onNestedPreFling(android::view::View arg0, jfloat arg1, jfloat arg2) const
	{
		return callMethod<jboolean>(
			"onNestedPreFling",
			"(Landroid/view/View;FF)Z",
			arg0.object(),
			arg1,
			arg2
		);
	}
	jboolean ViewGroup::onNestedPrePerformAccessibilityAction(android::view::View arg0, jint arg1, android::os::Bundle arg2) const
	{
		return callMethod<jboolean>(
			"onNestedPrePerformAccessibilityAction",
			"(Landroid/view/View;ILandroid/os/Bundle;)Z",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	void ViewGroup::onNestedPreScroll(android::view::View arg0, jint arg1, jint arg2, JIntArray arg3) const
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
	void ViewGroup::onNestedScroll(android::view::View arg0, jint arg1, jint arg2, jint arg3, jint arg4) const
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
	void ViewGroup::onNestedScrollAccepted(android::view::View arg0, android::view::View arg1, jint arg2) const
	{
		callMethod<void>(
			"onNestedScrollAccepted",
			"(Landroid/view/View;Landroid/view/View;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	jboolean ViewGroup::onRequestSendAccessibilityEvent(android::view::View arg0, android::view::accessibility::AccessibilityEvent arg1) const
	{
		return callMethod<jboolean>(
			"onRequestSendAccessibilityEvent",
			"(Landroid/view/View;Landroid/view/accessibility/AccessibilityEvent;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	android::view::PointerIcon ViewGroup::onResolvePointerIcon(android::view::MotionEvent arg0, jint arg1) const
	{
		return callObjectMethod(
			"onResolvePointerIcon",
			"(Landroid/view/MotionEvent;I)Landroid/view/PointerIcon;",
			arg0.object(),
			arg1
		);
	}
	jboolean ViewGroup::onStartNestedScroll(android::view::View arg0, android::view::View arg1, jint arg2) const
	{
		return callMethod<jboolean>(
			"onStartNestedScroll",
			"(Landroid/view/View;Landroid/view/View;I)Z",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	void ViewGroup::onStopNestedScroll(android::view::View arg0) const
	{
		callMethod<void>(
			"onStopNestedScroll",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	void ViewGroup::onViewAdded(android::view::View arg0) const
	{
		callMethod<void>(
			"onViewAdded",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	void ViewGroup::onViewRemoved(android::view::View arg0) const
	{
		callMethod<void>(
			"onViewRemoved",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	void ViewGroup::recomputeViewAttributes(android::view::View arg0) const
	{
		callMethod<void>(
			"recomputeViewAttributes",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	void ViewGroup::removeAllViews() const
	{
		callMethod<void>(
			"removeAllViews",
			"()V"
		);
	}
	void ViewGroup::removeAllViewsInLayout() const
	{
		callMethod<void>(
			"removeAllViewsInLayout",
			"()V"
		);
	}
	void ViewGroup::removeView(android::view::View arg0) const
	{
		callMethod<void>(
			"removeView",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	void ViewGroup::removeViewAt(jint arg0) const
	{
		callMethod<void>(
			"removeViewAt",
			"(I)V",
			arg0
		);
	}
	void ViewGroup::removeViewInLayout(android::view::View arg0) const
	{
		callMethod<void>(
			"removeViewInLayout",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	void ViewGroup::removeViews(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"removeViews",
			"(II)V",
			arg0,
			arg1
		);
	}
	void ViewGroup::removeViewsInLayout(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"removeViewsInLayout",
			"(II)V",
			arg0,
			arg1
		);
	}
	void ViewGroup::requestChildFocus(android::view::View arg0, android::view::View arg1) const
	{
		callMethod<void>(
			"requestChildFocus",
			"(Landroid/view/View;Landroid/view/View;)V",
			arg0.object(),
			arg1.object()
		);
	}
	jboolean ViewGroup::requestChildRectangleOnScreen(android::view::View arg0, android::graphics::Rect arg1, jboolean arg2) const
	{
		return callMethod<jboolean>(
			"requestChildRectangleOnScreen",
			"(Landroid/view/View;Landroid/graphics/Rect;Z)Z",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	void ViewGroup::requestDisallowInterceptTouchEvent(jboolean arg0) const
	{
		callMethod<void>(
			"requestDisallowInterceptTouchEvent",
			"(Z)V",
			arg0
		);
	}
	jboolean ViewGroup::requestFocus(jint arg0, android::graphics::Rect arg1) const
	{
		return callMethod<jboolean>(
			"requestFocus",
			"(ILandroid/graphics/Rect;)Z",
			arg0,
			arg1.object()
		);
	}
	jboolean ViewGroup::requestSendAccessibilityEvent(android::view::View arg0, android::view::accessibility::AccessibilityEvent arg1) const
	{
		return callMethod<jboolean>(
			"requestSendAccessibilityEvent",
			"(Landroid/view/View;Landroid/view/accessibility/AccessibilityEvent;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	void ViewGroup::requestTransparentRegion(android::view::View arg0) const
	{
		callMethod<void>(
			"requestTransparentRegion",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	jboolean ViewGroup::restoreDefaultFocus() const
	{
		return callMethod<jboolean>(
			"restoreDefaultFocus",
			"()Z"
		);
	}
	void ViewGroup::scheduleLayoutAnimation() const
	{
		callMethod<void>(
			"scheduleLayoutAnimation",
			"()V"
		);
	}
	void ViewGroup::setAddStatesFromChildren(jboolean arg0) const
	{
		callMethod<void>(
			"setAddStatesFromChildren",
			"(Z)V",
			arg0
		);
	}
	void ViewGroup::setAlwaysDrawnWithCacheEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setAlwaysDrawnWithCacheEnabled",
			"(Z)V",
			arg0
		);
	}
	void ViewGroup::setAnimationCacheEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setAnimationCacheEnabled",
			"(Z)V",
			arg0
		);
	}
	void ViewGroup::setClipChildren(jboolean arg0) const
	{
		callMethod<void>(
			"setClipChildren",
			"(Z)V",
			arg0
		);
	}
	void ViewGroup::setClipToPadding(jboolean arg0) const
	{
		callMethod<void>(
			"setClipToPadding",
			"(Z)V",
			arg0
		);
	}
	void ViewGroup::setDescendantFocusability(jint arg0) const
	{
		callMethod<void>(
			"setDescendantFocusability",
			"(I)V",
			arg0
		);
	}
	void ViewGroup::setLayoutAnimation(android::view::animation::LayoutAnimationController arg0) const
	{
		callMethod<void>(
			"setLayoutAnimation",
			"(Landroid/view/animation/LayoutAnimationController;)V",
			arg0.object()
		);
	}
	void ViewGroup::setLayoutAnimationListener(JObject arg0) const
	{
		callMethod<void>(
			"setLayoutAnimationListener",
			"(Landroid/view/animation/Animation$AnimationListener;)V",
			arg0.object()
		);
	}
	void ViewGroup::setLayoutMode(jint arg0) const
	{
		callMethod<void>(
			"setLayoutMode",
			"(I)V",
			arg0
		);
	}
	void ViewGroup::setLayoutTransition(android::animation::LayoutTransition arg0) const
	{
		callMethod<void>(
			"setLayoutTransition",
			"(Landroid/animation/LayoutTransition;)V",
			arg0.object()
		);
	}
	void ViewGroup::setMotionEventSplittingEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setMotionEventSplittingEnabled",
			"(Z)V",
			arg0
		);
	}
	void ViewGroup::setOnHierarchyChangeListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnHierarchyChangeListener",
			"(Landroid/view/ViewGroup$OnHierarchyChangeListener;)V",
			arg0.object()
		);
	}
	void ViewGroup::setPersistentDrawingCache(jint arg0) const
	{
		callMethod<void>(
			"setPersistentDrawingCache",
			"(I)V",
			arg0
		);
	}
	void ViewGroup::setTouchscreenBlocksFocus(jboolean arg0) const
	{
		callMethod<void>(
			"setTouchscreenBlocksFocus",
			"(Z)V",
			arg0
		);
	}
	void ViewGroup::setTransitionGroup(jboolean arg0) const
	{
		callMethod<void>(
			"setTransitionGroup",
			"(Z)V",
			arg0
		);
	}
	jboolean ViewGroup::shouldDelayChildPressedState() const
	{
		return callMethod<jboolean>(
			"shouldDelayChildPressedState",
			"()Z"
		);
	}
	jboolean ViewGroup::showContextMenuForChild(android::view::View arg0) const
	{
		return callMethod<jboolean>(
			"showContextMenuForChild",
			"(Landroid/view/View;)Z",
			arg0.object()
		);
	}
	jboolean ViewGroup::showContextMenuForChild(android::view::View arg0, jfloat arg1, jfloat arg2) const
	{
		return callMethod<jboolean>(
			"showContextMenuForChild",
			"(Landroid/view/View;FF)Z",
			arg0.object(),
			arg1,
			arg2
		);
	}
	android::view::ActionMode ViewGroup::startActionModeForChild(android::view::View arg0, JObject arg1) const
	{
		return callObjectMethod(
			"startActionModeForChild",
			"(Landroid/view/View;Landroid/view/ActionMode$Callback;)Landroid/view/ActionMode;",
			arg0.object(),
			arg1.object()
		);
	}
	android::view::ActionMode ViewGroup::startActionModeForChild(android::view::View arg0, JObject arg1, jint arg2) const
	{
		return callObjectMethod(
			"startActionModeForChild",
			"(Landroid/view/View;Landroid/view/ActionMode$Callback;I)Landroid/view/ActionMode;",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	void ViewGroup::startLayoutAnimation() const
	{
		callMethod<void>(
			"startLayoutAnimation",
			"()V"
		);
	}
	void ViewGroup::startViewTransition(android::view::View arg0) const
	{
		callMethod<void>(
			"startViewTransition",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	void ViewGroup::updateViewLayout(android::view::View arg0, android::view::ViewGroup_LayoutParams arg1) const
	{
		callMethod<void>(
			"updateViewLayout",
			"(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::view

