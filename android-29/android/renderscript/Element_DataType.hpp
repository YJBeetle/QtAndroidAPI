#pragma once

#ifndef ANDROID_RENDERSCRIPT_ELEMENT_DATATYPE
#define ANDROID_RENDERSCRIPT_ELEMENT_DATATYPE

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace __jni_impl::android::renderscript
{
	class Element_DataType : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject BOOLEAN();
		static QAndroidJniObject FLOAT_16();
		static QAndroidJniObject FLOAT_32();
		static QAndroidJniObject FLOAT_64();
		static QAndroidJniObject MATRIX_2X2();
		static QAndroidJniObject MATRIX_3X3();
		static QAndroidJniObject MATRIX_4X4();
		static QAndroidJniObject NONE();
		static QAndroidJniObject RS_ALLOCATION();
		static QAndroidJniObject RS_ELEMENT();
		static QAndroidJniObject RS_FONT();
		static QAndroidJniObject RS_MESH();
		static QAndroidJniObject RS_PROGRAM_FRAGMENT();
		static QAndroidJniObject RS_PROGRAM_RASTER();
		static QAndroidJniObject RS_PROGRAM_STORE();
		static QAndroidJniObject RS_PROGRAM_VERTEX();
		static QAndroidJniObject RS_SAMPLER();
		static QAndroidJniObject RS_SCRIPT();
		static QAndroidJniObject RS_TYPE();
		static QAndroidJniObject SIGNED_16();
		static QAndroidJniObject SIGNED_32();
		static QAndroidJniObject SIGNED_64();
		static QAndroidJniObject SIGNED_8();
		static QAndroidJniObject UNSIGNED_16();
		static QAndroidJniObject UNSIGNED_32();
		static QAndroidJniObject UNSIGNED_4_4_4_4();
		static QAndroidJniObject UNSIGNED_5_5_5_1();
		static QAndroidJniObject UNSIGNED_5_6_5();
		static QAndroidJniObject UNSIGNED_64();
		static QAndroidJniObject UNSIGNED_8();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		static jarray values();
	};
} // namespace __jni_impl::android::renderscript


