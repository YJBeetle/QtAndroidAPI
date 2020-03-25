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
namespace __jni_impl::android::graphics::drawable
{
	class Drawable;
}
namespace __jni_impl::android::view
{
	class View;
}
namespace __jni_impl::android::content
{
	class Intent;
}
namespace __jni_impl::android::view::accessibility
{
	class AccessibilityNodeInfo;
}
namespace __jni_impl::android::util
{
	class SparseBooleanArray;
}
namespace __jni_impl::java::util
{
	class ArrayList;
}
namespace __jni_impl::android::view
{
	class PointerIcon;
}
namespace __jni_impl::android::view
{
	class MotionEvent;
}
namespace __jni_impl::android::graphics
{
	class Canvas;
}
namespace __jni_impl::android::view
{
	class ViewGroup_LayoutParams;
}
namespace __jni_impl::android::widget
{
	class AbsListView_LayoutParams;
}
namespace __jni_impl::android::graphics
{
	class Rect;
}
namespace __jni_impl::android::view::accessibility
{
	class AccessibilityEvent;
}
namespace __jni_impl::android::view::inputmethod
{
	class EditorInfo;
}
namespace __jni_impl::android::view
{
	class KeyEvent;
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
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(__jni_impl::android::content::Context arg0);
		
		// Methods
		void onTextChanged(jstring arg0, jint arg1, jint arg2, jint arg3);
		QAndroidJniObject getSelector();
		void setSelector(__jni_impl::android::graphics::drawable::Drawable arg0);
		void setSelector(jint arg0);
		jboolean performItemClick(__jni_impl::android::view::View arg0, jint arg1, jlong arg2);
		void setAdapter(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getSelectedView();
		void setRemoteViewsAdapter(__jni_impl::android::content::Intent arg0);
		void smoothScrollToPosition(jint arg0);
		void smoothScrollToPosition(jint arg0, jint arg1);
		void setCacheColorHint(jint arg0);
		void onInitializeAccessibilityNodeInfoForItem(__jni_impl::android::view::View arg0, jint arg1, __jni_impl::android::view::accessibility::AccessibilityNodeInfo arg2);
		jint getCheckedItemCount();
		jboolean isItemChecked(jint arg0);
		jint getCheckedItemPosition();
		QAndroidJniObject getCheckedItemPositions();
		QAndroidJniObject getCheckedItemIds();
		void clearChoices();
		void setItemChecked(jint arg0, jboolean arg1);
		jint getChoiceMode();
		void setChoiceMode(jint arg0);
		void setMultiChoiceModeListener(__jni_impl::__JniBaseClass arg0);
		void setFastScrollEnabled(jboolean arg0);
		void setFastScrollStyle(jint arg0);
		void setFastScrollAlwaysVisible(jboolean arg0);
		jboolean isFastScrollAlwaysVisible();
		jboolean isFastScrollEnabled();
		void setSmoothScrollbarEnabled(jboolean arg0);
		jboolean isSmoothScrollbarEnabled();
		void setOnScrollListener(__jni_impl::__JniBaseClass arg0);
		jboolean isScrollingCacheEnabled();
		void setScrollingCacheEnabled(jboolean arg0);
		void setTextFilterEnabled(jboolean arg0);
		jboolean isTextFilterEnabled();
		jboolean isStackFromBottom();
		void setStackFromBottom(jboolean arg0);
		void setFilterText(jstring arg0);
		QAndroidJniObject getTextFilter();
		jint getListPaddingTop();
		jint getListPaddingBottom();
		jint getListPaddingLeft();
		jint getListPaddingRight();
		void setDrawSelectorOnTop(jboolean arg0);
		jboolean isDrawSelectorOnTop();
		jint pointToPosition(jint arg0, jint arg1);
		jlong pointToRowId(jint arg0, jint arg1);
		void onTouchModeChanged(jboolean arg0);
		void fling(jint arg0);
		void setFriction(jfloat arg0);
		void setVelocityScale(jfloat arg0);
		void smoothScrollToPositionFromTop(jint arg0, jint arg1, jint arg2);
		void smoothScrollToPositionFromTop(jint arg0, jint arg1);
		void smoothScrollBy(jint arg0, jint arg1);
		void scrollListBy(jint arg0);
		jboolean canScrollList(jint arg0);
		void invalidateViews();
		void clearTextFilter();
		jboolean hasTextFilter();
		void onGlobalLayout();
		void onFilterComplete(jint arg0);
		void setTranscriptMode(jint arg0);
		jint getTranscriptMode();
		jint getCacheColorHint();
		void reclaimViews(__jni_impl::__JniBaseClass arg0);
		void deferNotifyDataSetChanged();
		jboolean onRemoteAdapterConnected();
		void onRemoteAdapterDisconnected();
		void setEdgeEffectColor(jint arg0);
		void setBottomEdgeEffectColor(jint arg0);
		void setTopEdgeEffectColor(jint arg0);
		jint getTopEdgeEffectColor();
		jint getBottomEdgeEffectColor();
		void setRecyclerListener(__jni_impl::__JniBaseClass arg0);
		void setSelectionFromTop(jint arg0, jint arg1);
		jboolean showContextMenuForChild(__jni_impl::android::view::View arg0, jfloat arg1, jfloat arg2);
		jboolean showContextMenuForChild(__jni_impl::android::view::View arg0);
		void addTouchables(__jni_impl::java::util::ArrayList arg0);
		QAndroidJniObject onResolvePointerIcon(__jni_impl::android::view::MotionEvent arg0, jint arg1);
		jboolean onInterceptHoverEvent(__jni_impl::android::view::MotionEvent arg0);
		void requestDisallowInterceptTouchEvent(jboolean arg0);
		jboolean onInterceptTouchEvent(__jni_impl::android::view::MotionEvent arg0);
		QAndroidJniObject getAccessibilityClassName();
		void dispatchDrawableHotspotChanged(jfloat arg0, jfloat arg1);
		QAndroidJniObject generateLayoutParams(__jni_impl::__JniBaseClass arg0);
		void jumpDrawablesToCurrentState();
		jboolean onStartNestedScroll(__jni_impl::android::view::View arg0, __jni_impl::android::view::View arg1, jint arg2);
		void onNestedScrollAccepted(__jni_impl::android::view::View arg0, __jni_impl::android::view::View arg1, jint arg2);
		void onNestedScroll(__jni_impl::android::view::View arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		jboolean onNestedFling(__jni_impl::android::view::View arg0, jfloat arg1, jfloat arg2, jboolean arg3);
		void requestLayout();
		jint getVerticalScrollbarWidth();
		void setVerticalScrollbarPosition(jint arg0);
		void setScrollIndicators(__jni_impl::android::view::View arg0, __jni_impl::android::view::View arg1);
		jboolean showContextMenu(jfloat arg0, jfloat arg1);
		jboolean showContextMenu();
		void sendAccessibilityEventUnchecked(__jni_impl::android::view::accessibility::AccessibilityEvent arg0);
		QAndroidJniObject onCreateInputConnection(__jni_impl::android::view::inputmethod::EditorInfo arg0);
		jboolean checkInputConnectionProxy(__jni_impl::android::view::View arg0);
		void getFocusedRect(__jni_impl::android::graphics::Rect arg0);
		void setScrollBarStyle(jint arg0);
		void onRtlPropertiesChanged(jint arg0);
		void onCancelPendingInputEvents();
		void draw(__jni_impl::android::graphics::Canvas arg0);
		jint getSolidColor();
		jboolean verifyDrawable(__jni_impl::android::graphics::drawable::Drawable arg0);
		void onRestoreInstanceState(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject onSaveInstanceState();
		jboolean onKeyDown(jint arg0, __jni_impl::android::view::KeyEvent arg1);
		jboolean onKeyUp(jint arg0, __jni_impl::android::view::KeyEvent arg1);
		jboolean onTouchEvent(__jni_impl::android::view::MotionEvent arg0);
		jboolean onGenericMotionEvent(__jni_impl::android::view::MotionEvent arg0);
		void onWindowFocusChanged(jboolean arg0);
		void beforeTextChanged(jstring arg0, jint arg1, jint arg2, jint arg3);
		void afterTextChanged(__jni_impl::__JniBaseClass arg0);
	};
} // namespace __jni_impl::android::widget

#include "../content/Context.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "../view/View.hpp"
#include "../content/Intent.hpp"
#include "../view/accessibility/AccessibilityNodeInfo.hpp"
#include "../util/SparseBooleanArray.hpp"
#include "../../java/util/ArrayList.hpp"
#include "../view/PointerIcon.hpp"
#include "../view/MotionEvent.hpp"
#include "../graphics/Canvas.hpp"
#include "../view/ViewGroup_LayoutParams.hpp"
#include "AbsListView_LayoutParams.hpp"
#include "../graphics/Rect.hpp"
#include "../view/accessibility/AccessibilityEvent.hpp"
#include "../view/inputmethod/EditorInfo.hpp"
#include "../view/KeyEvent.hpp"

namespace __jni_impl::android::widget
{
	// Fields
	jint AbsListView::CHOICE_MODE_MULTIPLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.AbsListView",
			"CHOICE_MODE_MULTIPLE");
	}
	jint AbsListView::CHOICE_MODE_MULTIPLE_MODAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.AbsListView",
			"CHOICE_MODE_MULTIPLE_MODAL");
	}
	jint AbsListView::CHOICE_MODE_NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.AbsListView",
			"CHOICE_MODE_NONE");
	}
	jint AbsListView::CHOICE_MODE_SINGLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.AbsListView",
			"CHOICE_MODE_SINGLE");
	}
	jint AbsListView::TRANSCRIPT_MODE_ALWAYS_SCROLL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.AbsListView",
			"TRANSCRIPT_MODE_ALWAYS_SCROLL");
	}
	jint AbsListView::TRANSCRIPT_MODE_DISABLED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.AbsListView",
			"TRANSCRIPT_MODE_DISABLED");
	}
	jint AbsListView::TRANSCRIPT_MODE_NORMAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.AbsListView",
			"TRANSCRIPT_MODE_NORMAL");
	}
	
	// Constructors
	void AbsListView::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.widget.AbsListView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3);
	}
	void AbsListView::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.AbsListView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2);
	}
	void AbsListView::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.AbsListView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void AbsListView::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.AbsListView",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	void AbsListView::onTextChanged(jstring arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"onTextChanged",
			"(Ljava/lang/CharSequence;III)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	QAndroidJniObject AbsListView::getSelector()
	{
		return __thiz.callObjectMethod(
			"getSelector",
			"()Landroid/graphics/drawable/Drawable;");
	}
	void AbsListView::setSelector(__jni_impl::android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setSelector",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object());
	}
	void AbsListView::setSelector(jint arg0)
	{
		__thiz.callMethod<void>(
			"setSelector",
			"(I)V",
			arg0);
	}
	jboolean AbsListView::performItemClick(__jni_impl::android::view::View arg0, jint arg1, jlong arg2)
	{
		return __thiz.callMethod<jboolean>(
			"performItemClick",
			"(Landroid/view/View;IJ)Z",
			arg0.__jniObject().object(),
			arg1,
			arg2);
	}
	void AbsListView::setAdapter(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setAdapter",
			"(Landroid/widget/Adapter;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject AbsListView::getSelectedView()
	{
		return __thiz.callObjectMethod(
			"getSelectedView",
			"()Landroid/view/View;");
	}
	void AbsListView::setRemoteViewsAdapter(__jni_impl::android::content::Intent arg0)
	{
		__thiz.callMethod<void>(
			"setRemoteViewsAdapter",
			"(Landroid/content/Intent;)V",
			arg0.__jniObject().object());
	}
	void AbsListView::smoothScrollToPosition(jint arg0)
	{
		__thiz.callMethod<void>(
			"smoothScrollToPosition",
			"(I)V",
			arg0);
	}
	void AbsListView::smoothScrollToPosition(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"smoothScrollToPosition",
			"(II)V",
			arg0,
			arg1);
	}
	void AbsListView::setCacheColorHint(jint arg0)
	{
		__thiz.callMethod<void>(
			"setCacheColorHint",
			"(I)V",
			arg0);
	}
	void AbsListView::onInitializeAccessibilityNodeInfoForItem(__jni_impl::android::view::View arg0, jint arg1, __jni_impl::android::view::accessibility::AccessibilityNodeInfo arg2)
	{
		__thiz.callMethod<void>(
			"onInitializeAccessibilityNodeInfoForItem",
			"(Landroid/view/View;ILandroid/view/accessibility/AccessibilityNodeInfo;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object());
	}
	jint AbsListView::getCheckedItemCount()
	{
		return __thiz.callMethod<jint>(
			"getCheckedItemCount",
			"()I");
	}
	jboolean AbsListView::isItemChecked(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isItemChecked",
			"(I)Z",
			arg0);
	}
	jint AbsListView::getCheckedItemPosition()
	{
		return __thiz.callMethod<jint>(
			"getCheckedItemPosition",
			"()I");
	}
	QAndroidJniObject AbsListView::getCheckedItemPositions()
	{
		return __thiz.callObjectMethod(
			"getCheckedItemPositions",
			"()Landroid/util/SparseBooleanArray;");
	}
	QAndroidJniObject AbsListView::getCheckedItemIds()
	{
		return __thiz.callObjectMethod(
			"getCheckedItemIds",
			"()[J");
	}
	void AbsListView::clearChoices()
	{
		__thiz.callMethod<void>(
			"clearChoices",
			"()V");
	}
	void AbsListView::setItemChecked(jint arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"setItemChecked",
			"(IZ)V",
			arg0,
			arg1);
	}
	jint AbsListView::getChoiceMode()
	{
		return __thiz.callMethod<jint>(
			"getChoiceMode",
			"()I");
	}
	void AbsListView::setChoiceMode(jint arg0)
	{
		__thiz.callMethod<void>(
			"setChoiceMode",
			"(I)V",
			arg0);
	}
	void AbsListView::setMultiChoiceModeListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setMultiChoiceModeListener",
			"(Landroid/widget/AbsListView$MultiChoiceModeListener;)V",
			arg0.__jniObject().object());
	}
	void AbsListView::setFastScrollEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setFastScrollEnabled",
			"(Z)V",
			arg0);
	}
	void AbsListView::setFastScrollStyle(jint arg0)
	{
		__thiz.callMethod<void>(
			"setFastScrollStyle",
			"(I)V",
			arg0);
	}
	void AbsListView::setFastScrollAlwaysVisible(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setFastScrollAlwaysVisible",
			"(Z)V",
			arg0);
	}
	jboolean AbsListView::isFastScrollAlwaysVisible()
	{
		return __thiz.callMethod<jboolean>(
			"isFastScrollAlwaysVisible",
			"()Z");
	}
	jboolean AbsListView::isFastScrollEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isFastScrollEnabled",
			"()Z");
	}
	void AbsListView::setSmoothScrollbarEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setSmoothScrollbarEnabled",
			"(Z)V",
			arg0);
	}
	jboolean AbsListView::isSmoothScrollbarEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isSmoothScrollbarEnabled",
			"()Z");
	}
	void AbsListView::setOnScrollListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnScrollListener",
			"(Landroid/widget/AbsListView$OnScrollListener;)V",
			arg0.__jniObject().object());
	}
	jboolean AbsListView::isScrollingCacheEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isScrollingCacheEnabled",
			"()Z");
	}
	void AbsListView::setScrollingCacheEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setScrollingCacheEnabled",
			"(Z)V",
			arg0);
	}
	void AbsListView::setTextFilterEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setTextFilterEnabled",
			"(Z)V",
			arg0);
	}
	jboolean AbsListView::isTextFilterEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isTextFilterEnabled",
			"()Z");
	}
	jboolean AbsListView::isStackFromBottom()
	{
		return __thiz.callMethod<jboolean>(
			"isStackFromBottom",
			"()Z");
	}
	void AbsListView::setStackFromBottom(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setStackFromBottom",
			"(Z)V",
			arg0);
	}
	void AbsListView::setFilterText(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setFilterText",
			"(Ljava/lang/String;)V",
			arg0);
	}
	QAndroidJniObject AbsListView::getTextFilter()
	{
		return __thiz.callObjectMethod(
			"getTextFilter",
			"()Ljava/lang/CharSequence;");
	}
	jint AbsListView::getListPaddingTop()
	{
		return __thiz.callMethod<jint>(
			"getListPaddingTop",
			"()I");
	}
	jint AbsListView::getListPaddingBottom()
	{
		return __thiz.callMethod<jint>(
			"getListPaddingBottom",
			"()I");
	}
	jint AbsListView::getListPaddingLeft()
	{
		return __thiz.callMethod<jint>(
			"getListPaddingLeft",
			"()I");
	}
	jint AbsListView::getListPaddingRight()
	{
		return __thiz.callMethod<jint>(
			"getListPaddingRight",
			"()I");
	}
	void AbsListView::setDrawSelectorOnTop(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setDrawSelectorOnTop",
			"(Z)V",
			arg0);
	}
	jboolean AbsListView::isDrawSelectorOnTop()
	{
		return __thiz.callMethod<jboolean>(
			"isDrawSelectorOnTop",
			"()Z");
	}
	jint AbsListView::pointToPosition(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"pointToPosition",
			"(II)I",
			arg0,
			arg1);
	}
	jlong AbsListView::pointToRowId(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jlong>(
			"pointToRowId",
			"(II)J",
			arg0,
			arg1);
	}
	void AbsListView::onTouchModeChanged(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"onTouchModeChanged",
			"(Z)V",
			arg0);
	}
	void AbsListView::fling(jint arg0)
	{
		__thiz.callMethod<void>(
			"fling",
			"(I)V",
			arg0);
	}
	void AbsListView::setFriction(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setFriction",
			"(F)V",
			arg0);
	}
	void AbsListView::setVelocityScale(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setVelocityScale",
			"(F)V",
			arg0);
	}
	void AbsListView::smoothScrollToPositionFromTop(jint arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"smoothScrollToPositionFromTop",
			"(III)V",
			arg0,
			arg1,
			arg2);
	}
	void AbsListView::smoothScrollToPositionFromTop(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"smoothScrollToPositionFromTop",
			"(II)V",
			arg0,
			arg1);
	}
	void AbsListView::smoothScrollBy(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"smoothScrollBy",
			"(II)V",
			arg0,
			arg1);
	}
	void AbsListView::scrollListBy(jint arg0)
	{
		__thiz.callMethod<void>(
			"scrollListBy",
			"(I)V",
			arg0);
	}
	jboolean AbsListView::canScrollList(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"canScrollList",
			"(I)Z",
			arg0);
	}
	void AbsListView::invalidateViews()
	{
		__thiz.callMethod<void>(
			"invalidateViews",
			"()V");
	}
	void AbsListView::clearTextFilter()
	{
		__thiz.callMethod<void>(
			"clearTextFilter",
			"()V");
	}
	jboolean AbsListView::hasTextFilter()
	{
		return __thiz.callMethod<jboolean>(
			"hasTextFilter",
			"()Z");
	}
	void AbsListView::onGlobalLayout()
	{
		__thiz.callMethod<void>(
			"onGlobalLayout",
			"()V");
	}
	void AbsListView::onFilterComplete(jint arg0)
	{
		__thiz.callMethod<void>(
			"onFilterComplete",
			"(I)V",
			arg0);
	}
	void AbsListView::setTranscriptMode(jint arg0)
	{
		__thiz.callMethod<void>(
			"setTranscriptMode",
			"(I)V",
			arg0);
	}
	jint AbsListView::getTranscriptMode()
	{
		return __thiz.callMethod<jint>(
			"getTranscriptMode",
			"()I");
	}
	jint AbsListView::getCacheColorHint()
	{
		return __thiz.callMethod<jint>(
			"getCacheColorHint",
			"()I");
	}
	void AbsListView::reclaimViews(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"reclaimViews",
			"(Ljava/util/List;)V",
			arg0.__jniObject().object());
	}
	void AbsListView::deferNotifyDataSetChanged()
	{
		__thiz.callMethod<void>(
			"deferNotifyDataSetChanged",
			"()V");
	}
	jboolean AbsListView::onRemoteAdapterConnected()
	{
		return __thiz.callMethod<jboolean>(
			"onRemoteAdapterConnected",
			"()Z");
	}
	void AbsListView::onRemoteAdapterDisconnected()
	{
		__thiz.callMethod<void>(
			"onRemoteAdapterDisconnected",
			"()V");
	}
	void AbsListView::setEdgeEffectColor(jint arg0)
	{
		__thiz.callMethod<void>(
			"setEdgeEffectColor",
			"(I)V",
			arg0);
	}
	void AbsListView::setBottomEdgeEffectColor(jint arg0)
	{
		__thiz.callMethod<void>(
			"setBottomEdgeEffectColor",
			"(I)V",
			arg0);
	}
	void AbsListView::setTopEdgeEffectColor(jint arg0)
	{
		__thiz.callMethod<void>(
			"setTopEdgeEffectColor",
			"(I)V",
			arg0);
	}
	jint AbsListView::getTopEdgeEffectColor()
	{
		return __thiz.callMethod<jint>(
			"getTopEdgeEffectColor",
			"()I");
	}
	jint AbsListView::getBottomEdgeEffectColor()
	{
		return __thiz.callMethod<jint>(
			"getBottomEdgeEffectColor",
			"()I");
	}
	void AbsListView::setRecyclerListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setRecyclerListener",
			"(Landroid/widget/AbsListView$RecyclerListener;)V",
			arg0.__jniObject().object());
	}
	void AbsListView::setSelectionFromTop(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setSelectionFromTop",
			"(II)V",
			arg0,
			arg1);
	}
	jboolean AbsListView::showContextMenuForChild(__jni_impl::android::view::View arg0, jfloat arg1, jfloat arg2)
	{
		return __thiz.callMethod<jboolean>(
			"showContextMenuForChild",
			"(Landroid/view/View;FF)Z",
			arg0.__jniObject().object(),
			arg1,
			arg2);
	}
	jboolean AbsListView::showContextMenuForChild(__jni_impl::android::view::View arg0)
	{
		return __thiz.callMethod<jboolean>(
			"showContextMenuForChild",
			"(Landroid/view/View;)Z",
			arg0.__jniObject().object());
	}
	void AbsListView::addTouchables(__jni_impl::java::util::ArrayList arg0)
	{
		__thiz.callMethod<void>(
			"addTouchables",
			"(Ljava/util/ArrayList;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject AbsListView::onResolvePointerIcon(__jni_impl::android::view::MotionEvent arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"onResolvePointerIcon",
			"(Landroid/view/MotionEvent;I)Landroid/view/PointerIcon;",
			arg0.__jniObject().object(),
			arg1);
	}
	jboolean AbsListView::onInterceptHoverEvent(__jni_impl::android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onInterceptHoverEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object());
	}
	void AbsListView::requestDisallowInterceptTouchEvent(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"requestDisallowInterceptTouchEvent",
			"(Z)V",
			arg0);
	}
	jboolean AbsListView::onInterceptTouchEvent(__jni_impl::android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onInterceptTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object());
	}
	QAndroidJniObject AbsListView::getAccessibilityClassName()
	{
		return __thiz.callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;");
	}
	void AbsListView::dispatchDrawableHotspotChanged(jfloat arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"dispatchDrawableHotspotChanged",
			"(FF)V",
			arg0,
			arg1);
	}
	QAndroidJniObject AbsListView::generateLayoutParams(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"generateLayoutParams",
			"(Landroid/util/AttributeSet;)Landroid/widget/AbsListView$LayoutParams;",
			arg0.__jniObject().object());
	}
	void AbsListView::jumpDrawablesToCurrentState()
	{
		__thiz.callMethod<void>(
			"jumpDrawablesToCurrentState",
			"()V");
	}
	jboolean AbsListView::onStartNestedScroll(__jni_impl::android::view::View arg0, __jni_impl::android::view::View arg1, jint arg2)
	{
		return __thiz.callMethod<jboolean>(
			"onStartNestedScroll",
			"(Landroid/view/View;Landroid/view/View;I)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2);
	}
	void AbsListView::onNestedScrollAccepted(__jni_impl::android::view::View arg0, __jni_impl::android::view::View arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"onNestedScrollAccepted",
			"(Landroid/view/View;Landroid/view/View;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2);
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
			arg4);
	}
	jboolean AbsListView::onNestedFling(__jni_impl::android::view::View arg0, jfloat arg1, jfloat arg2, jboolean arg3)
	{
		return __thiz.callMethod<jboolean>(
			"onNestedFling",
			"(Landroid/view/View;FFZ)Z",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3);
	}
	void AbsListView::requestLayout()
	{
		__thiz.callMethod<void>(
			"requestLayout",
			"()V");
	}
	jint AbsListView::getVerticalScrollbarWidth()
	{
		return __thiz.callMethod<jint>(
			"getVerticalScrollbarWidth",
			"()I");
	}
	void AbsListView::setVerticalScrollbarPosition(jint arg0)
	{
		__thiz.callMethod<void>(
			"setVerticalScrollbarPosition",
			"(I)V",
			arg0);
	}
	void AbsListView::setScrollIndicators(__jni_impl::android::view::View arg0, __jni_impl::android::view::View arg1)
	{
		__thiz.callMethod<void>(
			"setScrollIndicators",
			"(Landroid/view/View;Landroid/view/View;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	jboolean AbsListView::showContextMenu(jfloat arg0, jfloat arg1)
	{
		return __thiz.callMethod<jboolean>(
			"showContextMenu",
			"(FF)Z",
			arg0,
			arg1);
	}
	jboolean AbsListView::showContextMenu()
	{
		return __thiz.callMethod<jboolean>(
			"showContextMenu",
			"()Z");
	}
	void AbsListView::sendAccessibilityEventUnchecked(__jni_impl::android::view::accessibility::AccessibilityEvent arg0)
	{
		__thiz.callMethod<void>(
			"sendAccessibilityEventUnchecked",
			"(Landroid/view/accessibility/AccessibilityEvent;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject AbsListView::onCreateInputConnection(__jni_impl::android::view::inputmethod::EditorInfo arg0)
	{
		return __thiz.callObjectMethod(
			"onCreateInputConnection",
			"(Landroid/view/inputmethod/EditorInfo;)Landroid/view/inputmethod/InputConnection;",
			arg0.__jniObject().object());
	}
	jboolean AbsListView::checkInputConnectionProxy(__jni_impl::android::view::View arg0)
	{
		return __thiz.callMethod<jboolean>(
			"checkInputConnectionProxy",
			"(Landroid/view/View;)Z",
			arg0.__jniObject().object());
	}
	void AbsListView::getFocusedRect(__jni_impl::android::graphics::Rect arg0)
	{
		__thiz.callMethod<void>(
			"getFocusedRect",
			"(Landroid/graphics/Rect;)V",
			arg0.__jniObject().object());
	}
	void AbsListView::setScrollBarStyle(jint arg0)
	{
		__thiz.callMethod<void>(
			"setScrollBarStyle",
			"(I)V",
			arg0);
	}
	void AbsListView::onRtlPropertiesChanged(jint arg0)
	{
		__thiz.callMethod<void>(
			"onRtlPropertiesChanged",
			"(I)V",
			arg0);
	}
	void AbsListView::onCancelPendingInputEvents()
	{
		__thiz.callMethod<void>(
			"onCancelPendingInputEvents",
			"()V");
	}
	void AbsListView::draw(__jni_impl::android::graphics::Canvas arg0)
	{
		__thiz.callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.__jniObject().object());
	}
	jint AbsListView::getSolidColor()
	{
		return __thiz.callMethod<jint>(
			"getSolidColor",
			"()I");
	}
	jboolean AbsListView::verifyDrawable(__jni_impl::android::graphics::drawable::Drawable arg0)
	{
		return __thiz.callMethod<jboolean>(
			"verifyDrawable",
			"(Landroid/graphics/drawable/Drawable;)Z",
			arg0.__jniObject().object());
	}
	void AbsListView::onRestoreInstanceState(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"onRestoreInstanceState",
			"(Landroid/os/Parcelable;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject AbsListView::onSaveInstanceState()
	{
		return __thiz.callObjectMethod(
			"onSaveInstanceState",
			"()Landroid/os/Parcelable;");
	}
	jboolean AbsListView::onKeyDown(jint arg0, __jni_impl::android::view::KeyEvent arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyDown",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.__jniObject().object());
	}
	jboolean AbsListView::onKeyUp(jint arg0, __jni_impl::android::view::KeyEvent arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyUp",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.__jniObject().object());
	}
	jboolean AbsListView::onTouchEvent(__jni_impl::android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object());
	}
	jboolean AbsListView::onGenericMotionEvent(__jni_impl::android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onGenericMotionEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object());
	}
	void AbsListView::onWindowFocusChanged(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"onWindowFocusChanged",
			"(Z)V",
			arg0);
	}
	void AbsListView::beforeTextChanged(jstring arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"beforeTextChanged",
			"(Ljava/lang/CharSequence;III)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	void AbsListView::afterTextChanged(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"afterTextChanged",
			"(Landroid/text/Editable;)V",
			arg0.__jniObject().object());
	}
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class AbsListView : public __jni_impl::android::widget::AbsListView
	{
	public:
		AbsListView(QAndroidJniObject obj) { __thiz = obj; }
		AbsListView(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
		AbsListView(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		AbsListView(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		AbsListView(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::widget

#endif // ANDROID_WIDGET_ABSLISTVIEW

