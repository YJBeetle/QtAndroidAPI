#pragma once

#include "../../__JniBaseClass.hpp"
#include "./BaseObj.hpp"

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
		static jarray createAllocations(android::renderscript::RenderScript arg0, android::renderscript::Type arg1, jint arg2, jint arg3);
		static QAndroidJniObject createCubemapFromBitmap(android::renderscript::RenderScript arg0, android::graphics::Bitmap arg1);
		static QAndroidJniObject createCubemapFromBitmap(android::renderscript::RenderScript arg0, android::graphics::Bitmap arg1, android::renderscript::Allocation_MipmapControl arg2, jint arg3);
		static QAndroidJniObject createCubemapFromCubeFaces(android::renderscript::RenderScript arg0, android::graphics::Bitmap arg1, android::graphics::Bitmap arg2, android::graphics::Bitmap arg3, android::graphics::Bitmap arg4, android::graphics::Bitmap arg5, android::graphics::Bitmap arg6);
		static QAndroidJniObject createCubemapFromCubeFaces(android::renderscript::RenderScript arg0, android::graphics::Bitmap arg1, android::graphics::Bitmap arg2, android::graphics::Bitmap arg3, android::graphics::Bitmap arg4, android::graphics::Bitmap arg5, android::graphics::Bitmap arg6, android::renderscript::Allocation_MipmapControl arg7, jint arg8);
		static QAndroidJniObject createFromBitmap(android::renderscript::RenderScript arg0, android::graphics::Bitmap arg1);
		static QAndroidJniObject createFromBitmap(android::renderscript::RenderScript arg0, android::graphics::Bitmap arg1, android::renderscript::Allocation_MipmapControl arg2, jint arg3);
		static QAndroidJniObject createFromBitmapResource(android::renderscript::RenderScript arg0, android::content::res::Resources arg1, jint arg2);
		static QAndroidJniObject createFromBitmapResource(android::renderscript::RenderScript arg0, android::content::res::Resources arg1, jint arg2, android::renderscript::Allocation_MipmapControl arg3, jint arg4);
		static QAndroidJniObject createFromString(android::renderscript::RenderScript arg0, jstring arg1, jint arg2);
		static QAndroidJniObject createSized(android::renderscript::RenderScript arg0, android::renderscript::Element arg1, jint arg2);
		static QAndroidJniObject createSized(android::renderscript::RenderScript arg0, android::renderscript::Element arg1, jint arg2, jint arg3);
		static QAndroidJniObject createTyped(android::renderscript::RenderScript arg0, android::renderscript::Type arg1);
		static QAndroidJniObject createTyped(android::renderscript::RenderScript arg0, android::renderscript::Type arg1, jint arg2);
		static QAndroidJniObject createTyped(android::renderscript::RenderScript arg0, android::renderscript::Type arg1, android::renderscript::Allocation_MipmapControl arg2, jint arg3);
		void copy1DRangeFrom(jint arg0, jint arg1, jbyteArray arg2);
		void copy1DRangeFrom(jint arg0, jint arg1, jfloatArray arg2);
		void copy1DRangeFrom(jint arg0, jint arg1, jintArray arg2);
		void copy1DRangeFrom(jint arg0, jint arg1, jshortArray arg2);
		void copy1DRangeFrom(jint arg0, jint arg1, jobject arg2);
		void copy1DRangeFrom(jint arg0, jint arg1, android::renderscript::Allocation arg2, jint arg3);
		void copy1DRangeFromUnchecked(jint arg0, jint arg1, jbyteArray arg2);
		void copy1DRangeFromUnchecked(jint arg0, jint arg1, jfloatArray arg2);
		void copy1DRangeFromUnchecked(jint arg0, jint arg1, jintArray arg2);
		void copy1DRangeFromUnchecked(jint arg0, jint arg1, jshortArray arg2);
		void copy1DRangeFromUnchecked(jint arg0, jint arg1, jobject arg2);
		void copy1DRangeTo(jint arg0, jint arg1, jbyteArray arg2);
		void copy1DRangeTo(jint arg0, jint arg1, jfloatArray arg2);
		void copy1DRangeTo(jint arg0, jint arg1, jintArray arg2);
		void copy1DRangeTo(jint arg0, jint arg1, jshortArray arg2);
		void copy1DRangeTo(jint arg0, jint arg1, jobject arg2);
		void copy1DRangeToUnchecked(jint arg0, jint arg1, jbyteArray arg2);
		void copy1DRangeToUnchecked(jint arg0, jint arg1, jfloatArray arg2);
		void copy1DRangeToUnchecked(jint arg0, jint arg1, jintArray arg2);
		void copy1DRangeToUnchecked(jint arg0, jint arg1, jshortArray arg2);
		void copy1DRangeToUnchecked(jint arg0, jint arg1, jobject arg2);
		void copy2DRangeFrom(jint arg0, jint arg1, android::graphics::Bitmap arg2);
		void copy2DRangeFrom(jint arg0, jint arg1, jint arg2, jint arg3, jbyteArray arg4);
		void copy2DRangeFrom(jint arg0, jint arg1, jint arg2, jint arg3, jfloatArray arg4);
		void copy2DRangeFrom(jint arg0, jint arg1, jint arg2, jint arg3, jintArray arg4);
		void copy2DRangeFrom(jint arg0, jint arg1, jint arg2, jint arg3, jshortArray arg4);
		void copy2DRangeFrom(jint arg0, jint arg1, jint arg2, jint arg3, jobject arg4);
		void copy2DRangeFrom(jint arg0, jint arg1, jint arg2, jint arg3, android::renderscript::Allocation arg4, jint arg5, jint arg6);
		void copy2DRangeTo(jint arg0, jint arg1, jint arg2, jint arg3, jbyteArray arg4);
		void copy2DRangeTo(jint arg0, jint arg1, jint arg2, jint arg3, jfloatArray arg4);
		void copy2DRangeTo(jint arg0, jint arg1, jint arg2, jint arg3, jintArray arg4);
		void copy2DRangeTo(jint arg0, jint arg1, jint arg2, jint arg3, jshortArray arg4);
		void copy2DRangeTo(jint arg0, jint arg1, jint arg2, jint arg3, jobject arg4);
		void copy3DRangeFrom(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jobject arg6);
		void copy3DRangeFrom(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, android::renderscript::Allocation arg6, jint arg7, jint arg8, jint arg9);
		void copy3DRangeTo(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jobject arg6);
		void copyFrom(jbyteArray arg0);
		void copyFrom(jfloatArray arg0);
		void copyFrom(jintArray arg0);
		void copyFrom(jarray arg0);
		void copyFrom(jshortArray arg0);
		void copyFrom(android::graphics::Bitmap arg0);
		void copyFrom(android::renderscript::Allocation arg0);
		void copyFrom(jobject arg0);
		void copyFromUnchecked(jbyteArray arg0);
		void copyFromUnchecked(jfloatArray arg0);
		void copyFromUnchecked(jintArray arg0);
		void copyFromUnchecked(jshortArray arg0);
		void copyFromUnchecked(jobject arg0);
		void copyTo(jbyteArray arg0);
		void copyTo(jfloatArray arg0);
		void copyTo(jintArray arg0);
		void copyTo(jshortArray arg0);
		void copyTo(android::graphics::Bitmap arg0);
		void copyTo(jobject arg0);
		void destroy();
		void generateMipmaps();
		QAndroidJniObject getByteBuffer();
		jint getBytesSize();
		QAndroidJniObject getElement();
		jlong getStride();
		QAndroidJniObject getSurface();
		jlong getTimeStamp();
		QAndroidJniObject getType();
		jint getUsage();
		void ioReceive();
		void ioSend();
		void resize(jint arg0);
		void setAutoPadding(jboolean arg0);
		void setFromFieldPacker(jint arg0, android::renderscript::FieldPacker arg1);
		void setFromFieldPacker(jint arg0, jint arg1, android::renderscript::FieldPacker arg2);
		void setFromFieldPacker(jint arg0, jint arg1, jint arg2, jint arg3, android::renderscript::FieldPacker arg4);
		void setOnBufferAvailableListener(__JniBaseClass arg0);
		void setSurface(android::view::Surface arg0);
		void syncAll(jint arg0);
	};
} // namespace android::renderscript

