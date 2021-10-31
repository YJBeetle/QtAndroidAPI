#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::graphics
{
	class Bitmap;
}
namespace android::hardware::camera2
{
	class CameraCharacteristics;
}
namespace android::hardware::camera2
{
	class CaptureResult;
}
namespace android::location
{
	class Location;
}
namespace android::media
{
	class Image;
}
namespace android::util
{
	class Size;
}
namespace java::io
{
	class InputStream;
}
namespace java::io
{
	class OutputStream;
}
namespace java::nio
{
	class ByteBuffer;
}

namespace android::hardware::camera2
{
	class DngCreator : public __JniBaseClass
	{
	public:
		// Fields
		static jint MAX_THUMBNAIL_DIMENSION();
		
		DngCreator(QAndroidJniObject obj);
		// Constructors
		DngCreator(android::hardware::camera2::CameraCharacteristics arg0, android::hardware::camera2::CaptureResult arg1);
		DngCreator() = default;
		
		// Methods
		void close();
		QAndroidJniObject setDescription(jstring arg0);
		QAndroidJniObject setLocation(android::location::Location arg0);
		QAndroidJniObject setOrientation(jint arg0);
		QAndroidJniObject setThumbnail(android::graphics::Bitmap arg0);
		QAndroidJniObject setThumbnail(android::media::Image arg0);
		void writeByteBuffer(java::io::OutputStream arg0, android::util::Size arg1, java::nio::ByteBuffer arg2, jlong arg3);
		void writeImage(java::io::OutputStream arg0, android::media::Image arg1);
		void writeInputStream(java::io::OutputStream arg0, android::util::Size arg1, java::io::InputStream arg2, jlong arg3);
	};
} // namespace android::hardware::camera2

