#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::app
{
	class WallpaperColors;
}
namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::service::wallpaper
{
	class WallpaperService;
}
namespace __jni_impl::android::view
{
	class MotionEvent;
}
namespace __jni_impl::android::view
{
	class WindowInsets;
}
namespace __jni_impl::java::io
{
	class FileDescriptor;
}
namespace __jni_impl::java::io
{
	class PrintWriter;
}

namespace __jni_impl::android::service::wallpaper
{
	class WallpaperService_Engine : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::service::wallpaper::WallpaperService arg0);
		
		// Methods
		jint getDesiredMinimumHeight();
		jint getDesiredMinimumWidth();
		QAndroidJniObject getDisplayContext();
		QAndroidJniObject getSurfaceHolder();
		jboolean isPreview();
		jboolean isVisible();
		void notifyColorsChanged();
		void onApplyWindowInsets(__jni_impl::android::view::WindowInsets arg0);
		QAndroidJniObject onCommand(jstring arg0, jint arg1, jint arg2, jint arg3, __jni_impl::android::os::Bundle arg4, jboolean arg5);
		QAndroidJniObject onCommand(const QString &arg0, jint arg1, jint arg2, jint arg3, __jni_impl::android::os::Bundle arg4, jboolean arg5);
		QAndroidJniObject onComputeColors();
		void onCreate(__jni_impl::__JniBaseClass arg0);
		void onDesiredSizeChanged(jint arg0, jint arg1);
		void onDestroy();
		void onOffsetsChanged(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jint arg4, jint arg5);
		void onSurfaceChanged(__jni_impl::__JniBaseClass arg0, jint arg1, jint arg2, jint arg3);
		void onSurfaceCreated(__jni_impl::__JniBaseClass arg0);
		void onSurfaceDestroyed(__jni_impl::__JniBaseClass arg0);
		void onSurfaceRedrawNeeded(__jni_impl::__JniBaseClass arg0);
		void onTouchEvent(__jni_impl::android::view::MotionEvent arg0);
		void onVisibilityChanged(jboolean arg0);
		void setOffsetNotificationsEnabled(jboolean arg0);
		void setTouchEventsEnabled(jboolean arg0);
	};
} // namespace __jni_impl::android::service::wallpaper

#include "../../app/WallpaperColors.hpp"
#include "../../content/Context.hpp"
#include "../../os/Bundle.hpp"
#include "WallpaperService.hpp"
#include "../../view/MotionEvent.hpp"
#include "../../view/WindowInsets.hpp"
#include "../../../java/io/FileDescriptor.hpp"
#include "../../../java/io/PrintWriter.hpp"

namespace __jni_impl::android::service::wallpaper
{
	// Fields
	
