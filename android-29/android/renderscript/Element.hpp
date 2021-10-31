#pragma once

#include "../../__JniBaseClass.hpp"
#include "./BaseObj.hpp"

namespace android::renderscript
{
	class Element_DataKind;
}
namespace android::renderscript
{
	class Element_DataType;
}
namespace android::renderscript
{
	class RenderScript;
}

namespace android::renderscript
{
	class Element : public android::renderscript::BaseObj
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Element(const char *className, const char *sig, Ts...agv) : android::renderscript::BaseObj(className, sig, std::forward<Ts>(agv)...) {}
		Element(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject ALLOCATION(android::renderscript::RenderScript arg0);
		static QAndroidJniObject A_8(android::renderscript::RenderScript arg0);
		static QAndroidJniObject BOOLEAN(android::renderscript::RenderScript arg0);
		static QAndroidJniObject ELEMENT(android::renderscript::RenderScript arg0);
		static QAndroidJniObject F16(android::renderscript::RenderScript arg0);
		static QAndroidJniObject F16_2(android::renderscript::RenderScript arg0);
		static QAndroidJniObject F16_3(android::renderscript::RenderScript arg0);
		static QAndroidJniObject F16_4(android::renderscript::RenderScript arg0);
		static QAndroidJniObject F32(android::renderscript::RenderScript arg0);
		static QAndroidJniObject F32_2(android::renderscript::RenderScript arg0);
		static QAndroidJniObject F32_3(android::renderscript::RenderScript arg0);
		static QAndroidJniObject F32_4(android::renderscript::RenderScript arg0);
		static QAndroidJniObject F64(android::renderscript::RenderScript arg0);
		static QAndroidJniObject F64_2(android::renderscript::RenderScript arg0);
		static QAndroidJniObject F64_3(android::renderscript::RenderScript arg0);
		static QAndroidJniObject F64_4(android::renderscript::RenderScript arg0);
		static QAndroidJniObject FONT(android::renderscript::RenderScript arg0);
		static QAndroidJniObject I16(android::renderscript::RenderScript arg0);
		static QAndroidJniObject I16_2(android::renderscript::RenderScript arg0);
		static QAndroidJniObject I16_3(android::renderscript::RenderScript arg0);
		static QAndroidJniObject I16_4(android::renderscript::RenderScript arg0);
		static QAndroidJniObject I32(android::renderscript::RenderScript arg0);
		static QAndroidJniObject I32_2(android::renderscript::RenderScript arg0);
		static QAndroidJniObject I32_3(android::renderscript::RenderScript arg0);
		static QAndroidJniObject I32_4(android::renderscript::RenderScript arg0);
		static QAndroidJniObject I64(android::renderscript::RenderScript arg0);
		static QAndroidJniObject I64_2(android::renderscript::RenderScript arg0);
		static QAndroidJniObject I64_3(android::renderscript::RenderScript arg0);
		static QAndroidJniObject I64_4(android::renderscript::RenderScript arg0);
		static QAndroidJniObject I8(android::renderscript::RenderScript arg0);
		static QAndroidJniObject I8_2(android::renderscript::RenderScript arg0);
		static QAndroidJniObject I8_3(android::renderscript::RenderScript arg0);
		static QAndroidJniObject I8_4(android::renderscript::RenderScript arg0);
		static QAndroidJniObject MATRIX4X4(android::renderscript::RenderScript arg0);
		static QAndroidJniObject MATRIX_2X2(android::renderscript::RenderScript arg0);
		static QAndroidJniObject MATRIX_3X3(android::renderscript::RenderScript arg0);
		static QAndroidJniObject MATRIX_4X4(android::renderscript::RenderScript arg0);
		static QAndroidJniObject MESH(android::renderscript::RenderScript arg0);
		static QAndroidJniObject PROGRAM_FRAGMENT(android::renderscript::RenderScript arg0);
		static QAndroidJniObject PROGRAM_RASTER(android::renderscript::RenderScript arg0);
		static QAndroidJniObject PROGRAM_STORE(android::renderscript::RenderScript arg0);
		static QAndroidJniObject PROGRAM_VERTEX(android::renderscript::RenderScript arg0);
		static QAndroidJniObject RGBA_4444(android::renderscript::RenderScript arg0);
		static QAndroidJniObject RGBA_5551(android::renderscript::RenderScript arg0);
		static QAndroidJniObject RGBA_8888(android::renderscript::RenderScript arg0);
		static QAndroidJniObject RGB_565(android::renderscript::RenderScript arg0);
		static QAndroidJniObject RGB_888(android::renderscript::RenderScript arg0);
		static QAndroidJniObject SAMPLER(android::renderscript::RenderScript arg0);
		static QAndroidJniObject SCRIPT(android::renderscript::RenderScript arg0);
		static QAndroidJniObject TYPE(android::renderscript::RenderScript arg0);
		static QAndroidJniObject U16(android::renderscript::RenderScript arg0);
		static QAndroidJniObject U16_2(android::renderscript::RenderScript arg0);
		static QAndroidJniObject U16_3(android::renderscript::RenderScript arg0);
		static QAndroidJniObject U16_4(android::renderscript::RenderScript arg0);
		static QAndroidJniObject U32(android::renderscript::RenderScript arg0);
		static QAndroidJniObject U32_2(android::renderscript::RenderScript arg0);
		static QAndroidJniObject U32_3(android::renderscript::RenderScript arg0);
		static QAndroidJniObject U32_4(android::renderscript::RenderScript arg0);
		static QAndroidJniObject U64(android::renderscript::RenderScript arg0);
		static QAndroidJniObject U64_2(android::renderscript::RenderScript arg0);
		static QAndroidJniObject U64_3(android::renderscript::RenderScript arg0);
		static QAndroidJniObject U64_4(android::renderscript::RenderScript arg0);
		static QAndroidJniObject U8(android::renderscript::RenderScript arg0);
		static QAndroidJniObject U8_2(android::renderscript::RenderScript arg0);
		static QAndroidJniObject U8_3(android::renderscript::RenderScript arg0);
		static QAndroidJniObject U8_4(android::renderscript::RenderScript arg0);
		static QAndroidJniObject YUV(android::renderscript::RenderScript arg0);
		static QAndroidJniObject createPixel(android::renderscript::RenderScript arg0, android::renderscript::Element_DataType arg1, android::renderscript::Element_DataKind arg2);
		static QAndroidJniObject createVector(android::renderscript::RenderScript arg0, android::renderscript::Element_DataType arg1, jint arg2);
		jint getBytesSize();
		QAndroidJniObject getDataKind();
		QAndroidJniObject getDataType();
		QAndroidJniObject getSubElement(jint arg0);
		jint getSubElementArraySize(jint arg0);
		jint getSubElementCount();
		jstring getSubElementName(jint arg0);
		jint getSubElementOffsetBytes(jint arg0);
		jint getVectorSize();
		jboolean isCompatible(android::renderscript::Element arg0);
		jboolean isComplex();
	};
} // namespace android::renderscript

