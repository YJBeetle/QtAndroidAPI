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
		
		// QJniObject forward
		template<typename ...Ts> explicit ImageReader(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ImageReader(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::media::ImageReader newInstance(jint arg0, jint arg1, jint arg2, jint arg3);
		android::media::Image acquireLatestImage();
		android::media::Image acquireNextImage();
		void close();
		void discardFreeBuffers();
		jint getHeight();
		jint getImageFormat();
		jint getMaxImages();
		android::view::Surface getSurface();
		jint getWidth();
		void setOnImageAvailableListener(__JniBaseClass arg0, android::os::Handler arg1);
	};
} // namespace android::media

