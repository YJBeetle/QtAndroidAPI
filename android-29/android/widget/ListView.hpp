#pragma once

#ifndef ANDROID_WIDGET_LISTVIEW
#define ANDROID_WIDGET_LISTVIEW

#include "../../__JniBaseClass.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "AdapterView.hpp"
#include "AbsListView.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::view
{
	class View;
}
namespace __jni_impl::android::graphics
{
	class Rect;
}
namespace __jni_impl::android::graphics
{
	class Canvas;
}
namespace __jni_impl::android::view
{
	class KeyEvent;
}
namespace __jni_impl::android::content
{
	class Intent;
}
namespace __jni_impl::android::graphics::drawable
{
	class Drawable;
}
namespace __jni_impl::android::view::accessibility
{
	class AccessibilityNodeInfo;
}

namespace __jni_impl::android::widget
{
	class ListView : public __jni_impl::android::widget::AbsListView
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(__jni_impl::android::content::Context arg0);
		
		// Methods
		jboolean isOpaque();
		QAndroidJniObject getAdapter();
		jboolean requestChildRectangleOnScreen(__jni_impl::android::view::View arg0, __jni_impl::android::graphics::Rect arg1, jboolean arg2);
		jstring getAccessibilityClassName();
		void setAdapter(__jni_impl::__JniBaseClass arg0);
		void setSelection(jint arg0);
		jboolean onKeyDown(jint arg0, __jni_impl::android::view::KeyEvent arg1);
		jboolean onKeyUp(jint arg0, __jni_impl::android::view::KeyEvent arg1);
		jboolean onKeyMultiple(jint arg0, jint arg1, __jni_impl::android::view::KeyEvent arg2);
		jboolean dispatchKeyEvent(__jni_impl::android::view::KeyEvent arg0);
		jint getMaxScrollAmount();
		void addHeaderView(__jni_impl::android::view::View arg0, jobject arg1, jboolean arg2);
		void addHeaderView(__jni_impl::android::view::View arg0);
		jint getHeaderViewsCount();
		jboolean removeHeaderView(__jni_impl::android::view::View arg0);
		void addFooterView(__jni_impl::android::view::View arg0);
		void addFooterView(__jni_impl::android::view::View arg0, jobject arg1, jboolean arg2);
		jint getFooterViewsCount();
		jboolean removeFooterView(__jni_impl::android::view::View arg0);
		void setRemoteViewsAdapter(__jni_impl::android::content::Intent arg0);
		void smoothScrollToPosition(jint arg0);
		void smoothScrollByOffset(jint arg0);
		void setSelectionAfterHeaderView();
		void setItemsCanFocus(jboolean arg0);
		jboolean getItemsCanFocus();
		void setCacheColorHint(jint arg0);
		QAndroidJniObject getDivider();
		void setDivider(__jni_impl::android::graphics::drawable::Drawable arg0);
		jint getDividerHeight();
		void setDividerHeight(jint arg0);
		void setHeaderDividersEnabled(jboolean arg0);
		jboolean areHeaderDividersEnabled();
		void setFooterDividersEnabled(jboolean arg0);
		jboolean areFooterDividersEnabled();
		void setOverscrollHeader(__jni_impl::android::graphics::drawable::Drawable arg0);
		QAndroidJniObject getOverscrollHeader();
		void setOverscrollFooter(__jni_impl::android::graphics::drawable::Drawable arg0);
		QAndroidJniObject getOverscrollFooter();
		jlongArray getCheckItemIds();
		void onInitializeAccessibilityNodeInfoForItem(__jni_impl::android::view::View arg0, jint arg1, __jni_impl::android::view::accessibility::AccessibilityNodeInfo arg2);
	};
} // namespace __jni_impl::android::widget

#include "../content/Context.hpp"
#include "../view/View.hpp"
#include "../graphics/Rect.hpp"
#include "../graphics/Canvas.hpp"
#include "../view/KeyEvent.hpp"
#include "../content/Intent.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "../view/accessibility/AccessibilityNodeInfo.hpp"

namespace __jni_impl::android::widget
{
	// Fields
	
