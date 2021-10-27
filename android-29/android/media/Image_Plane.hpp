#pragma once

#ifndef ANDROID_MEDIA_IMAGE_PLANE
#define ANDROID_MEDIA_IMAGE_PLANE

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::nio
{
	class ByteBuffer;
}

namespace __jni_impl::android::media
{
	class Image_Plane : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject getBuffer();
		jint getPixelStride();
		jint getRowStride();
	};
} // namespace __jni_impl::android::media

#include "../../java/nio/ByteBuffer.hpp"

namespace __jni_impl::android::media
{
	// Fields
	
	// Constructors
	void Image_Plane::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.Image$Plane",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject Image_Plane::getBuffer()
	{
		return __thiz.callObjectMethod(
			"getBuffer",
			"()Ljava/nio/ByteBuffer;"
		);
	}
	jint Image_Plane::getPixelStride()
	{
		return __thiz.callMethod<jint>(
			"getPixelStride",
			"()I"
		);
	}
	jint Image_Plane::getRowStride()
	{
		return __thiz.callMethod<jint>(
			"getRowStride",
			"()I"
		);
	}
} // namespace __jni_impl::android::media

namespace android::media
{
	class Image_Plane : public __jni_impl::android::media::Image_Plane
	{
	public:
		Image_Plane(QAndroidJniObject obj) { __thiz = obj; }
		Image_Plane()
		{
			__constructor();
		}
	};
} // namespace android::media

#endif // ANDROID_MEDIA_IMAGE_PLANE

