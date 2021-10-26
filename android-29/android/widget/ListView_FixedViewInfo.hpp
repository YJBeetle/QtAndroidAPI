#pragma once

#ifndef ANDROID_WIDGET_LISTVIEW_FIXEDVIEWINFO
#define ANDROID_WIDGET_LISTVIEW_FIXEDVIEWINFO

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::view
{
	class View;
}
namespace __jni_impl::android::widget
{
	class ListView;
}

namespace __jni_impl::android::widget
{
	class ListView_FixedViewInfo : public __JniBaseClass
	{
	public:
		// Fields
		jobject data();
		jboolean isSelectable();
		QAndroidJniObject view();
		
		// Constructors
		void __constructor(__jni_impl::android::widget::ListView arg0);
		
		// Methods
	};
} // namespace __jni_impl::android::widget

#include "../view/View.hpp"
#include "ListView.hpp"

namespace __jni_impl::android::widget
{
	// Fields
	jobject ListView_FixedViewInfo::data()
	{
		return __thiz.getObjectField(
			"data",
			"Ljava/lang/Object;"
		).object<jobject>();
	}
	jboolean ListView_FixedViewInfo::isSelectable()
	{
		return __thiz.getField<jboolean>(
			"isSelectable"
		);
	}
	QAndroidJniObject ListView_FixedViewInfo::view()
	{
		return __thiz.getObjectField(
			"view",
			"Landroid/view/View;"
		);
	}
	
	// Constructors
	void ListView_FixedViewInfo::__constructor(__jni_impl::android::widget::ListView arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ListView$FixedViewInfo",
			"(Landroid/widget/ListView;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class ListView_FixedViewInfo : public __jni_impl::android::widget::ListView_FixedViewInfo
	{
	public:
		ListView_FixedViewInfo(QAndroidJniObject obj) { __thiz = obj; }
		ListView_FixedViewInfo(__jni_impl::android::widget::ListView arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::widget

#endif // ANDROID_WIDGET_LISTVIEW_FIXEDVIEWINFO

