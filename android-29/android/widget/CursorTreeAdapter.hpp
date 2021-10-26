#pragma once

#ifndef ANDROID_WIDGET_CURSORTREEADAPTER
#define ANDROID_WIDGET_CURSORTREEADAPTER

#include "../../__JniBaseClass.hpp"
#include "BaseExpandableListAdapter.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::widget
{
	class Filter;
}
namespace __jni_impl::android::view
{
	class View;
}
namespace __jni_impl::android::view
{
	class ViewGroup;
}

namespace __jni_impl::android::widget
{
	class CursorTreeAdapter : public __jni_impl::android::widget::BaseExpandableListAdapter
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::__JniBaseClass arg0, __jni_impl::android::content::Context arg1);
		void __constructor(__jni_impl::__JniBaseClass arg0, __jni_impl::android::content::Context arg1, jboolean arg2);
		
		// Methods
		QAndroidJniObject getFilter();
		void notifyDataSetInvalidated();
		jlong getGroupId(jint arg0);
		void notifyDataSetChanged();
		void notifyDataSetChanged(jboolean arg0);
		QAndroidJniObject getGroup(jint arg0);
		void setGroupCursor(__jni_impl::__JniBaseClass arg0);
		void setChildrenCursor(jint arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject runQueryOnBackgroundThread(jstring arg0);
		QAndroidJniObject runQueryOnBackgroundThread(const QString &arg0);
		QAndroidJniObject getFilterQueryProvider();
		void setFilterQueryProvider(__jni_impl::__JniBaseClass arg0);
		void changeCursor(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getCursor();
		jstring convertToString(__jni_impl::__JniBaseClass arg0);
		jint getGroupCount();
		QAndroidJniObject getChild(jint arg0, jint arg1);
		jint getChildrenCount(jint arg0);
		jlong getChildId(jint arg0, jint arg1);
		jboolean hasStableIds();
		QAndroidJniObject getGroupView(jint arg0, jboolean arg1, __jni_impl::android::view::View arg2, __jni_impl::android::view::ViewGroup arg3);
		QAndroidJniObject getChildView(jint arg0, jint arg1, jboolean arg2, __jni_impl::android::view::View arg3, __jni_impl::android::view::ViewGroup arg4);
		jboolean isChildSelectable(jint arg0, jint arg1);
		void onGroupCollapsed(jint arg0);
	};
} // namespace __jni_impl::android::widget

#include "../content/Context.hpp"
#include "Filter.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"

namespace __jni_impl::android::widget
{
	// Fields
	
