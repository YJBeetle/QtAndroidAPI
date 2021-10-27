#pragma once

#include "../../__JniBaseClass.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "./LinearLayout.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::view
{
	class MotionEvent;
}

namespace __jni_impl::android::widget
{
	class ZoomControls : public __jni_impl::android::widget::LinearLayout
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		
		// Methods
		jstring getAccessibilityClassName();
		jboolean hasFocus();
		void hide();
		jboolean onTouchEvent(__jni_impl::android::view::MotionEvent arg0);
		void setIsZoomInEnabled(jboolean arg0);
		void setIsZoomOutEnabled(jboolean arg0);
		void setOnZoomInClickListener(__jni_impl::__JniBaseClass arg0);
		void setOnZoomOutClickListener(__jni_impl::__JniBaseClass arg0);
		void setZoomSpeed(jlong arg0);
		void show();
	};
} // namespace __jni_impl::android::widget

#include "../content/Context.hpp"
#include "../view/MotionEvent.hpp"

namespace __jni_impl::android::widget
{
	// Fields
	
	// Constructors
	void ZoomControls::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ZoomControls",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	void ZoomControls::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ZoomControls",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	jstring ZoomControls::getAccessibilityClassName()
	{
		return __thiz.callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jboolean ZoomControls::hasFocus()
	{
		return __thiz.callMethod<jboolean>(
			"hasFocus",
			"()Z"
		);
	}
	void ZoomControls::hide()
	{
		__thiz.callMethod<void>(
			"hide",
			"()V"
		);
	}
	jboolean ZoomControls::onTouchEvent(__jni_impl::android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	void ZoomControls::setIsZoomInEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setIsZoomInEnabled",
			"(Z)V",
			arg0
		);
	}
	void ZoomControls::setIsZoomOutEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setIsZoomOutEnabled",
			"(Z)V",
			arg0
		);
	}
	void ZoomControls::setOnZoomInClickListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnZoomInClickListener",
			"(Landroid/view/View$OnClickListener;)V",
			arg0.__jniObject().object()
		);
	}
	void ZoomControls::setOnZoomOutClickListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnZoomOutClickListener",
			"(Landroid/view/View$OnClickListener;)V",
			arg0.__jniObject().object()
		);
	}
	void ZoomControls::setZoomSpeed(jlong arg0)
	{
		__thiz.callMethod<void>(
			"setZoomSpeed",
			"(J)V",
			arg0
		);
	}
	void ZoomControls::show()
	{
		__thiz.callMethod<void>(
			"show",
			"()V"
		);
	}
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class ZoomControls : public __jni_impl::android::widget::ZoomControls
	{
	public:
		ZoomControls(QAndroidJniObject obj) { __thiz = obj; }
		ZoomControls(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
		ZoomControls(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::widget

