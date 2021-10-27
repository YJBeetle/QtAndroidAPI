#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::media
{
	class Image;
}
namespace android::os
{
	class Handler;
}
namespace android::view
{
	class Surface;
}

namespace android::media
{
	class ImageReader : public __JniBaseClass
	{
	public:
		// Fields
		
		ImageReader(QAndroidJniObject obj);
		// Constructors
		ImageReader() = default;
		
		// Methods
		static QAndroidJniObject newInstance(jint arg0, jint arg1, jint arg2, jint arg3);
		static QAndroidJniObject newInstance(jint arg0, jint arg1, jint arg2, jint arg3, jlong arg4);
		QAndroidJniObject acquireLatestImage();
		QAndroidJniObject acquireNextImage();
		void close();
		void discardFreeBuffers();
		jint getHeight();
		jint getImageFormat();
		jint getMaxImages();
		QAndroidJniObject getSurface();
		jint getWidth();
		void setOnImageAvailableListener(__JniBaseClass arg0, android::os::Handler arg1);
	};
} // namespace android::media