	// Constructors
	void ListView::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ListView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	void ListView::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ListView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void ListView::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ListView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void ListView::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ListView",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jboolean ListView::isOpaque()
	{
		return __thiz.callMethod<jboolean>(
			"isOpaque",
			"()Z"
		);
	}
	QAndroidJniObject ListView::getAdapter()
	{
		return __thiz.callObjectMethod(
			"getAdapter",
			"()Landroid/widget/ListAdapter;"
		);
	}
	jboolean ListView::requestChildRectangleOnScreen(__jni_impl::android::view::View arg0, __jni_impl::android::graphics::Rect arg1, jboolean arg2)
	{
		return __thiz.callMethod<jboolean>(
			"requestChildRectangleOnScreen",
			"(Landroid/view/View;Landroid/graphics/Rect;Z)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	jstring ListView::getAccessibilityClassName()
	{
		return __thiz.callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	void ListView::setAdapter(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setAdapter",
			"(Landroid/widget/ListAdapter;)V",
			arg0.__jniObject().object()
		);
	}
	void ListView::setSelection(jint arg0)
	{
		__thiz.callMethod<void>(
			"setSelection",
			"(I)V",
			arg0
		);
	}
	jboolean ListView::onKeyDown(jint arg0, __jni_impl::android::view::KeyEvent arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyDown",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean ListView::onKeyUp(jint arg0, __jni_impl::android::view::KeyEvent arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyUp",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean ListView::onKeyMultiple(jint arg0, jint arg1, __jni_impl::android::view::KeyEvent arg2)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyMultiple",
			"(IILandroid/view/KeyEvent;)Z",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	jboolean ListView::dispatchKeyEvent(__jni_impl::android::view::KeyEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchKeyEvent",
			"(Landroid/view/KeyEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	jint ListView::getMaxScrollAmount()
	{
		return __thiz.callMethod<jint>(
			"getMaxScrollAmount",
			"()I"
		);
	}
	void ListView::addHeaderView(__jni_impl::android::view::View arg0, jobject arg1, jboolean arg2)
	{
		__thiz.callMethod<void>(
			"addHeaderView",
			"(Landroid/view/View;Ljava/lang/Object;Z)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void ListView::addHeaderView(__jni_impl::android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"addHeaderView",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
	jint ListView::getHeaderViewsCount()
	{
		return __thiz.callMethod<jint>(
			"getHeaderViewsCount",
			"()I"
		);
	}
	jboolean ListView::removeHeaderView(__jni_impl::android::view::View arg0)
	{
		return __thiz.callMethod<jboolean>(
			"removeHeaderView",
			"(Landroid/view/View;)Z",
			arg0.__jniObject().object()
		);
	}
	void ListView::addFooterView(__jni_impl::android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"addFooterView",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
	void ListView::addFooterView(__jni_impl::android::view::View arg0, jobject arg1, jboolean arg2)
	{
		__thiz.callMethod<void>(
			"addFooterView",
			"(Landroid/view/View;Ljava/lang/Object;Z)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	jint ListView::getFooterViewsCount()
	{
		return __thiz.callMethod<jint>(
			"getFooterViewsCount",
			"()I"
		);
	}
	jboolean ListView::removeFooterView(__jni_impl::android::view::View arg0)
	{
		return __thiz.callMethod<jboolean>(
			"removeFooterView",
			"(Landroid/view/View;)Z",
			arg0.__jniObject().object()
		);
	}
	void ListView::setRemoteViewsAdapter(__jni_impl::android::content::Intent arg0)
	{
		__thiz.callMethod<void>(
			"setRemoteViewsAdapter",
			"(Landroid/content/Intent;)V",
			arg0.__jniObject().object()
		);
	}
	void ListView::smoothScrollToPosition(jint arg0)
	{
		__thiz.callMethod<void>(
			"smoothScrollToPosition",
			"(I)V",
			arg0
		);
	}
	void ListView::smoothScrollByOffset(jint arg0)
	{
		__thiz.callMethod<void>(
			"smoothScrollByOffset",
			"(I)V",
			arg0
		);
	}
	void ListView::setSelectionAfterHeaderView()
	{
		__thiz.callMethod<void>(
			"setSelectionAfterHeaderView",
			"()V"
		);
	}
	void ListView::setItemsCanFocus(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setItemsCanFocus",
			"(Z)V",
			arg0
		);
	}
	jboolean ListView::getItemsCanFocus()
	{
		return __thiz.callMethod<jboolean>(
			"getItemsCanFocus",
			"()Z"
		);
	}
	void ListView::setCacheColorHint(jint arg0)
	{
		__thiz.callMethod<void>(
			"setCacheColorHint",
			"(I)V",
			arg0
		);
	}
	QAndroidJniObject ListView::getDivider()
	{
		return __thiz.callObjectMethod(
			"getDivider",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	void ListView::setDivider(__jni_impl::android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setDivider",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
	jint ListView::getDividerHeight()
	{
		return __thiz.callMethod<jint>(
			"getDividerHeight",
			"()I"
		);
	}
	void ListView::setDividerHeight(jint arg0)
	{
		__thiz.callMethod<void>(
			"setDividerHeight",
			"(I)V",
			arg0
		);
	}
	void ListView::setHeaderDividersEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setHeaderDividersEnabled",
			"(Z)V",
			arg0
		);
	}
	jboolean ListView::areHeaderDividersEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"areHeaderDividersEnabled",
			"()Z"
		);
	}
	void ListView::setFooterDividersEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setFooterDividersEnabled",
			"(Z)V",
			arg0
		);
	}
	jboolean ListView::areFooterDividersEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"areFooterDividersEnabled",
			"()Z"
		);
	}
	void ListView::setOverscrollHeader(__jni_impl::android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setOverscrollHeader",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ListView::getOverscrollHeader()
	{
		return __thiz.callObjectMethod(
			"getOverscrollHeader",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	void ListView::setOverscrollFooter(__jni_impl::android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setOverscrollFooter",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ListView::getOverscrollFooter()
	{
		return __thiz.callObjectMethod(
			"getOverscrollFooter",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	jlongArray ListView::getCheckItemIds()
	{
		return __thiz.callObjectMethod(
			"getCheckItemIds",
			"()[J"
		).object<jlongArray>();
	}
	void ListView::onInitializeAccessibilityNodeInfoForItem(__jni_impl::android::view::View arg0, jint arg1, __jni_impl::android::view::accessibility::AccessibilityNodeInfo arg2)
	{
		__thiz.callMethod<void>(
			"onInitializeAccessibilityNodeInfoForItem",
			"(Landroid/view/View;ILandroid/view/accessibility/AccessibilityNodeInfo;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class ListView : public __jni_impl::android::widget::ListView
	{
	public:
		ListView(QAndroidJniObject obj) { __thiz = obj; }
		ListView(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
		ListView(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		ListView(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		ListView(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::widget

#endif // ANDROID_WIDGET_LISTVIEW

