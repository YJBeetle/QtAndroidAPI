#pragma once

#ifndef ANDROID_VIEW_VIEWGROUP
#define ANDROID_VIEW_VIEWGROUP

#include "View.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::view
{
	class KeyEvent;
}
namespace __jni_impl::android::view
{
	class MotionEvent;
}
namespace __jni_impl::android::view
{
	class View;
}
namespace __jni_impl::android::view
{
	class ActionMode;
}
namespace __jni_impl::android::graphics
{
	class Rect;
}
namespace __jni_impl::android::view::accessibility
{
	class AccessibilityEvent;
}
namespace __jni_impl::java::util
{
	class ArrayList;
}
namespace __jni_impl::android::content::res
{
	class Configuration;
}
namespace __jni_impl::android::view
{
	class DragEvent;
}
namespace __jni_impl::android::view
{
	class PointerIcon;
}
namespace __jni_impl::android::view
{
	class ViewStructure;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::util
{
	class SparseArray;
}
namespace __jni_impl::android::graphics
{
	class Canvas;
}
namespace __jni_impl::android::view
{
	class ViewOverlay;
}
namespace __jni_impl::android::view
{
	class ViewGroupOverlay;
}
namespace __jni_impl::android::view::animation
{
	class Transformation;
}
namespace __jni_impl::android::view
{
	class ViewGroup_LayoutParams;
}
namespace __jni_impl::android::animation
{
	class LayoutTransition;
}
namespace __jni_impl::android::graphics
{
	class Point;
}
namespace __jni_impl::android::view::animation
{
	class LayoutAnimationController;
}
namespace __jni_impl::android::graphics
{
	class Region;
}
namespace __jni_impl::android::view
{
	class WindowInsets;
}

namespace __jni_impl::android::view
{
	class ViewGroup : public __jni_impl::android::view::View
	{
	public:
		// Fields
		static jint FOCUS_AFTER_DESCENDANTS();
		static jint FOCUS_BEFORE_DESCENDANTS();
		static jint FOCUS_BLOCK_DESCENDANTS();
		static jint LAYOUT_MODE_CLIP_BOUNDS();
		static jint LAYOUT_MODE_OPTICAL_BOUNDS();
		static jint PERSISTENT_ALL_CACHES();
		static jint PERSISTENT_ANIMATION_CACHE();
		static jint PERSISTENT_NO_CACHE();
		static jint PERSISTENT_SCROLLING_CACHE();
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(__jni_impl::android::content::Context arg0);
		
