#pragma once

#include "../../../JArray.hpp"
#include "../../app/WallpaperColors.def.hpp"
#include "../../content/Context.def.hpp"
#include "../../os/Bundle.def.hpp"
#include "./WallpaperService.def.hpp"
#include "../../view/MotionEvent.def.hpp"
#include "../../view/WindowInsets.def.hpp"
#include "../../../java/io/FileDescriptor.def.hpp"
#include "../../../java/io/PrintWriter.def.hpp"
#include "../../../JString.hpp"
#include "./WallpaperService_Engine.def.hpp"

namespace android::service::wallpaper
{
	// Fields
	
	// Constructors
	inline WallpaperService_Engine::WallpaperService_Engine(android::service::wallpaper::WallpaperService arg0)
		: JObject(
			"android.service.wallpaper.WallpaperService$Engine",
			"(Landroid/service/wallpaper/WallpaperService;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jint WallpaperService_Engine::getDesiredMinimumHeight() const
	{
		return callMethod<jint>(
			"getDesiredMinimumHeight",
			"()I"
		);
	}
	inline jint WallpaperService_Engine::getDesiredMinimumWidth() const
	{
		return callMethod<jint>(
			"getDesiredMinimumWidth",
			"()I"
		);
	}
	inline android::content::Context WallpaperService_Engine::getDisplayContext() const
	{
		return callObjectMethod(
			"getDisplayContext",
			"()Landroid/content/Context;"
		);
	}
	inline JObject WallpaperService_Engine::getSurfaceHolder() const
	{
		return callObjectMethod(
			"getSurfaceHolder",
			"()Landroid/view/SurfaceHolder;"
		);
	}
	inline jboolean WallpaperService_Engine::isPreview() const
	{
		return callMethod<jboolean>(
			"isPreview",
			"()Z"
		);
	}
	inline jboolean WallpaperService_Engine::isVisible() const
	{
		return callMethod<jboolean>(
			"isVisible",
			"()Z"
		);
	}
	inline void WallpaperService_Engine::notifyColorsChanged() const
	{
		callMethod<void>(
			"notifyColorsChanged",
			"()V"
		);
	}
	inline void WallpaperService_Engine::onApplyWindowInsets(android::view::WindowInsets arg0) const
	{
		callMethod<void>(
			"onApplyWindowInsets",
			"(Landroid/view/WindowInsets;)V",
			arg0.object()
		);
	}
	inline android::os::Bundle WallpaperService_Engine::onCommand(JString arg0, jint arg1, jint arg2, jint arg3, android::os::Bundle arg4, jboolean arg5) const
	{
		return callObjectMethod(
			"onCommand",
			"(Ljava/lang/String;IIILandroid/os/Bundle;Z)Landroid/os/Bundle;",
			arg0.object<jstring>(),
			arg1,
			arg2,
			arg3,
			arg4.object(),
			arg5
		);
	}
	inline android::app::WallpaperColors WallpaperService_Engine::onComputeColors() const
	{
		return callObjectMethod(
			"onComputeColors",
			"()Landroid/app/WallpaperColors;"
		);
	}
	inline void WallpaperService_Engine::onCreate(JObject arg0) const
	{
		callMethod<void>(
			"onCreate",
			"(Landroid/view/SurfaceHolder;)V",
			arg0.object()
		);
	}
	inline void WallpaperService_Engine::onDesiredSizeChanged(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"onDesiredSizeChanged",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void WallpaperService_Engine::onDestroy() const
	{
		callMethod<void>(
			"onDestroy",
			"()V"
		);
	}
	inline void WallpaperService_Engine::onOffsetsChanged(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jint arg4, jint arg5) const
	{
		callMethod<void>(
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
	inline void WallpaperService_Engine::onSurfaceChanged(JObject arg0, jint arg1, jint arg2, jint arg3) const
	{
		callMethod<void>(
			"onSurfaceChanged",
			"(Landroid/view/SurfaceHolder;III)V",
			arg0.object(),
			arg1,
			arg2,
			arg3
		);
	}
	inline void WallpaperService_Engine::onSurfaceCreated(JObject arg0) const
	{
		callMethod<void>(
			"onSurfaceCreated",
			"(Landroid/view/SurfaceHolder;)V",
			arg0.object()
		);
	}
	inline void WallpaperService_Engine::onSurfaceDestroyed(JObject arg0) const
	{
		callMethod<void>(
			"onSurfaceDestroyed",
			"(Landroid/view/SurfaceHolder;)V",
			arg0.object()
		);
	}
	inline void WallpaperService_Engine::onSurfaceRedrawNeeded(JObject arg0) const
	{
		callMethod<void>(
			"onSurfaceRedrawNeeded",
			"(Landroid/view/SurfaceHolder;)V",
			arg0.object()
		);
	}
	inline void WallpaperService_Engine::onTouchEvent(android::view::MotionEvent arg0) const
	{
		callMethod<void>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)V",
			arg0.object()
		);
	}
	inline void WallpaperService_Engine::onVisibilityChanged(jboolean arg0) const
	{
		callMethod<void>(
			"onVisibilityChanged",
			"(Z)V",
			arg0
		);
	}
	inline void WallpaperService_Engine::setOffsetNotificationsEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setOffsetNotificationsEnabled",
			"(Z)V",
			arg0
		);
	}
	inline void WallpaperService_Engine::setTouchEventsEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setTouchEventsEnabled",
			"(Z)V",
			arg0
		);
	}
} // namespace android::service::wallpaper

// Base class headers

