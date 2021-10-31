#pragma once

#include "../../__JniBaseClass.hpp"

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
namespace java::io
{
	class FileDescriptor;
}
namespace java::io
{
	class InputStream;
}

namespace android::graphics
{
	class BitmapRegionDecoder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit BitmapRegionDecoder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		BitmapRegionDecoder(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::graphics::BitmapRegionDecoder newInstance(java::io::FileDescriptor arg0, jboolean arg1);
		static android::graphics::BitmapRegionDecoder newInstance(java::io::InputStream arg0, jboolean arg1);
		static android::graphics::BitmapRegionDecoder newInstance(jstring arg0, jboolean arg1);
		static android::graphics::BitmapRegionDecoder newInstance(jbyteArray arg0, jint arg1, jint arg2, jboolean arg3);
		android::graphics::Bitmap decodeRegion(android::graphics::Rect arg0, android::graphics::BitmapFactory_Options arg1);
		jint getHeight();
		jint getWidth();
		jboolean isRecycled();
		void recycle();
	};
} // namespace android::graphics

