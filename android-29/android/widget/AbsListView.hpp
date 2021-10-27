#pragma once

#ifndef ANDROID_WIDGET_ABSLISTVIEW
#define ANDROID_WIDGET_ABSLISTVIEW

#include "../../__JniBaseClass.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "AdapterView.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::content
{
	class Intent;
}
namespace __jni_impl::android::graphics
{
	class Canvas;
}
namespace __jni_impl::android::graphics
{
	class Rect;
}
namespace __jni_impl::android::graphics::drawable
{
	class Drawable;
}
namespace __jni_impl::android::util
{
	class SparseBooleanArray;
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
	class PointerIcon;
}
namespace __jni_impl::android::view
{
	class View;
}
namespace __jni_impl::android::view
{
	class ViewGroup_LayoutParams;
}
namespace __jni_impl::android::view::accessibility
{
	class AccessibilityEvent;
}
namespace __jni_impl::android::view::accessibility
{
	class AccessibilityNodeInfo;
}
namespace __jni_impl::android::view::inputmethod
{
	class EditorInfo;
}
namespace __jni_impl::android::widget
{
	class AbsListView_LayoutParams;
}
namespace __jni_impl::java::util
{
	class ArrayList;
}

namespace __jni_impl::android::widget
{
	class AbsListView : public __jni_impl::android::widget::AdapterView
	{
	public:
		// Fields
		static jint CHOICE_MODE_MULTIPLE();
		static jint CHOICE_MODE_MULTIPLE_MODAL();
		static jint CHOICE_MODE_NONE();
		static jint CHOICE_MODE_SINGLE();
		static jint TRANSCRIPT_MODE_ALWAYS_SCROLL();
		static jint TRANSCRIPT_MODE_DISABLED();
		static jint TRANSCRIPT_MODE_NORMAL();
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3);
		