		// Methods
		jboolean hasFocus();
		jboolean dispatchKeyEvent(__jni_impl::android::view::KeyEvent arg0);
		jboolean dispatchKeyShortcutEvent(__jni_impl::android::view::KeyEvent arg0);
		jboolean dispatchTouchEvent(__jni_impl::android::view::MotionEvent arg0);
		jboolean dispatchTrackballEvent(__jni_impl::android::view::MotionEvent arg0);
		jint getDescendantFocusability();
		void setDescendantFocusability(jint arg0);
		void requestChildFocus(__jni_impl::android::view::View arg0, __jni_impl::android::view::View arg1);
		void focusableViewAvailable(__jni_impl::android::view::View arg0);
		jboolean showContextMenuForChild(__jni_impl::android::view::View arg0, jfloat arg1, jfloat arg2);
		jboolean showContextMenuForChild(__jni_impl::android::view::View arg0);
		QAndroidJniObject startActionModeForChild(__jni_impl::android::view::View arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject startActionModeForChild(__jni_impl::android::view::View arg0, __jni_impl::__JniBaseClass arg1, jint arg2);
		QAndroidJniObject focusSearch(__jni_impl::android::view::View arg0, jint arg1);
		jboolean requestChildRectangleOnScreen(__jni_impl::android::view::View arg0, __jni_impl::android::graphics::Rect arg1, jboolean arg2);
		jboolean requestSendAccessibilityEvent(__jni_impl::android::view::View arg0, __jni_impl::android::view::accessibility::AccessibilityEvent arg1);
		jboolean onRequestSendAccessibilityEvent(__jni_impl::android::view::View arg0, __jni_impl::android::view::accessibility::AccessibilityEvent arg1);
		void childHasTransientStateChanged(__jni_impl::android::view::View arg0, jboolean arg1);
		jboolean hasTransientState();
		jboolean dispatchUnhandledMove(__jni_impl::android::view::View arg0, jint arg1);
		void clearChildFocus(__jni_impl::android::view::View arg0);
		void clearFocus();
		QAndroidJniObject getFocusedChild();
		QAndroidJniObject findFocus();
		void addFocusables(__jni_impl::java::util::ArrayList arg0, jint arg1, jint arg2);
		void addKeyboardNavigationClusters(__jni_impl::__JniBaseClass arg0, jint arg1);
		void setTouchscreenBlocksFocus(jboolean arg0);
		jboolean getTouchscreenBlocksFocus();
		void findViewsWithText(__jni_impl::java::util::ArrayList arg0, jstring arg1, jint arg2);
		void dispatchWindowFocusChanged(jboolean arg0);
		void addTouchables(__jni_impl::java::util::ArrayList arg0);
		void dispatchDisplayHint(jint arg0);
		void dispatchWindowVisibilityChanged(jint arg0);
		void dispatchConfigurationChanged(__jni_impl::android::content::res::Configuration arg0);
		void recomputeViewAttributes(__jni_impl::android::view::View arg0);
		void bringChildToFront(__jni_impl::android::view::View arg0);
		jboolean dispatchDragEvent(__jni_impl::android::view::DragEvent arg0);
		void dispatchWindowSystemUiVisiblityChanged(jint arg0);
		void dispatchSystemUiVisibilityChanged(jint arg0);
		jboolean dispatchKeyEventPreIme(__jni_impl::android::view::KeyEvent arg0);
		jboolean dispatchCapturedPointerEvent(__jni_impl::android::view::MotionEvent arg0);
		void dispatchPointerCaptureChanged(jboolean arg0);
		QAndroidJniObject onResolvePointerIcon(__jni_impl::android::view::MotionEvent arg0, jint arg1);
		void addChildrenForAccessibility(__jni_impl::java::util::ArrayList arg0);
		jboolean onInterceptHoverEvent(__jni_impl::android::view::MotionEvent arg0);
		void setMotionEventSplittingEnabled(jboolean arg0);
		jboolean isMotionEventSplittingEnabled();
		jboolean isTransitionGroup();
		void setTransitionGroup(jboolean arg0);
		void requestDisallowInterceptTouchEvent(jboolean arg0);
		jboolean onInterceptTouchEvent(__jni_impl::android::view::MotionEvent arg0);
		jboolean requestFocus(jint arg0, __jni_impl::android::graphics::Rect arg1);
		jboolean restoreDefaultFocus();
		void dispatchStartTemporaryDetach();
		void dispatchFinishTemporaryDetach();
		void dispatchProvideStructure(__jni_impl::android::view::ViewStructure arg0);
		void dispatchProvideAutofillStructure(__jni_impl::android::view::ViewStructure arg0, jint arg1);
		QAndroidJniObject getAccessibilityClassName();
		void notifySubtreeAccessibilityStateChanged(__jni_impl::android::view::View arg0, __jni_impl::android::view::View arg1, jint arg2);
		jboolean onNestedPrePerformAccessibilityAction(__jni_impl::android::view::View arg0, jint arg1, __jni_impl::android::os::Bundle arg2);
		QAndroidJniObject getOverlay();
		jint getChildDrawingOrder(jint arg0);
		jboolean getClipChildren();
		void setClipChildren(jboolean arg0);
		void setClipToPadding(jboolean arg0);
		jboolean getClipToPadding();
		void dispatchSetSelected(jboolean arg0);
		void dispatchSetActivated(jboolean arg0);
		void dispatchDrawableHotspotChanged(jfloat arg0, jfloat arg1);
		void addView(__jni_impl::android::view::View arg0, jint arg1, jint arg2);
		void addView(__jni_impl::android::view::View arg0, __jni_impl::android::view::ViewGroup_LayoutParams arg1);
		void addView(__jni_impl::android::view::View arg0, jint arg1, __jni_impl::android::view::ViewGroup_LayoutParams arg2);
		void addView(__jni_impl::android::view::View arg0);
		void addView(__jni_impl::android::view::View arg0, jint arg1);
		void updateViewLayout(__jni_impl::android::view::View arg0, __jni_impl::android::view::ViewGroup_LayoutParams arg1);
		void setOnHierarchyChangeListener(__jni_impl::__JniBaseClass arg0);
		void onViewAdded(__jni_impl::android::view::View arg0);
		void onViewRemoved(__jni_impl::android::view::View arg0);
		void removeView(__jni_impl::android::view::View arg0);
		void removeViewInLayout(__jni_impl::android::view::View arg0);
		void removeViewsInLayout(jint arg0, jint arg1);
		void removeViewAt(jint arg0);
		void removeViews(jint arg0, jint arg1);
		void setLayoutTransition(__jni_impl::android::animation::LayoutTransition arg0);
		QAndroidJniObject getLayoutTransition();
		void removeAllViews();
		void removeAllViewsInLayout();
		void onDescendantInvalidated(__jni_impl::android::view::View arg0, __jni_impl::android::view::View arg1);
		void invalidateChild(__jni_impl::android::view::View arg0, __jni_impl::android::graphics::Rect arg1);
		QAndroidJniObject invalidateChildInParent(jintArray arg0, __jni_impl::android::graphics::Rect arg1);
		void offsetDescendantRectToMyCoords(__jni_impl::android::view::View arg0, __jni_impl::android::graphics::Rect arg1);
		void offsetRectIntoDescendantCoords(__jni_impl::android::view::View arg0, __jni_impl::android::graphics::Rect arg1);
		jboolean getChildVisibleRect(__jni_impl::android::view::View arg0, __jni_impl::android::graphics::Rect arg1, __jni_impl::android::graphics::Point arg2);
		void layout(jint arg0, jint arg1, jint arg2, jint arg3);
		void startLayoutAnimation();
		void scheduleLayoutAnimation();
		void setLayoutAnimation(__jni_impl::android::view::animation::LayoutAnimationController arg0);
		QAndroidJniObject getLayoutAnimation();
		jboolean isAnimationCacheEnabled();
		void setAnimationCacheEnabled(jboolean arg0);
		jboolean isAlwaysDrawnWithCacheEnabled();
		void setAlwaysDrawnWithCacheEnabled(jboolean arg0);
		jint getPersistentDrawingCache();
		void setPersistentDrawingCache(jint arg0);
		jint getLayoutMode();
		void setLayoutMode(jint arg0);
		QAndroidJniObject generateLayoutParams(__jni_impl::__JniBaseClass arg0);
		jint indexOfChild(__jni_impl::android::view::View arg0);
		jint getChildCount();
		QAndroidJniObject getChildAt(jint arg0);
		static jint getChildMeasureSpec(jint arg0, jint arg1, jint arg2);
		void clearDisappearingChildren();
		void startViewTransition(__jni_impl::android::view::View arg0);
		void endViewTransition(__jni_impl::android::view::View arg0);
		void suppressLayout(jboolean arg0);
		jboolean isLayoutSuppressed();
		jboolean gatherTransparentRegion(__jni_impl::android::graphics::Region arg0);
		void requestTransparentRegion(__jni_impl::android::view::View arg0);
		QAndroidJniObject dispatchApplyWindowInsets(__jni_impl::android::view::WindowInsets arg0);
		QAndroidJniObject getLayoutAnimationListener();
		void jumpDrawablesToCurrentState();
		void setAddStatesFromChildren(jboolean arg0);
		jboolean addStatesFromChildren();
		void childDrawableStateChanged(__jni_impl::android::view::View arg0);
		void setLayoutAnimationListener(__jni_impl::__JniBaseClass arg0);
		jboolean shouldDelayChildPressedState();
		jboolean onStartNestedScroll(__jni_impl::android::view::View arg0, __jni_impl::android::view::View arg1, jint arg2);
		void onNestedScrollAccepted(__jni_impl::android::view::View arg0, __jni_impl::android::view::View arg1, jint arg2);
		void onStopNestedScroll(__jni_impl::android::view::View arg0);
		void onNestedScroll(__jni_impl::android::view::View arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		void onNestedPreScroll(__jni_impl::android::view::View arg0, jint arg1, jint arg2, jintArray arg3);
		jboolean onNestedFling(__jni_impl::android::view::View arg0, jfloat arg1, jfloat arg2, jboolean arg3);
		jboolean onNestedPreFling(__jni_impl::android::view::View arg0, jfloat arg1, jfloat arg2);
		jint getNestedScrollAxes();
	};
} // namespace __jni_impl::android::view

#include "../content/Context.hpp"
#include "KeyEvent.hpp"
#include "MotionEvent.hpp"
#include "View.hpp"
#include "ActionMode.hpp"
#include "../graphics/Rect.hpp"
#include "accessibility/AccessibilityEvent.hpp"
#include "../../java/util/ArrayList.hpp"
#include "../content/res/Configuration.hpp"
#include "DragEvent.hpp"
#include "PointerIcon.hpp"
#include "ViewStructure.hpp"
#include "../os/Bundle.hpp"
#include "../util/SparseArray.hpp"
#include "../graphics/Canvas.hpp"
#include "ViewOverlay.hpp"
#include "ViewGroupOverlay.hpp"
#include "animation/Transformation.hpp"
#include "ViewGroup_LayoutParams.hpp"
#include "../animation/LayoutTransition.hpp"
#include "../graphics/Point.hpp"
#include "animation/LayoutAnimationController.hpp"
#include "../graphics/Region.hpp"
#include "WindowInsets.hpp"

namespace __jni_impl::android::view
{
	// Fields
	jint ViewGroup::FOCUS_AFTER_DESCENDANTS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.ViewGroup",
			"FOCUS_AFTER_DESCENDANTS");
	}
	jint ViewGroup::FOCUS_BEFORE_DESCENDANTS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.ViewGroup",
			"FOCUS_BEFORE_DESCENDANTS");
	}
	jint ViewGroup::FOCUS_BLOCK_DESCENDANTS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.ViewGroup",
			"FOCUS_BLOCK_DESCENDANTS");
	}
	jint ViewGroup::LAYOUT_MODE_CLIP_BOUNDS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.ViewGroup",
			"LAYOUT_MODE_CLIP_BOUNDS");
	}
	jint ViewGroup::LAYOUT_MODE_OPTICAL_BOUNDS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.ViewGroup",
			"LAYOUT_MODE_OPTICAL_BOUNDS");
	}
	jint ViewGroup::PERSISTENT_ALL_CACHES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.ViewGroup",
			"PERSISTENT_ALL_CACHES");
	}
	jint ViewGroup::PERSISTENT_ANIMATION_CACHE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.ViewGroup",
			"PERSISTENT_ANIMATION_CACHE");
	}
	jint ViewGroup::PERSISTENT_NO_CACHE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.ViewGroup",
			"PERSISTENT_NO_CACHE");
	}
	jint ViewGroup::PERSISTENT_SCROLLING_CACHE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.ViewGroup",
			"PERSISTENT_SCROLLING_CACHE");
	}
	
	// Constructors
	void ViewGroup::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.view.ViewGroup",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3);
	}
	void ViewGroup::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.view.ViewGroup",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2);
	}
	void ViewGroup::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.view.ViewGroup",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void ViewGroup::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.ViewGroup",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	jboolean ViewGroup::hasFocus()
	{
		return __thiz.callMethod<jboolean>(
			"hasFocus",
			"()Z");
	}
	jboolean ViewGroup::dispatchKeyEvent(__jni_impl::android::view::KeyEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchKeyEvent",
			"(Landroid/view/KeyEvent;)Z",
			arg0.__jniObject().object());
	}
	jboolean ViewGroup::dispatchKeyShortcutEvent(__jni_impl::android::view::KeyEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchKeyShortcutEvent",
			"(Landroid/view/KeyEvent;)Z",
			arg0.__jniObject().object());
	}
	jboolean ViewGroup::dispatchTouchEvent(__jni_impl::android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object());
	}
	jboolean ViewGroup::dispatchTrackballEvent(__jni_impl::android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchTrackballEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object());
	}
	jint ViewGroup::getDescendantFocusability()
	{
		return __thiz.callMethod<jint>(
			"getDescendantFocusability",
			"()I");
	}
	void ViewGroup::setDescendantFocusability(jint arg0)
	{
		__thiz.callMethod<void>(
			"setDescendantFocusability",
			"(I)V",
			arg0);
	}
	void ViewGroup::requestChildFocus(__jni_impl::android::view::View arg0, __jni_impl::android::view::View arg1)
	{
		__thiz.callMethod<void>(
			"requestChildFocus",
			"(Landroid/view/View;Landroid/view/View;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void ViewGroup::focusableViewAvailable(__jni_impl::android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"focusableViewAvailable",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object());
	}
	jboolean ViewGroup::showContextMenuForChild(__jni_impl::android::view::View arg0, jfloat arg1, jfloat arg2)
	{
		return __thiz.callMethod<jboolean>(
			"showContextMenuForChild",
			"(Landroid/view/View;FF)Z",
			arg0.__jniObject().object(),
			arg1,
			arg2);
	}
	jboolean ViewGroup::showContextMenuForChild(__jni_impl::android::view::View arg0)
	{
		return __thiz.callMethod<jboolean>(
			"showContextMenuForChild",
			"(Landroid/view/View;)Z",
			arg0.__jniObject().object());
	}
	QAndroidJniObject ViewGroup::startActionModeForChild(__jni_impl::android::view::View arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"startActionModeForChild",
			"(Landroid/view/View;Landroid/view/ActionMode$Callback;)Landroid/view/ActionMode;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	QAndroidJniObject ViewGroup::startActionModeForChild(__jni_impl::android::view::View arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"startActionModeForChild",
			"(Landroid/view/View;Landroid/view/ActionMode$Callback;I)Landroid/view/ActionMode;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2);
	}
	QAndroidJniObject ViewGroup::focusSearch(__jni_impl::android::view::View arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"focusSearch",
			"(Landroid/view/View;I)Landroid/view/View;",
			arg0.__jniObject().object(),
			arg1);
	}
	jboolean ViewGroup::requestChildRectangleOnScreen(__jni_impl::android::view::View arg0, __jni_impl::android::graphics::Rect arg1, jboolean arg2)
	{
		return __thiz.callMethod<jboolean>(
			"requestChildRectangleOnScreen",
			"(Landroid/view/View;Landroid/graphics/Rect;Z)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2);
	}
	jboolean ViewGroup::requestSendAccessibilityEvent(__jni_impl::android::view::View arg0, __jni_impl::android::view::accessibility::AccessibilityEvent arg1)
	{
		return __thiz.callMethod<jboolean>(
			"requestSendAccessibilityEvent",
			"(Landroid/view/View;Landroid/view/accessibility/AccessibilityEvent;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	jboolean ViewGroup::onRequestSendAccessibilityEvent(__jni_impl::android::view::View arg0, __jni_impl::android::view::accessibility::AccessibilityEvent arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onRequestSendAccessibilityEvent",
			"(Landroid/view/View;Landroid/view/accessibility/AccessibilityEvent;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void ViewGroup::childHasTransientStateChanged(__jni_impl::android::view::View arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"childHasTransientStateChanged",
			"(Landroid/view/View;Z)V",
			arg0.__jniObject().object(),
			arg1);
	}
	jboolean ViewGroup::hasTransientState()
	{
		return __thiz.callMethod<jboolean>(
			"hasTransientState",
			"()Z");
	}
	jboolean ViewGroup::dispatchUnhandledMove(__jni_impl::android::view::View arg0, jint arg1)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchUnhandledMove",
			"(Landroid/view/View;I)Z",
			arg0.__jniObject().object(),
			arg1);
	}
	void ViewGroup::clearChildFocus(__jni_impl::android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"clearChildFocus",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object());
	}
	void ViewGroup::clearFocus()
	{
		__thiz.callMethod<void>(
			"clearFocus",
			"()V");
	}
	QAndroidJniObject ViewGroup::getFocusedChild()
	{
		return __thiz.callObjectMethod(
			"getFocusedChild",
			"()Landroid/view/View;");
	}
	QAndroidJniObject ViewGroup::findFocus()
	{
		return __thiz.callObjectMethod(
			"findFocus",
			"()Landroid/view/View;");
	}
	void ViewGroup::addFocusables(__jni_impl::java::util::ArrayList arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"addFocusables",
			"(Ljava/util/ArrayList;II)V",
			arg0.__jniObject().object(),
			arg1,
			arg2);
	}
	void ViewGroup::addKeyboardNavigationClusters(__jni_impl::__JniBaseClass arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"addKeyboardNavigationClusters",
			"(Ljava/util/Collection;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	void ViewGroup::setTouchscreenBlocksFocus(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setTouchscreenBlocksFocus",
			"(Z)V",
			arg0);
	}
	jboolean ViewGroup::getTouchscreenBlocksFocus()
	{
		return __thiz.callMethod<jboolean>(
			"getTouchscreenBlocksFocus",
			"()Z");
	}
	void ViewGroup::findViewsWithText(__jni_impl::java::util::ArrayList arg0, jstring arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"findViewsWithText",
			"(Ljava/util/ArrayList;Ljava/lang/CharSequence;I)V",
			arg0.__jniObject().object(),
			arg1,
			arg2);
	}
	void ViewGroup::dispatchWindowFocusChanged(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"dispatchWindowFocusChanged",
			"(Z)V",
			arg0);
	}
	void ViewGroup::addTouchables(__jni_impl::java::util::ArrayList arg0)
	{
		__thiz.callMethod<void>(
			"addTouchables",
			"(Ljava/util/ArrayList;)V",
			arg0.__jniObject().object());
	}
	void ViewGroup::dispatchDisplayHint(jint arg0)
	{
		__thiz.callMethod<void>(
			"dispatchDisplayHint",
			"(I)V",
			arg0);
	}
	void ViewGroup::dispatchWindowVisibilityChanged(jint arg0)
	{
		__thiz.callMethod<void>(
			"dispatchWindowVisibilityChanged",
			"(I)V",
			arg0);
	}
	void ViewGroup::dispatchConfigurationChanged(__jni_impl::android::content::res::Configuration arg0)
	{
		__thiz.callMethod<void>(
			"dispatchConfigurationChanged",
			"(Landroid/content/res/Configuration;)V",
			arg0.__jniObject().object());
	}
	void ViewGroup::recomputeViewAttributes(__jni_impl::android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"recomputeViewAttributes",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object());
	}
	void ViewGroup::bringChildToFront(__jni_impl::android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"bringChildToFront",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object());
	}
	jboolean ViewGroup::dispatchDragEvent(__jni_impl::android::view::DragEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchDragEvent",
			"(Landroid/view/DragEvent;)Z",
			arg0.__jniObject().object());
	}
	void ViewGroup::dispatchWindowSystemUiVisiblityChanged(jint arg0)
	{
		__thiz.callMethod<void>(
			"dispatchWindowSystemUiVisiblityChanged",
			"(I)V",
			arg0);
	}
	void ViewGroup::dispatchSystemUiVisibilityChanged(jint arg0)
	{
		__thiz.callMethod<void>(
			"dispatchSystemUiVisibilityChanged",
			"(I)V",
			arg0);
	}
	jboolean ViewGroup::dispatchKeyEventPreIme(__jni_impl::android::view::KeyEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchKeyEventPreIme",
			"(Landroid/view/KeyEvent;)Z",
			arg0.__jniObject().object());
	}
	jboolean ViewGroup::dispatchCapturedPointerEvent(__jni_impl::android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchCapturedPointerEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object());
	}
	void ViewGroup::dispatchPointerCaptureChanged(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"dispatchPointerCaptureChanged",
			"(Z)V",
			arg0);
	}
	QAndroidJniObject ViewGroup::onResolvePointerIcon(__jni_impl::android::view::MotionEvent arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"onResolvePointerIcon",
			"(Landroid/view/MotionEvent;I)Landroid/view/PointerIcon;",
			arg0.__jniObject().object(),
			arg1);
	}
	void ViewGroup::addChildrenForAccessibility(__jni_impl::java::util::ArrayList arg0)
	{
		__thiz.callMethod<void>(
			"addChildrenForAccessibility",
			"(Ljava/util/ArrayList;)V",
			arg0.__jniObject().object());
	}
	jboolean ViewGroup::onInterceptHoverEvent(__jni_impl::android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onInterceptHoverEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object());
	}
	void ViewGroup::setMotionEventSplittingEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setMotionEventSplittingEnabled",
			"(Z)V",
			arg0);
	}
	jboolean ViewGroup::isMotionEventSplittingEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isMotionEventSplittingEnabled",
			"()Z");
	}
	jboolean ViewGroup::isTransitionGroup()
	{
		return __thiz.callMethod<jboolean>(
			"isTransitionGroup",
			"()Z");
	}
	void ViewGroup::setTransitionGroup(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setTransitionGroup",
			"(Z)V",
			arg0);
	}
	void ViewGroup::requestDisallowInterceptTouchEvent(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"requestDisallowInterceptTouchEvent",
			"(Z)V",
			arg0);
	}
	jboolean ViewGroup::onInterceptTouchEvent(__jni_impl::android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onInterceptTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object());
	}
	jboolean ViewGroup::requestFocus(jint arg0, __jni_impl::android::graphics::Rect arg1)
	{
		return __thiz.callMethod<jboolean>(
			"requestFocus",
			"(ILandroid/graphics/Rect;)Z",
			arg0,
			arg1.__jniObject().object());
	}
	jboolean ViewGroup::restoreDefaultFocus()
	{
		return __thiz.callMethod<jboolean>(
			"restoreDefaultFocus",
			"()Z");
	}
	void ViewGroup::dispatchStartTemporaryDetach()
	{
		__thiz.callMethod<void>(
			"dispatchStartTemporaryDetach",
			"()V");
	}
	void ViewGroup::dispatchFinishTemporaryDetach()
	{
		__thiz.callMethod<void>(
			"dispatchFinishTemporaryDetach",
			"()V");
	}
	void ViewGroup::dispatchProvideStructure(__jni_impl::android::view::ViewStructure arg0)
	{
		__thiz.callMethod<void>(
			"dispatchProvideStructure",
			"(Landroid/view/ViewStructure;)V",
			arg0.__jniObject().object());
	}
	void ViewGroup::dispatchProvideAutofillStructure(__jni_impl::android::view::ViewStructure arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"dispatchProvideAutofillStructure",
			"(Landroid/view/ViewStructure;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	QAndroidJniObject ViewGroup::getAccessibilityClassName()
	{
		return __thiz.callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;");
	}
	void ViewGroup::notifySubtreeAccessibilityStateChanged(__jni_impl::android::view::View arg0, __jni_impl::android::view::View arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"notifySubtreeAccessibilityStateChanged",
			"(Landroid/view/View;Landroid/view/View;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2);
	}
	jboolean ViewGroup::onNestedPrePerformAccessibilityAction(__jni_impl::android::view::View arg0, jint arg1, __jni_impl::android::os::Bundle arg2)
	{
		return __thiz.callMethod<jboolean>(
			"onNestedPrePerformAccessibilityAction",
			"(Landroid/view/View;ILandroid/os/Bundle;)Z",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object());
	}
	QAndroidJniObject ViewGroup::getOverlay()
	{
		return __thiz.callObjectMethod(
			"getOverlay",
			"()Landroid/view/ViewGroupOverlay;");
	}
	jint ViewGroup::getChildDrawingOrder(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getChildDrawingOrder",
			"(I)I",
			arg0);
	}
	jboolean ViewGroup::getClipChildren()
	{
		return __thiz.callMethod<jboolean>(
			"getClipChildren",
			"()Z");
	}
	void ViewGroup::setClipChildren(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setClipChildren",
			"(Z)V",
			arg0);
	}
	void ViewGroup::setClipToPadding(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setClipToPadding",
			"(Z)V",
			arg0);
	}
	jboolean ViewGroup::getClipToPadding()
	{
		return __thiz.callMethod<jboolean>(
			"getClipToPadding",
			"()Z");
	}
	void ViewGroup::dispatchSetSelected(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"dispatchSetSelected",
			"(Z)V",
			arg0);
	}
	void ViewGroup::dispatchSetActivated(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"dispatchSetActivated",
			"(Z)V",
			arg0);
	}
	void ViewGroup::dispatchDrawableHotspotChanged(jfloat arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"dispatchDrawableHotspotChanged",
			"(FF)V",
			arg0,
			arg1);
	}
	void ViewGroup::addView(__jni_impl::android::view::View arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"addView",
			"(Landroid/view/View;II)V",
			arg0.__jniObject().object(),
			arg1,
			arg2);
	}
	void ViewGroup::addView(__jni_impl::android::view::View arg0, __jni_impl::android::view::ViewGroup_LayoutParams arg1)
	{
		__thiz.callMethod<void>(
			"addView",
			"(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void ViewGroup::addView(__jni_impl::android::view::View arg0, jint arg1, __jni_impl::android::view::ViewGroup_LayoutParams arg2)
	{
		__thiz.callMethod<void>(
			"addView",
			"(Landroid/view/View;ILandroid/view/ViewGroup$LayoutParams;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object());
	}
	void ViewGroup::addView(__jni_impl::android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"addView",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object());
	}
	void ViewGroup::addView(__jni_impl::android::view::View arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"addView",
			"(Landroid/view/View;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	void ViewGroup::updateViewLayout(__jni_impl::android::view::View arg0, __jni_impl::android::view::ViewGroup_LayoutParams arg1)
	{
		__thiz.callMethod<void>(
			"updateViewLayout",
			"(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void ViewGroup::setOnHierarchyChangeListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnHierarchyChangeListener",
			"(Landroid/view/ViewGroup$OnHierarchyChangeListener;)V",
			arg0.__jniObject().object());
	}
	void ViewGroup::onViewAdded(__jni_impl::android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"onViewAdded",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object());
	}
	void ViewGroup::onViewRemoved(__jni_impl::android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"onViewRemoved",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object());
	}
	void ViewGroup::removeView(__jni_impl::android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"removeView",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object());
	}
	void ViewGroup::removeViewInLayout(__jni_impl::android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"removeViewInLayout",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object());
	}
	void ViewGroup::removeViewsInLayout(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"removeViewsInLayout",
			"(II)V",
			arg0,
			arg1);
	}
	void ViewGroup::removeViewAt(jint arg0)
	{
		__thiz.callMethod<void>(
			"removeViewAt",
			"(I)V",
			arg0);
	}
	void ViewGroup::removeViews(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"removeViews",
			"(II)V",
			arg0,
			arg1);
	}
	void ViewGroup::setLayoutTransition(__jni_impl::android::animation::LayoutTransition arg0)
	{
		__thiz.callMethod<void>(
			"setLayoutTransition",
			"(Landroid/animation/LayoutTransition;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject ViewGroup::getLayoutTransition()
	{
		return __thiz.callObjectMethod(
			"getLayoutTransition",
			"()Landroid/animation/LayoutTransition;");
	}
	void ViewGroup::removeAllViews()
	{
		__thiz.callMethod<void>(
			"removeAllViews",
			"()V");
	}
	void ViewGroup::removeAllViewsInLayout()
	{
		__thiz.callMethod<void>(
			"removeAllViewsInLayout",
			"()V");
	}
	void ViewGroup::onDescendantInvalidated(__jni_impl::android::view::View arg0, __jni_impl::android::view::View arg1)
	{
		__thiz.callMethod<void>(
			"onDescendantInvalidated",
			"(Landroid/view/View;Landroid/view/View;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void ViewGroup::invalidateChild(__jni_impl::android::view::View arg0, __jni_impl::android::graphics::Rect arg1)
	{
		__thiz.callMethod<void>(
			"invalidateChild",
			"(Landroid/view/View;Landroid/graphics/Rect;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	QAndroidJniObject ViewGroup::invalidateChildInParent(jintArray arg0, __jni_impl::android::graphics::Rect arg1)
	{
		return __thiz.callObjectMethod(
			"invalidateChildInParent",
			"([ILandroid/graphics/Rect;)Landroid/view/ViewParent;",
			arg0,
			arg1.__jniObject().object());
	}
	void ViewGroup::offsetDescendantRectToMyCoords(__jni_impl::android::view::View arg0, __jni_impl::android::graphics::Rect arg1)
	{
		__thiz.callMethod<void>(
			"offsetDescendantRectToMyCoords",
			"(Landroid/view/View;Landroid/graphics/Rect;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void ViewGroup::offsetRectIntoDescendantCoords(__jni_impl::android::view::View arg0, __jni_impl::android::graphics::Rect arg1)
	{
		__thiz.callMethod<void>(
			"offsetRectIntoDescendantCoords",
			"(Landroid/view/View;Landroid/graphics/Rect;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	jboolean ViewGroup::getChildVisibleRect(__jni_impl::android::view::View arg0, __jni_impl::android::graphics::Rect arg1, __jni_impl::android::graphics::Point arg2)
	{
		return __thiz.callMethod<jboolean>(
			"getChildVisibleRect",
			"(Landroid/view/View;Landroid/graphics/Rect;Landroid/graphics/Point;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	void ViewGroup::layout(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"layout",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	void ViewGroup::startLayoutAnimation()
	{
		__thiz.callMethod<void>(
			"startLayoutAnimation",
			"()V");
	}
	void ViewGroup::scheduleLayoutAnimation()
	{
		__thiz.callMethod<void>(
			"scheduleLayoutAnimation",
			"()V");
	}
	void ViewGroup::setLayoutAnimation(__jni_impl::android::view::animation::LayoutAnimationController arg0)
	{
		__thiz.callMethod<void>(
			"setLayoutAnimation",
			"(Landroid/view/animation/LayoutAnimationController;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject ViewGroup::getLayoutAnimation()
	{
		return __thiz.callObjectMethod(
			"getLayoutAnimation",
			"()Landroid/view/animation/LayoutAnimationController;");
	}
	jboolean ViewGroup::isAnimationCacheEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isAnimationCacheEnabled",
			"()Z");
	}
	void ViewGroup::setAnimationCacheEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setAnimationCacheEnabled",
			"(Z)V",
			arg0);
	}
	jboolean ViewGroup::isAlwaysDrawnWithCacheEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isAlwaysDrawnWithCacheEnabled",
			"()Z");
	}
	void ViewGroup::setAlwaysDrawnWithCacheEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setAlwaysDrawnWithCacheEnabled",
			"(Z)V",
			arg0);
	}
	jint ViewGroup::getPersistentDrawingCache()
	{
		return __thiz.callMethod<jint>(
			"getPersistentDrawingCache",
			"()I");
	}
	void ViewGroup::setPersistentDrawingCache(jint arg0)
	{
		__thiz.callMethod<void>(
			"setPersistentDrawingCache",
			"(I)V",
			arg0);
	}
	jint ViewGroup::getLayoutMode()
	{
		return __thiz.callMethod<jint>(
			"getLayoutMode",
			"()I");
	}
	void ViewGroup::setLayoutMode(jint arg0)
	{
		__thiz.callMethod<void>(
			"setLayoutMode",
			"(I)V",
			arg0);
	}
	QAndroidJniObject ViewGroup::generateLayoutParams(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"generateLayoutParams",
			"(Landroid/util/AttributeSet;)Landroid/view/ViewGroup$LayoutParams;",
			arg0.__jniObject().object());
	}
	jint ViewGroup::indexOfChild(__jni_impl::android::view::View arg0)
	{
		return __thiz.callMethod<jint>(
			"indexOfChild",
			"(Landroid/view/View;)I",
			arg0.__jniObject().object());
	}
	jint ViewGroup::getChildCount()
	{
		return __thiz.callMethod<jint>(
			"getChildCount",
			"()I");
	}
	QAndroidJniObject ViewGroup::getChildAt(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getChildAt",
			"(I)Landroid/view/View;",
			arg0);
	}
	jint ViewGroup::getChildMeasureSpec(jint arg0, jint arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.view.ViewGroup",
			"getChildMeasureSpec",
			"(III)I",
			arg0,
			arg1,
			arg2);
	}
	void ViewGroup::clearDisappearingChildren()
	{
		__thiz.callMethod<void>(
			"clearDisappearingChildren",
			"()V");
	}
	void ViewGroup::startViewTransition(__jni_impl::android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"startViewTransition",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object());
	}
	void ViewGroup::endViewTransition(__jni_impl::android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"endViewTransition",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object());
	}
	void ViewGroup::suppressLayout(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"suppressLayout",
			"(Z)V",
			arg0);
	}
	jboolean ViewGroup::isLayoutSuppressed()
	{
		return __thiz.callMethod<jboolean>(
			"isLayoutSuppressed",
			"()Z");
	}
	jboolean ViewGroup::gatherTransparentRegion(__jni_impl::android::graphics::Region arg0)
	{
		return __thiz.callMethod<jboolean>(
			"gatherTransparentRegion",
			"(Landroid/graphics/Region;)Z",
			arg0.__jniObject().object());
	}
	void ViewGroup::requestTransparentRegion(__jni_impl::android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"requestTransparentRegion",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject ViewGroup::dispatchApplyWindowInsets(__jni_impl::android::view::WindowInsets arg0)
	{
		return __thiz.callObjectMethod(
			"dispatchApplyWindowInsets",
			"(Landroid/view/WindowInsets;)Landroid/view/WindowInsets;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject ViewGroup::getLayoutAnimationListener()
	{
		return __thiz.callObjectMethod(
			"getLayoutAnimationListener",
			"()Landroid/view/animation/Animation$AnimationListener;");
	}
	void ViewGroup::jumpDrawablesToCurrentState()
	{
		__thiz.callMethod<void>(
			"jumpDrawablesToCurrentState",
			"()V");
	}
	void ViewGroup::setAddStatesFromChildren(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setAddStatesFromChildren",
			"(Z)V",
			arg0);
	}
	jboolean ViewGroup::addStatesFromChildren()
	{
		return __thiz.callMethod<jboolean>(
			"addStatesFromChildren",
			"()Z");
	}
	void ViewGroup::childDrawableStateChanged(__jni_impl::android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"childDrawableStateChanged",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object());
	}
	void ViewGroup::setLayoutAnimationListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setLayoutAnimationListener",
			"(Landroid/view/animation/Animation$AnimationListener;)V",
			arg0.__jniObject().object());
	}
	jboolean ViewGroup::shouldDelayChildPressedState()
	{
		return __thiz.callMethod<jboolean>(
			"shouldDelayChildPressedState",
			"()Z");
	}
	jboolean ViewGroup::onStartNestedScroll(__jni_impl::android::view::View arg0, __jni_impl::android::view::View arg1, jint arg2)
	{
		return __thiz.callMethod<jboolean>(
			"onStartNestedScroll",
			"(Landroid/view/View;Landroid/view/View;I)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2);
	}
	void ViewGroup::onNestedScrollAccepted(__jni_impl::android::view::View arg0, __jni_impl::android::view::View arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"onNestedScrollAccepted",
			"(Landroid/view/View;Landroid/view/View;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2);
	}
	void ViewGroup::onStopNestedScroll(__jni_impl::android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"onStopNestedScroll",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object());
	}
	void ViewGroup::onNestedScroll(__jni_impl::android::view::View arg0, jint arg1, jint arg2, jint arg3, jint arg4)
	{
		__thiz.callMethod<void>(
			"onNestedScroll",
			"(Landroid/view/View;IIII)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4);
	}
	void ViewGroup::onNestedPreScroll(__jni_impl::android::view::View arg0, jint arg1, jint arg2, jintArray arg3)
	{
		__thiz.callMethod<void>(
			"onNestedPreScroll",
			"(Landroid/view/View;II[I)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3);
	}
	jboolean ViewGroup::onNestedFling(__jni_impl::android::view::View arg0, jfloat arg1, jfloat arg2, jboolean arg3)
	{
		return __thiz.callMethod<jboolean>(
			"onNestedFling",
			"(Landroid/view/View;FFZ)Z",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3);
	}
	jboolean ViewGroup::onNestedPreFling(__jni_impl::android::view::View arg0, jfloat arg1, jfloat arg2)
	{
		return __thiz.callMethod<jboolean>(
			"onNestedPreFling",
			"(Landroid/view/View;FF)Z",
			arg0.__jniObject().object(),
			arg1,
			arg2);
	}
	jint ViewGroup::getNestedScrollAxes()
	{
		return __thiz.callMethod<jint>(
			"getNestedScrollAxes",
			"()I");
	}
} // namespace __jni_impl::android::view

namespace android::view
{
	class ViewGroup : public __jni_impl::android::view::ViewGroup
	{
	public:
		ViewGroup(QAndroidJniObject obj) { __thiz = obj; }
		ViewGroup(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
		ViewGroup(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		ViewGroup(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		ViewGroup(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::view

#endif // ANDROID_VIEW_VIEWGROUP

