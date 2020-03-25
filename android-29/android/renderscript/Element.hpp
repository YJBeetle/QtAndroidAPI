#pragma once

#ifndef ANDROID_RENDERSCRIPT_ELEMENT
#define ANDROID_RENDERSCRIPT_ELEMENT

#include "../../__JniBaseClass.hpp"
#include "BaseObj.hpp"

namespace __jni_impl::android::renderscript
{
	class RenderScript;
}
namespace __jni_impl::android::renderscript
{
	class Element_DataKind;
}
namespace __jni_impl::android::renderscript
{
	class Element_DataType;
}

namespace __jni_impl::android::renderscript
{
	class Element : public __jni_impl::android::renderscript::BaseObj
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject TYPE(__jni_impl::android::renderscript::RenderScript arg0);
		static QAndroidJniObject BOOLEAN(__jni_impl::android::renderscript::RenderScript arg0);
		jint getBytesSize();
		jint getVectorSize();
		jboolean isComplex();
		jint getSubElementCount();
		QAndroidJniObject getSubElement(jint arg0);
		QAndroidJniObject getSubElementName(jint arg0);
		jint getSubElementArraySize(jint arg0);
		jint getSubElementOffsetBytes(jint arg0);
		QAndroidJniObject getDataKind();
		static QAndroidJniObject U8(__jni_impl::android::renderscript::RenderScript arg0);
		static QAndroidJniObject I8(__jni_impl::android::renderscript::RenderScript arg0);
		static QAndroidJniObject U16(__jni_impl::android::renderscript::RenderScript arg0);
		static QAndroidJniObject I16(__jni_impl::android::renderscript::RenderScript arg0);
		static QAndroidJniObject U32(__jni_impl::android::renderscript::RenderScript arg0);
		static QAndroidJniObject I32(__jni_impl::android::renderscript::RenderScript arg0);
		static QAndroidJniObject U64(__jni_impl::android::renderscript::RenderScript arg0);
		static QAndroidJniObject I64(__jni_impl::android::renderscript::RenderScript arg0);
		static QAndroidJniObject F16(__jni_impl::android::renderscript::RenderScript arg0);
		static QAndroidJniObject F32(__jni_impl::android::renderscript::RenderScript arg0);
		static QAndroidJniObject F64(__jni_impl::android::renderscript::RenderScript arg0);
		static QAndroidJniObject ELEMENT(__jni_impl::android::renderscript::RenderScript arg0);
		static QAndroidJniObject ALLOCATION(__jni_impl::android::renderscript::RenderScript arg0);
		static QAndroidJniObject SAMPLER(__jni_impl::android::renderscript::RenderScript arg0);
		static QAndroidJniObject SCRIPT(__jni_impl::android::renderscript::RenderScript arg0);
		static QAndroidJniObject MESH(__jni_impl::android::renderscript::RenderScript arg0);
		static QAndroidJniObject PROGRAM_FRAGMENT(__jni_impl::android::renderscript::RenderScript arg0);
		static QAndroidJniObject PROGRAM_VERTEX(__jni_impl::android::renderscript::RenderScript arg0);
		static QAndroidJniObject PROGRAM_RASTER(__jni_impl::android::renderscript::RenderScript arg0);
		static QAndroidJniObject PROGRAM_STORE(__jni_impl::android::renderscript::RenderScript arg0);
		static QAndroidJniObject FONT(__jni_impl::android::renderscript::RenderScript arg0);
		static QAndroidJniObject A_8(__jni_impl::android::renderscript::RenderScript arg0);
		static QAndroidJniObject RGB_565(__jni_impl::android::renderscript::RenderScript arg0);
		static QAndroidJniObject RGB_888(__jni_impl::android::renderscript::RenderScript arg0);
		static QAndroidJniObject RGBA_5551(__jni_impl::android::renderscript::RenderScript arg0);
		static QAndroidJniObject RGBA_4444(__jni_impl::android::renderscript::RenderScript arg0);
		static QAndroidJniObject RGBA_8888(__jni_impl::android::renderscript::RenderScript arg0);
		static QAndroidJniObject F16_2(__jni_impl::android::renderscript::RenderScript arg0);
		static QAndroidJniObject F16_3(__jni_impl::android::renderscript::RenderScript arg0);
		static QAndroidJniObject F16_4(__jni_impl::android::renderscript::RenderScript arg0);
		static QAndroidJniObject F32_2(__jni_impl::android::renderscript::RenderScript arg0);
		static QAndroidJniObject F32_3(__jni_impl::android::renderscript::RenderScript arg0);
		static QAndroidJniObject F32_4(__jni_impl::android::renderscript::RenderScript arg0);
		static QAndroidJniObject F64_2(__jni_impl::android::renderscript::RenderScript arg0);
		static QAndroidJniObject F64_3(__jni_impl::android::renderscript::RenderScript arg0);
		static QAndroidJniObject F64_4(__jni_impl::android::renderscript::RenderScript arg0);
		static QAndroidJniObject U8_2(__jni_impl::android::renderscript::RenderScript arg0);
		static QAndroidJniObject U8_3(__jni_impl::android::renderscript::RenderScript arg0);
		static QAndroidJniObject U8_4(__jni_impl::android::renderscript::RenderScript arg0);
		static QAndroidJniObject I8_2(__jni_impl::android::renderscript::RenderScript arg0);
		static QAndroidJniObject I8_3(__jni_impl::android::renderscript::RenderScript arg0);
		static QAndroidJniObject I8_4(__jni_impl::android::renderscript::RenderScript arg0);
		static QAndroidJniObject U16_2(__jni_impl::android::renderscript::RenderScript arg0);
		static QAndroidJniObject U16_3(__jni_impl::android::renderscript::RenderScript arg0);
		static QAndroidJniObject U16_4(__jni_impl::android::renderscript::RenderScript arg0);
		static QAndroidJniObject I16_2(__jni_impl::android::renderscript::RenderScript arg0);
		static QAndroidJniObject I16_3(__jni_impl::android::renderscript::RenderScript arg0);
		static QAndroidJniObject I16_4(__jni_impl::android::renderscript::RenderScript arg0);
		static QAndroidJniObject U32_2(__jni_impl::android::renderscript::RenderScript arg0);
		static QAndroidJniObject U32_3(__jni_impl::android::renderscript::RenderScript arg0);
		static QAndroidJniObject U32_4(__jni_impl::android::renderscript::RenderScript arg0);
		static QAndroidJniObject I32_2(__jni_impl::android::renderscript::RenderScript arg0);
		static QAndroidJniObject I32_3(__jni_impl::android::renderscript::RenderScript arg0);
		static QAndroidJniObject I32_4(__jni_impl::android::renderscript::RenderScript arg0);
		static QAndroidJniObject U64_2(__jni_impl::android::renderscript::RenderScript arg0);
		static QAndroidJniObject U64_3(__jni_impl::android::renderscript::RenderScript arg0);
		static QAndroidJniObject U64_4(__jni_impl::android::renderscript::RenderScript arg0);
		static QAndroidJniObject I64_2(__jni_impl::android::renderscript::RenderScript arg0);
		static QAndroidJniObject I64_3(__jni_impl::android::renderscript::RenderScript arg0);
		static QAndroidJniObject I64_4(__jni_impl::android::renderscript::RenderScript arg0);
		static QAndroidJniObject YUV(__jni_impl::android::renderscript::RenderScript arg0);
		static QAndroidJniObject MATRIX_4X4(__jni_impl::android::renderscript::RenderScript arg0);
		static QAndroidJniObject MATRIX4X4(__jni_impl::android::renderscript::RenderScript arg0);
		static QAndroidJniObject MATRIX_3X3(__jni_impl::android::renderscript::RenderScript arg0);
		static QAndroidJniObject MATRIX_2X2(__jni_impl::android::renderscript::RenderScript arg0);
		static QAndroidJniObject createVector(__jni_impl::android::renderscript::RenderScript arg0, __jni_impl::android::renderscript::Element_DataType arg1, jint arg2);
		static QAndroidJniObject createPixel(__jni_impl::android::renderscript::RenderScript arg0, __jni_impl::android::renderscript::Element_DataType arg1, __jni_impl::android::renderscript::Element_DataKind arg2);
		jboolean isCompatible(__jni_impl::android::renderscript::Element arg0);
		QAndroidJniObject getDataType();
	};
} // namespace __jni_impl::android::renderscript

