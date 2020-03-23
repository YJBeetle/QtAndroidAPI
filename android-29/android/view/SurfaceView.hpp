#pragma once

#ifndef ANDROID_VIEW_SURFACEVIEW
#define ANDROID_VIEW_SURFACEVIEW

#include "View.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::graphics
{
	class Canvas;
}
namespace __jni_impl::android::graphics
{
	class Region;
}
namespace __jni_impl::android::view
{
	class SurfaceControl;
}

namespace __jni_impl::android::view
{
	class SurfaceView : public __jni_impl::android::view::View
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(__jni_impl::android::content::Context arg0);
		
		// Methods
		jboolean gatherTransparentRegion(__jni_impl::android::graphics::Region arg0);
		void setVisibility(jint arg0);
		void draw(__jni_impl::android::graphics::Canvas arg0);
		void setZOrderMediaOverlay(jboolean arg0);
		void setZOrderOnTop(jboolean arg0);
		QAndroidJniObject getHolder();
		QAndroidJniObject getSurfaceControl();
		void setSecure(jboolean arg0);
	};
} // namespace __jni_impl::android::view

#include "../content/Context.hpp"
#include "../graphics/Canvas.hpp"
#include "../graphics/Region.hpp"
#include "SurfaceControl.hpp"

namespace __jni_impl::android::view
{
	// Fields
	
	// Constructors
	void SurfaceView::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.view.SurfaceView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3);
	}
	void SurfaceView::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.view.SurfaceView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2);
	}
	void SurfaceView::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.view.SurfaceView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void SurfaceView::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.SurfaceView",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	jboolean SurfaceView::gatherTransparentRegion(__jni_impl::android::graphics::Region arg0)
	{
		return __thiz.callMethod<jboolean>(
			"gatherTransparentRegion",
			"(Landroid/graphics/Region;)Z",
			arg0.__jniObject().object());
	}
	void SurfaceView::setVisibility(jint arg0)
	{
		__thiz.callMethod<void>(
			"setVisibility",
			"(I)V",
			arg0);
	}
	void SurfaceView::draw(__jni_impl::android::graphics::Canvas arg0)
	{
		__thiz.callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.__jniObject().object());
	}
	void SurfaceView::setZOrderMediaOverlay(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setZOrderMediaOverlay",
			"(Z)V",
			arg0);
	}
	void SurfaceView::setZOrderOnTop(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setZOrderOnTop",
			"(Z)V",
			arg0);
	}
	QAndroidJniObject SurfaceView::getHolder()
	{
		return __thiz.callObjectMethod(
			"getHolder",
			"()Landroid/view/SurfaceHolder;");
	}
	QAndroidJniObject SurfaceView::getSurfaceControl()
	{
		return __thiz.callObjectMethod(
			"getSurfaceControl",
			"()Landroid/view/SurfaceControl;");
	}
	void SurfaceView::setSecure(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setSecure",
			"(Z)V",
			arg0);
	}
} // namespace __jni_impl::android::view

namespace android::view
{
	class SurfaceView : public __jni_impl::android::view::SurfaceView
	{
	public:
		SurfaceView(QAndroidJniObject obj) { __thiz = obj; }
		SurfaceView(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
		SurfaceView(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		SurfaceView(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		SurfaceView(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::view

#endif // ANDROID_VIEW_SURFACEVIEW

