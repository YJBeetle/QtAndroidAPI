#pragma once

#ifndef ANDROID_WIDGET_SIMPLECURSORADAPTER
#define ANDROID_WIDGET_SIMPLECURSORADAPTER

#include "../../__JniBaseClass.hpp"
#include "BaseAdapter.hpp"
#include "CursorAdapter.hpp"
#include "ResourceCursorAdapter.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::widget
{
	class ImageView;
}
namespace __jni_impl::android::widget
{
	class TextView;
}
namespace __jni_impl::android::view
{
	class View;
}

namespace __jni_impl::android::widget
{
	class SimpleCursorAdapter : public __jni_impl::android::widget::ResourceCursorAdapter
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0, jint arg1, __jni_impl::__JniBaseClass arg2, jarray arg3, jintArray arg4);
		void __constructor(__jni_impl::android::content::Context arg0, jint arg1, __jni_impl::__JniBaseClass arg2, jarray arg3, jintArray arg4, jint arg5);
		
		// Methods
		jstring convertToString(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getViewBinder();
		void setViewBinder(__jni_impl::__JniBaseClass arg0);
		void setViewImage(__jni_impl::android::widget::ImageView arg0, jstring arg1);
		void setViewText(__jni_impl::android::widget::TextView arg0, jstring arg1);
		void bindView(__jni_impl::android::view::View arg0, __jni_impl::android::content::Context arg1, __jni_impl::__JniBaseClass arg2);
		QAndroidJniObject swapCursor(__jni_impl::__JniBaseClass arg0);
		jint getStringConversionColumn();
		void setStringConversionColumn(jint arg0);
		QAndroidJniObject getCursorToStringConverter();
		void setCursorToStringConverter(__jni_impl::__JniBaseClass arg0);
		void changeCursorAndColumns(__jni_impl::__JniBaseClass arg0, jarray arg1, jintArray arg2);
	};
} // namespace __jni_impl::android::widget

#include "../content/Context.hpp"
#include "ImageView.hpp"
#include "TextView.hpp"
#include "../view/View.hpp"

namespace __jni_impl::android::widget
{
	// Fields
	
	// Constructors
	void SimpleCursorAdapter::__constructor(__jni_impl::android::content::Context arg0, jint arg1, __jni_impl::__JniBaseClass arg2, jarray arg3, jintArray arg4)
	{
		__thiz = QAndroidJniObject(
			"android.widget.SimpleCursorAdapter",
			"(Landroid/content/Context;ILandroid/database/Cursor;[Ljava/lang/String;[I)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3,
			arg4);
	}
	void SimpleCursorAdapter::__constructor(__jni_impl::android::content::Context arg0, jint arg1, __jni_impl::__JniBaseClass arg2, jarray arg3, jintArray arg4, jint arg5)
	{
		__thiz = QAndroidJniObject(
			"android.widget.SimpleCursorAdapter",
			"(Landroid/content/Context;ILandroid/database/Cursor;[Ljava/lang/String;[II)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3,
			arg4,
			arg5);
	}
	
	// Methods
	jstring SimpleCursorAdapter::convertToString(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"convertToString",
			"(Landroid/database/Cursor;)Ljava/lang/CharSequence;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	QAndroidJniObject SimpleCursorAdapter::getViewBinder()
	{
		return __thiz.callObjectMethod(
			"getViewBinder",
			"()Landroid/widget/SimpleCursorAdapter$ViewBinder;"
		);
	}
	void SimpleCursorAdapter::setViewBinder(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setViewBinder",
			"(Landroid/widget/SimpleCursorAdapter$ViewBinder;)V",
			arg0.__jniObject().object()
		);
	}
	void SimpleCursorAdapter::setViewImage(__jni_impl::android::widget::ImageView arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"setViewImage",
			"(Landroid/widget/ImageView;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void SimpleCursorAdapter::setViewText(__jni_impl::android::widget::TextView arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"setViewText",
			"(Landroid/widget/TextView;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void SimpleCursorAdapter::bindView(__jni_impl::android::view::View arg0, __jni_impl::android::content::Context arg1, __jni_impl::__JniBaseClass arg2)
	{
		__thiz.callMethod<void>(
			"bindView",
			"(Landroid/view/View;Landroid/content/Context;Landroid/database/Cursor;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject SimpleCursorAdapter::swapCursor(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"swapCursor",
			"(Landroid/database/Cursor;)Landroid/database/Cursor;",
			arg0.__jniObject().object()
		);
	}
	jint SimpleCursorAdapter::getStringConversionColumn()
	{
		return __thiz.callMethod<jint>(
			"getStringConversionColumn",
			"()I"
		);
	}
	void SimpleCursorAdapter::setStringConversionColumn(jint arg0)
	{
		__thiz.callMethod<void>(
			"setStringConversionColumn",
			"(I)V",
			arg0
		);
	}
	QAndroidJniObject SimpleCursorAdapter::getCursorToStringConverter()
	{
		return __thiz.callObjectMethod(
			"getCursorToStringConverter",
			"()Landroid/widget/SimpleCursorAdapter$CursorToStringConverter;"
		);
	}
	void SimpleCursorAdapter::setCursorToStringConverter(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setCursorToStringConverter",
			"(Landroid/widget/SimpleCursorAdapter$CursorToStringConverter;)V",
			arg0.__jniObject().object()
		);
	}
	void SimpleCursorAdapter::changeCursorAndColumns(__jni_impl::__JniBaseClass arg0, jarray arg1, jintArray arg2)
	{
		__thiz.callMethod<void>(
			"changeCursorAndColumns",
			"(Landroid/database/Cursor;[Ljava/lang/String;[I)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class SimpleCursorAdapter : public __jni_impl::android::widget::SimpleCursorAdapter
	{
	public:
		SimpleCursorAdapter(QAndroidJniObject obj) { __thiz = obj; }
		SimpleCursorAdapter(__jni_impl::android::content::Context arg0, jint arg1, __jni_impl::__JniBaseClass arg2, jarray arg3, jintArray arg4)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4);
		}
		SimpleCursorAdapter(__jni_impl::android::content::Context arg0, jint arg1, __jni_impl::__JniBaseClass arg2, jarray arg3, jintArray arg4, jint arg5)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4,
				arg5);
		}
	};
} // namespace android::widget

#endif // ANDROID_WIDGET_SIMPLECURSORADAPTER

