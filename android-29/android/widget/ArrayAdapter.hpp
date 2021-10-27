#pragma once

#ifndef ANDROID_WIDGET_ARRAYADAPTER
#define ANDROID_WIDGET_ARRAYADAPTER

#include "../../__JniBaseClass.hpp"
#include "BaseAdapter.hpp"

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
	class Filter;
}

namespace __jni_impl::android::widget
{
	class ArrayAdapter : public __jni_impl::android::widget::BaseAdapter
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0, jint arg1);
		void __constructor(__jni_impl::android::content::Context arg0, jint arg1, jobjectArray arg2);
		void __constructor(__jni_impl::android::content::Context arg0, jint arg1, jint arg2);
		void __constructor(__jni_impl::android::content::Context arg0, jint arg1, __jni_impl::__JniBaseClass arg2);
		void __constructor(__jni_impl::android::content::Context arg0, jint arg1, jint arg2, jobjectArray arg3);
		void __constructor(__jni_impl::android::content::Context arg0, jint arg1, jint arg2, __jni_impl::__JniBaseClass arg3);
		
		// Methods
		static QAndroidJniObject createFromResource(__jni_impl::android::content::Context arg0, jint arg1, jint arg2);
		void add(jobject arg0);
		void addAll(jobjectArray arg0);
		void addAll(__jni_impl::__JniBaseClass arg0);
		void clear();
		jarray getAutofillOptions();
		QAndroidJniObject getContext();
		jint getCount();
		QAndroidJniObject getDropDownView(jint arg0, __jni_impl::android::view::View arg1, __jni_impl::android::view::ViewGroup arg2);
		QAndroidJniObject getDropDownViewTheme();
		QAndroidJniObject getFilter();
		jobject getItem(jint arg0);
		jlong getItemId(jint arg0);
		jint getPosition(jobject arg0);
		QAndroidJniObject getView(jint arg0, __jni_impl::android::view::View arg1, __jni_impl::android::view::ViewGroup arg2);
		void insert(jobject arg0, jint arg1);
		void notifyDataSetChanged();
		void remove(jobject arg0);
		void setDropDownViewResource(jint arg0);
		void setDropDownViewTheme(__jni_impl::android::content::res::Resources_Theme arg0);
		void setNotifyOnChange(jboolean arg0);
		void sort(__jni_impl::__JniBaseClass arg0);
	};
} // namespace __jni_impl::android::widget

#include "../content/Context.hpp"
#include "../content/res/Resources_Theme.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "Filter.hpp"

namespace __jni_impl::android::widget
{
	// Fields
	
