#include "../graphics/Bitmap.hpp"
#include "../graphics/Rect.hpp"
#include "../os/Handler.hpp"
#include "./Surface.hpp"
#include "./SurfaceView.hpp"
#include "./Window.hpp"
#include "./PixelCopy.hpp"

namespace android::view
{
	// Fields
	jint PixelCopy::ERROR_DESTINATION_INVALID()
	{
		return getStaticField<jint>(
			"android.view.PixelCopy",
			"ERROR_DESTINATION_INVALID"
		);
	}
	jint PixelCopy::ERROR_SOURCE_INVALID()
	{
		return getStaticField<jint>(
			"android.view.PixelCopy",
			"ERROR_SOURCE_INVALID"
		);
	}
	jint PixelCopy::ERROR_SOURCE_NO_DATA()
	{
		return getStaticField<jint>(
			"android.view.PixelCopy",
			"ERROR_SOURCE_NO_DATA"
		);
	}
	jint PixelCopy::ERROR_TIMEOUT()
	{
		return getStaticField<jint>(
			"android.view.PixelCopy",
			"ERROR_TIMEOUT"
		);
	}
	jint PixelCopy::ERROR_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.view.PixelCopy",
			"ERROR_UNKNOWN"
		);
	}
	jint PixelCopy::SUCCESS()
	{
		return getStaticField<jint>(
			"android.view.PixelCopy",
			"SUCCESS"
		);
	}
	
	// QAndroidJniObject forward
	PixelCopy::PixelCopy(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void PixelCopy::request(android::view::Surface arg0, android::graphics::Bitmap arg1, JObject arg2, android::os::Handler arg3)
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
	void PixelCopy::request(android::view::SurfaceView arg0, android::graphics::Bitmap arg1, JObject arg2, android::os::Handler arg3)
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
	void PixelCopy::request(android::view::Window arg0, android::graphics::Bitmap arg1, JObject arg2, android::os::Handler arg3)
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
	void PixelCopy::request(android::view::Surface arg0, android::graphics::Rect arg1, android::graphics::Bitmap arg2, JObject arg3, android::os::Handler arg4)
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
	void PixelCopy::request(android::view::SurfaceView arg0, android::graphics::Rect arg1, android::graphics::Bitmap arg2, JObject arg3, android::os::Handler arg4)
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
	void PixelCopy::request(android::view::Window arg0, android::graphics::Rect arg1, android::graphics::Bitmap arg2, JObject arg3, android::os::Handler arg4)
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

