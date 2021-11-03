#pragma once

#include "./BaseObj.hpp"

class JByteArray;
class JFloatArray;
class JIntArray;
class JArray;
class JArray;
class JShortArray;
namespace android::content::res
{
	class Resources;
}
namespace android::graphics
{
	class Bitmap;
}
namespace android::renderscript
{
	class Allocation_MipmapControl;
}
namespace android::renderscript
{
	class Element;
}
namespace android::renderscript
{
	class FieldPacker;
}
namespace android::renderscript
{
	class RenderScript;
}
namespace android::renderscript
{
	class Type;
}
namespace android::view
{
	class Surface;
}
class JObject;
class JString;
namespace java::nio
{
	class ByteBuffer;
}

namespace android::renderscript
{
	class Allocation : public android::renderscript::BaseObj
	{
	public:
		// Fields
		static jint USAGE_GRAPHICS_CONSTANTS();
		static jint USAGE_GRAPHICS_RENDER_TARGET();
		static jint USAGE_GRAPHICS_TEXTURE();
		static jint USAGE_GRAPHICS_VERTEX();
		static jint USAGE_IO_INPUT();
		static jint USAGE_IO_OUTPUT();
		static jint USAGE_SCRIPT();
		static jint USAGE_SHARED();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Allocation(const char *className, const char *sig, Ts...agv) : android::renderscript::BaseObj(className, sig, std::forward<Ts>(agv)...) {}
		Allocation(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static JArray createAllocations(android::renderscript::RenderScript arg0, android::renderscript::Type arg1, jint arg2, jint arg3);
		static android::renderscript::Allocation createCubemapFromBitmap(android::renderscript::RenderScript arg0, android::graphics::Bitmap arg1);
		static android::renderscript::Allocation createCubemapFromBitmap(android::renderscript::RenderScript arg0, android::graphics::Bitmap arg1, android::renderscript::Allocation_MipmapControl arg2, jint arg3);
		static android::renderscript::Allocation createCubemapFromCubeFaces(android::renderscript::RenderScript arg0, android::graphics::Bitmap arg1, android::graphics::Bitmap arg2, android::graphics::Bitmap arg3, android::graphics::Bitmap arg4, android::graphics::Bitmap arg5, android::graphics::Bitmap arg6);
		static android::renderscript::Allocation createCubemapFromCubeFaces(android::renderscript::RenderScript arg0, android::graphics::Bitmap arg1, android::graphics::Bitmap arg2, android::graphics::Bitmap arg3, android::graphics::Bitmap arg4, android::graphics::Bitmap arg5, android::graphics::Bitmap arg6, android::renderscript::Allocation_MipmapControl arg7, jint arg8);
		static android::renderscript::Allocation createFromBitmap(android::renderscript::RenderScript arg0, android::graphics::Bitmap arg1);
		static android::renderscript::Allocation createFromBitmap(android::renderscript::RenderScript arg0, android::graphics::Bitmap arg1, android::renderscript::Allocation_MipmapControl arg2, jint arg3);
		static android::renderscript::Allocation createFromBitmapResource(android::renderscript::RenderScript arg0, android::content::res::Resources arg1, jint arg2);
		static android::renderscript::Allocation createFromBitmapResource(android::renderscript::RenderScript arg0, android::content::res::Resources arg1, jint arg2, android::renderscript::Allocation_MipmapControl arg3, jint arg4);
		static android::renderscript::Allocation createFromString(android::renderscript::RenderScript arg0, JString arg1, jint arg2);
		static android::renderscript::Allocation createSized(android::renderscript::RenderScript arg0, android::renderscript::Element arg1, jint arg2);
		static android::renderscript::Allocation createSized(android::renderscript::RenderScript arg0, android::renderscript::Element arg1, jint arg2, jint arg3);
		static android::renderscript::Allocation createTyped(android::renderscript::RenderScript arg0, android::renderscript::Type arg1);
		static android::renderscript::Allocation createTyped(android::renderscript::RenderScript arg0, android::renderscript::Type arg1, jint arg2);
		static android::renderscript::Allocation createTyped(android::renderscript::RenderScript arg0, android::renderscript::Type arg1, android::renderscript::Allocation_MipmapControl arg2, jint arg3);
		void copy1DRangeFrom(jint arg0, jint arg1, JByteArray arg2);
		void copy1DRangeFrom(jint arg0, jint arg1, JFloatArray arg2);
		void copy1DRangeFrom(jint arg0, jint arg1, JIntArray arg2);
		void copy1DRangeFrom(jint arg0, jint arg1, JShortArray arg2);
		void copy1DRangeFrom(jint arg0, jint arg1, JObject arg2);
		void copy1DRangeFrom(jint arg0, jint arg1, android::renderscript::Allocation arg2, jint arg3);
		void copy1DRangeFromUnchecked(jint arg0, jint arg1, JByteArray arg2);
		void copy1DRangeFromUnchecked(jint arg0, jint arg1, JFloatArray arg2);
		void copy1DRangeFromUnchecked(jint arg0, jint arg1, JIntArray arg2);
		void copy1DRangeFromUnchecked(jint arg0, jint arg1, JShortArray arg2);
		void copy1DRangeFromUnchecked(jint arg0, jint arg1, JObject arg2);
		void copy1DRangeTo(jint arg0, jint arg1, JByteArray arg2);
		void copy1DRangeTo(jint arg0, jint arg1, JFloatArray arg2);
		void copy1DRangeTo(jint arg0, jint arg1, JIntArray arg2);
		void copy1DRangeTo(jint arg0, jint arg1, JShortArray arg2);
		void copy1DRangeTo(jint arg0, jint arg1, JObject arg2);
		void copy1DRangeToUnchecked(jint arg0, jint arg1, JByteArray arg2);
		void copy1DRangeToUnchecked(jint arg0, jint arg1, JFloatArray arg2);
		void copy1DRangeToUnchecked(jint arg0, jint arg1, JIntArray arg2);
		void copy1DRangeToUnchecked(jint arg0, jint arg1, JShortArray arg2);
		void copy1DRangeToUnchecked(jint arg0, jint arg1, JObject arg2);
		void copy2DRangeFrom(jint arg0, jint arg1, android::graphics::Bitmap arg2);
		void copy2DRangeFrom(jint arg0, jint arg1, jint arg2, jint arg3, JByteArray arg4);
		void copy2DRangeFrom(jint arg0, jint arg1, jint arg2, jint arg3, JFloatArray arg4);
		void copy2DRangeFrom(jint arg0, jint arg1, jint arg2, jint arg3, JIntArray arg4);
		void copy2DRangeFrom(jint arg0, jint arg1, jint arg2, jint arg3, JShortArray arg4);
		void copy2DRangeFrom(jint arg0, jint arg1, jint arg2, jint arg3, JObject arg4);
		void copy2DRangeFrom(jint arg0, jint arg1, jint arg2, jint arg3, android::renderscript::Allocation arg4, jint arg5, jint arg6);
		void copy2DRangeTo(jint arg0, jint arg1, jint arg2, jint arg3, JByteArray arg4);
		void copy2DRangeTo(jint arg0, jint arg1, jint arg2, jint arg3, JFloatArray arg4);
		void copy2DRangeTo(jint arg0, jint arg1, jint arg2, jint arg3, JIntArray arg4);
		void copy2DRangeTo(jint arg0, jint arg1, jint arg2, jint arg3, JShortArray arg4);
		void copy2DRangeTo(jint arg0, jint arg1, jint arg2, jint arg3, JObject arg4);
		void copy3DRangeFrom(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, JObject arg6);
		void copy3DRangeFrom(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, android::renderscript::Allocation arg6, jint arg7, jint arg8, jint arg9);
		void copy3DRangeTo(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, JObject arg6);
		void copyFrom(JByteArray arg0);
		void copyFrom(JFloatArray arg0);
		void copyFrom(JIntArray arg0);
		void copyFrom(JArray arg0);
		void copyFrom(JShortArray arg0);
		void copyFrom(android::graphics::Bitmap arg0);
		void copyFrom(android::renderscript::Allocation arg0);
		void copyFrom(JObject arg0);
		void copyFromUnchecked(JByteArray arg0);
		void copyFromUnchecked(JFloatArray arg0);
		void copyFromUnchecked(JIntArray arg0);
		void copyFromUnchecked(JShortArray arg0);
		void copyFromUnchecked(JObject arg0);
		void copyTo(JByteArray arg0);
		void copyTo(JFloatArray arg0);
		void copyTo(JIntArray arg0);
		void copyTo(JShortArray arg0);
		void copyTo(android::graphics::Bitmap arg0);
		void copyTo(JObject arg0);
		void destroy();
		void generateMipmaps();
		java::nio::ByteBuffer getByteBuffer();
		jint getBytesSize();
		android::renderscript::Element getElement();
		jlong getStride();
		android::view::Surface getSurface();
		jlong getTimeStamp();
		android::renderscript::Type getType();
		jint getUsage();
		void ioReceive();
		void ioSend();
		void resize(jint arg0);
		void setAutoPadding(jboolean arg0);
		void setFromFieldPacker(jint arg0, android::renderscript::FieldPacker arg1);
		void setFromFieldPacker(jint arg0, jint arg1, android::renderscript::FieldPacker arg2);
		void setFromFieldPacker(jint arg0, jint arg1, jint arg2, jint arg3, android::renderscript::FieldPacker arg4);
		void setOnBufferAvailableListener(JObject arg0);
		void setSurface(android::view::Surface arg0);
		void syncAll(jint arg0);
	};
} // namespace android::renderscript

