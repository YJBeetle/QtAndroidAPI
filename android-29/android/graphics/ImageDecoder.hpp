#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class ContentResolver;
}
namespace android::content::res
{
	class AssetManager;
}
namespace android::content::res
{
	class Resources;
}
namespace android::graphics
{
	class Bitmap;
}
namespace android::graphics
{
	class ColorSpace;
}
namespace android::graphics
{
	class ImageDecoder_Source;
}
namespace android::graphics
{
	class Rect;
}
namespace android::graphics::drawable
{
	class Drawable;
}
namespace android::net
{
	class Uri;
}
namespace java::io
{
	class File;
}
class JString;
namespace java::nio
{
	class ByteBuffer;
}

namespace android::graphics
{
	class ImageDecoder : public JObject
	{
	public:
		// Fields
		static jint ALLOCATOR_DEFAULT();
		static jint ALLOCATOR_HARDWARE();
		static jint ALLOCATOR_SHARED_MEMORY();
		static jint ALLOCATOR_SOFTWARE();
		static jint MEMORY_POLICY_DEFAULT();
		static jint MEMORY_POLICY_LOW_RAM();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ImageDecoder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ImageDecoder(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::graphics::ImageDecoder_Source createSource(java::io::File arg0);
		static android::graphics::ImageDecoder_Source createSource(java::nio::ByteBuffer arg0);
		static android::graphics::ImageDecoder_Source createSource(JObject arg0);
		static android::graphics::ImageDecoder_Source createSource(android::content::ContentResolver arg0, android::net::Uri arg1);
		static android::graphics::ImageDecoder_Source createSource(android::content::res::AssetManager arg0, JString arg1);
		static android::graphics::ImageDecoder_Source createSource(android::content::res::Resources arg0, jint arg1);
		static android::graphics::Bitmap decodeBitmap(android::graphics::ImageDecoder_Source arg0);
		static android::graphics::Bitmap decodeBitmap(android::graphics::ImageDecoder_Source arg0, JObject arg1);
		static android::graphics::drawable::Drawable decodeDrawable(android::graphics::ImageDecoder_Source arg0);
		static android::graphics::drawable::Drawable decodeDrawable(android::graphics::ImageDecoder_Source arg0, JObject arg1);
		static jboolean isMimeTypeSupported(JString arg0);
		void close();
		jint getAllocator();
		android::graphics::Rect getCrop();
		jint getMemorySizePolicy();
		JObject getOnPartialImageListener();
		JObject getPostProcessor();
		jboolean isDecodeAsAlphaMaskEnabled();
		jboolean isMutableRequired();
		jboolean isUnpremultipliedRequired();
		void setAllocator(jint arg0);
		void setCrop(android::graphics::Rect arg0);
		void setDecodeAsAlphaMaskEnabled(jboolean arg0);
		void setMemorySizePolicy(jint arg0);
		void setMutableRequired(jboolean arg0);
		void setOnPartialImageListener(JObject arg0);
		void setPostProcessor(JObject arg0);
		void setTargetColorSpace(android::graphics::ColorSpace arg0);
		void setTargetSampleSize(jint arg0);
		void setTargetSize(jint arg0, jint arg1);
		void setUnpremultipliedRequired(jboolean arg0);
	};
} // namespace android::graphics