namespace __jni_impl::android::renderscript
{
	// Fields
	QAndroidJniObject Element_DataType::BOOLEAN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.renderscript.Element$DataType",
			"BOOLEAN",
			"Landroid/renderscript/Element$DataType;"
		);
	}
	QAndroidJniObject Element_DataType::FLOAT_16()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.renderscript.Element$DataType",
			"FLOAT_16",
			"Landroid/renderscript/Element$DataType;"
		);
	}
	QAndroidJniObject Element_DataType::FLOAT_32()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.renderscript.Element$DataType",
			"FLOAT_32",
			"Landroid/renderscript/Element$DataType;"
		);
	}
	QAndroidJniObject Element_DataType::FLOAT_64()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.renderscript.Element$DataType",
			"FLOAT_64",
			"Landroid/renderscript/Element$DataType;"
		);
	}
	QAndroidJniObject Element_DataType::MATRIX_2X2()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.renderscript.Element$DataType",
			"MATRIX_2X2",
			"Landroid/renderscript/Element$DataType;"
		);
	}
	QAndroidJniObject Element_DataType::MATRIX_3X3()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.renderscript.Element$DataType",
			"MATRIX_3X3",
			"Landroid/renderscript/Element$DataType;"
		);
	}
	QAndroidJniObject Element_DataType::MATRIX_4X4()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.renderscript.Element$DataType",
			"MATRIX_4X4",
			"Landroid/renderscript/Element$DataType;"
		);
	}
	QAndroidJniObject Element_DataType::NONE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.renderscript.Element$DataType",
			"NONE",
			"Landroid/renderscript/Element$DataType;"
		);
	}
	QAndroidJniObject Element_DataType::RS_ALLOCATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.renderscript.Element$DataType",
			"RS_ALLOCATION",
			"Landroid/renderscript/Element$DataType;"
		);
	}
	QAndroidJniObject Element_DataType::RS_ELEMENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.renderscript.Element$DataType",
			"RS_ELEMENT",
			"Landroid/renderscript/Element$DataType;"
		);
	}
	QAndroidJniObject Element_DataType::RS_FONT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.renderscript.Element$DataType",
			"RS_FONT",
			"Landroid/renderscript/Element$DataType;"
		);
	}
	QAndroidJniObject Element_DataType::RS_MESH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.renderscript.Element$DataType",
			"RS_MESH",
			"Landroid/renderscript/Element$DataType;"
		);
	}
	QAndroidJniObject Element_DataType::RS_PROGRAM_FRAGMENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.renderscript.Element$DataType",
			"RS_PROGRAM_FRAGMENT",
			"Landroid/renderscript/Element$DataType;"
		);
	}
	QAndroidJniObject Element_DataType::RS_PROGRAM_RASTER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.renderscript.Element$DataType",
			"RS_PROGRAM_RASTER",
			"Landroid/renderscript/Element$DataType;"
		);
	}
	QAndroidJniObject Element_DataType::RS_PROGRAM_STORE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.renderscript.Element$DataType",
			"RS_PROGRAM_STORE",
			"Landroid/renderscript/Element$DataType;"
		);
	}
	QAndroidJniObject Element_DataType::RS_PROGRAM_VERTEX()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.renderscript.Element$DataType",
			"RS_PROGRAM_VERTEX",
			"Landroid/renderscript/Element$DataType;"
		);
	}
	QAndroidJniObject Element_DataType::RS_SAMPLER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.renderscript.Element$DataType",
			"RS_SAMPLER",
			"Landroid/renderscript/Element$DataType;"
		);
	}
	QAndroidJniObject Element_DataType::RS_SCRIPT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.renderscript.Element$DataType",
			"RS_SCRIPT",
			"Landroid/renderscript/Element$DataType;"
		);
	}
	QAndroidJniObject Element_DataType::RS_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.renderscript.Element$DataType",
			"RS_TYPE",
			"Landroid/renderscript/Element$DataType;"
		);
	}
	QAndroidJniObject Element_DataType::SIGNED_16()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.renderscript.Element$DataType",
			"SIGNED_16",
			"Landroid/renderscript/Element$DataType;"
		);
	}
	QAndroidJniObject Element_DataType::SIGNED_32()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.renderscript.Element$DataType",
			"SIGNED_32",
			"Landroid/renderscript/Element$DataType;"
		);
	}
	QAndroidJniObject Element_DataType::SIGNED_64()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.renderscript.Element$DataType",
			"SIGNED_64",
			"Landroid/renderscript/Element$DataType;"
		);
	}
	QAndroidJniObject Element_DataType::SIGNED_8()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.renderscript.Element$DataType",
			"SIGNED_8",
			"Landroid/renderscript/Element$DataType;"
		);
	}
	QAndroidJniObject Element_DataType::UNSIGNED_16()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.renderscript.Element$DataType",
			"UNSIGNED_16",
			"Landroid/renderscript/Element$DataType;"
		);
	}
	QAndroidJniObject Element_DataType::UNSIGNED_32()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.renderscript.Element$DataType",
			"UNSIGNED_32",
			"Landroid/renderscript/Element$DataType;"
		);
	}
	QAndroidJniObject Element_DataType::UNSIGNED_4_4_4_4()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.renderscript.Element$DataType",
			"UNSIGNED_4_4_4_4",
			"Landroid/renderscript/Element$DataType;"
		);
	}
	QAndroidJniObject Element_DataType::UNSIGNED_5_5_5_1()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.renderscript.Element$DataType",
			"UNSIGNED_5_5_5_1",
			"Landroid/renderscript/Element$DataType;"
		);
	}
	QAndroidJniObject Element_DataType::UNSIGNED_5_6_5()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.renderscript.Element$DataType",
			"UNSIGNED_5_6_5",
			"Landroid/renderscript/Element$DataType;"
		);
	}
	QAndroidJniObject Element_DataType::UNSIGNED_64()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.renderscript.Element$DataType",
			"UNSIGNED_64",
			"Landroid/renderscript/Element$DataType;"
		);
	}
	QAndroidJniObject Element_DataType::UNSIGNED_8()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.renderscript.Element$DataType",
			"UNSIGNED_8",
			"Landroid/renderscript/Element$DataType;"
		);
	}
	
	// Constructors
	void Element_DataType::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.Element$DataType",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject Element_DataType::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element$DataType",
			"valueOf",
			"(Ljava/lang/String;)Landroid/renderscript/Element$DataType;",
			arg0
		);
	}
	QAndroidJniObject Element_DataType::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element$DataType",
			"valueOf",
			"(Ljava/lang/String;)Landroid/renderscript/Element$DataType;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray Element_DataType::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Element$DataType",
			"values",
			"()[Landroid/renderscript/Element$DataType;"
		).object<jarray>();
	}
} // namespace __jni_impl::android::renderscript

namespace android::renderscript
{
	class Element_DataType : public __jni_impl::android::renderscript::Element_DataType
	{
	public:
		Element_DataType(QAndroidJniObject obj) { __thiz = obj; }
		Element_DataType()
		{
			__constructor();
		}
	};
} // namespace android::renderscript

#endif // ANDROID_RENDERSCRIPT_ELEMENT_DATATYPE

