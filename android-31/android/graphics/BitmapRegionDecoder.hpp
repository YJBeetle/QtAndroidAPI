#pragma once

#include "../../JObject.hpp"

class JByteArray;
namespace android::graphics
{
	class Bitmap;
}
namespace android::graphics
{
	class BitmapFactory_Options;
}
namespace android::graphics
{
	class Rect;
}
namespace android::os
{
	class ParcelFileDescriptor;
}
namespace java::io
{
	class FileDescriptor;
}
namespace java::io
{
	class InputStream;
}
class JString;

namespace android::graphics
{
	class BitmapRegionDecoder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit BitmapRegionDecoder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BitmapRegionDecoder(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::graphics::BitmapRegionDecoder newInstance(android::os::ParcelFileDescriptor arg0);
		static android::graphics::BitmapRegionDecoder newInstance(java::io::InputStream arg0);
		static android::graphics::BitmapRegionDecoder newInstance(JString arg0);
		static android::graphics::BitmapRegionDecoder newInstance(java::io::FileDescriptor arg0, jboolean arg1);
		static android::graphics::BitmapRegionDecoder newInstance(java::io::InputStream arg0, jboolean arg1);
		static android::graphics::BitmapRegionDecoder newInstance(JString arg0, jboolean arg1);
		static android::graphics::BitmapRegionDecoder newInstance(JByteArray arg0, jint arg1, jint arg2);
		static android::graphics::BitmapRegionDecoder newInstance(JByteArray arg0, jint arg1, jint arg2, jboolean arg3);
		android::graphics::Bitmap decodeRegion(android::graphics::Rect arg0, android::graphics::BitmapFactory_Options arg1) const;
		jint getHeight() const;
		jint getWidth() const;
		jboolean isRecycled() const;
		void recycle() const;
	};
} // namespace android::graphics

