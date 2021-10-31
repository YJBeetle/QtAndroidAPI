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
	class ImageWriter : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ImageWriter(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ImageWriter(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::media::ImageWriter newInstance(android::view::Surface arg0, jint arg1);
		void close();
		android::media::Image dequeueInputImage();
		jint getFormat();
		jint getMaxImages();
		void queueInputImage(android::media::Image arg0);
		void setOnImageReleasedListener(__JniBaseClass arg0, android::os::Handler arg1);
	};
} // namespace android::media

