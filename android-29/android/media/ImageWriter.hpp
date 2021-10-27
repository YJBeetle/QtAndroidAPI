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
		
		ImageWriter(QAndroidJniObject obj);
		// Constructors
		ImageWriter() = default;
		
		// Methods
		static QAndroidJniObject newInstance(android::view::Surface arg0, jint arg1);
		static QAndroidJniObject newInstance(android::view::Surface arg0, jint arg1, jint arg2);
		void close();
		QAndroidJniObject dequeueInputImage();
		jint getFormat();
		jint getMaxImages();
		void queueInputImage(android::media::Image arg0);
		void setOnImageReleasedListener(__JniBaseClass arg0, android::os::Handler arg1);
	};
} // namespace android::media

