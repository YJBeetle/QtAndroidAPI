#include "./Element_DataKind.hpp"
#include "./Element_DataType.hpp"
#include "./RenderScript.hpp"
#include "./Element.hpp"

namespace android::renderscript
{
	// Fields
	
	Element::Element(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject Element::ALLOCATION(android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"ALLOCATION",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Element::A_8(android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"A_8",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Element::BOOLEAN(android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"BOOLEAN",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Element::ELEMENT(android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"ELEMENT",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Element::F16(android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"F16",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Element::F16_2(android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"F16_2",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Element::F16_3(android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"F16_3",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Element::F16_4(android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"F16_4",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Element::F32(android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"F32",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Element::F32_2(android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"F32_2",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Element::F32_3(android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"F32_3",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Element::F32_4(android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"F32_4",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Element::F64(android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"F64",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Element::F64_2(android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"F64_2",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Element::F64_3(android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"F64_3",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Element::F64_4(android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"F64_4",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Element::FONT(android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"FONT",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Element::I16(android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"I16",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Element::I16_2(android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"I16_2",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Element::I16_3(android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"I16_3",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Element::I16_4(android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"I16_4",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Element::I32(android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"I32",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Element::I32_2(android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"I32_2",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Element::I32_3(android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"I32_3",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Element::I32_4(android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"I32_4",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Element::I64(android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"I64",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Element::I64_2(android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"I64_2",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Element::I64_3(android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"I64_3",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Element::I64_4(android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"I64_4",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Element::I8(android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"I8",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Element::I8_2(android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"I8_2",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Element::I8_3(android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"I8_3",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Element::I8_4(android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"I8_4",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Element::MATRIX4X4(android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"MATRIX4X4",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Element::MATRIX_2X2(android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"MATRIX_2X2",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Element::MATRIX_3X3(android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"MATRIX_3X3",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Element::MATRIX_4X4(android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"MATRIX_4X4",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Element::MESH(android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"MESH",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Element::PROGRAM_FRAGMENT(android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"PROGRAM_FRAGMENT",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Element::PROGRAM_RASTER(android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"PROGRAM_RASTER",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Element::PROGRAM_STORE(android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"PROGRAM_STORE",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Element::PROGRAM_VERTEX(android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"PROGRAM_VERTEX",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Element::RGBA_4444(android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"RGBA_4444",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Element::RGBA_5551(android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"RGBA_5551",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Element::RGBA_8888(android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"RGBA_8888",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Element::RGB_565(android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"RGB_565",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Element::RGB_888(android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"RGB_888",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Element::SAMPLER(android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"SAMPLER",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Element::SCRIPT(android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"SCRIPT",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Element::TYPE(android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"TYPE",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Element::U16(android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"U16",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Element::U16_2(android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"U16_2",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Element::U16_3(android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"U16_3",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Element::U16_4(android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"U16_4",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Element::U32(android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"U32",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Element::U32_2(android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"U32_2",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Element::U32_3(android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"U32_3",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Element::U32_4(android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"U32_4",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Element::U64(android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"U64",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Element::U64_2(android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"U64_2",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Element::U64_3(android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"U64_3",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Element::U64_4(android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"U64_4",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Element::U8(android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"U8",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Element::U8_2(android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"U8_2",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Element::U8_3(android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"U8_3",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Element::U8_4(android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"U8_4",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Element::YUV(android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"YUV",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Element::createPixel(android::renderscript::RenderScript arg0, android::renderscript::Element_DataType arg1, android::renderscript::Element_DataKind arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"createPixel",
			"(Landroid/renderscript/RenderScript;Landroid/renderscript/Element$DataType;Landroid/renderscript/Element$DataKind;)Landroid/renderscript/Element;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject Element::createVector(android::renderscript::RenderScript arg0, android::renderscript::Element_DataType arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"createVector",
			"(Landroid/renderscript/RenderScript;Landroid/renderscript/Element$DataType;I)Landroid/renderscript/Element;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	jint Element::getBytesSize()
	{
		return __thiz.callMethod<jint>(
			"getBytesSize",
			"()I"
		);
	}
	QAndroidJniObject Element::getDataKind()
	{
		return __thiz.callObjectMethod(
			"getDataKind",
			"()Landroid/renderscript/Element$DataKind;"
		);
	}
	QAndroidJniObject Element::getDataType()
	{
		return __thiz.callObjectMethod(
			"getDataType",
			"()Landroid/renderscript/Element$DataType;"
		);
	}
	QAndroidJniObject Element::getSubElement(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getSubElement",
			"(I)Landroid/renderscript/Element;",
			arg0
		);
	}
	jint Element::getSubElementArraySize(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getSubElementArraySize",
			"(I)I",
			arg0
		);
	}
	jint Element::getSubElementCount()
	{
		return __thiz.callMethod<jint>(
			"getSubElementCount",
			"()I"
		);
	}
	jstring Element::getSubElementName(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getSubElementName",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jint Element::getSubElementOffsetBytes(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getSubElementOffsetBytes",
			"(I)I",
			arg0
		);
	}
	jint Element::getVectorSize()
	{
		return __thiz.callMethod<jint>(
			"getVectorSize",
			"()I"
		);
	}
	jboolean Element::isCompatible(android::renderscript::Element arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isCompatible",
			"(Landroid/renderscript/Element;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean Element::isComplex()
	{
		return __thiz.callMethod<jboolean>(
			"isComplex",
			"()Z"
		);
	}
} // namespace android::renderscript

