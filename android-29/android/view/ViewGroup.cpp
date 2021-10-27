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
#include "../../java/util/ArrayList.hpp"
#include "./ViewGroup.hpp"

namespace android::view
{
	// Fields
	jint ViewGroup::FOCUS_AFTER_DESCENDANTS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.ViewGroup",
			"FOCUS_AFTER_DESCENDANTS"
		);
	}
	jint ViewGroup::FOCUS_BEFORE_DESCENDANTS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.ViewGroup",
			"FOCUS_BEFORE_DESCENDANTS"
		);
	}
	jint ViewGroup::FOCUS_BLOCK_DESCENDANTS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.ViewGroup",
			"FOCUS_BLOCK_DESCENDANTS"
		);
	}
	jint ViewGroup::LAYOUT_MODE_CLIP_BOUNDS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.ViewGroup",
			"LAYOUT_MODE_CLIP_BOUNDS"
		);
	}
	jint ViewGroup::LAYOUT_MODE_OPTICAL_BOUNDS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.ViewGroup",
			"LAYOUT_MODE_OPTICAL_BOUNDS"
		);
	}
	jint ViewGroup::PERSISTENT_ALL_CACHES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.ViewGroup",
			"PERSISTENT_ALL_CACHES"
		);
	}
	jint ViewGroup::PERSISTENT_ANIMATION_CACHE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.ViewGroup",
			"PERSISTENT_ANIMATION_CACHE"
		);
	}
	jint ViewGroup::PERSISTENT_NO_CACHE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.ViewGroup",
			"PERSISTENT_NO_CACHE"
		);
	}
	jint ViewGroup::PERSISTENT_SCROLLING_CACHE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.ViewGroup",
			"PERSISTENT_SCROLLING_CACHE"
		);
	}
	
	ViewGroup::ViewGroup(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ViewGroup::ViewGroup(android::content::Context &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.ViewGroup",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	ViewGroup::ViewGroup(android::content::Context &arg0, __JniBaseClass &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.view.ViewGroup",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	ViewGroup::ViewGroup(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.view.ViewGroup",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	ViewGroup::ViewGroup(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2, jint &arg3)
	{
		__thiz = QAndroidJniObject(
			"android.view.ViewGroup",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	
	// Methods
	jint ViewGroup::getChildMeasureSpec(jint arg0, jint arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.view.ViewGroup",
			"getChildMeasureSpec",
			"(III)I",
			arg0,
			arg1,
			arg2
		);
	}
	void ViewGroup::addChildrenForAccessibility(java::util::ArrayList arg0)
	{
		__thiz.callMethod<void>(
			"addChildrenForAccessibility",
			"(Ljava/util/ArrayList;)V",
			arg0.__jniObject().object()
		);
	}
	void ViewGroup::addFocusables(java::util::ArrayList arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"addFocusables",
			"(Ljava/util/ArrayList;II)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void ViewGroup::addKeyboardNavigationClusters(__JniBaseClass arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"addKeyboardNavigationClusters",
			"(Ljava/util/Collection;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jboolean ViewGroup::addStatesFromChildren()
	{
		return __thiz.callMethod<jboolean>(
			"addStatesFromChildren",
			"()Z"
		);
	}
	void ViewGroup::addTouchables(java::util::ArrayList arg0)
	{
		__thiz.callMethod<void>(
			"addTouchables",
			"(Ljava/util/ArrayList;)V",
			arg0.__jniObject().object()
		);
	}
	void ViewGroup::addView(android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"addView",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
	void ViewGroup::addView(android::view::View arg0, android::view::ViewGroup_LayoutParams arg1)
	{
		__thiz.callMethod<void>(
			"addView",
			"(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void ViewGroup::addView(android::view::View arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"addView",
			"(Landroid/view/View;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void ViewGroup::addView(android::view::View arg0, jint arg1, android::view::ViewGroup_LayoutParams arg2)
	{
		__thiz.callMethod<void>(
			"addView",
			"(Landroid/view/View;ILandroid/view/ViewGroup$LayoutParams;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	void ViewGroup::addView(android::view::View arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"addView",
			"(Landroid/view/View;II)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void ViewGroup::bringChildToFront(android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"bringChildToFront",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
	void ViewGroup::childDrawableStateChanged(android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"childDrawableStateChanged",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
	void ViewGroup::childHasTransientStateChanged(android::view::View arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"childHasTransientStateChanged",
			"(Landroid/view/View;Z)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void ViewGroup::clearChildFocus(android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"clearChildFocus",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
	void ViewGroup::clearDisappearingChildren()
	{
		__thiz.callMethod<void>(
			"clearDisappearingChildren",
			"()V"
		);
	}
	void ViewGroup::clearFocus()
	{
		__thiz.callMethod<void>(
			"clearFocus",
			"()V"
		);
	}
	QAndroidJniObject ViewGroup::dispatchApplyWindowInsets(android::view::WindowInsets arg0)
	{
		return __thiz.callObjectMethod(
			"dispatchApplyWindowInsets",
			"(Landroid/view/WindowInsets;)Landroid/view/WindowInsets;",
			arg0.__jniObject().object()
		);
	}
	jboolean ViewGroup::dispatchCapturedPointerEvent(android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchCapturedPointerEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	void ViewGroup::dispatchConfigurationChanged(android::content::res::Configuration arg0)
	{
		__thiz.callMethod<void>(
			"dispatchConfigurationChanged",
			"(Landroid/content/res/Configuration;)V",
			arg0.__jniObject().object()
		);
	}
	void ViewGroup::dispatchDisplayHint(jint arg0)
	{
		__thiz.callMethod<void>(
			"dispatchDisplayHint",
			"(I)V",
			arg0
		);
	}
	jboolean ViewGroup::dispatchDragEvent(android::view::DragEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchDragEvent",
			"(Landroid/view/DragEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	void ViewGroup::dispatchDrawableHotspotChanged(jfloat arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"dispatchDrawableHotspotChanged",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void ViewGroup::dispatchFinishTemporaryDetach()
	{
		__thiz.callMethod<void>(
			"dispatchFinishTemporaryDetach",
			"()V"
		);
	}
	jboolean ViewGroup::dispatchKeyEvent(android::view::KeyEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchKeyEvent",
			"(Landroid/view/KeyEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean ViewGroup::dispatchKeyEventPreIme(android::view::KeyEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchKeyEventPreIme",
			"(Landroid/view/KeyEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean ViewGroup::dispatchKeyShortcutEvent(android::view::KeyEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchKeyShortcutEvent",
			"(Landroid/view/KeyEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	void ViewGroup::dispatchPointerCaptureChanged(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"dispatchPointerCaptureChanged",
			"(Z)V",
			arg0
		);
	}
	void ViewGroup::dispatchProvideAutofillStructure(android::view::ViewStructure arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"dispatchProvideAutofillStructure",
			"(Landroid/view/ViewStructure;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void ViewGroup::dispatchProvideStructure(android::view::ViewStructure arg0)
	{
		__thiz.callMethod<void>(
			"dispatchProvideStructure",
			"(Landroid/view/ViewStructure;)V",
			arg0.__jniObject().object()
		);
	}
	void ViewGroup::dispatchSetActivated(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"dispatchSetActivated",
			"(Z)V",
			arg0
		);
	}
	void ViewGroup::dispatchSetSelected(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"dispatchSetSelected",
			"(Z)V",
			arg0
		);
	}
	void ViewGroup::dispatchStartTemporaryDetach()
	{
		__thiz.callMethod<void>(
			"dispatchStartTemporaryDetach",
			"()V"
		);
	}
	void ViewGroup::dispatchSystemUiVisibilityChanged(jint arg0)
	{
		__thiz.callMethod<void>(
			"dispatchSystemUiVisibilityChanged",
			"(I)V",
			arg0
		);
	}
	jboolean ViewGroup::dispatchTouchEvent(android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean ViewGroup::dispatchTrackballEvent(android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchTrackballEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean ViewGroup::dispatchUnhandledMove(android::view::View arg0, jint arg1)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchUnhandledMove",
			"(Landroid/view/View;I)Z",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void ViewGroup::dispatchWindowFocusChanged(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"dispatchWindowFocusChanged",
			"(Z)V",
			arg0
		);
	}
	void ViewGroup::dispatchWindowSystemUiVisiblityChanged(jint arg0)
	{
		__thiz.callMethod<void>(
			"dispatchWindowSystemUiVisiblityChanged",
			"(I)V",
			arg0
		);
	}
	void ViewGroup::dispatchWindowVisibilityChanged(jint arg0)
	{
		__thiz.callMethod<void>(
			"dispatchWindowVisibilityChanged",
			"(I)V",
			arg0
		);
	}
	void ViewGroup::endViewTransition(android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"endViewTransition",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ViewGroup::findFocus()
	{
		return __thiz.callObjectMethod(
			"findFocus",
			"()Landroid/view/View;"
		);
	}
	void ViewGroup::findViewsWithText(java::util::ArrayList arg0, jstring arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"findViewsWithText",
			"(Ljava/util/ArrayList;Ljava/lang/CharSequence;I)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void ViewGroup::findViewsWithText(java::util::ArrayList arg0, const QString &arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"findViewsWithText",
			"(Ljava/util/ArrayList;Ljava/lang/CharSequence;I)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2
		);
	}
	QAndroidJniObject ViewGroup::focusSearch(android::view::View arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"focusSearch",
			"(Landroid/view/View;I)Landroid/view/View;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void ViewGroup::focusableViewAvailable(android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"focusableViewAvailable",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean ViewGroup::gatherTransparentRegion(android::graphics::Region arg0)
	{
		return __thiz.callMethod<jboolean>(
			"gatherTransparentRegion",
			"(Landroid/graphics/Region;)Z",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ViewGroup::generateLayoutParams(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"generateLayoutParams",
			"(Landroid/util/AttributeSet;)Landroid/view/ViewGroup$LayoutParams;",
			arg0.__jniObject().object()
		);
	}
	jstring ViewGroup::getAccessibilityClassName()
	{
		return __thiz.callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	QAndroidJniObject ViewGroup::getChildAt(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getChildAt",
			"(I)Landroid/view/View;",
			arg0
		);
	}
	jint ViewGroup::getChildCount()
	{
		return __thiz.callMethod<jint>(
			"getChildCount",
			"()I"
		);
	}
	jint ViewGroup::getChildDrawingOrder(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getChildDrawingOrder",
			"(I)I",
			arg0
		);
	}
	jboolean ViewGroup::getChildVisibleRect(android::view::View arg0, android::graphics::Rect arg1, android::graphics::Point arg2)
	{
		return __thiz.callMethod<jboolean>(
			"getChildVisibleRect",
			"(Landroid/view/View;Landroid/graphics/Rect;Landroid/graphics/Point;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	jboolean ViewGroup::getClipChildren()
	{
		return __thiz.callMethod<jboolean>(
			"getClipChildren",
			"()Z"
		);
	}
	jboolean ViewGroup::getClipToPadding()
	{
		return __thiz.callMethod<jboolean>(
			"getClipToPadding",
			"()Z"
		);
	}
	jint ViewGroup::getDescendantFocusability()
	{
		return __thiz.callMethod<jint>(
			"getDescendantFocusability",
			"()I"
		);
	}
	QAndroidJniObject ViewGroup::getFocusedChild()
	{
		return __thiz.callObjectMethod(
			"getFocusedChild",
			"()Landroid/view/View;"
		);
	}
	QAndroidJniObject ViewGroup::getLayoutAnimation()
	{
		return __thiz.callObjectMethod(
			"getLayoutAnimation",
			"()Landroid/view/animation/LayoutAnimationController;"
		);
	}
	QAndroidJniObject ViewGroup::getLayoutAnimationListener()
	{
		return __thiz.callObjectMethod(
			"getLayoutAnimationListener",
			"()Landroid/view/animation/Animation$AnimationListener;"
		);
	}
	jint ViewGroup::getLayoutMode()
	{
		return __thiz.callMethod<jint>(
			"getLayoutMode",
			"()I"
		);
	}
	QAndroidJniObject ViewGroup::getLayoutTransition()
	{
		return __thiz.callObjectMethod(
			"getLayoutTransition",
			"()Landroid/animation/LayoutTransition;"
		);
	}
	jint ViewGroup::getNestedScrollAxes()
	{
		return __thiz.callMethod<jint>(
			"getNestedScrollAxes",
			"()I"
		);
	}
	QAndroidJniObject ViewGroup::getOverlay()
	{
		return __thiz.callObjectMethod(
			"getOverlay",
			"()Landroid/view/ViewGroupOverlay;"
		);
	}
	jint ViewGroup::getPersistentDrawingCache()
	{
		return __thiz.callMethod<jint>(
			"getPersistentDrawingCache",
			"()I"
		);
	}
	jboolean ViewGroup::getTouchscreenBlocksFocus()
	{
		return __thiz.callMethod<jboolean>(
			"getTouchscreenBlocksFocus",
			"()Z"
		);
	}
	jboolean ViewGroup::hasFocus()
	{
		return __thiz.callMethod<jboolean>(
			"hasFocus",
			"()Z"
		);
	}
	jboolean ViewGroup::hasTransientState()
	{
		return __thiz.callMethod<jboolean>(
			"hasTransientState",
			"()Z"
		);
	}
	jint ViewGroup::indexOfChild(android::view::View arg0)
	{
		return __thiz.callMethod<jint>(
			"indexOfChild",
			"(Landroid/view/View;)I",
			arg0.__jniObject().object()
		);
	}
	void ViewGroup::invalidateChild(android::view::View arg0, android::graphics::Rect arg1)
	{
		__thiz.callMethod<void>(
			"invalidateChild",
			"(Landroid/view/View;Landroid/graphics/Rect;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject ViewGroup::invalidateChildInParent(jintArray arg0, android::graphics::Rect arg1)
	{
		return __thiz.callObjectMethod(
			"invalidateChildInParent",
			"([ILandroid/graphics/Rect;)Landroid/view/ViewParent;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean ViewGroup::isAlwaysDrawnWithCacheEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isAlwaysDrawnWithCacheEnabled",
			"()Z"
		);
	}
	jboolean ViewGroup::isAnimationCacheEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isAnimationCacheEnabled",
			"()Z"
		);
	}
	jboolean ViewGroup::isLayoutSuppressed()
	{
		return __thiz.callMethod<jboolean>(
			"isLayoutSuppressed",
			"()Z"
		);
	}
	jboolean ViewGroup::isMotionEventSplittingEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isMotionEventSplittingEnabled",
			"()Z"
		);
	}
	jboolean ViewGroup::isTransitionGroup()
	{
		return __thiz.callMethod<jboolean>(
			"isTransitionGroup",
			"()Z"
		);
	}
	void ViewGroup::jumpDrawablesToCurrentState()
	{
		__thiz.callMethod<void>(
			"jumpDrawablesToCurrentState",
			"()V"
		);
	}
	void ViewGroup::layout(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"layout",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void ViewGroup::notifySubtreeAccessibilityStateChanged(android::view::View arg0, android::view::View arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"notifySubtreeAccessibilityStateChanged",
			"(Landroid/view/View;Landroid/view/View;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void ViewGroup::offsetDescendantRectToMyCoords(android::view::View arg0, android::graphics::Rect arg1)
	{
		__thiz.callMethod<void>(
			"offsetDescendantRectToMyCoords",
			"(Landroid/view/View;Landroid/graphics/Rect;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void ViewGroup::offsetRectIntoDescendantCoords(android::view::View arg0, android::graphics::Rect arg1)
	{
		__thiz.callMethod<void>(
			"offsetRectIntoDescendantCoords",
			"(Landroid/view/View;Landroid/graphics/Rect;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void ViewGroup::onDescendantInvalidated(android::view::View arg0, android::view::View arg1)
	{
		__thiz.callMethod<void>(
			"onDescendantInvalidated",
			"(Landroid/view/View;Landroid/view/View;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean ViewGroup::onInterceptHoverEvent(android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onInterceptHoverEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean ViewGroup::onInterceptTouchEvent(android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onInterceptTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean ViewGroup::onNestedFling(android::view::View arg0, jfloat arg1, jfloat arg2, jboolean arg3)
	{
		return __thiz.callMethod<jboolean>(
			"onNestedFling",
			"(Landroid/view/View;FFZ)Z",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3
		);
	}
	jboolean ViewGroup::onNestedPreFling(android::view::View arg0, jfloat arg1, jfloat arg2)
	{
		return __thiz.callMethod<jboolean>(
			"onNestedPreFling",
			"(Landroid/view/View;FF)Z",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	jboolean ViewGroup::onNestedPrePerformAccessibilityAction(android::view::View arg0, jint arg1, android::os::Bundle arg2)
	{
		return __thiz.callMethod<jboolean>(
			"onNestedPrePerformAccessibilityAction",
			"(Landroid/view/View;ILandroid/os/Bundle;)Z",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	void ViewGroup::onNestedPreScroll(android::view::View arg0, jint arg1, jint arg2, jintArray arg3)
	{
		__thiz.callMethod<void>(
			"onNestedPreScroll",
			"(Landroid/view/View;II[I)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3
		);
	}
	void ViewGroup::onNestedScroll(android::view::View arg0, jint arg1, jint arg2, jint arg3, jint arg4)
	{
		__thiz.callMethod<void>(
			"onNestedScroll",
			"(Landroid/view/View;IIII)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	void ViewGroup::onNestedScrollAccepted(android::view::View arg0, android::view::View arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"onNestedScrollAccepted",
			"(Landroid/view/View;Landroid/view/View;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	jboolean ViewGroup::onRequestSendAccessibilityEvent(android::view::View arg0, android::view::accessibility::AccessibilityEvent arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onRequestSendAccessibilityEvent",
			"(Landroid/view/View;Landroid/view/accessibility/AccessibilityEvent;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject ViewGroup::onResolvePointerIcon(android::view::MotionEvent arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"onResolvePointerIcon",
			"(Landroid/view/MotionEvent;I)Landroid/view/PointerIcon;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jboolean ViewGroup::onStartNestedScroll(android::view::View arg0, android::view::View arg1, jint arg2)
	{
		return __thiz.callMethod<jboolean>(
			"onStartNestedScroll",
			"(Landroid/view/View;Landroid/view/View;I)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void ViewGroup::onStopNestedScroll(android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"onStopNestedScroll",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
	void ViewGroup::onViewAdded(android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"onViewAdded",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
	void ViewGroup::onViewRemoved(android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"onViewRemoved",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
	void ViewGroup::recomputeViewAttributes(android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"recomputeViewAttributes",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
	void ViewGroup::removeAllViews()
	{
		__thiz.callMethod<void>(
			"removeAllViews",
			"()V"
		);
	}
	void ViewGroup::removeAllViewsInLayout()
	{
		__thiz.callMethod<void>(
			"removeAllViewsInLayout",
			"()V"
		);
	}
	void ViewGroup::removeView(android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"removeView",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
	void ViewGroup::removeViewAt(jint arg0)
	{
		__thiz.callMethod<void>(
			"removeViewAt",
			"(I)V",
			arg0
		);
	}
	void ViewGroup::removeViewInLayout(android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"removeViewInLayout",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
	void ViewGroup::removeViews(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"removeViews",
			"(II)V",
			arg0,
			arg1
		);
	}
	void ViewGroup::removeViewsInLayout(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"removeViewsInLayout",
			"(II)V",
			arg0,
			arg1
		);
	}
	void ViewGroup::requestChildFocus(android::view::View arg0, android::view::View arg1)
	{
		__thiz.callMethod<void>(
			"requestChildFocus",
			"(Landroid/view/View;Landroid/view/View;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean ViewGroup::requestChildRectangleOnScreen(android::view::View arg0, android::graphics::Rect arg1, jboolean arg2)
	{
		return __thiz.callMethod<jboolean>(
			"requestChildRectangleOnScreen",
			"(Landroid/view/View;Landroid/graphics/Rect;Z)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void ViewGroup::requestDisallowInterceptTouchEvent(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"requestDisallowInterceptTouchEvent",
			"(Z)V",
			arg0
		);
	}
	jboolean ViewGroup::requestFocus(jint arg0, android::graphics::Rect arg1)
	{
		return __thiz.callMethod<jboolean>(
			"requestFocus",
			"(ILandroid/graphics/Rect;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean ViewGroup::requestSendAccessibilityEvent(android::view::View arg0, android::view::accessibility::AccessibilityEvent arg1)
	{
		return __thiz.callMethod<jboolean>(
			"requestSendAccessibilityEvent",
			"(Landroid/view/View;Landroid/view/accessibility/AccessibilityEvent;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void ViewGroup::requestTransparentRegion(android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"requestTransparentRegion",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean ViewGroup::restoreDefaultFocus()
	{
		return __thiz.callMethod<jboolean>(
			"restoreDefaultFocus",
			"()Z"
		);
	}
	void ViewGroup::scheduleLayoutAnimation()
	{
		__thiz.callMethod<void>(
			"scheduleLayoutAnimation",
			"()V"
		);
	}
	void ViewGroup::setAddStatesFromChildren(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setAddStatesFromChildren",
			"(Z)V",
			arg0
		);
	}
	void ViewGroup::setAlwaysDrawnWithCacheEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setAlwaysDrawnWithCacheEnabled",
			"(Z)V",
			arg0
		);
	}
	void ViewGroup::setAnimationCacheEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setAnimationCacheEnabled",
			"(Z)V",
			arg0
		);
	}
	void ViewGroup::setClipChildren(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setClipChildren",
			"(Z)V",
			arg0
		);
	}
	void ViewGroup::setClipToPadding(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setClipToPadding",
			"(Z)V",
			arg0
		);
	}
	void ViewGroup::setDescendantFocusability(jint arg0)
	{
		__thiz.callMethod<void>(
			"setDescendantFocusability",
			"(I)V",
			arg0
		);
	}
	void ViewGroup::setLayoutAnimation(android::view::animation::LayoutAnimationController arg0)
	{
		__thiz.callMethod<void>(
			"setLayoutAnimation",
			"(Landroid/view/animation/LayoutAnimationController;)V",
			arg0.__jniObject().object()
		);
	}
	void ViewGroup::setLayoutAnimationListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setLayoutAnimationListener",
			"(Landroid/view/animation/Animation$AnimationListener;)V",
			arg0.__jniObject().object()
		);
	}
	void ViewGroup::setLayoutMode(jint arg0)
	{
		__thiz.callMethod<void>(
			"setLayoutMode",
			"(I)V",
			arg0
		);
	}
	void ViewGroup::setLayoutTransition(android::animation::LayoutTransition arg0)
	{
		__thiz.callMethod<void>(
			"setLayoutTransition",
			"(Landroid/animation/LayoutTransition;)V",
			arg0.__jniObject().object()
		);
	}
	void ViewGroup::setMotionEventSplittingEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setMotionEventSplittingEnabled",
			"(Z)V",
			arg0
		);
	}
	void ViewGroup::setOnHierarchyChangeListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnHierarchyChangeListener",
			"(Landroid/view/ViewGroup$OnHierarchyChangeListener;)V",
			arg0.__jniObject().object()
		);
	}
	void ViewGroup::setPersistentDrawingCache(jint arg0)
	{
		__thiz.callMethod<void>(
			"setPersistentDrawingCache",
			"(I)V",
			arg0
		);
	}
	void ViewGroup::setTouchscreenBlocksFocus(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setTouchscreenBlocksFocus",
			"(Z)V",
			arg0
		);
	}
	void ViewGroup::setTransitionGroup(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setTransitionGroup",
			"(Z)V",
			arg0
		);
	}
	jboolean ViewGroup::shouldDelayChildPressedState()
	{
		return __thiz.callMethod<jboolean>(
			"shouldDelayChildPressedState",
			"()Z"
		);
	}
	jboolean ViewGroup::showContextMenuForChild(android::view::View arg0)
	{
		return __thiz.callMethod<jboolean>(
			"showContextMenuForChild",
			"(Landroid/view/View;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean ViewGroup::showContextMenuForChild(android::view::View arg0, jfloat arg1, jfloat arg2)
	{
		return __thiz.callMethod<jboolean>(
			"showContextMenuForChild",
			"(Landroid/view/View;FF)Z",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	QAndroidJniObject ViewGroup::startActionModeForChild(android::view::View arg0, __JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"startActionModeForChild",
			"(Landroid/view/View;Landroid/view/ActionMode$Callback;)Landroid/view/ActionMode;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject ViewGroup::startActionModeForChild(android::view::View arg0, __JniBaseClass arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"startActionModeForChild",
			"(Landroid/view/View;Landroid/view/ActionMode$Callback;I)Landroid/view/ActionMode;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void ViewGroup::startLayoutAnimation()
	{
		__thiz.callMethod<void>(
			"startLayoutAnimation",
			"()V"
		);
	}
	void ViewGroup::startViewTransition(android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"startViewTransition",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
	void ViewGroup::suppressLayout(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"suppressLayout",
			"(Z)V",
			arg0
		);
	}
	void ViewGroup::updateViewLayout(android::view::View arg0, android::view::ViewGroup_LayoutParams arg1)
	{
		__thiz.callMethod<void>(
			"updateViewLayout",
			"(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
} // namespace android::view

