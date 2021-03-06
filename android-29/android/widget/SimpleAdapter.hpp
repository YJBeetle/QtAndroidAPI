#pragma once

#ifndef ANDROID_WIDGET_SIMPLEADAPTER
#define ANDROID_WIDGET_SIMPLEADAPTER

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
namespace __jni_impl::android::widget
{
	class ImageView;
}
namespace __jni_impl::android::widget
{
	class TextView;
}
namespace __jni_impl::android::content::res
{
	class Resources_Theme;
}

namespace __jni_impl::android::widget
{
	class SimpleAdapter : public __jni_impl::android::widget::BaseAdapter
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jarray arg3, jintArray arg4);
		
		// Methods
		jint getCount();
		QAndroidJniObject getFilter();
		jobject getItem(jint arg0);
		QAndroidJniObject getView(jint arg0, __jni_impl::android::view::View arg1, __jni_impl::android::view::ViewGroup arg2);
		QAndroidJniObject getViewBinder();
		void setViewBinder(__jni_impl::__JniBaseClass arg0);
		void setViewImage(__jni_impl::android::widget::ImageView arg0, jint arg1);
		void setViewImage(__jni_impl::android::widget::ImageView arg0, jstring arg1);
		void setViewText(__jni_impl::android::widget::TextView arg0, jstring arg1);
		QAndroidJniObject getDropDownView(jint arg0, __jni_impl::android::view::View arg1, __jni_impl::android::view::ViewGroup arg2);
		jlong getItemId(jint arg0);
		void setDropDownViewTheme(__jni_impl::android::content::res::Resources_Theme arg0);
		QAndroidJniObject getDropDownViewTheme();
		void setDropDownViewResource(jint arg0);
	};
} // namespace __jni_impl::android::widget

#include "../content/Context.hpp"
#include "Filter.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "ImageView.hpp"
#include "TextView.hpp"
#include "../content/res/Resources_Theme.hpp"

namespace __jni_impl::android::widget
{
	// Fields
	
	// Constructors
	void SimpleAdapter::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jarray arg3, jintArray arg4)
	{
		__thiz = QAndroidJniObject(
			"android.widget.SimpleAdapter",
			"(Landroid/content/Context;Ljava/util/List;I[Ljava/lang/String;[I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3,
			arg4);
	}
	
	// Methods
	jint SimpleAdapter::getCount()
	{
		return __thiz.callMethod<jint>(
			"getCount",
			"()I"
		);
	}
	QAndroidJniObject SimpleAdapter::getFilter()
	{
		return __thiz.callObjectMethod(
			"getFilter",
			"()Landroid/widget/Filter;"
		);
	}
	jobject SimpleAdapter::getItem(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getItem",
			"(I)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	QAndroidJniObject SimpleAdapter::getView(jint arg0, __jni_impl::android::view::View arg1, __jni_impl::android::view::ViewGroup arg2)
	{
		return __thiz.callObjectMethod(
			"getView",
			"(ILandroid/view/View;Landroid/view/ViewGroup;)Landroid/view/View;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject SimpleAdapter::getViewBinder()
	{
		return __thiz.callObjectMethod(
			"getViewBinder",
			"()Landroid/widget/SimpleAdapter$ViewBinder;"
		);
	}
	void SimpleAdapter::setViewBinder(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setViewBinder",
			"(Landroid/widget/SimpleAdapter$ViewBinder;)V",
			arg0.__jniObject().object()
		);
	}
	void SimpleAdapter::setViewImage(__jni_impl::android::widget::ImageView arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setViewImage",
			"(Landroid/widget/ImageView;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void SimpleAdapter::setViewImage(__jni_impl::android::widget::ImageView arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"setViewImage",
			"(Landroid/widget/ImageView;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void SimpleAdapter::setViewText(__jni_impl::android::widget::TextView arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"setViewText",
			"(Landroid/widget/TextView;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject SimpleAdapter::getDropDownView(jint arg0, __jni_impl::android::view::View arg1, __jni_impl::android::view::ViewGroup arg2)
	{
		return __thiz.callObjectMethod(
			"getDropDownView",
			"(ILandroid/view/View;Landroid/view/ViewGroup;)Landroid/view/View;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	jlong SimpleAdapter::getItemId(jint arg0)
	{
		return __thiz.callMethod<jlong>(
			"getItemId",
			"(I)J",
			arg0
		);
	}
	void SimpleAdapter::setDropDownViewTheme(__jni_impl::android::content::res::Resources_Theme arg0)
	{
		__thiz.callMethod<void>(
			"setDropDownViewTheme",
			"(Landroid/content/res/Resources$Theme;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject SimpleAdapter::getDropDownViewTheme()
	{
		return __thiz.callObjectMethod(
			"getDropDownViewTheme",
			"()Landroid/content/res/Resources$Theme;"
		);
	}
	void SimpleAdapter::setDropDownViewResource(jint arg0)
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
	class SimpleAdapter : public __jni_impl::android::widget::SimpleAdapter
	{
	public:
		SimpleAdapter(QAndroidJniObject obj) { __thiz = obj; }
		SimpleAdapter(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jarray arg3, jintArray arg4)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4);
		}
	};
} // namespace android::widget

#endif // ANDROID_WIDGET_SIMPLEADAPTER

