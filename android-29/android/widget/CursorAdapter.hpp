#pragma once

#ifndef ANDROID_WIDGET_CURSORADAPTER
#define ANDROID_WIDGET_CURSORADAPTER

#include "../../__JniBaseClass.hpp"
#include "BaseAdapter.hpp"

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
namespace __jni_impl::android::content::res
{
	class Resources_Theme;
}

namespace __jni_impl::android::widget
{
	class CursorAdapter : public __jni_impl::android::widget::BaseAdapter
	{
	public:
		// Fields
		static jint FLAG_AUTO_REQUERY();
		static jint FLAG_REGISTER_CONTENT_OBSERVER();
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jboolean arg2);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		
		// Methods
		jint getCount();
		QAndroidJniObject getFilter();
		jobject getItem(jint arg0);
		QAndroidJniObject getView(jint arg0, __jni_impl::android::view::View arg1, __jni_impl::android::view::ViewGroup arg2);
		jboolean hasStableIds();
		QAndroidJniObject runQueryOnBackgroundThread(jstring arg0);
		QAndroidJniObject getFilterQueryProvider();
		void setFilterQueryProvider(__jni_impl::__JniBaseClass arg0);
		void changeCursor(__jni_impl::__JniBaseClass arg0);
		jstring convertToString(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getCursor();
		QAndroidJniObject getDropDownView(jint arg0, __jni_impl::android::view::View arg1, __jni_impl::android::view::ViewGroup arg2);
		jlong getItemId(jint arg0);
		void setDropDownViewTheme(__jni_impl::android::content::res::Resources_Theme arg0);
		QAndroidJniObject getDropDownViewTheme();
		QAndroidJniObject newView(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::view::ViewGroup arg2);
		QAndroidJniObject newDropDownView(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::view::ViewGroup arg2);
		void bindView(__jni_impl::android::view::View arg0, __jni_impl::android::content::Context arg1, __jni_impl::__JniBaseClass arg2);
		QAndroidJniObject swapCursor(__jni_impl::__JniBaseClass arg0);
	};
} // namespace __jni_impl::android::widget

#include "../content/Context.hpp"
#include "Filter.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "../content/res/Resources_Theme.hpp"

namespace __jni_impl::android::widget
{
	// Fields
	jint CursorAdapter::FLAG_AUTO_REQUERY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.CursorAdapter",
			"FLAG_AUTO_REQUERY"
		);
	}
	jint CursorAdapter::FLAG_REGISTER_CONTENT_OBSERVER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.CursorAdapter",
			"FLAG_REGISTER_CONTENT_OBSERVER"
		);
	}
	
	// Constructors
	void CursorAdapter::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.CursorAdapter",
			"(Landroid/content/Context;Landroid/database/Cursor;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2);
	}
	void CursorAdapter::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jboolean arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.CursorAdapter",
			"(Landroid/content/Context;Landroid/database/Cursor;Z)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2);
	}
	void CursorAdapter::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.CursorAdapter",
			"(Landroid/content/Context;Landroid/database/Cursor;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	
	// Methods
	jint CursorAdapter::getCount()
	{
		return __thiz.callMethod<jint>(
			"getCount",
			"()I"
		);
	}
	QAndroidJniObject CursorAdapter::getFilter()
	{
		return __thiz.callObjectMethod(
			"getFilter",
			"()Landroid/widget/Filter;"
		);
	}
	jobject CursorAdapter::getItem(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getItem",
			"(I)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	QAndroidJniObject CursorAdapter::getView(jint arg0, __jni_impl::android::view::View arg1, __jni_impl::android::view::ViewGroup arg2)
	{
		return __thiz.callObjectMethod(
			"getView",
			"(ILandroid/view/View;Landroid/view/ViewGroup;)Landroid/view/View;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	jboolean CursorAdapter::hasStableIds()
	{
		return __thiz.callMethod<jboolean>(
			"hasStableIds",
			"()Z"
		);
	}
	QAndroidJniObject CursorAdapter::runQueryOnBackgroundThread(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"runQueryOnBackgroundThread",
			"(Ljava/lang/CharSequence;)Landroid/database/Cursor;",
			arg0
		);
	}
	QAndroidJniObject CursorAdapter::getFilterQueryProvider()
	{
		return __thiz.callObjectMethod(
			"getFilterQueryProvider",
			"()Landroid/widget/FilterQueryProvider;"
		);
	}
	void CursorAdapter::setFilterQueryProvider(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setFilterQueryProvider",
			"(Landroid/widget/FilterQueryProvider;)V",
			arg0.__jniObject().object()
		);
	}
	void CursorAdapter::changeCursor(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"changeCursor",
			"(Landroid/database/Cursor;)V",
			arg0.__jniObject().object()
		);
	}
	jstring CursorAdapter::convertToString(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"convertToString",
			"(Landroid/database/Cursor;)Ljava/lang/CharSequence;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	QAndroidJniObject CursorAdapter::getCursor()
	{
		return __thiz.callObjectMethod(
			"getCursor",
			"()Landroid/database/Cursor;"
		);
	}
	QAndroidJniObject CursorAdapter::getDropDownView(jint arg0, __jni_impl::android::view::View arg1, __jni_impl::android::view::ViewGroup arg2)
	{
		return __thiz.callObjectMethod(
			"getDropDownView",
			"(ILandroid/view/View;Landroid/view/ViewGroup;)Landroid/view/View;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	jlong CursorAdapter::getItemId(jint arg0)
	{
		return __thiz.callMethod<jlong>(
			"getItemId",
			"(I)J",
			arg0
		);
	}
	void CursorAdapter::setDropDownViewTheme(__jni_impl::android::content::res::Resources_Theme arg0)
	{
		__thiz.callMethod<void>(
			"setDropDownViewTheme",
			"(Landroid/content/res/Resources$Theme;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject CursorAdapter::getDropDownViewTheme()
	{
		return __thiz.callObjectMethod(
			"getDropDownViewTheme",
			"()Landroid/content/res/Resources$Theme;"
		);
	}
	QAndroidJniObject CursorAdapter::newView(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::view::ViewGroup arg2)
	{
		return __thiz.callObjectMethod(
			"newView",
			"(Landroid/content/Context;Landroid/database/Cursor;Landroid/view/ViewGroup;)Landroid/view/View;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject CursorAdapter::newDropDownView(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::view::ViewGroup arg2)
	{
		return __thiz.callObjectMethod(
			"newDropDownView",
			"(Landroid/content/Context;Landroid/database/Cursor;Landroid/view/ViewGroup;)Landroid/view/View;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void CursorAdapter::bindView(__jni_impl::android::view::View arg0, __jni_impl::android::content::Context arg1, __jni_impl::__JniBaseClass arg2)
	{
		__thiz.callMethod<void>(
			"bindView",
			"(Landroid/view/View;Landroid/content/Context;Landroid/database/Cursor;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject CursorAdapter::swapCursor(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"swapCursor",
			"(Landroid/database/Cursor;)Landroid/database/Cursor;",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class CursorAdapter : public __jni_impl::android::widget::CursorAdapter
	{
	public:
		CursorAdapter(QAndroidJniObject obj) { __thiz = obj; }
		CursorAdapter(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		CursorAdapter(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jboolean arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		CursorAdapter(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::widget

#endif // ANDROID_WIDGET_CURSORADAPTER

