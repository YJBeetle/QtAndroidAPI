#pragma once

#ifndef ANDROID_WIDGET_ZOOMBUTTONSCONTROLLER
#define ANDROID_WIDGET_ZOOMBUTTONSCONTROLLER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::view
{
	class MotionEvent;
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
	class ZoomButtonsController : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::view::View arg0);
		
		// Methods
		QAndroidJniObject getContainer();
		QAndroidJniObject getZoomControls();
		jboolean isAutoDismissed();
		jboolean isVisible();
		jboolean onTouch(__jni_impl::android::view::View arg0, __jni_impl::android::view::MotionEvent arg1);
		void setAutoDismissed(jboolean arg0);
		void setFocusable(jboolean arg0);
		void setOnZoomListener(__jni_impl::__JniBaseClass arg0);
		void setVisible(jboolean arg0);
		void setZoomInEnabled(jboolean arg0);
		void setZoomOutEnabled(jboolean arg0);
		void setZoomSpeed(jlong arg0);
	};
} // namespace __jni_impl::android::widget

#include "../view/MotionEvent.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"

namespace __jni_impl::android::widget
{
	// Fields
	
	// Constructors
	void ZoomButtonsController::__constructor(__jni_impl::android::view::View arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ZoomButtonsController",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject ZoomButtonsController::getContainer()
	{
		return __thiz.callObjectMethod(
			"getContainer",
			"()Landroid/view/ViewGroup;"
		);
	}
	QAndroidJniObject ZoomButtonsController::getZoomControls()
	{
		return __thiz.callObjectMethod(
			"getZoomControls",
			"()Landroid/view/View;"
		);
	}
	jboolean ZoomButtonsController::isAutoDismissed()
	{
		return __thiz.callMethod<jboolean>(
			"isAutoDismissed",
			"()Z"
		);
	}
	jboolean ZoomButtonsController::isVisible()
	{
		return __thiz.callMethod<jboolean>(
			"isVisible",
			"()Z"
		);
	}
	jboolean ZoomButtonsController::onTouch(__jni_impl::android::view::View arg0, __jni_impl::android::view::MotionEvent arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onTouch",
			"(Landroid/view/View;Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void ZoomButtonsController::setAutoDismissed(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setAutoDismissed",
			"(Z)V",
			arg0
		);
	}
	void ZoomButtonsController::setFocusable(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setFocusable",
			"(Z)V",
			arg0
		);
	}
	void ZoomButtonsController::setOnZoomListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnZoomListener",
			"(Landroid/widget/ZoomButtonsController$OnZoomListener;)V",
			arg0.__jniObject().object()
		);
	}
	void ZoomButtonsController::setVisible(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setVisible",
			"(Z)V",
			arg0
		);
	}
	void ZoomButtonsController::setZoomInEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setZoomInEnabled",
			"(Z)V",
			arg0
		);
	}
	void ZoomButtonsController::setZoomOutEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setZoomOutEnabled",
			"(Z)V",
			arg0
		);
	}
	void ZoomButtonsController::setZoomSpeed(jlong arg0)
	{
		__thiz.callMethod<void>(
			"setZoomSpeed",
			"(J)V",
			arg0
		);
	}
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class ZoomButtonsController : public __jni_impl::android::widget::ZoomButtonsController
	{
	public:
		ZoomButtonsController(QAndroidJniObject obj) { __thiz = obj; }
		ZoomButtonsController(__jni_impl::android::view::View arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::widget

#endif // ANDROID_WIDGET_ZOOMBUTTONSCONTROLLER

