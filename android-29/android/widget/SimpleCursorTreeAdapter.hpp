#pragma once

#ifndef ANDROID_WIDGET_SIMPLECURSORTREEADAPTER
#define ANDROID_WIDGET_SIMPLECURSORTREEADAPTER

#include "../../__JniBaseClass.hpp"
#include "BaseExpandableListAdapter.hpp"
#include "CursorTreeAdapter.hpp"
#include "ResourceCursorTreeAdapter.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::view
{
	class View;
}
namespace __jni_impl::android::widget
{
	class ImageView;
}
namespace __jni_impl::android::widget
{
	class TextView;
}

namespace __jni_impl::android::widget
{
	class SimpleCursorTreeAdapter : public __jni_impl::android::widget::ResourceCursorTreeAdapter
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jarray arg3, jintArray arg4, jint arg5, jarray arg6, jintArray arg7);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3, jarray arg4, jintArray arg5, jint arg6, jarray arg7, jintArray arg8);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3, jarray arg4, jintArray arg5, jint arg6, jint arg7, jarray arg8, jintArray arg9);
		
		// Methods
		QAndroidJniObject getViewBinder();
		void setViewBinder(__jni_impl::__JniBaseClass arg0);
		void setViewText(__jni_impl::android::widget::TextView arg0, jstring arg1);
	};
} // namespace __jni_impl::android::widget

#include "../content/Context.hpp"
#include "../view/View.hpp"
#include "ImageView.hpp"
#include "TextView.hpp"

namespace __jni_impl::android::widget
{
	// Fields
	
	// Constructors
	void SimpleCursorTreeAdapter::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jarray arg3, jintArray arg4, jint arg5, jarray arg6, jintArray arg7)
	{
		__thiz = QAndroidJniObject(
			"android.widget.SimpleCursorTreeAdapter",
			"(Landroid/content/Context;Landroid/database/Cursor;I[Ljava/lang/String;[II[Ljava/lang/String;[I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7);
	}
	void SimpleCursorTreeAdapter::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3, jarray arg4, jintArray arg5, jint arg6, jarray arg7, jintArray arg8)
	{
		__thiz = QAndroidJniObject(
			"android.widget.SimpleCursorTreeAdapter",
			"(Landroid/content/Context;Landroid/database/Cursor;II[Ljava/lang/String;[II[Ljava/lang/String;[I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7,
			arg8);
	}
	void SimpleCursorTreeAdapter::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3, jarray arg4, jintArray arg5, jint arg6, jint arg7, jarray arg8, jintArray arg9)
	{
		__thiz = QAndroidJniObject(
			"android.widget.SimpleCursorTreeAdapter",
			"(Landroid/content/Context;Landroid/database/Cursor;II[Ljava/lang/String;[III[Ljava/lang/String;[I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7,
			arg8,
			arg9);
	}
	
	// Methods
	QAndroidJniObject SimpleCursorTreeAdapter::getViewBinder()
	{
		return __thiz.callObjectMethod(
			"getViewBinder",
			"()Landroid/widget/SimpleCursorTreeAdapter$ViewBinder;"
		);
	}
	void SimpleCursorTreeAdapter::setViewBinder(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setViewBinder",
			"(Landroid/widget/SimpleCursorTreeAdapter$ViewBinder;)V",
			arg0.__jniObject().object()
		);
	}
	void SimpleCursorTreeAdapter::setViewText(__jni_impl::android::widget::TextView arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"setViewText",
			"(Landroid/widget/TextView;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class SimpleCursorTreeAdapter : public __jni_impl::android::widget::SimpleCursorTreeAdapter
	{
	public:
		SimpleCursorTreeAdapter(QAndroidJniObject obj) { __thiz = obj; }
		SimpleCursorTreeAdapter(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jarray arg3, jintArray arg4, jint arg5, jarray arg6, jintArray arg7)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4,
				arg5,
				arg6,
				arg7);
		}
		SimpleCursorTreeAdapter(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3, jarray arg4, jintArray arg5, jint arg6, jarray arg7, jintArray arg8)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4,
				arg5,
				arg6,
				arg7,
				arg8);
		}
		SimpleCursorTreeAdapter(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3, jarray arg4, jintArray arg5, jint arg6, jint arg7, jarray arg8, jintArray arg9)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4,
				arg5,
				arg6,
				arg7,
				arg8,
				arg9);
		}
	};
} // namespace android::widget

#endif // ANDROID_WIDGET_SIMPLECURSORTREEADAPTER

