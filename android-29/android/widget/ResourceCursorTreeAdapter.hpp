#pragma once

#include "../../__JniBaseClass.hpp"
#include "BaseExpandableListAdapter.hpp"
#include "CursorTreeAdapter.hpp"

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
	class ViewGroup;
}

namespace __jni_impl::android::widget
{
	class ResourceCursorTreeAdapter : public __jni_impl::android::widget::CursorTreeAdapter
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3, jint arg4);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3, jint arg4, jint arg5);
		
		// Methods
		QAndroidJniObject newChildView(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jboolean arg2, __jni_impl::android::view::ViewGroup arg3);
		QAndroidJniObject newGroupView(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jboolean arg2, __jni_impl::android::view::ViewGroup arg3);
	};
} // namespace __jni_impl::android::widget

#include "../content/Context.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"

namespace __jni_impl::android::widget
{
	// Fields
	
	// Constructors
	void ResourceCursorTreeAdapter::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ResourceCursorTreeAdapter",
			"(Landroid/content/Context;Landroid/database/Cursor;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	void ResourceCursorTreeAdapter::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3, jint arg4)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ResourceCursorTreeAdapter",
			"(Landroid/content/Context;Landroid/database/Cursor;III)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3,
			arg4
		);
	}
	void ResourceCursorTreeAdapter::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3, jint arg4, jint arg5)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ResourceCursorTreeAdapter",
			"(Landroid/content/Context;Landroid/database/Cursor;IIII)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	
	// Methods
	QAndroidJniObject ResourceCursorTreeAdapter::newChildView(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jboolean arg2, __jni_impl::android::view::ViewGroup arg3)
	{
		return __thiz.callObjectMethod(
			"newChildView",
			"(Landroid/content/Context;Landroid/database/Cursor;ZLandroid/view/ViewGroup;)Landroid/view/View;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object()
		);
	}
	QAndroidJniObject ResourceCursorTreeAdapter::newGroupView(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jboolean arg2, __jni_impl::android::view::ViewGroup arg3)
	{
		return __thiz.callObjectMethod(
			"newGroupView",
			"(Landroid/content/Context;Landroid/database/Cursor;ZLandroid/view/ViewGroup;)Landroid/view/View;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class ResourceCursorTreeAdapter : public __jni_impl::android::widget::ResourceCursorTreeAdapter
	{
	public:
		ResourceCursorTreeAdapter(QAndroidJniObject obj) { __thiz = obj; }
		ResourceCursorTreeAdapter(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
		ResourceCursorTreeAdapter(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3, jint arg4)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4);
		}
		ResourceCursorTreeAdapter(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3, jint arg4, jint arg5)
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