	// Constructors
	void ArrayAdapter::__constructor(__jni_impl::android::content::Context arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ArrayAdapter",
			"(Landroid/content/Context;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void ArrayAdapter::__constructor(__jni_impl::android::content::Context arg0, jint arg1, jobjectArray arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ArrayAdapter",
			"(Landroid/content/Context;I[Ljava/lang/Object;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void ArrayAdapter::__constructor(__jni_impl::android::content::Context arg0, jint arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ArrayAdapter",
			"(Landroid/content/Context;II)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void ArrayAdapter::__constructor(__jni_impl::android::content::Context arg0, jint arg1, __jni_impl::__JniBaseClass arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ArrayAdapter",
			"(Landroid/content/Context;ILjava/util/List;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	void ArrayAdapter::__constructor(__jni_impl::android::content::Context arg0, jint arg1, jint arg2, jobjectArray arg3)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ArrayAdapter",
			"(Landroid/content/Context;II[Ljava/lang/Object;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3
		);
	}
	void ArrayAdapter::__constructor(__jni_impl::android::content::Context arg0, jint arg1, jint arg2, __jni_impl::__JniBaseClass arg3)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ArrayAdapter",
			"(Landroid/content/Context;IILjava/util/List;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject ArrayAdapter::createFromResource(__jni_impl::android::content::Context arg0, jint arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.widget.ArrayAdapter",
			"createFromResource",
			"(Landroid/content/Context;II)Landroid/widget/ArrayAdapter;",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void ArrayAdapter::add(jobject arg0)
	{
		__thiz.callMethod<void>(
			"add",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	void ArrayAdapter::addAll(jobjectArray arg0)
	{
		__thiz.callMethod<void>(
			"addAll",
			"([Ljava/lang/Object;)V",
			arg0
		);
	}
	void ArrayAdapter::addAll(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"addAll",
			"(Ljava/util/Collection;)V",
			arg0.__jniObject().object()
		);
	}
	void ArrayAdapter::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V"
		);
	}
	jarray ArrayAdapter::getAutofillOptions()
	{
		return __thiz.callObjectMethod(
			"getAutofillOptions",
			"()[Ljava/lang/CharSequence;"
		).object<jarray>();
	}
	QAndroidJniObject ArrayAdapter::getContext()
	{
		return __thiz.callObjectMethod(
			"getContext",
			"()Landroid/content/Context;"
		);
	}
	jint ArrayAdapter::getCount()
	{
		return __thiz.callMethod<jint>(
			"getCount",
			"()I"
		);
	}
	QAndroidJniObject ArrayAdapter::getDropDownView(jint arg0, __jni_impl::android::view::View arg1, __jni_impl::android::view::ViewGroup arg2)
	{
		return __thiz.callObjectMethod(
			"getDropDownView",
			"(ILandroid/view/View;Landroid/view/ViewGroup;)Landroid/view/View;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject ArrayAdapter::getDropDownViewTheme()
	{
		return __thiz.callObjectMethod(
			"getDropDownViewTheme",
			"()Landroid/content/res/Resources$Theme;"
		);
	}
	QAndroidJniObject ArrayAdapter::getFilter()
	{
		return __thiz.callObjectMethod(
			"getFilter",
			"()Landroid/widget/Filter;"
		);
	}
	jobject ArrayAdapter::getItem(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getItem",
			"(I)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jlong ArrayAdapter::getItemId(jint arg0)
	{
		return __thiz.callMethod<jlong>(
			"getItemId",
			"(I)J",
			arg0
		);
	}
	jint ArrayAdapter::getPosition(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"getPosition",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	QAndroidJniObject ArrayAdapter::getView(jint arg0, __jni_impl::android::view::View arg1, __jni_impl::android::view::ViewGroup arg2)
	{
		return __thiz.callObjectMethod(
			"getView",
			"(ILandroid/view/View;Landroid/view/ViewGroup;)Landroid/view/View;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void ArrayAdapter::insert(jobject arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"insert",
			"(Ljava/lang/Object;I)V",
			arg0,
			arg1
		);
	}
	void ArrayAdapter::notifyDataSetChanged()
	{
		__thiz.callMethod<void>(
			"notifyDataSetChanged",
			"()V"
		);
	}
	void ArrayAdapter::remove(jobject arg0)
	{
		__thiz.callMethod<void>(
			"remove",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	void ArrayAdapter::setDropDownViewResource(jint arg0)
	{
		__thiz.callMethod<void>(
			"setDropDownViewResource",
			"(I)V",
			arg0
		);
	}
	void ArrayAdapter::setDropDownViewTheme(__jni_impl::android::content::res::Resources_Theme arg0)
	{
		__thiz.callMethod<void>(
			"setDropDownViewTheme",
			"(Landroid/content/res/Resources$Theme;)V",
			arg0.__jniObject().object()
		);
	}
	void ArrayAdapter::setNotifyOnChange(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setNotifyOnChange",
			"(Z)V",
			arg0
		);
	}
	void ArrayAdapter::sort(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"sort",
			"(Ljava/util/Comparator;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class ArrayAdapter : public __jni_impl::android::widget::ArrayAdapter
	{
	public:
		ArrayAdapter(QAndroidJniObject obj) { __thiz = obj; }
		ArrayAdapter(__jni_impl::android::content::Context arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		ArrayAdapter(__jni_impl::android::content::Context arg0, jint arg1, jobjectArray arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		ArrayAdapter(__jni_impl::android::content::Context arg0, jint arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		ArrayAdapter(__jni_impl::android::content::Context arg0, jint arg1, __jni_impl::__JniBaseClass arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		ArrayAdapter(__jni_impl::android::content::Context arg0, jint arg1, jint arg2, jobjectArray arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
		ArrayAdapter(__jni_impl::android::content::Context arg0, jint arg1, jint arg2, __jni_impl::__JniBaseClass arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace android::widget

#endif // ANDROID_WIDGET_ARRAYADAPTER

