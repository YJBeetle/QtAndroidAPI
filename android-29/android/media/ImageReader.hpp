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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ImageReader(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ImageReader(QAndroidJniObject obj);
		
		// Constructors
		
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

