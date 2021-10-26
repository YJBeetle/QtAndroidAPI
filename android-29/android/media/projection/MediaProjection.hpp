#pragma once

#ifndef ANDROID_MEDIA_PROJECTION_MEDIAPROJECTION
#define ANDROID_MEDIA_PROJECTION_MEDIAPROJECTION

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::media::projection
{
	class MediaProjection_Callback;
}
namespace __jni_impl::android::os
{
	class Handler;
}
namespace __jni_impl::android::hardware::display
{
	class VirtualDisplay;
}
namespace __jni_impl::android::view
{
	class Surface;
}
namespace __jni_impl::android::hardware::display
{
	class VirtualDisplay_Callback;
}

namespace __jni_impl::android::media::projection
{
	class MediaProjection : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void stop();
		void registerCallback(__jni_impl::android::media::projection::MediaProjection_Callback arg0, __jni_impl::android::os::Handler arg1);
		void unregisterCallback(__jni_impl::android::media::projection::MediaProjection_Callback arg0);
		QAndroidJniObject createVirtualDisplay(jstring arg0, jint arg1, jint arg2, jint arg3, jint arg4, __jni_impl::android::view::Surface arg5, __jni_impl::android::hardware::display::VirtualDisplay_Callback arg6, __jni_impl::android::os::Handler arg7);
		QAndroidJniObject createVirtualDisplay(const QString &arg0, jint arg1, jint arg2, jint arg3, jint arg4, __jni_impl::android::view::Surface arg5, __jni_impl::android::hardware::display::VirtualDisplay_Callback arg6, __jni_impl::android::os::Handler arg7);
	};
} // namespace __jni_impl::android::media::projection

#include "MediaProjection_Callback.hpp"
#include "../../os/Handler.hpp"
#include "../../hardware/display/VirtualDisplay.hpp"
#include "../../view/Surface.hpp"
#include "../../hardware/display/VirtualDisplay_Callback.hpp"

namespace __jni_impl::android::media::projection
{
	// Fields
	
	// Constructors
	void MediaProjection::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.projection.MediaProjection",
			"(V)V");
	}
	
	// Methods
	void MediaProjection::stop()
	{
		__thiz.callMethod<void>(
			"stop",
			"()V"
		);
	}
	void MediaProjection::registerCallback(__jni_impl::android::media::projection::MediaProjection_Callback arg0, __jni_impl::android::os::Handler arg1)
	{
		__thiz.callMethod<void>(
			"registerCallback",
			"(Landroid/media/projection/MediaProjection$Callback;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void MediaProjection::unregisterCallback(__jni_impl::android::media::projection::MediaProjection_Callback arg0)
	{
		__thiz.callMethod<void>(
			"unregisterCallback",
			"(Landroid/media/projection/MediaProjection$Callback;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject MediaProjection::createVirtualDisplay(jstring arg0, jint arg1, jint arg2, jint arg3, jint arg4, __jni_impl::android::view::Surface arg5, __jni_impl::android::hardware::display::VirtualDisplay_Callback arg6, __jni_impl::android::os::Handler arg7)
	{
		return __thiz.callObjectMethod(
			"createVirtualDisplay",
			"(Ljava/lang/String;IIIILandroid/view/Surface;Landroid/hardware/display/VirtualDisplay$Callback;Landroid/os/Handler;)Landroid/hardware/display/VirtualDisplay;",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5.__jniObject().object(),
			arg6.__jniObject().object(),
			arg7.__jniObject().object()
		);
	}
	QAndroidJniObject MediaProjection::createVirtualDisplay(const QString &arg0, jint arg1, jint arg2, jint arg3, jint arg4, __jni_impl::android::view::Surface arg5, __jni_impl::android::hardware::display::VirtualDisplay_Callback arg6, __jni_impl::android::os::Handler arg7)
	{
		return __thiz.callObjectMethod(
			"createVirtualDisplay",
			"(Ljava/lang/String;IIIILandroid/view/Surface;Landroid/hardware/display/VirtualDisplay$Callback;Landroid/os/Handler;)Landroid/hardware/display/VirtualDisplay;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2,
			arg3,
			arg4,
			arg5.__jniObject().object(),
			arg6.__jniObject().object(),
			arg7.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::media::projection

namespace android::media::projection
{
	class MediaProjection : public __jni_impl::android::media::projection::MediaProjection
	{
	public:
		MediaProjection(QAndroidJniObject obj) { __thiz = obj; }
		MediaProjection()
		{
			__constructor();
		}
	};
} // namespace android::media::projection

#endif // ANDROID_MEDIA_PROJECTION_MEDIAPROJECTION

