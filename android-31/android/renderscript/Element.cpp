#include "./Element_DataKind.hpp"
#include "./Element_DataType.hpp"
#include "./RenderScript.hpp"
#include "../../JString.hpp"
#include "./Element.hpp"

namespace android::renderscript
{
	// Fields
	
	// QAndroidJniObject forward
	Element::Element(QAndroidJniObject obj) : android::renderscript::BaseObj(obj) {}
	
	// Constructors
	
	// Methods
	android::renderscript::Element Element::ALLOCATION(android::renderscript::RenderScript arg0)
	{
		return callStaticObjectMethod(
			"android.renderscript.Element",
			"ALLOCATION",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.object()
		);
	}
	android::renderscript::Element Element::A_8(android::renderscript::RenderScript arg0)
	{
		return callStaticObjectMethod(
			"android.renderscript.Element",
			"A_8",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.object()
		);
	}
	android::renderscript::Element Element::BOOLEAN(android::renderscript::RenderScript arg0)
	{
		return callStaticObjectMethod(
			"android.renderscript.Element",
			"BOOLEAN",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.object()
		);
	}
	android::renderscript::Element Element::ELEMENT(android::renderscript::RenderScript arg0)
	{
		return callStaticObjectMethod(
			"android.renderscript.Element",
			"ELEMENT",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.object()
		);
	}
	android::renderscript::Element Element::F16(android::renderscript::RenderScript arg0)
	{
		return callStaticObjectMethod(
			"android.renderscript.Element",
			"F16",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.object()
		);
	}
	android::renderscript::Element Element::F16_2(android::renderscript::RenderScript arg0)
	{
		return callStaticObjectMethod(
			"android.renderscript.Element",
			"F16_2",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.object()
		);
	}
	android::renderscript::Element Element::F16_3(android::renderscript::RenderScript arg0)
	{
		return callStaticObjectMethod(
			"android.renderscript.Element",
			"F16_3",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.object()
		);
	}
	android::renderscript::Element Element::F16_4(android::renderscript::RenderScript arg0)
	{
		return callStaticObjectMethod(
			"android.renderscript.Element",
			"F16_4",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.object()
		);
	}
	android::renderscript::Element Element::F32(android::renderscript::RenderScript arg0)
	{
		return callStaticObjectMethod(
			"android.renderscript.Element",
			"F32",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.object()
		);
	}
	android::renderscript::Element Element::F32_2(android::renderscript::RenderScript arg0)
	{
		return callStaticObjectMethod(
			"android.renderscript.Element",
			"F32_2",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.object()
		);
	}
	android::renderscript::Element Element::F32_3(android::renderscript::RenderScript arg0)
	{
		return callStaticObjectMethod(
			"android.renderscript.Element",
			"F32_3",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.object()
		);
	}
	android::renderscript::Element Element::F32_4(android::renderscript::RenderScript arg0)
	{
		return callStaticObjectMethod(
			"android.renderscript.Element",
			"F32_4",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.object()
		);
	}
	android::renderscript::Element Element::F64(android::renderscript::RenderScript arg0)
	{
		return callStaticObjectMethod(
			"android.renderscript.Element",
			"F64",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.object()
		);
	}
	android::renderscript::Element Element::F64_2(android::renderscript::RenderScript arg0)
	{
		return callStaticObjectMethod(
			"android.renderscript.Element",
			"F64_2",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.object()
		);
	}
	android::renderscript::Element Element::F64_3(android::renderscript::RenderScript arg0)
	{
		return callStaticObjectMethod(
			"android.renderscript.Element",
			"F64_3",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.object()
		);
	}
	android::renderscript::Element Element::F64_4(android::renderscript::RenderScript arg0)
	{
		return callStaticObjectMethod(
			"android.renderscript.Element",
			"F64_4",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.object()
		);
	}
	android::renderscript::Element Element::FONT(android::renderscript::RenderScript arg0)
	{
		return callStaticObjectMethod(
			"android.renderscript.Element",
			"FONT",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.object()
		);
	}
	android::renderscript::Element Element::I16(android::renderscript::RenderScript arg0)
	{
		return callStaticObjectMethod(
			"android.renderscript.Element",
			"I16",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.object()
		);
	}
	android::renderscript::Element Element::I16_2(android::renderscript::RenderScript arg0)
	{
		return callStaticObjectMethod(
			"android.renderscript.Element",
			"I16_2",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.object()
		);
	}
	android::renderscript::Element Element::I16_3(android::renderscript::RenderScript arg0)
	{
		return callStaticObjectMethod(
			"android.renderscript.Element",
			"I16_3",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.object()
		);
	}
	android::renderscript::Element Element::I16_4(android::renderscript::RenderScript arg0)
	{
		return callStaticObjectMethod(
			"android.renderscript.Element",
			"I16_4",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.object()
		);
	}
	android::renderscript::Element Element::I32(android::renderscript::RenderScript arg0)
	{
		return callStaticObjectMethod(
			"android.renderscript.Element",
			"I32",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.object()
		);
	}
	android::renderscript::Element Element::I32_2(android::renderscript::RenderScript arg0)
	{
		return callStaticObjectMethod(
			"android.renderscript.Element",
			"I32_2",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.object()
		);
	}
	android::renderscript::Element Element::I32_3(android::renderscript::RenderScript arg0)
	{
		return callStaticObjectMethod(
			"android.renderscript.Element",
			"I32_3",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.object()
		);
	}
	android::renderscript::Element Element::I32_4(android::renderscript::RenderScript arg0)
	{
		return callStaticObjectMethod(
			"android.renderscript.Element",
			"I32_4",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.object()
		);
	}
	android::renderscript::Element Element::I64(android::renderscript::RenderScript arg0)
	{
		return callStaticObjectMethod(
			"android.renderscript.Element",
			"I64",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.object()
		);
	}
	android::renderscript::Element Element::I64_2(android::renderscript::RenderScript arg0)
	{
		return callStaticObjectMethod(
			"android.renderscript.Element",
			"I64_2",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.object()
		);
	}
	android::renderscript::Element Element::I64_3(android::renderscript::RenderScript arg0)
	{
		return callStaticObjectMethod(
			"android.renderscript.Element",
			"I64_3",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.object()
		);
	}
	android::renderscript::Element Element::I64_4(android::renderscript::RenderScript arg0)
	{
		return callStaticObjectMethod(
			"android.renderscript.Element",
			"I64_4",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.object()
		);
	}
	android::renderscript::Element Element::I8(android::renderscript::RenderScript arg0)
	{
		return callStaticObjectMethod(
			"android.renderscript.Element",
			"I8",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.object()
		);
	}
	android::renderscript::Element Element::I8_2(android::renderscript::RenderScript arg0)
	{
		return callStaticObjectMethod(
			"android.renderscript.Element",
			"I8_2",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.object()
		);
	}
	android::renderscript::Element Element::I8_3(android::renderscript::RenderScript arg0)
	{
		return callStaticObjectMethod(
			"android.renderscript.Element",
			"I8_3",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.object()
		);
	}
	android::renderscript::Element Element::I8_4(android::renderscript::RenderScript arg0)
	{
		return callStaticObjectMethod(
			"android.renderscript.Element",
			"I8_4",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.object()
		);
	}
	android::renderscript::Element Element::MATRIX4X4(android::renderscript::RenderScript arg0)
	{
		return callStaticObjectMethod(
			"android.renderscript.Element",
			"MATRIX4X4",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.object()
		);
	}
	android::renderscript::Element Element::MATRIX_2X2(android::renderscript::RenderScript arg0)
	{
		return callStaticObjectMethod(
			"android.renderscript.Element",
			"MATRIX_2X2",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.object()
		);
	}
	android::renderscript::Element Element::MATRIX_3X3(android::renderscript::RenderScript arg0)
	{
		return callStaticObjectMethod(
			"android.renderscript.Element",
			"MATRIX_3X3",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.object()
		);
	}
	android::renderscript::Element Element::MATRIX_4X4(android::renderscript::RenderScript arg0)
	{
		return callStaticObjectMethod(
			"android.renderscript.Element",
			"MATRIX_4X4",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.object()
		);
	}
	android::renderscript::Element Element::MESH(android::renderscript::RenderScript arg0)
	{
		return callStaticObjectMethod(
			"android.renderscript.Element",
			"MESH",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.object()
		);
	}
	android::renderscript::Element Element::PROGRAM_FRAGMENT(android::renderscript::RenderScript arg0)
	{
		return callStaticObjectMethod(
			"android.renderscript.Element",
			"PROGRAM_FRAGMENT",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.object()
		);
	}
	android::renderscript::Element Element::PROGRAM_RASTER(android::renderscript::RenderScript arg0)
	{
		return callStaticObjectMethod(
			"android.renderscript.Element",
			"PROGRAM_RASTER",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.object()
		);
	}
	android::renderscript::Element Element::PROGRAM_STORE(android::renderscript::RenderScript arg0)
	{
		return callStaticObjectMethod(
			"android.renderscript.Element",
			"PROGRAM_STORE",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.object()
		);
	}
	android::renderscript::Element Element::PROGRAM_VERTEX(android::renderscript::RenderScript arg0)
	{
		return callStaticObjectMethod(
			"android.renderscript.Element",
			"PROGRAM_VERTEX",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.object()
		);
	}
	android::renderscript::Element Element::RGBA_4444(android::renderscript::RenderScript arg0)
	{
		return callStaticObjectMethod(
			"android.renderscript.Element",
			"RGBA_4444",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.object()
		);
	}
	android::renderscript::Element Element::RGBA_5551(android::renderscript::RenderScript arg0)
	{
		return callStaticObjectMethod(
			"android.renderscript.Element",
			"RGBA_5551",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.object()
		);
	}
	android::renderscript::Element Element::RGBA_8888(android::renderscript::RenderScript arg0)
	{
		return callStaticObjectMethod(
			"android.renderscript.Element",
			"RGBA_8888",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.object()
		);
	}
	android::renderscript::Element Element::RGB_565(android::renderscript::RenderScript arg0)
	{
		return callStaticObjectMethod(
			"android.renderscript.Element",
			"RGB_565",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.object()
		);
	}
	android::renderscript::Element Element::RGB_888(android::renderscript::RenderScript arg0)
	{
		return callStaticObjectMethod(
			"android.renderscript.Element",
			"RGB_888",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.object()
		);
	}
	android::renderscript::Element Element::SAMPLER(android::renderscript::RenderScript arg0)
	{
		return callStaticObjectMethod(
			"android.renderscript.Element",
			"SAMPLER",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.object()
		);
	}
	android::renderscript::Element Element::SCRIPT(android::renderscript::RenderScript arg0)
	{
		return callStaticObjectMethod(
			"android.renderscript.Element",
			"SCRIPT",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.object()
		);
	}
	android::renderscript::Element Element::TYPE(android::renderscript::RenderScript arg0)
	{
		return callStaticObjectMethod(
			"android.renderscript.Element",
			"TYPE",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.object()
		);
	}
	android::renderscript::Element Element::U16(android::renderscript::RenderScript arg0)
	{
		return callStaticObjectMethod(
			"android.renderscript.Element",
			"U16",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.object()
		);
	}
	android::renderscript::Element Element::U16_2(android::renderscript::RenderScript arg0)
	{
		return callStaticObjectMethod(
			"android.renderscript.Element",
			"U16_2",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.object()
		);
	}
	android::renderscript::Element Element::U16_3(android::renderscript::RenderScript arg0)
	{
		return callStaticObjectMethod(
			"android.renderscript.Element",
			"U16_3",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.object()
		);
	}
	android::renderscript::Element Element::U16_4(android::renderscript::RenderScript arg0)
	{
		return callStaticObjectMethod(
			"android.renderscript.Element",
			"U16_4",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.object()
		);
	}
	android::renderscript::Element Element::U32(android::renderscript::RenderScript arg0)
	{
		return callStaticObjectMethod(
			"android.renderscript.Element",
			"U32",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.object()
		);
	}
	android::renderscript::Element Element::U32_2(android::renderscript::RenderScript arg0)
	{
		return callStaticObjectMethod(
			"android.renderscript.Element",
			"U32_2",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.object()
		);
	}
	android::renderscript::Element Element::U32_3(android::renderscript::RenderScript arg0)
	{
		return callStaticObjectMethod(
			"android.renderscript.Element",
			"U32_3",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.object()
		);
	}
	android::renderscript::Element Element::U32_4(android::renderscript::RenderScript arg0)
	{
		return callStaticObjectMethod(
			"android.renderscript.Element",
			"U32_4",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.object()
		);
	}
	android::renderscript::Element Element::U64(android::renderscript::RenderScript arg0)
	{
		return callStaticObjectMethod(
			"android.renderscript.Element",
			"U64",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.object()
		);
	}
	android::renderscript::Element Element::U64_2(android::renderscript::RenderScript arg0)
	{
		return callStaticObjectMethod(
			"android.renderscript.Element",
			"U64_2",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.object()
		);
	}
	android::renderscript::Element Element::U64_3(android::renderscript::RenderScript arg0)
	{
		return callStaticObjectMethod(
			"android.renderscript.Element",
			"U64_3",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.object()
		);
	}
	android::renderscript::Element Element::U64_4(android::renderscript::RenderScript arg0)
	{
		return callStaticObjectMethod(
			"android.renderscript.Element",
			"U64_4",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.object()
		);
	}
	android::renderscript::Element Element::U8(android::renderscript::RenderScript arg0)
	{
		return callStaticObjectMethod(
			"android.renderscript.Element",
			"U8",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.object()
		);
	}
	android::renderscript::Element Element::U8_2(android::renderscript::RenderScript arg0)
	{
		return callStaticObjectMethod(
			"android.renderscript.Element",
			"U8_2",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.object()
		);
	}
	android::renderscript::Element Element::U8_3(android::renderscript::RenderScript arg0)
	{
		return callStaticObjectMethod(
			"android.renderscript.Element",
			"U8_3",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.object()
		);
	}
	android::renderscript::Element Element::U8_4(android::renderscript::RenderScript arg0)
	{
		return callStaticObjectMethod(
			"android.renderscript.Element",
			"U8_4",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.object()
		);
	}
	android::renderscript::Element Element::YUV(android::renderscript::RenderScript arg0)
	{
		return callStaticObjectMethod(
			"android.renderscript.Element",
			"YUV",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.object()
		);
	}
	android::renderscript::Element Element::createPixel(android::renderscript::RenderScript arg0, android::renderscript::Element_DataType arg1, android::renderscript::Element_DataKind arg2)
	{
		return callStaticObjectMethod(
			"android.renderscript.Element",
			"createPixel",
			"(Landroid/renderscript/RenderScript;Landroid/renderscript/Element$DataType;Landroid/renderscript/Element$DataKind;)Landroid/renderscript/Element;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	android::renderscript::Element Element::createVector(android::renderscript::RenderScript arg0, android::renderscript::Element_DataType arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"android.renderscript.Element",
			"createVector",
			"(Landroid/renderscript/RenderScript;Landroid/renderscript/Element$DataType;I)Landroid/renderscript/Element;",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	jint Element::getBytesSize()
	{
		return callMethod<jint>(
			"getBytesSize",
			"()I"
		);
	}
	android::renderscript::Element_DataKind Element::getDataKind()
	{
		return callObjectMethod(
			"getDataKind",
			"()Landroid/renderscript/Element$DataKind;"
		);
	}
	android::renderscript::Element_DataType Element::getDataType()
	{
		return callObjectMethod(
			"getDataType",
			"()Landroid/renderscript/Element$DataType;"
		);
	}
	android::renderscript::Element Element::getSubElement(jint arg0)
	{
		return callObjectMethod(
			"getSubElement",
			"(I)Landroid/renderscript/Element;",
			arg0
		);
	}
	jint Element::getSubElementArraySize(jint arg0)
	{
		return callMethod<jint>(
			"getSubElementArraySize",
			"(I)I",
			arg0
		);
	}
	jint Element::getSubElementCount()
	{
		return callMethod<jint>(
			"getSubElementCount",
			"()I"
		);
	}
	JString Element::getSubElementName(jint arg0)
	{
		return callObjectMethod(
			"getSubElementName",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	jint Element::getSubElementOffsetBytes(jint arg0)
	{
		return callMethod<jint>(
			"getSubElementOffsetBytes",
			"(I)I",
			arg0
		);
	}
	jint Element::getVectorSize()
	{
		return callMethod<jint>(
			"getVectorSize",
			"()I"
		);
	}
	jboolean Element::isCompatible(android::renderscript::Element arg0)
	{
		return callMethod<jboolean>(
			"isCompatible",
			"(Landroid/renderscript/Element;)Z",
			arg0.object()
		);
	}
	jboolean Element::isComplex()
	{
		return callMethod<jboolean>(
			"isComplex",
			"()Z"
		);
	}
} // namespace android::renderscript

