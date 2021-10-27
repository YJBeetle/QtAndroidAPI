#pragma once

#ifndef ANDROID_VIEW_PIXELCOPY
#define ANDROID_VIEW_PIXELCOPY

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::graphics
{
	class Bitmap;
}
namespace __jni_impl::android::graphics
{
	class Rect;
}
namespace __jni_impl::android::os
{
	class Handler;
}
namespace __jni_impl::android::view
{
	class Surface;
}
namespace __jni_impl::android::view
{
	class SurfaceView;
}
namespace __jni_impl::android::view
{
	class Window;
}

namespace __jni_impl::android::view
{
	class PixelCopy : public __JniBaseClass
	{
	public:
		// Fields
		static jint ERROR_DESTINATION_INVALID();
		static jint ERROR_SOURCE_INVALID();
		static jint ERROR_SOURCE_NO_DATA();
		static jint ERROR_TIMEOUT();
		static jint ERROR_UNKNOWN();
		static jint SUCCESS();
		
		// Constructors
		void __constructor();
		
		// Methods
		static void request(__jni_impl::android::view::Surface arg0, __jni_impl::android::graphics::Bitmap arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::android::os::Handler arg3);
		static void request(__jni_impl::android::view::SurfaceView arg0, __jni_impl::android::graphics::Bitmap arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::android::os::Handler arg3);
		static void request(__jni_impl::android::view::Window arg0, __jni_impl::android::graphics::Bitmap arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::android::os::Handler arg3);
		static void request(__jni_impl::android::view::Surface arg0, __jni_impl::android::graphics::Rect arg1, __jni_impl::android::graphics::Bitmap arg2, __jni_impl::__JniBaseClass arg3, __jni_impl::android::os::Handler arg4);
		static void request(__jni_impl::android::view::SurfaceView arg0, __jni_impl::android::graphics::Rect arg1, __jni_impl::android::graphics::Bitmap arg2, __jni_impl::__JniBaseClass arg3, __jni_impl::android::os::Handler arg4);
		static void request(__jni_impl::android::view::Window arg0, __jni_impl::android::graphics::Rect arg1, __jni_impl::android::graphics::Bitmap arg2, __jni_impl::__JniBaseClass arg3, __jni_impl::android::os::Handler arg4);
	};
} // namespace __jni_impl::android::view

#include "../graphics/Bitmap.hpp"
#include "../graphics/Rect.hpp"
#include "../os/Handler.hpp"
#include "Surface.hpp"
#include "SurfaceView.hpp"
#include "Window.hpp"

namespace __jni_impl::android::view
{
	// Fields
	jint PixelCopy::ERROR_DESTINATION_INVALID()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.PixelCopy",
			"ERROR_DESTINATION_INVALID"
		);
	}
	jint PixelCopy::ERROR_SOURCE_INVALID()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.PixelCopy",
			"ERROR_SOURCE_INVALID"
		);
	}
	jint PixelCopy::ERROR_SOURCE_NO_DATA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.PixelCopy",
			"ERROR_SOURCE_NO_DATA"
		);
	}
	jint PixelCopy::ERROR_TIMEOUT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.PixelCopy",
			"ERROR_TIMEOUT"
		);
	}
	jint PixelCopy::ERROR_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.PixelCopy",
			"ERROR_UNKNOWN"
		);
	}
	jint PixelCopy::SUCCESS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.PixelCopy",
			"SUCCESS"
		);
	}
	
	// Constructors
	void PixelCopy::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.PixelCopy",
			"(V)V");
	}
	
	// Methods
	void PixelCopy::request(__jni_impl::android::view::Surface arg0, __jni_impl::android::graphics::Bitmap arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::android::os::Handler arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.view.PixelCopy",
			"request",
			"(Landroid/view/Surface;Landroid/graphics/Bitmap;Landroid/view/PixelCopy$OnPixelCopyFinishedListener;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	void PixelCopy::request(__jni_impl::android::view::SurfaceView arg0, __jni_impl::android::graphics::Bitmap arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::android::os::Handler arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.view.PixelCopy",
			"request",
			"(Landroid/view/SurfaceView;Landroid/graphics/Bitmap;Landroid/view/PixelCopy$OnPixelCopyFinishedListener;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	void PixelCopy::request(__jni_impl::android::view::Window arg0, __jni_impl::android::graphics::Bitmap arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::android::os::Handler arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.view.PixelCopy",
			"request",
			"(Landroid/view/Window;Landroid/graphics/Bitmap;Landroid/view/PixelCopy$OnPixelCopyFinishedListener;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	void PixelCopy::request(__jni_impl::android::view::Surface arg0, __jni_impl::android::graphics::Rect arg1, __jni_impl::android::graphics::Bitmap arg2, __jni_impl::__JniBaseClass arg3, __jni_impl::android::os::Handler arg4)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.view.PixelCopy",
			"request",
			"(Landroid/view/Surface;Landroid/graphics/Rect;Landroid/graphics/Bitmap;Landroid/view/PixelCopy$OnPixelCopyFinishedListener;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4.__jniObject().object()
		);
	}
	void PixelCopy::request(__jni_impl::android::view::SurfaceView arg0, __jni_impl::android::graphics::Rect arg1, __jni_impl::android::graphics::Bitmap arg2, __jni_impl::__JniBaseClass arg3, __jni_impl::android::os::Handler arg4)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.view.PixelCopy",
			"request",
			"(Landroid/view/SurfaceView;Landroid/graphics/Rect;Landroid/graphics/Bitmap;Landroid/view/PixelCopy$OnPixelCopyFinishedListener;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4.__jniObject().object()
		);
	}
	void PixelCopy::request(__jni_impl::android::view::Window arg0, __jni_impl::android::graphics::Rect arg1, __jni_impl::android::graphics::Bitmap arg2, __jni_impl::__JniBaseClass arg3, __jni_impl::android::os::Handler arg4)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.view.PixelCopy",
			"request",
			"(Landroid/view/Window;Landroid/graphics/Rect;Landroid/graphics/Bitmap;Landroid/view/PixelCopy$OnPixelCopyFinishedListener;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::view

namespace android::view
{
	class PixelCopy : public __jni_impl::android::view::PixelCopy
	{
	public:
		PixelCopy(QAndroidJniObject obj) { __thiz = obj; }
		PixelCopy()
		{
			__constructor();
		}
	};
} // namespace android::view

#endif // ANDROID_VIEW_PIXELCOPY

