#pragma once

#ifndef ANDROID_WIDGET_RESOURCECURSORADAPTER
#define ANDROID_WIDGET_RESOURCECURSORADAPTER

#include "../../__JniBaseClass.hpp"
#include "BaseAdapter.hpp"
#include "CursorAdapter.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::content::res
{
	class Resources_Theme;
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
	class ResourceCursorAdapter : public __jni_impl::android::widget::CursorAdapter
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0, jint arg1, __jni_impl::__JniBaseClass arg2, jint arg3);
		void __constructor(__jni_impl::android::content::Context arg0, jint arg1, __jni_impl::__JniBaseClass arg2, jboolean arg3);
		void __constructor(__jni_impl::android::content::Context arg0, jint arg1, __jni_impl::__JniBaseClass arg2);
		
		// Methods
		void setDropDownViewTheme(__jni_impl::android::content::res::Resources_Theme arg0);
		QAndroidJniObject newView(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::view::ViewGroup arg2);
		QAndroidJniObject newDropDownView(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::view::ViewGroup arg2);
		void setViewResource(jint arg0);
		void setDropDownViewResource(jint arg0);
	};
} // namespace __jni_impl::android::widget

#include "../content/Context.hpp"
#include "../content/res/Resources_Theme.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"

namespace __jni_impl::android::widget
{
	// Fields
	
	// Constructors
	void ResourceCursorAdapter::__constructor(__jni_impl::android::content::Context arg0, jint arg1, __jni_impl::__JniBaseClass arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ResourceCursorAdapter",
			"(Landroid/content/Context;ILandroid/database/Cursor;I)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3);
	}
	void ResourceCursorAdapter::__constructor(__jni_impl::android::content::Context arg0, jint arg1, __jni_impl::__JniBaseClass arg2, jboolean arg3)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ResourceCursorAdapter",
			"(Landroid/content/Context;ILandroid/database/Cursor;Z)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3);
	}
	void ResourceCursorAdapter::__constructor(__jni_impl::android::content::Context arg0, jint arg1, __jni_impl::__JniBaseClass arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ResourceCursorAdapter",
			"(Landroid/content/Context;ILandroid/database/Cursor;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object());
	}
	
	// Methods
	void ResourceCursorAdapter::setDropDownViewTheme(__jni_impl::android::content::res::Resources_Theme arg0)
	{
		__thiz.callMethod<void>(
			"setDropDownViewTheme",
			"(Landroid/content/res/Resources$Theme;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ResourceCursorAdapter::newView(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::view::ViewGroup arg2)
	{
		return __thiz.callObjectMethod(
			"newView",
			"(Landroid/content/Context;Landroid/database/Cursor;Landroid/view/ViewGroup;)Landroid/view/View;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject ResourceCursorAdapter::newDropDownView(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::view::ViewGroup arg2)
	{
		return __thiz.callObjectMethod(
			"newDropDownView",
			"(Landroid/content/Context;Landroid/database/Cursor;Landroid/view/ViewGroup;)Landroid/view/View;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void ResourceCursorAdapter::setViewResource(jint arg0)
	{
		__thiz.callMethod<void>(
			"setViewResource",
			"(I)V",
			arg0
		);
	}
	void ResourceCursorAdapter::setDropDownViewResource(jint arg0)
	{
		__thiz.callMethod<void>(
			"setDropDownViewResource",
			"(I)V",
			arg0
		);
	}
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class ResourceCursorAdapter : public __jni_impl::android::widget::ResourceCursorAdapter
	{
	public:
		ResourceCursorAdapter(QAndroidJniObject obj) { __thiz = obj; }
		ResourceCursorAdapter(__jni_impl::android::content::Context arg0, jint arg1, __jni_impl::__JniBaseClass arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
		ResourceCursorAdapter(__jni_impl::android::content::Context arg0, jint arg1, __jni_impl::__JniBaseClass arg2, jboolean arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
		ResourceCursorAdapter(__jni_impl::android::content::Context arg0, jint arg1, __jni_impl::__JniBaseClass arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace android::widget

#endif // ANDROID_WIDGET_RESOURCECURSORADAPTER

