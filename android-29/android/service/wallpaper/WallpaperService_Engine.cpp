#include "../../app/WallpaperColors.hpp"
#include "../../content/Context.hpp"
#include "../../os/Bundle.hpp"
#include "./WallpaperService.hpp"
#include "../../view/MotionEvent.hpp"
#include "../../view/WindowInsets.hpp"
#include "../../../java/io/FileDescriptor.hpp"
#include "../../../java/io/PrintWriter.hpp"
#include "./WallpaperService_Engine.hpp"

namespace android::service::wallpaper
{
	// Fields
	
	WallpaperService_Engine::WallpaperService_Engine(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	WallpaperService_Engine::WallpaperService_Engine(android::service::wallpaper::WallpaperService arg0)
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
	void WallpaperService_Engine::onApplyWindowInsets(android::view::WindowInsets arg0)
	{
		__thiz.callMethod<void>(
			"onApplyWindowInsets",
			"(Landroid/view/WindowInsets;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject WallpaperService_Engine::onCommand(jstring arg0, jint arg1, jint arg2, jint arg3, android::os::Bundle arg4, jboolean arg5)
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
	QAndroidJniObject WallpaperService_Engine::onComputeColors()
	{
		return __thiz.callObjectMethod(
			"onComputeColors",
			"()Landroid/app/WallpaperColors;"
		);
	}
	void WallpaperService_Engine::onCreate(__JniBaseClass arg0)
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
	void WallpaperService_Engine::onSurfaceChanged(__JniBaseClass arg0, jint arg1, jint arg2, jint arg3)
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
	void WallpaperService_Engine::onSurfaceCreated(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"onSurfaceCreated",
			"(Landroid/view/SurfaceHolder;)V",
			arg0.__jniObject().object()
		);
	}
	void WallpaperService_Engine::onSurfaceDestroyed(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"onSurfaceDestroyed",
			"(Landroid/view/SurfaceHolder;)V",
			arg0.__jniObject().object()
		);
	}
	void WallpaperService_Engine::onSurfaceRedrawNeeded(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"onSurfaceRedrawNeeded",
			"(Landroid/view/SurfaceHolder;)V",
			arg0.__jniObject().object()
		);
	}
	void WallpaperService_Engine::onTouchEvent(android::view::MotionEvent arg0)
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
} // namespace android::service::wallpaper