		// Methods
		void addTouchables(__jni_impl::java::util::ArrayList arg0);
		void afterTextChanged(__jni_impl::__JniBaseClass arg0);
		void beforeTextChanged(jstring arg0, jint arg1, jint arg2, jint arg3);
		void beforeTextChanged(const QString &arg0, jint arg1, jint arg2, jint arg3);
		jboolean canScrollList(jint arg0);
		jboolean checkInputConnectionProxy(__jni_impl::android::view::View arg0);
		void clearChoices();
		void clearTextFilter();
		void deferNotifyDataSetChanged();
		void dispatchDrawableHotspotChanged(jfloat arg0, jfloat arg1);
		void draw(__jni_impl::android::graphics::Canvas arg0);
		void fling(jint arg0);
		QAndroidJniObject generateLayoutParams(__jni_impl::__JniBaseClass arg0);
		jstring getAccessibilityClassName();
		jint getBottomEdgeEffectColor();
		jint getCacheColorHint();
		jint getCheckedItemCount();
		jlongArray getCheckedItemIds();
		jint getCheckedItemPosition();
		QAndroidJniObject getCheckedItemPositions();
		jint getChoiceMode();
		void getFocusedRect(__jni_impl::android::graphics::Rect arg0);
		jint getListPaddingBottom();
		jint getListPaddingLeft();
		jint getListPaddingRight();
		jint getListPaddingTop();
		QAndroidJniObject getSelectedView();
		QAndroidJniObject getSelector();
		jint getSolidColor();
		jstring getTextFilter();
		jint getTopEdgeEffectColor();
		jint getTranscriptMode();
		jint getVerticalScrollbarWidth();
		jboolean hasTextFilter();
		void invalidateViews();
		jboolean isDrawSelectorOnTop();
		jboolean isFastScrollAlwaysVisible();
		jboolean isFastScrollEnabled();
		jboolean isItemChecked(jint arg0);
		jboolean isScrollingCacheEnabled();
		jboolean isSmoothScrollbarEnabled();
		jboolean isStackFromBottom();
		jboolean isTextFilterEnabled();
		void jumpDrawablesToCurrentState();
		void onCancelPendingInputEvents();
		QAndroidJniObject onCreateInputConnection(__jni_impl::android::view::inputmethod::EditorInfo arg0);
		void onFilterComplete(jint arg0);
		jboolean onGenericMotionEvent(__jni_impl::android::view::MotionEvent arg0);
		void onGlobalLayout();
		void onInitializeAccessibilityNodeInfoForItem(__jni_impl::android::view::View arg0, jint arg1, __jni_impl::android::view::accessibility::AccessibilityNodeInfo arg2);
		jboolean onInterceptHoverEvent(__jni_impl::android::view::MotionEvent arg0);
		jboolean onInterceptTouchEvent(__jni_impl::android::view::MotionEvent arg0);
		jboolean onKeyDown(jint arg0, __jni_impl::android::view::KeyEvent arg1);
		jboolean onKeyUp(jint arg0, __jni_impl::android::view::KeyEvent arg1);
		jboolean onNestedFling(__jni_impl::android::view::View arg0, jfloat arg1, jfloat arg2, jboolean arg3);
		void onNestedScroll(__jni_impl::android::view::View arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		void onNestedScrollAccepted(__jni_impl::android::view::View arg0, __jni_impl::android::view::View arg1, jint arg2);
		jboolean onRemoteAdapterConnected();
		void onRemoteAdapterDisconnected();
		QAndroidJniObject onResolvePointerIcon(__jni_impl::android::view::MotionEvent arg0, jint arg1);
		void onRestoreInstanceState(__jni_impl::__JniBaseClass arg0);
		void onRtlPropertiesChanged(jint arg0);
		QAndroidJniObject onSaveInstanceState();
		jboolean onStartNestedScroll(__jni_impl::android::view::View arg0, __jni_impl::android::view::View arg1, jint arg2);
		void onTextChanged(jstring arg0, jint arg1, jint arg2, jint arg3);
		void onTextChanged(const QString &arg0, jint arg1, jint arg2, jint arg3);
		jboolean onTouchEvent(__jni_impl::android::view::MotionEvent arg0);
		void onTouchModeChanged(jboolean arg0);
		void onWindowFocusChanged(jboolean arg0);
		jboolean performItemClick(__jni_impl::android::view::View arg0, jint arg1, jlong arg2);
		jint pointToPosition(jint arg0, jint arg1);
		jlong pointToRowId(jint arg0, jint arg1);
		void reclaimViews(__jni_impl::__JniBaseClass arg0);
		void requestDisallowInterceptTouchEvent(jboolean arg0);
		void requestLayout();
		void scrollListBy(jint arg0);
		void sendAccessibilityEventUnchecked(__jni_impl::android::view::accessibility::AccessibilityEvent arg0);
		void setAdapter(__jni_impl::__JniBaseClass arg0);
		void setBottomEdgeEffectColor(jint arg0);
		void setCacheColorHint(jint arg0);
		void setChoiceMode(jint arg0);
		void setDrawSelectorOnTop(jboolean arg0);
		void setEdgeEffectColor(jint arg0);
		void setFastScrollAlwaysVisible(jboolean arg0);
		void setFastScrollEnabled(jboolean arg0);
		void setFastScrollStyle(jint arg0);
		void setFilterText(jstring arg0);
		void setFilterText(const QString &arg0);
		void setFriction(jfloat arg0);
		void setItemChecked(jint arg0, jboolean arg1);
		void setMultiChoiceModeListener(__jni_impl::__JniBaseClass arg0);
		void setOnScrollListener(__jni_impl::__JniBaseClass arg0);
		void setRecyclerListener(__jni_impl::__JniBaseClass arg0);
		void setRemoteViewsAdapter(__jni_impl::android::content::Intent arg0);
		void setScrollBarStyle(jint arg0);
		void setScrollIndicators(__jni_impl::android::view::View arg0, __jni_impl::android::view::View arg1);
		void setScrollingCacheEnabled(jboolean arg0);
		void setSelectionFromTop(jint arg0, jint arg1);
		void setSelector(__jni_impl::android::graphics::drawable::Drawable arg0);
		void setSelector(jint arg0);
		void setSmoothScrollbarEnabled(jboolean arg0);
		void setStackFromBottom(jboolean arg0);
		void setTextFilterEnabled(jboolean arg0);
		void setTopEdgeEffectColor(jint arg0);
		void setTranscriptMode(jint arg0);
		void setVelocityScale(jfloat arg0);
		void setVerticalScrollbarPosition(jint arg0);
		jboolean showContextMenu();
		jboolean showContextMenu(jfloat arg0, jfloat arg1);
		jboolean showContextMenuForChild(__jni_impl::android::view::View arg0);
		jboolean showContextMenuForChild(__jni_impl::android::view::View arg0, jfloat arg1, jfloat arg2);
		void smoothScrollBy(jint arg0, jint arg1);
		void smoothScrollToPosition(jint arg0);
		void smoothScrollToPosition(jint arg0, jint arg1);
		void smoothScrollToPositionFromTop(jint arg0, jint arg1);
		void smoothScrollToPositionFromTop(jint arg0, jint arg1, jint arg2);
		jboolean verifyDrawable(__jni_impl::android::graphics::drawable::Drawable arg0);
	};
} // namespace __jni_impl::android::widget

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
#include "AbsListView_LayoutParams.hpp"
#include "../../java/util/ArrayList.hpp"

