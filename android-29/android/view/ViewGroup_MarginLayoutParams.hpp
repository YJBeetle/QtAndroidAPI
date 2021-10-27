#pragma once

#include "../../__JniBaseClass.hpp"
#include "ViewGroup_LayoutParams.hpp"

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
	class ViewGroup_MarginLayoutParams : public __jni_impl::android::view::ViewGroup_LayoutParams
	{
	public:
		// Fields
		jint bottomMargin();
		jint leftMargin();
		jint rightMargin();
		jint topMargin();
		
		// Constructors
		void __constructor(__jni_impl::android::view::ViewGroup_LayoutParams arg0);
		void __constructor(__jni_impl::android::view::ViewGroup_MarginLayoutParams arg0);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(jint arg0, jint arg1);
		
		// Methods
		jint getLayoutDirection();
		jint getMarginEnd();
		jint getMarginStart();
		jboolean isMarginRelative();
		void resolveLayoutDirection(jint arg0);
		void setLayoutDirection(jint arg0);
		void setMarginEnd(jint arg0);
		void setMarginStart(jint arg0);
		void setMargins(jint arg0, jint arg1, jint arg2, jint arg3);
	};
} // namespace __jni_impl::android::view

#include "../content/Context.hpp"
#include "ViewGroup_LayoutParams.hpp"

namespace __jni_impl::android::view
{
	// Fields
	jint ViewGroup_MarginLayoutParams::bottomMargin()
	{
		return __thiz.getField<jint>(
			"bottomMargin"
		);
	}
	jint ViewGroup_MarginLayoutParams::leftMargin()
	{
		return __thiz.getField<jint>(
			"leftMargin"
		);
	}
	jint ViewGroup_MarginLayoutParams::rightMargin()
	{
		return __thiz.getField<jint>(
			"rightMargin"
		);
	}
	jint ViewGroup_MarginLayoutParams::topMargin()
	{
		return __thiz.getField<jint>(
			"topMargin"
		);
	}
	
	// Constructors
	void ViewGroup_MarginLayoutParams::__constructor(__jni_impl::android::view::ViewGroup_LayoutParams arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.ViewGroup$MarginLayoutParams",
			"(Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.__jniObject().object()
		);
	}
	void ViewGroup_MarginLayoutParams::__constructor(__jni_impl::android::view::ViewGroup_MarginLayoutParams arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.ViewGroup$MarginLayoutParams",
			"(Landroid/view/ViewGroup$MarginLayoutParams;)V",
			arg0.__jniObject().object()
		);
	}
	void ViewGroup_MarginLayoutParams::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.view.ViewGroup$MarginLayoutParams",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void ViewGroup_MarginLayoutParams::__constructor(jint arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.view.ViewGroup$MarginLayoutParams",
			"(II)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	jint ViewGroup_MarginLayoutParams::getLayoutDirection()
	{
		return __thiz.callMethod<jint>(
			"getLayoutDirection",
			"()I"
		);
	}
	jint ViewGroup_MarginLayoutParams::getMarginEnd()
	{
		return __thiz.callMethod<jint>(
			"getMarginEnd",
			"()I"
		);
	}
	jint ViewGroup_MarginLayoutParams::getMarginStart()
	{
		return __thiz.callMethod<jint>(
			"getMarginStart",
			"()I"
		);
	}
	jboolean ViewGroup_MarginLayoutParams::isMarginRelative()
	{
		return __thiz.callMethod<jboolean>(
			"isMarginRelative",
			"()Z"
		);
	}
	void ViewGroup_MarginLayoutParams::resolveLayoutDirection(jint arg0)
	{
		__thiz.callMethod<void>(
			"resolveLayoutDirection",
			"(I)V",
			arg0
		);
	}
	void ViewGroup_MarginLayoutParams::setLayoutDirection(jint arg0)
	{
		__thiz.callMethod<void>(
			"setLayoutDirection",
			"(I)V",
			arg0
		);
	}
	void ViewGroup_MarginLayoutParams::setMarginEnd(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMarginEnd",
			"(I)V",
			arg0
		);
	}
	void ViewGroup_MarginLayoutParams::setMarginStart(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMarginStart",
			"(I)V",
			arg0
		);
	}
	void ViewGroup_MarginLayoutParams::setMargins(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"setMargins",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
} // namespace __jni_impl::android::view

namespace android::view
{
	class ViewGroup_MarginLayoutParams : public __jni_impl::android::view::ViewGroup_MarginLayoutParams
	{
	public:
		ViewGroup_MarginLayoutParams(QAndroidJniObject obj) { __thiz = obj; }
		ViewGroup_MarginLayoutParams(__jni_impl::android::view::ViewGroup_LayoutParams arg0)
		{
			__constructor(
				arg0);
		}
		ViewGroup_MarginLayoutParams(__jni_impl::android::view::ViewGroup_MarginLayoutParams arg0)
		{
			__constructor(
				arg0);
		}
		ViewGroup_MarginLayoutParams(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		ViewGroup_MarginLayoutParams(jint arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::view