#include "RenderScript.hpp"
#include "Element_DataKind.hpp"
#include "Element_DataType.hpp"

namespace __jni_impl::android::renderscript
{
	// Fields
	
	// Constructors
	void Element::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.Element",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject Element::TYPE(__jni_impl::android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"TYPE",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Element::BOOLEAN(__jni_impl::android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"BOOLEAN",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object());
	}
	jint Element::getBytesSize()
	{
		return __thiz.callMethod<jint>(
			"getBytesSize",
			"()I");
	}
	jint Element::getVectorSize()
	{
		return __thiz.callMethod<jint>(
			"getVectorSize",
			"()I");
	}
	jboolean Element::isComplex()
	{
		return __thiz.callMethod<jboolean>(
			"isComplex",
			"()Z");
	}
	jint Element::getSubElementCount()
	{
		return __thiz.callMethod<jint>(
			"getSubElementCount",
			"()I");
	}
	QAndroidJniObject Element::getSubElement(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getSubElement",
			"(I)Landroid/renderscript/Element;",
			arg0);
	}
	QAndroidJniObject Element::getSubElementName(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getSubElementName",
			"(I)Ljava/lang/String;",
			arg0);
	}
	jint Element::getSubElementArraySize(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getSubElementArraySize",
			"(I)I",
			arg0);
	}
	jint Element::getSubElementOffsetBytes(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getSubElementOffsetBytes",
			"(I)I",
			arg0);
	}
	QAndroidJniObject Element::getDataKind()
	{
		return __thiz.callObjectMethod(
			"getDataKind",
			"()Landroid/renderscript/Element$DataKind;");
	}
	QAndroidJniObject Element::U8(__jni_impl::android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"U8",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Element::I8(__jni_impl::android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"I8",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Element::U16(__jni_impl::android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"U16",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Element::I16(__jni_impl::android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"I16",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Element::U32(__jni_impl::android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"U32",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Element::I32(__jni_impl::android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"I32",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Element::U64(__jni_impl::android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"U64",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Element::I64(__jni_impl::android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"I64",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Element::F16(__jni_impl::android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"F16",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Element::F32(__jni_impl::android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"F32",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Element::F64(__jni_impl::android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"F64",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Element::ELEMENT(__jni_impl::android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"ELEMENT",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Element::ALLOCATION(__jni_impl::android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"ALLOCATION",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Element::SAMPLER(__jni_impl::android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"SAMPLER",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Element::SCRIPT(__jni_impl::android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"SCRIPT",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Element::MESH(__jni_impl::android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"MESH",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Element::PROGRAM_FRAGMENT(__jni_impl::android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"PROGRAM_FRAGMENT",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Element::PROGRAM_VERTEX(__jni_impl::android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"PROGRAM_VERTEX",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Element::PROGRAM_RASTER(__jni_impl::android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"PROGRAM_RASTER",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Element::PROGRAM_STORE(__jni_impl::android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"PROGRAM_STORE",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Element::FONT(__jni_impl::android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"FONT",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Element::A_8(__jni_impl::android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"A_8",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Element::RGB_565(__jni_impl::android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"RGB_565",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Element::RGB_888(__jni_impl::android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"RGB_888",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Element::RGBA_5551(__jni_impl::android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"RGBA_5551",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Element::RGBA_4444(__jni_impl::android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"RGBA_4444",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Element::RGBA_8888(__jni_impl::android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"RGBA_8888",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Element::F16_2(__jni_impl::android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"F16_2",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Element::F16_3(__jni_impl::android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"F16_3",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Element::F16_4(__jni_impl::android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"F16_4",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Element::F32_2(__jni_impl::android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"F32_2",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Element::F32_3(__jni_impl::android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"F32_3",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Element::F32_4(__jni_impl::android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"F32_4",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Element::F64_2(__jni_impl::android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"F64_2",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Element::F64_3(__jni_impl::android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"F64_3",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Element::F64_4(__jni_impl::android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"F64_4",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Element::U8_2(__jni_impl::android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"U8_2",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Element::U8_3(__jni_impl::android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"U8_3",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Element::U8_4(__jni_impl::android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"U8_4",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Element::I8_2(__jni_impl::android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"I8_2",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Element::I8_3(__jni_impl::android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"I8_3",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Element::I8_4(__jni_impl::android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"I8_4",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Element::U16_2(__jni_impl::android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"U16_2",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Element::U16_3(__jni_impl::android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"U16_3",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Element::U16_4(__jni_impl::android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"U16_4",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Element::I16_2(__jni_impl::android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"I16_2",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Element::I16_3(__jni_impl::android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"I16_3",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Element::I16_4(__jni_impl::android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"I16_4",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Element::U32_2(__jni_impl::android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"U32_2",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Element::U32_3(__jni_impl::android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"U32_3",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Element::U32_4(__jni_impl::android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"U32_4",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Element::I32_2(__jni_impl::android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"I32_2",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Element::I32_3(__jni_impl::android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"I32_3",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Element::I32_4(__jni_impl::android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"I32_4",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Element::U64_2(__jni_impl::android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"U64_2",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Element::U64_3(__jni_impl::android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"U64_3",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Element::U64_4(__jni_impl::android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"U64_4",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Element::I64_2(__jni_impl::android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"I64_2",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Element::I64_3(__jni_impl::android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"I64_3",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Element::I64_4(__jni_impl::android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"I64_4",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Element::YUV(__jni_impl::android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"YUV",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Element::MATRIX_4X4(__jni_impl::android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"MATRIX_4X4",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Element::MATRIX4X4(__jni_impl::android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"MATRIX4X4",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Element::MATRIX_3X3(__jni_impl::android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"MATRIX_3X3",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Element::MATRIX_2X2(__jni_impl::android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"MATRIX_2X2",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Element::createVector(__jni_impl::android::renderscript::RenderScript arg0, __jni_impl::android::renderscript::Element_DataType arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"createVector",
			"(Landroid/renderscript/RenderScript;Landroid/renderscript/Element$DataType;I)Landroid/renderscript/Element;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2);
	}
	QAndroidJniObject Element::createPixel(__jni_impl::android::renderscript::RenderScript arg0, __jni_impl::android::renderscript::Element_DataType arg1, __jni_impl::android::renderscript::Element_DataKind arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element",
			"createPixel",
			"(Landroid/renderscript/RenderScript;Landroid/renderscript/Element$DataType;Landroid/renderscript/Element$DataKind;)Landroid/renderscript/Element;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	jboolean Element::isCompatible(__jni_impl::android::renderscript::Element arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isCompatible",
			"(Landroid/renderscript/Element;)Z",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Element::getDataType()
	{
		return __thiz.callObjectMethod(
			"getDataType",
			"()Landroid/renderscript/Element$DataType;");
	}
} // namespace __jni_impl::android::renderscript

namespace android::renderscript
{
	class Element : public __jni_impl::android::renderscript::Element
	{
	public:
		Element(QAndroidJniObject obj) { __thiz = obj; }
		Element()
		{
			__constructor();
		}
	};
} // namespace android::renderscript

#endif // ANDROID_RENDERSCRIPT_ELEMENT