	// Constructors
	void WallpaperService_Engine::__constructor(__jni_impl::android::service::wallpaper::WallpaperService arg0)
	{
		__thiz = QAndroidJniObject(
			"android.service.wallpaper.WallpaperService$Engine",
			"(Landroid/service/wallpaper/WallpaperService;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jint WallpaperService_Engine::getDesiredMinimumHeight()
	{
		return __thiz.callMethod<jint>(
			"getDesiredMinimumHeight",
			"()I"
		);
	}
	jint WallpaperService_Engine::getDesiredMinimumWidth()
	{
		return __thiz.callMethod<jint>(
			"getDesiredMinimumWidth",
			"()I"
		);
	}
	QAndroidJniObject WallpaperService_Engine::getDisplayContext()
	{
		return __thiz.callObjectMethod(
			"getDisplayContext",
			"()Landroid/content/Context;"
		);
	}
	QAndroidJniObject WallpaperService_Engine::getSurfaceHolder()
	{
		return __thiz.callObjectMethod(
			"getSurfaceHolder",
			"()Landroid/view/SurfaceHolder;"
		);
	}
	jboolean WallpaperService_Engine::isPreview()
	{
		return __thiz.callMethod<jboolean>(
			"isPreview",
			"()Z"
		);
	}
	jboolean WallpaperService_Engine::isVisible()
	{
		return __thiz.callMethod<jboolean>(
			"isVisible",
			"()Z"
		);
	}
	void WallpaperService_Engine::notifyColorsChanged()
	{
		__thiz.callMethod<void>(
			"notifyColorsChanged",
			"()V"
		);
	}
	void WallpaperService_Engine::onApplyWindowInsets(__jni_impl::android::view::WindowInsets arg0)
	{
		__thiz.callMethod<void>(
			"onApplyWindowInsets",
			"(Landroid/view/WindowInsets;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject WallpaperService_Engine::onCommand(jstring arg0, jint arg1, jint arg2, jint arg3, __jni_impl::android::os::Bundle arg4, jboolean arg5)
	{
		return __thiz.callObjectMethod(
			"onCommand",
			"(Ljava/lang/String;IIILandroid/os/Bundle;Z)Landroid/os/Bundle;",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.__jniObject().object(),
			arg5
		);
	}
	QAndroidJniObject WallpaperService_Engine::onCommand(const QString &arg0, jint arg1, jint arg2, jint arg3, __jni_impl::android::os::Bundle arg4, jboolean arg5)
	{
		return __thiz.callObjectMethod(
			"onCommand",
			"(Ljava/lang/String;IIILandroid/os/Bundle;Z)Landroid/os/Bundle;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2,
			arg3,
			arg4.__jniObject().object(),
			arg5
		);
	}
	QAndroidJniObject WallpaperService_Engine::onComputeColors()
	{
		return __thiz.callObjectMethod(
			"onComputeColors",
			"()Landroid/app/WallpaperColors;"
		);
	}
	void WallpaperService_Engine::onCreate(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"onCreate",
			"(Landroid/view/SurfaceHolder;)V",
			arg0.__jniObject().object()
		);
	}
	void WallpaperService_Engine::onDesiredSizeChanged(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onDesiredSizeChanged",
			"(II)V",
			arg0,
			arg1
		);
	}
	void WallpaperService_Engine::onDestroy()
	{
		__thiz.callMethod<void>(
			"onDestroy",
			"()V"
		);
	}
	void WallpaperService_Engine::onOffsetsChanged(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jint arg4, jint arg5)
	{
		__thiz.callMethod<void>(
			"onOffsetsChanged",
			"(FFFFII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	void WallpaperService_Engine::onSurfaceChanged(__jni_impl::__JniBaseClass arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"onSurfaceChanged",
			"(Landroid/view/SurfaceHolder;III)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3
		);
	}
	void WallpaperService_Engine::onSurfaceCreated(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"onSurfaceCreated",
			"(Landroid/view/SurfaceHolder;)V",
			arg0.__jniObject().object()
		);
	}
	void WallpaperService_Engine::onSurfaceDestroyed(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"onSurfaceDestroyed",
			"(Landroid/view/SurfaceHolder;)V",
			arg0.__jniObject().object()
		);
	}
	void WallpaperService_Engine::onSurfaceRedrawNeeded(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"onSurfaceRedrawNeeded",
			"(Landroid/view/SurfaceHolder;)V",
			arg0.__jniObject().object()
		);
	}
	void WallpaperService_Engine::onTouchEvent(__jni_impl::android::view::MotionEvent arg0)
	{
		__thiz.callMethod<void>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)V",
			arg0.__jniObject().object()
		);
	}
	void WallpaperService_Engine::onVisibilityChanged(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"onVisibilityChanged",
			"(Z)V",
			arg0
		);
	}
	void WallpaperService_Engine::setOffsetNotificationsEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setOffsetNotificationsEnabled",
			"(Z)V",
			arg0
		);
	}
	void WallpaperService_Engine::setTouchEventsEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setTouchEventsEnabled",
			"(Z)V",
			arg0
		);
	}
} // namespace __jni_impl::android::service::wallpaper

namespace android::service::wallpaper
{
	class WallpaperService_Engine : public __jni_impl::android::service::wallpaper::WallpaperService_Engine
	{
	public:
		WallpaperService_Engine(QAndroidJniObject obj) { __thiz = obj; }
		WallpaperService_Engine(__jni_impl::android::service::wallpaper::WallpaperService arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::service::wallpaper

