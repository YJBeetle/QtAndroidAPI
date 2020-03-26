#pragma once

#ifndef ANDROID_MEDIA_IMAGE
#define ANDROID_MEDIA_IMAGE

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::hardware
{
	class HardwareBuffer;
}
namespace __jni_impl::android::graphics
{
	class Rect;
}

namespace __jni_impl::android::media
{
	class Image : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void close();
		jint getFormat();
		QAndroidJniObject getHardwareBuffer();
		void setTimestamp(jlong arg0);
		QAndroidJniObject getCropRect();
		void setCropRect(__jni_impl::android::graphics::Rect arg0);
		jarray getPlanes();
		jlong getTimestamp();
		jint getWidth();
		jint getHeight();
	};
} // namespace __jni_impl::android::media

#include "../hardware/HardwareBuffer.hpp"
#include "../graphics/Rect.hpp"

namespace __jni_impl::android::media
{
	// Fields
	
	// Constructors
	void Image::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.Image",
			"(V)V");
	}
	
	// Methods
	void Image::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	jint Image::getFormat()
	{
		return __thiz.callMethod<jint>(
			"getFormat",
			"()I"
		);
	}
	QAndroidJniObject Image::getHardwareBuffer()
	{
		return __thiz.callObjectMethod(
			"getHardwareBuffer",
			"()Landroid/hardware/HardwareBuffer;"
		);
	}
	void Image::setTimestamp(jlong arg0)
	{
		__thiz.callMethod<void>(
			"setTimestamp",
			"(J)V",
			arg0
		);
	}
	QAndroidJniObject Image::getCropRect()
	{
		return __thiz.callObjectMethod(
			"getCropRect",
			"()Landroid/graphics/Rect;"
		);
	}
	void Image::setCropRect(__jni_impl::android::graphics::Rect arg0)
	{
		__thiz.callMethod<void>(
			"setCropRect",
			"(Landroid/graphics/Rect;)V",
			arg0.__jniObject().object()
		);
	}
	jarray Image::getPlanes()
	{
		return __thiz.callObjectMethod(
			"getPlanes",
			"()[Landroid/media/Image$Plane;"
		).object<jarray>();
	}
	jlong Image::getTimestamp()
	{
		return __thiz.callMethod<jlong>(
			"getTimestamp",
			"()J"
		);
	}
	jint Image::getWidth()
	{
		return __thiz.callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
	jint Image::getHeight()
	{
		return __thiz.callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
} // namespace __jni_impl::android::media

namespace android::media
{
	class Image : public __jni_impl::android::media::Image
	{
	public:
		Image(QAndroidJniObject obj) { __thiz = obj; }
		Image()
		{
			__constructor();
		}
	};
} // namespace android::media

#endif // ANDROID_MEDIA_IMAGE

