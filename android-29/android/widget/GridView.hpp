#pragma once

#ifndef ANDROID_WIDGET_GRIDVIEW
#define ANDROID_WIDGET_GRIDVIEW

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
namespace __jni_impl::android::view
{
	class ViewGroup_LayoutParams;
}
namespace __jni_impl::android::graphics
{
	class Rect;
}
namespace __jni_impl::android::view
{
	class KeyEvent;
}
namespace __jni_impl::android::content
{
	class Intent;
}
namespace __jni_impl::android::view::accessibility
{
	class AccessibilityNodeInfo;
}

namespace __jni_impl::android::widget
{
	class GridView : public __jni_impl::android::widget::AbsListView
	{
	public:
		// Fields
		static jint AUTO_FIT();
		static jint NO_STRETCH();
		static jint STRETCH_COLUMN_WIDTH();
		static jint STRETCH_SPACING();
		static jint STRETCH_SPACING_UNIFORM();
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(__jni_impl::android::content::Context arg0);
		
		// Methods
		QAndroidJniObject getAdapter();
		jstring getAccessibilityClassName();
		void setGravity(jint arg0);
		jint getGravity();
		void setNumColumns(jint arg0);
		void setAdapter(__jni_impl::__JniBaseClass arg0);
		void setSelection(jint arg0);
		void setHorizontalSpacing(jint arg0);
		jint getHorizontalSpacing();
		jint getRequestedHorizontalSpacing();
		void setVerticalSpacing(jint arg0);
		jint getVerticalSpacing();
		void setStretchMode(jint arg0);
		jint getStretchMode();
		void setColumnWidth(jint arg0);
		jint getColumnWidth();
		jint getRequestedColumnWidth();
		jint getNumColumns();
		jboolean onKeyDown(jint arg0, __jni_impl::android::view::KeyEvent arg1);
		jboolean onKeyUp(jint arg0, __jni_impl::android::view::KeyEvent arg1);
		jboolean onKeyMultiple(jint arg0, jint arg1, __jni_impl::android::view::KeyEvent arg2);
		void setRemoteViewsAdapter(__jni_impl::android::content::Intent arg0);
		void smoothScrollToPosition(jint arg0);
		void smoothScrollByOffset(jint arg0);
		void onInitializeAccessibilityNodeInfoForItem(__jni_impl::android::view::View arg0, jint arg1, __jni_impl::android::view::accessibility::AccessibilityNodeInfo arg2);
	};
} // namespace __jni_impl::android::widget

#include "../content/Context.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup_LayoutParams.hpp"
#include "../graphics/Rect.hpp"
#include "../view/KeyEvent.hpp"
#include "../content/Intent.hpp"
#include "../view/accessibility/AccessibilityNodeInfo.hpp"

