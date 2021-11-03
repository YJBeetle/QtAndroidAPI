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
		void copy1DRangeFrom(jint arg0, jint arg1, JByteArray arg2) const;
		void copy1DRangeFrom(jint arg0, jint arg1, JFloatArray arg2) const;
		void copy1DRangeFrom(jint arg0, jint arg1, JIntArray arg2) const;
		void copy1DRangeFrom(jint arg0, jint arg1, JShortArray arg2) const;
		void copy1DRangeFrom(jint arg0, jint arg1, JObject arg2) const;
		void copy1DRangeFrom(jint arg0, jint arg1, android::renderscript::Allocation arg2, jint arg3) const;
		void copy1DRangeFromUnchecked(jint arg0, jint arg1, JByteArray arg2) const;
		void copy1DRangeFromUnchecked(jint arg0, jint arg1, JFloatArray arg2) const;
		void copy1DRangeFromUnchecked(jint arg0, jint arg1, JIntArray arg2) const;
		void copy1DRangeFromUnchecked(jint arg0, jint arg1, JShortArray arg2) const;
		void copy1DRangeFromUnchecked(jint arg0, jint arg1, JObject arg2) const;
		void copy1DRangeTo(jint arg0, jint arg1, JByteArray arg2) const;
		void copy1DRangeTo(jint arg0, jint arg1, JFloatArray arg2) const;
		void copy1DRangeTo(jint arg0, jint arg1, JIntArray arg2) const;
		void copy1DRangeTo(jint arg0, jint arg1, JShortArray arg2) const;
		void copy1DRangeTo(jint arg0, jint arg1, JObject arg2) const;
		void copy1DRangeToUnchecked(jint arg0, jint arg1, JByteArray arg2) const;
		void copy1DRangeToUnchecked(jint arg0, jint arg1, JFloatArray arg2) const;
		void copy1DRangeToUnchecked(jint arg0, jint arg1, JIntArray arg2) const;
		void copy1DRangeToUnchecked(jint arg0, jint arg1, JShortArray arg2) const;
		void copy1DRangeToUnchecked(jint arg0, jint arg1, JObject arg2) const;
		void copy2DRangeFrom(jint arg0, jint arg1, android::graphics::Bitmap arg2) const;
		void copy2DRangeFrom(jint arg0, jint arg1, jint arg2, jint arg3, JByteArray arg4) const;
		void copy2DRangeFrom(jint arg0, jint arg1, jint arg2, jint arg3, JFloatArray arg4) const;
		void copy2DRangeFrom(jint arg0, jint arg1, jint arg2, jint arg3, JIntArray arg4) const;
		void copy2DRangeFrom(jint arg0, jint arg1, jint arg2, jint arg3, JShortArray arg4) const;
		void copy2DRangeFrom(jint arg0, jint arg1, jint arg2, jint arg3, JObject arg4) const;
		void copy2DRangeFrom(jint arg0, jint arg1, jint arg2, jint arg3, android::renderscript::Allocation arg4, jint arg5, jint arg6) const;
		void copy2DRangeTo(jint arg0, jint arg1, jint arg2, jint arg3, JByteArray arg4) const;
		void copy2DRangeTo(jint arg0, jint arg1, jint arg2, jint arg3, JFloatArray arg4) const;
		void copy2DRangeTo(jint arg0, jint arg1, jint arg2, jint arg3, JIntArray arg4) const;
		void copy2DRangeTo(jint arg0, jint arg1, jint arg2, jint arg3, JShortArray arg4) const;
		void copy2DRangeTo(jint arg0, jint arg1, jint arg2, jint arg3, JObject arg4) const;
		void copy3DRangeFrom(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, JObject arg6) const;
		void copy3DRangeFrom(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, android::renderscript::Allocation arg6, jint arg7, jint arg8, jint arg9) const;
		void copy3DRangeTo(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, JObject arg6) const;
		void copyFrom(JByteArray arg0) const;
		void copyFrom(JFloatArray arg0) const;
		void copyFrom(JIntArray arg0) const;
		void copyFrom(JArray arg0) const;
		void copyFrom(JShortArray arg0) const;
		void copyFrom(android::graphics::Bitmap arg0) const;
		void copyFrom(android::renderscript::Allocation arg0) const;
		void copyFrom(JObject arg0) const;
		void copyFromUnchecked(JByteArray arg0) const;
		void copyFromUnchecked(JFloatArray arg0) const;
		void copyFromUnchecked(JIntArray arg0) const;
		void copyFromUnchecked(JShortArray arg0) const;
		void copyFromUnchecked(JObject arg0) const;
		void copyTo(JByteArray arg0) const;
		void copyTo(JFloatArray arg0) const;
		void copyTo(JIntArray arg0) const;
		void copyTo(JShortArray arg0) const;
		void copyTo(android::graphics::Bitmap arg0) const;
		void copyTo(JObject arg0) const;
		void destroy() const;
		void generateMipmaps() const;
		java::nio::ByteBuffer getByteBuffer() const;
		jint getBytesSize() const;
		android::renderscript::Element getElement() const;
		jlong getStride() const;
		android::view::Surface getSurface() const;
		jlong getTimeStamp() const;
		android::renderscript::Type getType() const;
		jint getUsage() const;
		void ioReceive() const;
		void ioSend() const;
		void resize(jint arg0) const;
		void setAutoPadding(jboolean arg0) const;
		void setFromFieldPacker(jint arg0, android::renderscript::FieldPacker arg1) const;
		void setFromFieldPacker(jint arg0, jint arg1, android::renderscript::FieldPacker arg2) const;
		void setFromFieldPacker(jint arg0, jint arg1, jint arg2, jint arg3, android::renderscript::FieldPacker arg4) const;
		void setOnBufferAvailableListener(JObject arg0) const;
		void setSurface(android::view::Surface arg0) const;
		void syncAll(jint arg0) const;
	};
} // namespace android::renderscript

