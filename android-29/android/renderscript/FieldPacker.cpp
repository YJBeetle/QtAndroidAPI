#include "./BaseObj.hpp"
#include "./Byte2.hpp"
#include "./Byte3.hpp"
#include "./Byte4.hpp"
#include "./Double2.hpp"
#include "./Double3.hpp"
#include "./Double4.hpp"
#include "./Float2.hpp"
#include "./Float3.hpp"
#include "./Float4.hpp"
#include "./Int2.hpp"
#include "./Int3.hpp"
#include "./Int4.hpp"
#include "./Long2.hpp"
#include "./Long3.hpp"
#include "./Long4.hpp"
#include "./Matrix2f.hpp"
#include "./Matrix3f.hpp"
#include "./Matrix4f.hpp"
#include "./Short2.hpp"
#include "./Short3.hpp"
#include "./Short4.hpp"
#include "./FieldPacker.hpp"

namespace android::renderscript
{
	// Fields
	
	FieldPacker::FieldPacker(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	FieldPacker::FieldPacker(jbyteArray arg0)
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.FieldPacker",
			"([B)V",
			arg0
		);
	}
	FieldPacker::FieldPacker(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.FieldPacker",
			"(I)V",
			arg0
		);
	}
	
	// Methods
	void FieldPacker::addBoolean(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"addBoolean",
			"(Z)V",
			arg0
		);
	}
	void FieldPacker::addF32(android::renderscript::Float2 arg0)
	{
		__thiz.callMethod<void>(
			"addF32",
			"(Landroid/renderscript/Float2;)V",
			arg0.__jniObject().object()
		);
	}
	void FieldPacker::addF32(android::renderscript::Float3 arg0)
	{
		__thiz.callMethod<void>(
			"addF32",
			"(Landroid/renderscript/Float3;)V",
			arg0.__jniObject().object()
		);
	}
	void FieldPacker::addF32(android::renderscript::Float4 arg0)
	{
		__thiz.callMethod<void>(
			"addF32",
			"(Landroid/renderscript/Float4;)V",
			arg0.__jniObject().object()
		);
	}
	void FieldPacker::addF32(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"addF32",
			"(F)V",
			arg0
		);
	}
	void FieldPacker::addF64(android::renderscript::Double2 arg0)
	{
		__thiz.callMethod<void>(
			"addF64",
			"(Landroid/renderscript/Double2;)V",
			arg0.__jniObject().object()
		);
	}
	void FieldPacker::addF64(android::renderscript::Double3 arg0)
	{
		__thiz.callMethod<void>(
			"addF64",
			"(Landroid/renderscript/Double3;)V",
			arg0.__jniObject().object()
		);
	}
	void FieldPacker::addF64(android::renderscript::Double4 arg0)
	{
		__thiz.callMethod<void>(
			"addF64",
			"(Landroid/renderscript/Double4;)V",
			arg0.__jniObject().object()
		);
	}
	void FieldPacker::addF64(jdouble arg0)
	{
		__thiz.callMethod<void>(
			"addF64",
			"(D)V",
			arg0
		);
	}
	void FieldPacker::addI16(android::renderscript::Short2 arg0)
	{
		__thiz.callMethod<void>(
			"addI16",
			"(Landroid/renderscript/Short2;)V",
			arg0.__jniObject().object()
		);
	}
	void FieldPacker::addI16(android::renderscript::Short3 arg0)
	{
		__thiz.callMethod<void>(
			"addI16",
			"(Landroid/renderscript/Short3;)V",
			arg0.__jniObject().object()
		);
	}
	void FieldPacker::addI16(android::renderscript::Short4 arg0)
	{
		__thiz.callMethod<void>(
			"addI16",
			"(Landroid/renderscript/Short4;)V",
			arg0.__jniObject().object()
		);
	}
	void FieldPacker::addI16(jshort arg0)
	{
		__thiz.callMethod<void>(
			"addI16",
			"(S)V",
			arg0
		);
	}
	void FieldPacker::addI32(android::renderscript::Int2 arg0)
	{
		__thiz.callMethod<void>(
			"addI32",
			"(Landroid/renderscript/Int2;)V",
			arg0.__jniObject().object()
		);
	}
	void FieldPacker::addI32(android::renderscript::Int3 arg0)
	{
		__thiz.callMethod<void>(
			"addI32",
			"(Landroid/renderscript/Int3;)V",
			arg0.__jniObject().object()
		);
	}
	void FieldPacker::addI32(android::renderscript::Int4 arg0)
	{
		__thiz.callMethod<void>(
			"addI32",
			"(Landroid/renderscript/Int4;)V",
			arg0.__jniObject().object()
		);
	}
	void FieldPacker::addI32(jint arg0)
	{
		__thiz.callMethod<void>(
			"addI32",
			"(I)V",
			arg0
		);
	}
	void FieldPacker::addI64(android::renderscript::Long2 arg0)
	{
		__thiz.callMethod<void>(
			"addI64",
			"(Landroid/renderscript/Long2;)V",
			arg0.__jniObject().object()
		);
	}
	void FieldPacker::addI64(android::renderscript::Long3 arg0)
	{
		__thiz.callMethod<void>(
			"addI64",
			"(Landroid/renderscript/Long3;)V",
			arg0.__jniObject().object()
		);
	}
	void FieldPacker::addI64(android::renderscript::Long4 arg0)
	{
		__thiz.callMethod<void>(
			"addI64",
			"(Landroid/renderscript/Long4;)V",
			arg0.__jniObject().object()
		);
	}
	void FieldPacker::addI64(jlong arg0)
	{
		__thiz.callMethod<void>(
			"addI64",
			"(J)V",
			arg0
		);
	}
	void FieldPacker::addI8(android::renderscript::Byte2 arg0)
	{
		__thiz.callMethod<void>(
			"addI8",
			"(Landroid/renderscript/Byte2;)V",
			arg0.__jniObject().object()
		);
	}
	void FieldPacker::addI8(android::renderscript::Byte3 arg0)
	{
		__thiz.callMethod<void>(
			"addI8",
			"(Landroid/renderscript/Byte3;)V",
			arg0.__jniObject().object()
		);
	}
	void FieldPacker::addI8(android::renderscript::Byte4 arg0)
	{
		__thiz.callMethod<void>(
			"addI8",
			"(Landroid/renderscript/Byte4;)V",
			arg0.__jniObject().object()
		);
	}
	void FieldPacker::addI8(jbyte arg0)
	{
		__thiz.callMethod<void>(
			"addI8",
			"(B)V",
			arg0
		);
	}
	void FieldPacker::addMatrix(android::renderscript::Matrix2f arg0)
	{
		__thiz.callMethod<void>(
			"addMatrix",
			"(Landroid/renderscript/Matrix2f;)V",
			arg0.__jniObject().object()
		);
	}
	void FieldPacker::addMatrix(android::renderscript::Matrix3f arg0)
	{
		__thiz.callMethod<void>(
			"addMatrix",
			"(Landroid/renderscript/Matrix3f;)V",
			arg0.__jniObject().object()
		);
	}
	void FieldPacker::addMatrix(android::renderscript::Matrix4f arg0)
	{
		__thiz.callMethod<void>(
			"addMatrix",
			"(Landroid/renderscript/Matrix4f;)V",
			arg0.__jniObject().object()
		);
	}
	void FieldPacker::addObj(android::renderscript::BaseObj arg0)
	{
		__thiz.callMethod<void>(
			"addObj",
			"(Landroid/renderscript/BaseObj;)V",
			arg0.__jniObject().object()
		);
	}
	void FieldPacker::addU16(android::renderscript::Int2 arg0)
	{
		__thiz.callMethod<void>(
			"addU16",
			"(Landroid/renderscript/Int2;)V",
			arg0.__jniObject().object()
		);
	}
	void FieldPacker::addU16(android::renderscript::Int3 arg0)
	{
		__thiz.callMethod<void>(
			"addU16",
			"(Landroid/renderscript/Int3;)V",
			arg0.__jniObject().object()
		);
	}
	void FieldPacker::addU16(android::renderscript::Int4 arg0)
	{
		__thiz.callMethod<void>(
			"addU16",
			"(Landroid/renderscript/Int4;)V",
			arg0.__jniObject().object()
		);
	}
	void FieldPacker::addU16(jint arg0)
	{
		__thiz.callMethod<void>(
			"addU16",
			"(I)V",
			arg0
		);
	}
	void FieldPacker::addU32(android::renderscript::Long2 arg0)
	{
		__thiz.callMethod<void>(
			"addU32",
			"(Landroid/renderscript/Long2;)V",
			arg0.__jniObject().object()
		);
	}
	void FieldPacker::addU32(android::renderscript::Long3 arg0)
	{
		__thiz.callMethod<void>(
			"addU32",
			"(Landroid/renderscript/Long3;)V",
			arg0.__jniObject().object()
		);
	}
	void FieldPacker::addU32(android::renderscript::Long4 arg0)
	{
		__thiz.callMethod<void>(
			"addU32",
			"(Landroid/renderscript/Long4;)V",
			arg0.__jniObject().object()
		);
	}
	void FieldPacker::addU32(jlong arg0)
	{
		__thiz.callMethod<void>(
			"addU32",
			"(J)V",
			arg0
		);
	}
	void FieldPacker::addU64(android::renderscript::Long2 arg0)
	{
		__thiz.callMethod<void>(
			"addU64",
			"(Landroid/renderscript/Long2;)V",
			arg0.__jniObject().object()
		);
	}
	void FieldPacker::addU64(android::renderscript::Long3 arg0)
	{
		__thiz.callMethod<void>(
			"addU64",
			"(Landroid/renderscript/Long3;)V",
			arg0.__jniObject().object()
		);
	}
	void FieldPacker::addU64(android::renderscript::Long4 arg0)
	{
		__thiz.callMethod<void>(
			"addU64",
			"(Landroid/renderscript/Long4;)V",
			arg0.__jniObject().object()
		);
	}
	void FieldPacker::addU64(jlong arg0)
	{
		__thiz.callMethod<void>(
			"addU64",
			"(J)V",
			arg0
		);
	}
	void FieldPacker::addU8(android::renderscript::Short2 arg0)
	{
		__thiz.callMethod<void>(
			"addU8",
			"(Landroid/renderscript/Short2;)V",
			arg0.__jniObject().object()
		);
	}
	void FieldPacker::addU8(android::renderscript::Short3 arg0)
	{
		__thiz.callMethod<void>(
			"addU8",
			"(Landroid/renderscript/Short3;)V",
			arg0.__jniObject().object()
		);
	}
	void FieldPacker::addU8(android::renderscript::Short4 arg0)
	{
		__thiz.callMethod<void>(
			"addU8",
			"(Landroid/renderscript/Short4;)V",
			arg0.__jniObject().object()
		);
	}
	void FieldPacker::addU8(jshort arg0)
	{
		__thiz.callMethod<void>(
			"addU8",
			"(S)V",
			arg0
		);
	}
	void FieldPacker::align(jint arg0)
	{
		__thiz.callMethod<void>(
			"align",
			"(I)V",
			arg0
		);
	}
	jbyteArray FieldPacker::getData()
	{
		return __thiz.callObjectMethod(
			"getData",
			"()[B"
		).object<jbyteArray>();
	}
	void FieldPacker::reset()
	{
		__thiz.callMethod<void>(
			"reset",
			"()V"
		);
	}
	void FieldPacker::reset(jint arg0)
	{
		__thiz.callMethod<void>(
			"reset",
			"(I)V",
			arg0
		);
	}
	void FieldPacker::skip(jint arg0)
	{
		__thiz.callMethod<void>(
			"skip",
			"(I)V",
			arg0
		);
	}
	jboolean FieldPacker::subBoolean()
	{
		return __thiz.callMethod<jboolean>(
			"subBoolean",
			"()Z"
		);
	}
	QAndroidJniObject FieldPacker::subByte2()
	{
		return __thiz.callObjectMethod(
			"subByte2",
			"()Landroid/renderscript/Byte2;"
		);
	}
	QAndroidJniObject FieldPacker::subByte3()
	{
		return __thiz.callObjectMethod(
			"subByte3",
			"()Landroid/renderscript/Byte3;"
		);
	}
	QAndroidJniObject FieldPacker::subByte4()
	{
		return __thiz.callObjectMethod(
			"subByte4",
			"()Landroid/renderscript/Byte4;"
		);
	}
	QAndroidJniObject FieldPacker::subDouble2()
	{
		return __thiz.callObjectMethod(
			"subDouble2",
			"()Landroid/renderscript/Double2;"
		);
	}
	QAndroidJniObject FieldPacker::subDouble3()
	{
		return __thiz.callObjectMethod(
			"subDouble3",
			"()Landroid/renderscript/Double3;"
		);
	}
	QAndroidJniObject FieldPacker::subDouble4()
	{
		return __thiz.callObjectMethod(
			"subDouble4",
			"()Landroid/renderscript/Double4;"
		);
	}
	jfloat FieldPacker::subF32()
	{
		return __thiz.callMethod<jfloat>(
			"subF32",
			"()F"
		);
	}
	jdouble FieldPacker::subF64()
	{
		return __thiz.callMethod<jdouble>(
			"subF64",
			"()D"
		);
	}
	QAndroidJniObject FieldPacker::subFloat2()
	{
		return __thiz.callObjectMethod(
			"subFloat2",
			"()Landroid/renderscript/Float2;"
		);
	}
	QAndroidJniObject FieldPacker::subFloat3()
	{
		return __thiz.callObjectMethod(
			"subFloat3",
			"()Landroid/renderscript/Float3;"
		);
	}
	QAndroidJniObject FieldPacker::subFloat4()
	{
		return __thiz.callObjectMethod(
			"subFloat4",
			"()Landroid/renderscript/Float4;"
		);
	}
	jshort FieldPacker::subI16()
	{
		return __thiz.callMethod<jshort>(
			"subI16",
			"()S"
		);
	}
	jint FieldPacker::subI32()
	{
		return __thiz.callMethod<jint>(
			"subI32",
			"()I"
		);
	}
	jlong FieldPacker::subI64()
	{
		return __thiz.callMethod<jlong>(
			"subI64",
			"()J"
		);
	}
	jbyte FieldPacker::subI8()
	{
		return __thiz.callMethod<jbyte>(
			"subI8",
			"()B"
		);
	}
	QAndroidJniObject FieldPacker::subInt2()
	{
		return __thiz.callObjectMethod(
			"subInt2",
			"()Landroid/renderscript/Int2;"
		);
	}
	QAndroidJniObject FieldPacker::subInt3()
	{
		return __thiz.callObjectMethod(
			"subInt3",
			"()Landroid/renderscript/Int3;"
		);
	}
	QAndroidJniObject FieldPacker::subInt4()
	{
		return __thiz.callObjectMethod(
			"subInt4",
			"()Landroid/renderscript/Int4;"
		);
	}
	QAndroidJniObject FieldPacker::subLong2()
	{
		return __thiz.callObjectMethod(
			"subLong2",
			"()Landroid/renderscript/Long2;"
		);
	}
	QAndroidJniObject FieldPacker::subLong3()
	{
		return __thiz.callObjectMethod(
			"subLong3",
			"()Landroid/renderscript/Long3;"
		);
	}
	QAndroidJniObject FieldPacker::subLong4()
	{
		return __thiz.callObjectMethod(
			"subLong4",
			"()Landroid/renderscript/Long4;"
		);
	}
	QAndroidJniObject FieldPacker::subMatrix2f()
	{
		return __thiz.callObjectMethod(
			"subMatrix2f",
			"()Landroid/renderscript/Matrix2f;"
		);
	}
	QAndroidJniObject FieldPacker::subMatrix3f()
	{
		return __thiz.callObjectMethod(
			"subMatrix3f",
			"()Landroid/renderscript/Matrix3f;"
		);
	}
	QAndroidJniObject FieldPacker::subMatrix4f()
	{
		return __thiz.callObjectMethod(
			"subMatrix4f",
			"()Landroid/renderscript/Matrix4f;"
		);
	}
	QAndroidJniObject FieldPacker::subShort2()
	{
		return __thiz.callObjectMethod(
			"subShort2",
			"()Landroid/renderscript/Short2;"
		);
	}
	QAndroidJniObject FieldPacker::subShort3()
	{
		return __thiz.callObjectMethod(
			"subShort3",
			"()Landroid/renderscript/Short3;"
		);
	}
	QAndroidJniObject FieldPacker::subShort4()
	{
		return __thiz.callObjectMethod(
			"subShort4",
			"()Landroid/renderscript/Short4;"
		);
	}
	void FieldPacker::subalign(jint arg0)
	{
		__thiz.callMethod<void>(
			"subalign",
			"(I)V",
			arg0
		);
	}
} // namespace android::renderscript

