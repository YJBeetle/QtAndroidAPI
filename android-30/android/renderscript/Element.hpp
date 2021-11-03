#pragma once

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
class JString;

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
		static android::renderscript::Element ALLOCATION(android::renderscript::RenderScript arg0);
		static android::renderscript::Element A_8(android::renderscript::RenderScript arg0);
		static android::renderscript::Element BOOLEAN(android::renderscript::RenderScript arg0);
		static android::renderscript::Element ELEMENT(android::renderscript::RenderScript arg0);
		static android::renderscript::Element F16(android::renderscript::RenderScript arg0);
		static android::renderscript::Element F16_2(android::renderscript::RenderScript arg0);
		static android::renderscript::Element F16_3(android::renderscript::RenderScript arg0);
		static android::renderscript::Element F16_4(android::renderscript::RenderScript arg0);
		static android::renderscript::Element F32(android::renderscript::RenderScript arg0);
		static android::renderscript::Element F32_2(android::renderscript::RenderScript arg0);
		static android::renderscript::Element F32_3(android::renderscript::RenderScript arg0);
		static android::renderscript::Element F32_4(android::renderscript::RenderScript arg0);
		static android::renderscript::Element F64(android::renderscript::RenderScript arg0);
		static android::renderscript::Element F64_2(android::renderscript::RenderScript arg0);
		static android::renderscript::Element F64_3(android::renderscript::RenderScript arg0);
		static android::renderscript::Element F64_4(android::renderscript::RenderScript arg0);
		static android::renderscript::Element FONT(android::renderscript::RenderScript arg0);
		static android::renderscript::Element I16(android::renderscript::RenderScript arg0);
		static android::renderscript::Element I16_2(android::renderscript::RenderScript arg0);
		static android::renderscript::Element I16_3(android::renderscript::RenderScript arg0);
		static android::renderscript::Element I16_4(android::renderscript::RenderScript arg0);
		static android::renderscript::Element I32(android::renderscript::RenderScript arg0);
		static android::renderscript::Element I32_2(android::renderscript::RenderScript arg0);
		static android::renderscript::Element I32_3(android::renderscript::RenderScript arg0);
		static android::renderscript::Element I32_4(android::renderscript::RenderScript arg0);
		static android::renderscript::Element I64(android::renderscript::RenderScript arg0);
		static android::renderscript::Element I64_2(android::renderscript::RenderScript arg0);
		static android::renderscript::Element I64_3(android::renderscript::RenderScript arg0);
		static android::renderscript::Element I64_4(android::renderscript::RenderScript arg0);
		static android::renderscript::Element I8(android::renderscript::RenderScript arg0);
		static android::renderscript::Element I8_2(android::renderscript::RenderScript arg0);
		static android::renderscript::Element I8_3(android::renderscript::RenderScript arg0);
		static android::renderscript::Element I8_4(android::renderscript::RenderScript arg0);
		static android::renderscript::Element MATRIX4X4(android::renderscript::RenderScript arg0);
		static android::renderscript::Element MATRIX_2X2(android::renderscript::RenderScript arg0);
		static android::renderscript::Element MATRIX_3X3(android::renderscript::RenderScript arg0);
		static android::renderscript::Element MATRIX_4X4(android::renderscript::RenderScript arg0);
		static android::renderscript::Element MESH(android::renderscript::RenderScript arg0);
		static android::renderscript::Element PROGRAM_FRAGMENT(android::renderscript::RenderScript arg0);
		static android::renderscript::Element PROGRAM_RASTER(android::renderscript::RenderScript arg0);
		static android::renderscript::Element PROGRAM_STORE(android::renderscript::RenderScript arg0);
		static android::renderscript::Element PROGRAM_VERTEX(android::renderscript::RenderScript arg0);
		static android::renderscript::Element RGBA_4444(android::renderscript::RenderScript arg0);
		static android::renderscript::Element RGBA_5551(android::renderscript::RenderScript arg0);
		static android::renderscript::Element RGBA_8888(android::renderscript::RenderScript arg0);
		static android::renderscript::Element RGB_565(android::renderscript::RenderScript arg0);
		static android::renderscript::Element RGB_888(android::renderscript::RenderScript arg0);
		static android::renderscript::Element SAMPLER(android::renderscript::RenderScript arg0);
		static android::renderscript::Element SCRIPT(android::renderscript::RenderScript arg0);
		static android::renderscript::Element TYPE(android::renderscript::RenderScript arg0);
		static android::renderscript::Element U16(android::renderscript::RenderScript arg0);
		static android::renderscript::Element U16_2(android::renderscript::RenderScript arg0);
		static android::renderscript::Element U16_3(android::renderscript::RenderScript arg0);
		static android::renderscript::Element U16_4(android::renderscript::RenderScript arg0);
		static android::renderscript::Element U32(android::renderscript::RenderScript arg0);
		static android::renderscript::Element U32_2(android::renderscript::RenderScript arg0);
		static android::renderscript::Element U32_3(android::renderscript::RenderScript arg0);
		static android::renderscript::Element U32_4(android::renderscript::RenderScript arg0);
		static android::renderscript::Element U64(android::renderscript::RenderScript arg0);
		static android::renderscript::Element U64_2(android::renderscript::RenderScript arg0);
		static android::renderscript::Element U64_3(android::renderscript::RenderScript arg0);
		static android::renderscript::Element U64_4(android::renderscript::RenderScript arg0);
		static android::renderscript::Element U8(android::renderscript::RenderScript arg0);
		static android::renderscript::Element U8_2(android::renderscript::RenderScript arg0);
		static android::renderscript::Element U8_3(android::renderscript::RenderScript arg0);
		static android::renderscript::Element U8_4(android::renderscript::RenderScript arg0);
		static android::renderscript::Element YUV(android::renderscript::RenderScript arg0);
		static android::renderscript::Element createPixel(android::renderscript::RenderScript arg0, android::renderscript::Element_DataType arg1, android::renderscript::Element_DataKind arg2);
		static android::renderscript::Element createVector(android::renderscript::RenderScript arg0, android::renderscript::Element_DataType arg1, jint arg2);
		jint getBytesSize();
		android::renderscript::Element_DataKind getDataKind();
		android::renderscript::Element_DataType getDataType();
		android::renderscript::Element getSubElement(jint arg0);
		jint getSubElementArraySize(jint arg0);
		jint getSubElementCount();
		JString getSubElementName(jint arg0);
		jint getSubElementOffsetBytes(jint arg0);
		jint getVectorSize();
		jboolean isCompatible(android::renderscript::Element arg0);
		jboolean isComplex();
	};
} // namespace android::renderscript

