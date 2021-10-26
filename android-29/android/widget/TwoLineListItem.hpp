#pragma once

#ifndef ANDROID_WIDGET_TWOLINELISTITEM
#define ANDROID_WIDGET_TWOLINELISTITEM

#include "../../__JniBaseClass.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "RelativeLayout.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::widget
{
	class TextView;
}

namespace __jni_impl::android::widget
{
	class TwoLineListItem : public __jni_impl::android::widget::RelativeLayout
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(__jni_impl::android::content::Context arg0);
		
		// Methods
		jstring getAccessibilityClassName();
		QAndroidJniObject getText1();
		QAndroidJniObject getText2();
	};
} // namespace __jni_impl::android::widget

#include "../content/Context.hpp"
#include "TextView.hpp"

namespace __jni_impl::android::widget
{
	// Fields
	
	// Constructors
	void TwoLineListItem::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.widget.TwoLineListItem",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	void TwoLineListItem::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.TwoLineListItem",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void TwoLineListItem::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.TwoLineListItem",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void TwoLineListItem::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.TwoLineListItem",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jstring TwoLineListItem::getAccessibilityClassName()
	{
		return __thiz.callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	QAndroidJniObject TwoLineListItem::getText1()
	{
		return __thiz.callObjectMethod(
			"getText1",
			"()Landroid/widget/TextView;"
		);
	}
	QAndroidJniObject TwoLineListItem::getText2()
	{
		return __thiz.callObjectMethod(
			"getText2",
			"()Landroid/widget/TextView;"
		);
	}
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class TwoLineListItem : public __jni_impl::android::widget::TwoLineListItem
	{
	public:
		TwoLineListItem(QAndroidJniObject obj) { __thiz = obj; }
		TwoLineListItem(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
		TwoLineListItem(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		TwoLineListItem(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		TwoLineListItem(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::widget

#endif // ANDROID_WIDGET_TWOLINELISTITEM

