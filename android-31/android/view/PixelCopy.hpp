#pragma once

#include "../graphics/Bitmap.def.hpp"
#include "../graphics/Rect.def.hpp"
#include "../os/Handler.def.hpp"
#include "./Surface.def.hpp"
#include "./SurfaceView.def.hpp"
#include "./Window.def.hpp"
#include "./PixelCopy.def.hpp"

namespace android::view
{
	// Fields
	inline jint PixelCopy::ERROR_DESTINATION_INVALID()
	{
		return getStaticField<jint>(
			"android.view.PixelCopy",
			"ERROR_DESTINATION_INVALID"
		);
	}
	inline jint PixelCopy::ERROR_SOURCE_INVALID()
	{
		return getStaticField<jint>(
			"android.view.PixelCopy",
			"ERROR_SOURCE_INVALID"
		);
	}
	inline jint PixelCopy::ERROR_SOURCE_NO_DATA()
	{
		return getStaticField<jint>(
			"android.view.PixelCopy",
			"ERROR_SOURCE_NO_DATA"
		);
	}
	inline jint PixelCopy::ERROR_TIMEOUT()
	{
		return getStaticField<jint>(
			"android.view.PixelCopy",
			"ERROR_TIMEOUT"
		);
	}
	inline jint PixelCopy::ERROR_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.view.PixelCopy",
			"ERROR_UNKNOWN"
		);
	}
	inline jint PixelCopy::SUCCESS()
	{
		return getStaticField<jint>(
			"android.view.PixelCopy",
			"SUCCESS"
		);
	}
	
	// Constructors
	
	// Methods
	inline void PixelCopy::request(android::view::Surface arg0, android::graphics::Bitmap arg1, JObject arg2, android::os::Handler arg3)
	{
		callStaticMethod<void>(
			"android.view.PixelCopy",
			"request",
			"(Landroid/view/Surface;Landroid/graphics/Bitmap;Landroid/view/PixelCopy$OnPixelCopyFinishedListener;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
	inline void PixelCopy::request(android::view::SurfaceView arg0, android::graphics::Bitmap arg1, JObject arg2, android::os::Handler arg3)
	{
		callStaticMethod<void>(
			"android.view.PixelCopy",
			"request",
			"(Landroid/view/SurfaceView;Landroid/graphics/Bitmap;Landroid/view/PixelCopy$OnPixelCopyFinishedListener;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
	inline void PixelCopy::request(android::view::Window arg0, android::graphics::Bitmap arg1, JObject arg2, android::os::Handler arg3)
	{
		callStaticMethod<void>(
			"android.view.PixelCopy",
			"request",
			"(Landroid/view/Window;Landroid/graphics/Bitmap;Landroid/view/PixelCopy$OnPixelCopyFinishedListener;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
	inline void PixelCopy::request(android::view::Surface arg0, android::graphics::Rect arg1, android::graphics::Bitmap arg2, JObject arg3, android::os::Handler arg4)
	{
		callStaticMethod<void>(
			"android.view.PixelCopy",
			"request",
			"(Landroid/view/Surface;Landroid/graphics/Rect;Landroid/graphics/Bitmap;Landroid/view/PixelCopy$OnPixelCopyFinishedListener;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object(),
			arg4.object()
		);
	}
	inline void PixelCopy::request(android::view::SurfaceView arg0, android::graphics::Rect arg1, android::graphics::Bitmap arg2, JObject arg3, android::os::Handler arg4)
	{
		callStaticMethod<void>(
			"android.view.PixelCopy",
			"request",
			"(Landroid/view/SurfaceView;Landroid/graphics/Rect;Landroid/graphics/Bitmap;Landroid/view/PixelCopy$OnPixelCopyFinishedListener;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object(),
			arg4.object()
		);
	}
	inline void PixelCopy::request(android::view::Window arg0, android::graphics::Rect arg1, android::graphics::Bitmap arg2, JObject arg3, android::os::Handler arg4)
	{
		callStaticMethod<void>(
			"android.view.PixelCopy",
			"request",
			"(Landroid/view/Window;Landroid/graphics/Rect;Landroid/graphics/Bitmap;Landroid/view/PixelCopy$OnPixelCopyFinishedListener;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object(),
			arg4.object()
		);
	}
} // namespace android::view

// Base class headers