	// Constructors
	void CursorTreeAdapter::__constructor(__jni_impl::__JniBaseClass arg0, __jni_impl::android::content::Context arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.CursorTreeAdapter",
			"(Landroid/database/Cursor;Landroid/content/Context;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void CursorTreeAdapter::__constructor(__jni_impl::__JniBaseClass arg0, __jni_impl::android::content::Context arg1, jboolean arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.CursorTreeAdapter",
			"(Landroid/database/Cursor;Landroid/content/Context;Z)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	
	// Methods
	QAndroidJniObject CursorTreeAdapter::getFilter()
	{
		return __thiz.callObjectMethod(
			"getFilter",
			"()Landroid/widget/Filter;"
		);
	}
	void CursorTreeAdapter::notifyDataSetInvalidated()
	{
		__thiz.callMethod<void>(
			"notifyDataSetInvalidated",
			"()V"
		);
	}
	jlong CursorTreeAdapter::getGroupId(jint arg0)
	{
		return __thiz.callMethod<jlong>(
			"getGroupId",
			"(I)J",
			arg0
		);
	}
	void CursorTreeAdapter::notifyDataSetChanged()
	{
		__thiz.callMethod<void>(
			"notifyDataSetChanged",
			"()V"
		);
	}
	void CursorTreeAdapter::notifyDataSetChanged(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"notifyDataSetChanged",
			"(Z)V",
			arg0
		);
	}
	QAndroidJniObject CursorTreeAdapter::getGroup(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getGroup",
			"(I)Landroid/database/Cursor;",
			arg0
		);
	}
	void CursorTreeAdapter::setGroupCursor(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setGroupCursor",
			"(Landroid/database/Cursor;)V",
			arg0.__jniObject().object()
		);
	}
	void CursorTreeAdapter::setChildrenCursor(jint arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"setChildrenCursor",
			"(ILandroid/database/Cursor;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject CursorTreeAdapter::runQueryOnBackgroundThread(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"runQueryOnBackgroundThread",
			"(Ljava/lang/CharSequence;)Landroid/database/Cursor;",
			arg0
		);
	}
	QAndroidJniObject CursorTreeAdapter::runQueryOnBackgroundThread(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"runQueryOnBackgroundThread",
			"(Ljava/lang/CharSequence;)Landroid/database/Cursor;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject CursorTreeAdapter::getFilterQueryProvider()
	{
		return __thiz.callObjectMethod(
			"getFilterQueryProvider",
			"()Landroid/widget/FilterQueryProvider;"
		);
	}
	void CursorTreeAdapter::setFilterQueryProvider(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setFilterQueryProvider",
			"(Landroid/widget/FilterQueryProvider;)V",
			arg0.__jniObject().object()
		);
	}
	void CursorTreeAdapter::changeCursor(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"changeCursor",
			"(Landroid/database/Cursor;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject CursorTreeAdapter::getCursor()
	{
		return __thiz.callObjectMethod(
			"getCursor",
			"()Landroid/database/Cursor;"
		);
	}
	jstring CursorTreeAdapter::convertToString(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"convertToString",
			"(Landroid/database/Cursor;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jint CursorTreeAdapter::getGroupCount()
	{
		return __thiz.callMethod<jint>(
			"getGroupCount",
			"()I"
		);
	}
	QAndroidJniObject CursorTreeAdapter::getChild(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"getChild",
			"(II)Landroid/database/Cursor;",
			arg0,
			arg1
		);
	}
	jint CursorTreeAdapter::getChildrenCount(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getChildrenCount",
			"(I)I",
			arg0
		);
	}
	jlong CursorTreeAdapter::getChildId(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jlong>(
			"getChildId",
			"(II)J",
			arg0,
			arg1
		);
	}
	jboolean CursorTreeAdapter::hasStableIds()
	{
		return __thiz.callMethod<jboolean>(
			"hasStableIds",
			"()Z"
		);
	}
	QAndroidJniObject CursorTreeAdapter::getGroupView(jint arg0, jboolean arg1, __jni_impl::android::view::View arg2, __jni_impl::android::view::ViewGroup arg3)
	{
		return __thiz.callObjectMethod(
			"getGroupView",
			"(IZLandroid/view/View;Landroid/view/ViewGroup;)Landroid/view/View;",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	QAndroidJniObject CursorTreeAdapter::getChildView(jint arg0, jint arg1, jboolean arg2, __jni_impl::android::view::View arg3, __jni_impl::android::view::ViewGroup arg4)
	{
		return __thiz.callObjectMethod(
			"getChildView",
			"(IIZLandroid/view/View;Landroid/view/ViewGroup;)Landroid/view/View;",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object(),
			arg4.__jniObject().object()
		);
	}
	jboolean CursorTreeAdapter::isChildSelectable(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jboolean>(
			"isChildSelectable",
			"(II)Z",
			arg0,
			arg1
		);
	}
	void CursorTreeAdapter::onGroupCollapsed(jint arg0)
	{
		__thiz.callMethod<void>(
			"onGroupCollapsed",
			"(I)V",
			arg0
		);
	}
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class CursorTreeAdapter : public __jni_impl::android::widget::CursorTreeAdapter
	{
	public:
		CursorTreeAdapter(QAndroidJniObject obj) { __thiz = obj; }
		CursorTreeAdapter(__jni_impl::__JniBaseClass arg0, __jni_impl::android::content::Context arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		CursorTreeAdapter(__jni_impl::__JniBaseClass arg0, __jni_impl::android::content::Context arg1, jboolean arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace android::widget

#endif // ANDROID_WIDGET_CURSORTREEADAPTER

