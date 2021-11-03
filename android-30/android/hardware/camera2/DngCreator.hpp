#pragma once

#include "../../../JObject.hpp"

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
class JString;
namespace java::nio
{
	class ByteBuffer;
}

namespace android::hardware::camera2
{
	class DngCreator : public JObject
	{
	public:
		// Fields
		static jint MAX_THUMBNAIL_DIMENSION();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DngCreator(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DngCreator(QAndroidJniObject obj);
		
		// Constructors
		DngCreator(android::hardware::camera2::CameraCharacteristics arg0, android::hardware::camera2::CaptureResult arg1);
		
		// Methods
		void close() const;
		android::hardware::camera2::DngCreator setDescription(JString arg0) const;
		android::hardware::camera2::DngCreator setLocation(android::location::Location arg0) const;
		android::hardware::camera2::DngCreator setOrientation(jint arg0) const;
		android::hardware::camera2::DngCreator setThumbnail(android::graphics::Bitmap arg0) const;
		android::hardware::camera2::DngCreator setThumbnail(android::media::Image arg0) const;
		void writeByteBuffer(java::io::OutputStream arg0, android::util::Size arg1, java::nio::ByteBuffer arg2, jlong arg3) const;
		void writeImage(java::io::OutputStream arg0, android::media::Image arg1) const;
		void writeInputStream(java::io::OutputStream arg0, android::util::Size arg1, java::io::InputStream arg2, jlong arg3) const;
	};
} // namespace android::hardware::camera2