namespace __jni_impl::android::widget
{
	// Fields
	jint GridView::AUTO_FIT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.GridView",
			"AUTO_FIT"
		);
	}
	jint GridView::NO_STRETCH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.GridView",
			"NO_STRETCH"
		);
	}
	jint GridView::STRETCH_COLUMN_WIDTH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.GridView",
			"STRETCH_COLUMN_WIDTH"
		);
	}
	jint GridView::STRETCH_SPACING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.GridView",
			"STRETCH_SPACING"
		);
	}
	jint GridView::STRETCH_SPACING_UNIFORM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.GridView",
			"STRETCH_SPACING_UNIFORM"
		);
	}
	
	// Constructors
	void GridView::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.widget.GridView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	void GridView::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.GridView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void GridView::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.GridView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void GridView::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.GridView",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject GridView::getAdapter()
	{
		return __thiz.callObjectMethod(
			"getAdapter",
			"()Landroid/widget/ListAdapter;"
		);
	}
	jstring GridView::getAccessibilityClassName()
	{
		return __thiz.callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	void GridView::setGravity(jint arg0)
	{
		__thiz.callMethod<void>(
			"setGravity",
			"(I)V",
			arg0
		);
	}
	jint GridView::getGravity()
	{
		return __thiz.callMethod<jint>(
			"getGravity",
			"()I"
		);
	}
	void GridView::setNumColumns(jint arg0)
	{
		__thiz.callMethod<void>(
			"setNumColumns",
			"(I)V",
			arg0
		);
	}
	void GridView::setAdapter(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setAdapter",
			"(Landroid/widget/ListAdapter;)V",
			arg0.__jniObject().object()
		);
	}
	void GridView::setSelection(jint arg0)
	{
		__thiz.callMethod<void>(
			"setSelection",
			"(I)V",
			arg0
		);
	}
	void GridView::setHorizontalSpacing(jint arg0)
	{
		__thiz.callMethod<void>(
			"setHorizontalSpacing",
			"(I)V",
			arg0
		);
	}
	jint GridView::getHorizontalSpacing()
	{
		return __thiz.callMethod<jint>(
			"getHorizontalSpacing",
			"()I"
		);
	}
	jint GridView::getRequestedHorizontalSpacing()
	{
		return __thiz.callMethod<jint>(
			"getRequestedHorizontalSpacing",
			"()I"
		);
	}
	void GridView::setVerticalSpacing(jint arg0)
	{
		__thiz.callMethod<void>(
			"setVerticalSpacing",
			"(I)V",
			arg0
		);
	}
	jint GridView::getVerticalSpacing()
	{
		return __thiz.callMethod<jint>(
			"getVerticalSpacing",
			"()I"
		);
	}
	void GridView::setStretchMode(jint arg0)
	{
		__thiz.callMethod<void>(
			"setStretchMode",
			"(I)V",
			arg0
		);
	}
	jint GridView::getStretchMode()
	{
		return __thiz.callMethod<jint>(
			"getStretchMode",
			"()I"
		);
	}
	void GridView::setColumnWidth(jint arg0)
	{
		__thiz.callMethod<void>(
			"setColumnWidth",
			"(I)V",
			arg0
		);
	}
	jint GridView::getColumnWidth()
	{
		return __thiz.callMethod<jint>(
			"getColumnWidth",
			"()I"
		);
	}
	jint GridView::getRequestedColumnWidth()
	{
		return __thiz.callMethod<jint>(
			"getRequestedColumnWidth",
			"()I"
		);
	}
	jint GridView::getNumColumns()
	{
		return __thiz.callMethod<jint>(
			"getNumColumns",
			"()I"
		);
	}
	jboolean GridView::onKeyDown(jint arg0, __jni_impl::android::view::KeyEvent arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyDown",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean GridView::onKeyUp(jint arg0, __jni_impl::android::view::KeyEvent arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyUp",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean GridView::onKeyMultiple(jint arg0, jint arg1, __jni_impl::android::view::KeyEvent arg2)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyMultiple",
			"(IILandroid/view/KeyEvent;)Z",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	void GridView::setRemoteViewsAdapter(__jni_impl::android::content::Intent arg0)
	{
		__thiz.callMethod<void>(
			"setRemoteViewsAdapter",
			"(Landroid/content/Intent;)V",
			arg0.__jniObject().object()
		);
	}
	void GridView::smoothScrollToPosition(jint arg0)
	{
		__thiz.callMethod<void>(
			"smoothScrollToPosition",
			"(I)V",
			arg0
		);
	}
	void GridView::smoothScrollByOffset(jint arg0)
	{
		__thiz.callMethod<void>(
			"smoothScrollByOffset",
			"(I)V",
			arg0
		);
	}
	void GridView::onInitializeAccessibilityNodeInfoForItem(__jni_impl::android::view::View arg0, jint arg1, __jni_impl::android::view::accessibility::AccessibilityNodeInfo arg2)
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
	class GridView : public __jni_impl::android::widget::GridView
	{
	public:
		GridView(QAndroidJniObject obj) { __thiz = obj; }
		GridView(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
		GridView(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		GridView(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		GridView(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::widget

#endif // ANDROID_WIDGET_GRIDVIEW