namespace __jni_impl::android::widget
{
	// Fields
	jint AbsListView::CHOICE_MODE_MULTIPLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.AbsListView",
			"CHOICE_MODE_MULTIPLE"
		);
	}
	jint AbsListView::CHOICE_MODE_MULTIPLE_MODAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.AbsListView",
			"CHOICE_MODE_MULTIPLE_MODAL"
		);
	}
	jint AbsListView::CHOICE_MODE_NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.AbsListView",
			"CHOICE_MODE_NONE"
		);
	}
	jint AbsListView::CHOICE_MODE_SINGLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.AbsListView",
			"CHOICE_MODE_SINGLE"
		);
	}
	jint AbsListView::TRANSCRIPT_MODE_ALWAYS_SCROLL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.AbsListView",
			"TRANSCRIPT_MODE_ALWAYS_SCROLL"
		);
	}
	jint AbsListView::TRANSCRIPT_MODE_DISABLED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.AbsListView",
			"TRANSCRIPT_MODE_DISABLED"
		);
	}
	jint AbsListView::TRANSCRIPT_MODE_NORMAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.AbsListView",
			"TRANSCRIPT_MODE_NORMAL"
		);
	}
	
	// Constructors
	void AbsListView::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.AbsListView",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	void AbsListView::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.AbsListView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void AbsListView::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.AbsListView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void AbsListView::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.widget.AbsListView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	
	// Methods
	void AbsListView::addTouchables(__jni_impl::java::util::ArrayList arg0)
	{
		__thiz.callMethod<void>(
			"addTouchables",
			"(Ljava/util/ArrayList;)V",
			arg0.__jniObject().object()
		);
	}
	void AbsListView::afterTextChanged(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"afterTextChanged",
			"(Landroid/text/Editable;)V",
			arg0.__jniObject().object()
		);
	}
	void AbsListView::beforeTextChanged(jstring arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"beforeTextChanged",
			"(Ljava/lang/CharSequence;III)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void AbsListView::beforeTextChanged(const QString &arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"beforeTextChanged",
			"(Ljava/lang/CharSequence;III)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2,
			arg3
		);
	}
	jboolean AbsListView::canScrollList(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"canScrollList",
			"(I)Z",
			arg0
		);
	}
	jboolean AbsListView::checkInputConnectionProxy(__jni_impl::android::view::View arg0)
	{
		return __thiz.callMethod<jboolean>(
			"checkInputConnectionProxy",
			"(Landroid/view/View;)Z",
			arg0.__jniObject().object()
		);
	}
	void AbsListView::clearChoices()
	{
		__thiz.callMethod<void>(
			"clearChoices",
			"()V"
		);
	}
	void AbsListView::clearTextFilter()
	{
		__thiz.callMethod<void>(
			"clearTextFilter",
			"()V"
		);
	}
	void AbsListView::deferNotifyDataSetChanged()
	{
		__thiz.callMethod<void>(
			"deferNotifyDataSetChanged",
			"()V"
		);
	}
	void AbsListView::dispatchDrawableHotspotChanged(jfloat arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"dispatchDrawableHotspotChanged",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void AbsListView::draw(__jni_impl::android::graphics::Canvas arg0)
	{
		__thiz.callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.__jniObject().object()
		);
	}
	void AbsListView::fling(jint arg0)
	{
		__thiz.callMethod<void>(
			"fling",
			"(I)V",
			arg0
		);
	}
	QAndroidJniObject AbsListView::generateLayoutParams(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"generateLayoutParams",
			"(Landroid/util/AttributeSet;)Landroid/widget/AbsListView$LayoutParams;",
			arg0.__jniObject().object()
		);
	}
	jstring AbsListView::getAccessibilityClassName()
	{
		return __thiz.callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint AbsListView::getBottomEdgeEffectColor()
	{
		return __thiz.callMethod<jint>(
			"getBottomEdgeEffectColor",
			"()I"
		);
	}
	jint AbsListView::getCacheColorHint()
	{
		return __thiz.callMethod<jint>(
			"getCacheColorHint",
			"()I"
		);
	}
	jint AbsListView::getCheckedItemCount()
	{
		return __thiz.callMethod<jint>(
			"getCheckedItemCount",
			"()I"
		);
	}
	jlongArray AbsListView::getCheckedItemIds()
	{
		return __thiz.callObjectMethod(
			"getCheckedItemIds",
			"()[J"
		).object<jlongArray>();
	}
	jint AbsListView::getCheckedItemPosition()
	{
		return __thiz.callMethod<jint>(
			"getCheckedItemPosition",
			"()I"
		);
	}
	QAndroidJniObject AbsListView::getCheckedItemPositions()
	{
		return __thiz.callObjectMethod(
			"getCheckedItemPositions",
			"()Landroid/util/SparseBooleanArray;"
		);
	}
	jint AbsListView::getChoiceMode()
	{
		return __thiz.callMethod<jint>(
			"getChoiceMode",
			"()I"
		);
	}
	void AbsListView::getFocusedRect(__jni_impl::android::graphics::Rect arg0)
	{
		__thiz.callMethod<void>(
			"getFocusedRect",
			"(Landroid/graphics/Rect;)V",
			arg0.__jniObject().object()
		);
	}
	jint AbsListView::getListPaddingBottom()
	{
		return __thiz.callMethod<jint>(
			"getListPaddingBottom",
			"()I"
		);
	}
	jint AbsListView::getListPaddingLeft()
	{
		return __thiz.callMethod<jint>(
			"getListPaddingLeft",
			"()I"
		);
	}
	jint AbsListView::getListPaddingRight()
	{
		return __thiz.callMethod<jint>(
			"getListPaddingRight",
			"()I"
		);
	}
	jint AbsListView::getListPaddingTop()
	{
		return __thiz.callMethod<jint>(
			"getListPaddingTop",
			"()I"
		);
	}
	QAndroidJniObject AbsListView::getSelectedView()
	{
		return __thiz.callObjectMethod(
			"getSelectedView",
			"()Landroid/view/View;"
		);
	}
	QAndroidJniObject AbsListView::getSelector()
	{
		return __thiz.callObjectMethod(
			"getSelector",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	jint AbsListView::getSolidColor()
	{
		return __thiz.callMethod<jint>(
			"getSolidColor",
			"()I"
		);
	}
	jstring AbsListView::getTextFilter()
	{
		return __thiz.callObjectMethod(
			"getTextFilter",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint AbsListView::getTopEdgeEffectColor()
	{
		return __thiz.callMethod<jint>(
			"getTopEdgeEffectColor",
			"()I"
		);
	}
	jint AbsListView::getTranscriptMode()
	{
		return __thiz.callMethod<jint>(
			"getTranscriptMode",
			"()I"
		);
	}
	jint AbsListView::getVerticalScrollbarWidth()
	{
		return __thiz.callMethod<jint>(
			"getVerticalScrollbarWidth",
			"()I"
		);
	}
	jboolean AbsListView::hasTextFilter()
	{
		return __thiz.callMethod<jboolean>(
			"hasTextFilter",
			"()Z"
		);
	}
	void AbsListView::invalidateViews()
	{
		__thiz.callMethod<void>(
			"invalidateViews",
			"()V"
		);
	}
	jboolean AbsListView::isDrawSelectorOnTop()
	{
		return __thiz.callMethod<jboolean>(
			"isDrawSelectorOnTop",
			"()Z"
		);
	}
	jboolean AbsListView::isFastScrollAlwaysVisible()
	{
		return __thiz.callMethod<jboolean>(
			"isFastScrollAlwaysVisible",
			"()Z"
		);
	}
	jboolean AbsListView::isFastScrollEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isFastScrollEnabled",
			"()Z"
		);
	}
	jboolean AbsListView::isItemChecked(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isItemChecked",
			"(I)Z",
			arg0
		);
	}
	jboolean AbsListView::isScrollingCacheEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isScrollingCacheEnabled",
			"()Z"
		);
	}
	jboolean AbsListView::isSmoothScrollbarEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isSmoothScrollbarEnabled",
			"()Z"
		);
	}
	jboolean AbsListView::isStackFromBottom()
	{
		return __thiz.callMethod<jboolean>(
			"isStackFromBottom",
			"()Z"
		);
	}
	jboolean AbsListView::isTextFilterEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isTextFilterEnabled",
			"()Z"
		);
	}
	void AbsListView::jumpDrawablesToCurrentState()
	{
		__thiz.callMethod<void>(
			"jumpDrawablesToCurrentState",
			"()V"
		);
	}
	void AbsListView::onCancelPendingInputEvents()
	{
		__thiz.callMethod<void>(
			"onCancelPendingInputEvents",
			"()V"
		);
	}
	QAndroidJniObject AbsListView::onCreateInputConnection(__jni_impl::android::view::inputmethod::EditorInfo arg0)
	{
		return __thiz.callObjectMethod(
			"onCreateInputConnection",
			"(Landroid/view/inputmethod/EditorInfo;)Landroid/view/inputmethod/InputConnection;",
			arg0.__jniObject().object()
		);
	}
	void AbsListView::onFilterComplete(jint arg0)
	{
		__thiz.callMethod<void>(
			"onFilterComplete",
			"(I)V",
			arg0
		);
	}
	jboolean AbsListView::onGenericMotionEvent(__jni_impl::android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onGenericMotionEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	void AbsListView::onGlobalLayout()
	{
		__thiz.callMethod<void>(
			"onGlobalLayout",
			"()V"
		);
	}
	void AbsListView::onInitializeAccessibilityNodeInfoForItem(__jni_impl::android::view::View arg0, jint arg1, __jni_impl::android::view::accessibility::AccessibilityNodeInfo arg2)
	{
		__thiz.callMethod<void>(
			"onInitializeAccessibilityNodeInfoForItem",
			"(Landroid/view/View;ILandroid/view/accessibility/AccessibilityNodeInfo;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	jboolean AbsListView::onInterceptHoverEvent(__jni_impl::android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onInterceptHoverEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean AbsListView::onInterceptTouchEvent(__jni_impl::android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onInterceptTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean AbsListView::onKeyDown(jint arg0, __jni_impl::android::view::KeyEvent arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyDown",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean AbsListView::onKeyUp(jint arg0, __jni_impl::android::view::KeyEvent arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyUp",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean AbsListView::onNestedFling(__jni_impl::android::view::View arg0, jfloat arg1, jfloat arg2, jboolean arg3)
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
	void AbsListView::onNestedScroll(__jni_impl::android::view::View arg0, jint arg1, jint arg2, jint arg3, jint arg4)
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
	void AbsListView::onNestedScrollAccepted(__jni_impl::android::view::View arg0, __jni_impl::android::view::View arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"onNestedScrollAccepted",
			"(Landroid/view/View;Landroid/view/View;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	jboolean AbsListView::onRemoteAdapterConnected()
	{
		return __thiz.callMethod<jboolean>(
			"onRemoteAdapterConnected",
			"()Z"
		);
	}
	void AbsListView::onRemoteAdapterDisconnected()
	{
		__thiz.callMethod<void>(
			"onRemoteAdapterDisconnected",
			"()V"
		);
	}
	QAndroidJniObject AbsListView::onResolvePointerIcon(__jni_impl::android::view::MotionEvent arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"onResolvePointerIcon",
			"(Landroid/view/MotionEvent;I)Landroid/view/PointerIcon;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void AbsListView::onRestoreInstanceState(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"onRestoreInstanceState",
			"(Landroid/os/Parcelable;)V",
			arg0.__jniObject().object()
		);
	}
	void AbsListView::onRtlPropertiesChanged(jint arg0)
	{
		__thiz.callMethod<void>(
			"onRtlPropertiesChanged",
			"(I)V",
			arg0
		);
	}
	QAndroidJniObject AbsListView::onSaveInstanceState()
	{
		return __thiz.callObjectMethod(
			"onSaveInstanceState",
			"()Landroid/os/Parcelable;"
		);
	}
	jboolean AbsListView::onStartNestedScroll(__jni_impl::android::view::View arg0, __jni_impl::android::view::View arg1, jint arg2)
	{
		return __thiz.callMethod<jboolean>(
			"onStartNestedScroll",
			"(Landroid/view/View;Landroid/view/View;I)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void AbsListView::onTextChanged(jstring arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"onTextChanged",
			"(Ljava/lang/CharSequence;III)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void AbsListView::onTextChanged(const QString &arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"onTextChanged",
			"(Ljava/lang/CharSequence;III)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2,
			arg3
		);
	}
	jboolean AbsListView::onTouchEvent(__jni_impl::android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	void AbsListView::onTouchModeChanged(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"onTouchModeChanged",
			"(Z)V",
			arg0
		);
	}
	void AbsListView::onWindowFocusChanged(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"onWindowFocusChanged",
			"(Z)V",
			arg0
		);
	}
	jboolean AbsListView::performItemClick(__jni_impl::android::view::View arg0, jint arg1, jlong arg2)
	{
		return __thiz.callMethod<jboolean>(
			"performItemClick",
			"(Landroid/view/View;IJ)Z",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	jint AbsListView::pointToPosition(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"pointToPosition",
			"(II)I",
			arg0,
			arg1
		);
	}
	jlong AbsListView::pointToRowId(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jlong>(
			"pointToRowId",
			"(II)J",
			arg0,
			arg1
		);
	}
	void AbsListView::reclaimViews(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"reclaimViews",
			"(Ljava/util/List;)V",
			arg0.__jniObject().object()
		);
	}
	void AbsListView::requestDisallowInterceptTouchEvent(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"requestDisallowInterceptTouchEvent",
			"(Z)V",
			arg0
		);
	}
	void AbsListView::requestLayout()
	{
		__thiz.callMethod<void>(
			"requestLayout",
			"()V"
		);
	}
	void AbsListView::scrollListBy(jint arg0)
	{
		__thiz.callMethod<void>(
			"scrollListBy",
			"(I)V",
			arg0
		);
	}
	void AbsListView::sendAccessibilityEventUnchecked(__jni_impl::android::view::accessibility::AccessibilityEvent arg0)
	{
		__thiz.callMethod<void>(
			"sendAccessibilityEventUnchecked",
			"(Landroid/view/accessibility/AccessibilityEvent;)V",
			arg0.__jniObject().object()
		);
	}
	void AbsListView::setAdapter(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setAdapter",
			"(Landroid/widget/Adapter;)V",
			arg0.__jniObject().object()
		);
	}
	void AbsListView::setBottomEdgeEffectColor(jint arg0)
	{
		__thiz.callMethod<void>(
			"setBottomEdgeEffectColor",
			"(I)V",
			arg0
		);
	}
	void AbsListView::setCacheColorHint(jint arg0)
	{
		__thiz.callMethod<void>(
			"setCacheColorHint",
			"(I)V",
			arg0
		);
	}
	void AbsListView::setChoiceMode(jint arg0)
	{
		__thiz.callMethod<void>(
			"setChoiceMode",
			"(I)V",
			arg0
		);
	}
	void AbsListView::setDrawSelectorOnTop(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setDrawSelectorOnTop",
			"(Z)V",
			arg0
		);
	}
	void AbsListView::setEdgeEffectColor(jint arg0)
	{
		__thiz.callMethod<void>(
			"setEdgeEffectColor",
			"(I)V",
			arg0
		);
	}
	void AbsListView::setFastScrollAlwaysVisible(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setFastScrollAlwaysVisible",
			"(Z)V",
			arg0
		);
	}
	void AbsListView::setFastScrollEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setFastScrollEnabled",
			"(Z)V",
			arg0
		);
	}
	void AbsListView::setFastScrollStyle(jint arg0)
	{
		__thiz.callMethod<void>(
			"setFastScrollStyle",
			"(I)V",
			arg0
		);
	}
	void AbsListView::setFilterText(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setFilterText",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void AbsListView::setFilterText(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setFilterText",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void AbsListView::setFriction(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setFriction",
			"(F)V",
			arg0
		);
	}
	void AbsListView::setItemChecked(jint arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"setItemChecked",
			"(IZ)V",
			arg0,
			arg1
		);
	}
	void AbsListView::setMultiChoiceModeListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setMultiChoiceModeListener",
			"(Landroid/widget/AbsListView$MultiChoiceModeListener;)V",
			arg0.__jniObject().object()
		);
	}
	void AbsListView::setOnScrollListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnScrollListener",
			"(Landroid/widget/AbsListView$OnScrollListener;)V",
			arg0.__jniObject().object()
		);
	}
	void AbsListView::setRecyclerListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setRecyclerListener",
			"(Landroid/widget/AbsListView$RecyclerListener;)V",
			arg0.__jniObject().object()
		);
	}
	void AbsListView::setRemoteViewsAdapter(__jni_impl::android::content::Intent arg0)
	{
		__thiz.callMethod<void>(
			"setRemoteViewsAdapter",
			"(Landroid/content/Intent;)V",
			arg0.__jniObject().object()
		);
	}
	void AbsListView::setScrollBarStyle(jint arg0)
	{
		__thiz.callMethod<void>(
			"setScrollBarStyle",
			"(I)V",
			arg0
		);
	}
	void AbsListView::setScrollIndicators(__jni_impl::android::view::View arg0, __jni_impl::android::view::View arg1)
	{
		__thiz.callMethod<void>(
			"setScrollIndicators",
			"(Landroid/view/View;Landroid/view/View;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void AbsListView::setScrollingCacheEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setScrollingCacheEnabled",
			"(Z)V",
			arg0
		);
	}
	void AbsListView::setSelectionFromTop(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setSelectionFromTop",
			"(II)V",
			arg0,
			arg1
		);
	}
	void AbsListView::setSelector(__jni_impl::android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setSelector",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
	void AbsListView::setSelector(jint arg0)
	{
		__thiz.callMethod<void>(
			"setSelector",
			"(I)V",
			arg0
		);
	}
	void AbsListView::setSmoothScrollbarEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setSmoothScrollbarEnabled",
			"(Z)V",
			arg0
		);
	}
	void AbsListView::setStackFromBottom(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setStackFromBottom",
			"(Z)V",
			arg0
		);
	}
	void AbsListView::setTextFilterEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setTextFilterEnabled",
			"(Z)V",
			arg0
		);
	}
	void AbsListView::setTopEdgeEffectColor(jint arg0)
	{
		__thiz.callMethod<void>(
			"setTopEdgeEffectColor",
			"(I)V",
			arg0
		);
	}
	void AbsListView::setTranscriptMode(jint arg0)
	{
		__thiz.callMethod<void>(
			"setTranscriptMode",
			"(I)V",
			arg0
		);
	}
	void AbsListView::setVelocityScale(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setVelocityScale",
			"(F)V",
			arg0
		);
	}
	void AbsListView::setVerticalScrollbarPosition(jint arg0)
	{
		__thiz.callMethod<void>(
			"setVerticalScrollbarPosition",
			"(I)V",
			arg0
		);
	}
	jboolean AbsListView::showContextMenu()
	{
		return __thiz.callMethod<jboolean>(
			"showContextMenu",
			"()Z"
		);
	}
	jboolean AbsListView::showContextMenu(jfloat arg0, jfloat arg1)
	{
		return __thiz.callMethod<jboolean>(
			"showContextMenu",
			"(FF)Z",
			arg0,
			arg1
		);
	}
	jboolean AbsListView::showContextMenuForChild(__jni_impl::android::view::View arg0)
	{
		return __thiz.callMethod<jboolean>(
			"showContextMenuForChild",
			"(Landroid/view/View;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean AbsListView::showContextMenuForChild(__jni_impl::android::view::View arg0, jfloat arg1, jfloat arg2)
	{
		return __thiz.callMethod<jboolean>(
			"showContextMenuForChild",
			"(Landroid/view/View;FF)Z",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void AbsListView::smoothScrollBy(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"smoothScrollBy",
			"(II)V",
			arg0,
			arg1
		);
	}
	void AbsListView::smoothScrollToPosition(jint arg0)
	{
		__thiz.callMethod<void>(
			"smoothScrollToPosition",
			"(I)V",
			arg0
		);
	}
	void AbsListView::smoothScrollToPosition(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"smoothScrollToPosition",
			"(II)V",
			arg0,
			arg1
		);
	}
	void AbsListView::smoothScrollToPositionFromTop(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"smoothScrollToPositionFromTop",
			"(II)V",
			arg0,
			arg1
		);
	}
	void AbsListView::smoothScrollToPositionFromTop(jint arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"smoothScrollToPositionFromTop",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean AbsListView::verifyDrawable(__jni_impl::android::graphics::drawable::Drawable arg0)
	{
		return __thiz.callMethod<jboolean>(
			"verifyDrawable",
			"(Landroid/graphics/drawable/Drawable;)Z",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class AbsListView : public __jni_impl::android::widget::AbsListView
	{
	public:
		AbsListView(QAndroidJniObject obj) { __thiz = obj; }
		AbsListView(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
		AbsListView(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		AbsListView(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		AbsListView(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace android::widget

#endif // ANDROID_WIDGET_ABSLISTVIEW

