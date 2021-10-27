#pragma once

#ifndef ANDROID_WIDGET_RELATIVELAYOUT_LAYOUTPARAMS
#define ANDROID_WIDGET_RELATIVELAYOUT_LAYOUTPARAMS

#include "../../__JniBaseClass.hpp"
#include "../view/ViewGroup_LayoutParams.hpp"
#include "../view/ViewGroup_MarginLayoutParams.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::view
{
	class ViewGroup_LayoutParams;
}
namespace __jni_impl::android::view
{
	class ViewGroup_MarginLayoutParams;
}

namespace __jni_impl::android::widget
{
	class RelativeLayout_LayoutParams : public __jni_impl::android::view::ViewGroup_MarginLayoutParams
	{
	public:
		// Fields
		jboolean alignWithParent();
		
		// Constructors
		void __constructor(__jni_impl::android::view::ViewGroup_LayoutParams arg0);
		void __constructor(__jni_impl::android::view::ViewGroup_MarginLayoutParams arg0);
		void __constructor(__jni_impl::android::widget::RelativeLayout_LayoutParams arg0);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(jint arg0, jint arg1);
		
		// Methods
		void addRule(jint arg0);
		void addRule(jint arg0, jint arg1);
		jstring debug(jstring arg0);
		jstring debug(const QString &arg0);
		jint getRule(jint arg0);
		jintArray getRules();
		void removeRule(jint arg0);
		void resolveLayoutDirection(jint arg0);
	};
} // namespace __jni_impl::android::widget

#include "../content/Context.hpp"
#include "../view/ViewGroup_LayoutParams.hpp"
#include "../view/ViewGroup_MarginLayoutParams.hpp"

namespace __jni_impl::android::widget
{
	// Fields
	jboolean RelativeLayout_LayoutParams::alignWithParent()
	{
		return __thiz.getField<jboolean>(
			"alignWithParent"
		);
	}
	
	// Constructors
	void RelativeLayout_LayoutParams::__constructor(__jni_impl::android::view::ViewGroup_LayoutParams arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.RelativeLayout$LayoutParams",
			"(Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.__jniObject().object()
		);
	}
	void RelativeLayout_LayoutParams::__constructor(__jni_impl::android::view::ViewGroup_MarginLayoutParams arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.RelativeLayout$LayoutParams",
			"(Landroid/view/ViewGroup$MarginLayoutParams;)V",
			arg0.__jniObject().object()
		);
	}
	void RelativeLayout_LayoutParams::__constructor(__jni_impl::android::widget::RelativeLayout_LayoutParams arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.RelativeLayout$LayoutParams",
			"(Landroid/widget/RelativeLayout$LayoutParams;)V",
			arg0.__jniObject().object()
		);
	}
	void RelativeLayout_LayoutParams::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.RelativeLayout$LayoutParams",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void RelativeLayout_LayoutParams::__constructor(jint arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.RelativeLayout$LayoutParams",
			"(II)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	void RelativeLayout_LayoutParams::addRule(jint arg0)
	{
		__thiz.callMethod<void>(
			"addRule",
			"(I)V",
			arg0
		);
	}
	void RelativeLayout_LayoutParams::addRule(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"addRule",
			"(II)V",
			arg0,
			arg1
		);
	}
	jstring RelativeLayout_LayoutParams::debug(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"debug",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring RelativeLayout_LayoutParams::debug(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"debug",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
	jint RelativeLayout_LayoutParams::getRule(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getRule",
			"(I)I",
			arg0
		);
	}
	jintArray RelativeLayout_LayoutParams::getRules()
	{
		return __thiz.callObjectMethod(
			"getRules",
			"()[I"
		).object<jintArray>();
	}
	void RelativeLayout_LayoutParams::removeRule(jint arg0)
	{
		__thiz.callMethod<void>(
			"removeRule",
			"(I)V",
			arg0
		);
	}
	void RelativeLayout_LayoutParams::resolveLayoutDirection(jint arg0)
	{
		__thiz.callMethod<void>(
			"resolveLayoutDirection",
			"(I)V",
			arg0
		);
	}
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class RelativeLayout_LayoutParams : public __jni_impl::android::widget::RelativeLayout_LayoutParams
	{
	public:
		RelativeLayout_LayoutParams(QAndroidJniObject obj) { __thiz = obj; }
		RelativeLayout_LayoutParams(__jni_impl::android::view::ViewGroup_LayoutParams arg0)
		{
			__constructor(
				arg0);
		}
		RelativeLayout_LayoutParams(__jni_impl::android::view::ViewGroup_MarginLayoutParams arg0)
		{
			__constructor(
				arg0);
		}
		RelativeLayout_LayoutParams(__jni_impl::android::widget::RelativeLayout_LayoutParams arg0)
		{
			__constructor(
				arg0);
		}
		RelativeLayout_LayoutParams(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		RelativeLayout_LayoutParams(jint arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::widget

#endif // ANDROID_WIDGET_RELATIVELAYOUT_LAYOUTPARAMS

