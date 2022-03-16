#include "../../JByteArray.hpp"
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
	
	// Constructors
	FieldPacker::FieldPacker(JByteArray arg0)
		: JObject(
			"android.renderscript.FieldPacker",
			"([B)V",
			arg0.object<jbyteArray>()
		) {}
	FieldPacker::FieldPacker(jint arg0)
		: JObject(
			"android.renderscript.FieldPacker",
			"(I)V",
			arg0
		) {}
	
	// Methods
	void FieldPacker::addBoolean(jboolean arg0) const
	{
		callMethod<void>(
			"addBoolean",
			"(Z)V",
			arg0
		);
	}
	void FieldPacker::addF32(android::renderscript::Float2 arg0) const
	{
		callMethod<void>(
			"addF32",
			"(Landroid/renderscript/Float2;)V",
			arg0.object()
		);
	}
	void FieldPacker::addF32(android::renderscript::Float3 arg0) const
	{
		callMethod<void>(
			"addF32",
			"(Landroid/renderscript/Float3;)V",
			arg0.object()
		);
	}
	void FieldPacker::addF32(android::renderscript::Float4 arg0) const
	{
		callMethod<void>(
			"addF32",
			"(Landroid/renderscript/Float4;)V",
			arg0.object()
		);
	}
	void FieldPacker::addF32(jfloat arg0) const
	{
		callMethod<void>(
			"addF32",
			"(F)V",
			arg0
		);
	}
	void FieldPacker::addF64(android::renderscript::Double2 arg0) const
	{
		callMethod<void>(
			"addF64",
			"(Landroid/renderscript/Double2;)V",
			arg0.object()
		);
	}
	void FieldPacker::addF64(android::renderscript::Double3 arg0) const
	{
		callMethod<void>(
			"addF64",
			"(Landroid/renderscript/Double3;)V",
			arg0.object()
		);
	}
	void FieldPacker::addF64(android::renderscript::Double4 arg0) const
	{
		callMethod<void>(
			"addF64",
			"(Landroid/renderscript/Double4;)V",
			arg0.object()
		);
	}
	void FieldPacker::addF64(jdouble arg0) const
	{
		callMethod<void>(
			"addF64",
			"(D)V",
			arg0
		);
	}
	void FieldPacker::addI16(android::renderscript::Short2 arg0) const
	{
		callMethod<void>(
			"addI16",
			"(Landroid/renderscript/Short2;)V",
			arg0.object()
		);
	}
	void FieldPacker::addI16(android::renderscript::Short3 arg0) const
	{
		callMethod<void>(
			"addI16",
			"(Landroid/renderscript/Short3;)V",
			arg0.object()
		);
	}
	void FieldPacker::addI16(android::renderscript::Short4 arg0) const
	{
		callMethod<void>(
			"addI16",
			"(Landroid/renderscript/Short4;)V",
			arg0.object()
		);
	}
	void FieldPacker::addI16(jshort arg0) const
	{
		callMethod<void>(
			"addI16",
			"(S)V",
			arg0
		);
	}
	void FieldPacker::addI32(android::renderscript::Int2 arg0) const
	{
		callMethod<void>(
			"addI32",
			"(Landroid/renderscript/Int2;)V",
			arg0.object()
		);
	}
	void FieldPacker::addI32(android::renderscript::Int3 arg0) const
	{
		callMethod<void>(
			"addI32",
			"(Landroid/renderscript/Int3;)V",
			arg0.object()
		);
	}
	void FieldPacker::addI32(android::renderscript::Int4 arg0) const
	{
		callMethod<void>(
			"addI32",
			"(Landroid/renderscript/Int4;)V",
			arg0.object()
		);
	}
	void FieldPacker::addI32(jint arg0) const
	{
		callMethod<void>(
			"addI32",
			"(I)V",
			arg0
		);
	}
	void FieldPacker::addI64(android::renderscript::Long2 arg0) const
	{
		callMethod<void>(
			"addI64",
			"(Landroid/renderscript/Long2;)V",
			arg0.object()
		);
	}
	void FieldPacker::addI64(android::renderscript::Long3 arg0) const
	{
		callMethod<void>(
			"addI64",
			"(Landroid/renderscript/Long3;)V",
			arg0.object()
		);
	}
	void FieldPacker::addI64(android::renderscript::Long4 arg0) const
	{
		callMethod<void>(
			"addI64",
			"(Landroid/renderscript/Long4;)V",
			arg0.object()
		);
	}
	void FieldPacker::addI64(jlong arg0) const
	{
		callMethod<void>(
			"addI64",
			"(J)V",
			arg0
		);
	}
	void FieldPacker::addI8(android::renderscript::Byte2 arg0) const
	{
		callMethod<void>(
			"addI8",
			"(Landroid/renderscript/Byte2;)V",
			arg0.object()
		);
	}
	void FieldPacker::addI8(android::renderscript::Byte3 arg0) const
	{
		callMethod<void>(
			"addI8",
			"(Landroid/renderscript/Byte3;)V",
			arg0.object()
		);
	}
	void FieldPacker::addI8(android::renderscript::Byte4 arg0) const
	{
		callMethod<void>(
			"addI8",
			"(Landroid/renderscript/Byte4;)V",
			arg0.object()
		);
	}
	void FieldPacker::addI8(jbyte arg0) const
	{
		callMethod<void>(
			"addI8",
			"(B)V",
			arg0
		);
	}
	void FieldPacker::addMatrix(android::renderscript::Matrix2f arg0) const
	{
		callMethod<void>(
			"addMatrix",
			"(Landroid/renderscript/Matrix2f;)V",
			arg0.object()
		);
	}
	void FieldPacker::addMatrix(android::renderscript::Matrix3f arg0) const
	{
		callMethod<void>(
			"addMatrix",
			"(Landroid/renderscript/Matrix3f;)V",
			arg0.object()
		);
	}
	void FieldPacker::addMatrix(android::renderscript::Matrix4f arg0) const
	{
		callMethod<void>(
			"addMatrix",
			"(Landroid/renderscript/Matrix4f;)V",
			arg0.object()
		);
	}
	void FieldPacker::addObj(android::renderscript::BaseObj arg0) const
	{
		callMethod<void>(
			"addObj",
			"(Landroid/renderscript/BaseObj;)V",
			arg0.object()
		);
	}
	void FieldPacker::addU16(android::renderscript::Int2 arg0) const
	{
		callMethod<void>(
			"addU16",
			"(Landroid/renderscript/Int2;)V",
			arg0.object()
		);
	}
	void FieldPacker::addU16(android::renderscript::Int3 arg0) const
	{
		callMethod<void>(
			"addU16",
			"(Landroid/renderscript/Int3;)V",
			arg0.object()
		);
	}
	void FieldPacker::addU16(android::renderscript::Int4 arg0) const
	{
		callMethod<void>(
			"addU16",
			"(Landroid/renderscript/Int4;)V",
			arg0.object()
		);
	}
	void FieldPacker::addU16(jint arg0) const
	{
		callMethod<void>(
			"addU16",
			"(I)V",
			arg0
		);
	}
	void FieldPacker::addU32(android::renderscript::Long2 arg0) const
	{
		callMethod<void>(
			"addU32",
			"(Landroid/renderscript/Long2;)V",
			arg0.object()
		);
	}
	void FieldPacker::addU32(android::renderscript::Long3 arg0) const
	{
		callMethod<void>(
			"addU32",
			"(Landroid/renderscript/Long3;)V",
			arg0.object()
		);
	}
	void FieldPacker::addU32(android::renderscript::Long4 arg0) const
	{
		callMethod<void>(
			"addU32",
			"(Landroid/renderscript/Long4;)V",
			arg0.object()
		);
	}
	void FieldPacker::addU32(jlong arg0) const
	{
		callMethod<void>(
			"addU32",
			"(J)V",
			arg0
		);
	}
	void FieldPacker::addU64(android::renderscript::Long2 arg0) const
	{
		callMethod<void>(
			"addU64",
			"(Landroid/renderscript/Long2;)V",
			arg0.object()
		);
	}
	void FieldPacker::addU64(android::renderscript::Long3 arg0) const
	{
		callMethod<void>(
			"addU64",
			"(Landroid/renderscript/Long3;)V",
			arg0.object()
		);
	}
	void FieldPacker::addU64(android::renderscript::Long4 arg0) const
	{
		callMethod<void>(
			"addU64",
			"(Landroid/renderscript/Long4;)V",
			arg0.object()
		);
	}
	void FieldPacker::addU64(jlong arg0) const
	{
		callMethod<void>(
			"addU64",
			"(J)V",
			arg0
		);
	}
	void FieldPacker::addU8(android::renderscript::Short2 arg0) const
	{
		callMethod<void>(
			"addU8",
			"(Landroid/renderscript/Short2;)V",
			arg0.object()
		);
	}
	void FieldPacker::addU8(android::renderscript::Short3 arg0) const
	{
		callMethod<void>(
			"addU8",
			"(Landroid/renderscript/Short3;)V",
			arg0.object()
		);
	}
	void FieldPacker::addU8(android::renderscript::Short4 arg0) const
	{
		callMethod<void>(
			"addU8",
			"(Landroid/renderscript/Short4;)V",
			arg0.object()
		);
	}
	void FieldPacker::addU8(jshort arg0) const
	{
		callMethod<void>(
			"addU8",
			"(S)V",
			arg0
		);
	}
	void FieldPacker::align(jint arg0) const
	{
		callMethod<void>(
			"align",
			"(I)V",
			arg0
		);
	}
	JByteArray FieldPacker::getData() const
	{
		return callObjectMethod(
			"getData",
			"()[B"
		);
	}
	void FieldPacker::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	void FieldPacker::reset(jint arg0) const
	{
		callMethod<void>(
			"reset",
			"(I)V",
			arg0
		);
	}
	void FieldPacker::skip(jint arg0) const
	{
		callMethod<void>(
			"skip",
			"(I)V",
			arg0
		);
	}
	jboolean FieldPacker::subBoolean() const
	{
		return callMethod<jboolean>(
			"subBoolean",
			"()Z"
		);
	}
	android::renderscript::Byte2 FieldPacker::subByte2() const
	{
		return callObjectMethod(
			"subByte2",
			"()Landroid/renderscript/Byte2;"
		);
	}
	android::renderscript::Byte3 FieldPacker::subByte3() const
	{
		return callObjectMethod(
			"subByte3",
			"()Landroid/renderscript/Byte3;"
		);
	}
	android::renderscript::Byte4 FieldPacker::subByte4() const
	{
		return callObjectMethod(
			"subByte4",
			"()Landroid/renderscript/Byte4;"
		);
	}
	android::renderscript::Double2 FieldPacker::subDouble2() const
	{
		return callObjectMethod(
			"subDouble2",
			"()Landroid/renderscript/Double2;"
		);
	}
	android::renderscript::Double3 FieldPacker::subDouble3() const
	{
		return callObjectMethod(
			"subDouble3",
			"()Landroid/renderscript/Double3;"
		);
	}
	android::renderscript::Double4 FieldPacker::subDouble4() const
	{
		return callObjectMethod(
			"subDouble4",
			"()Landroid/renderscript/Double4;"
		);
	}
	jfloat FieldPacker::subF32() const
	{
		return callMethod<jfloat>(
			"subF32",
			"()F"
		);
	}
	jdouble FieldPacker::subF64() const
	{
		return callMethod<jdouble>(
			"subF64",
			"()D"
		);
	}
	android::renderscript::Float2 FieldPacker::subFloat2() const
	{
		return callObjectMethod(
			"subFloat2",
			"()Landroid/renderscript/Float2;"
		);
	}
	android::renderscript::Float3 FieldPacker::subFloat3() const
	{
		return callObjectMethod(
			"subFloat3",
			"()Landroid/renderscript/Float3;"
		);
	}
	android::renderscript::Float4 FieldPacker::subFloat4() const
	{
		return callObjectMethod(
			"subFloat4",
			"()Landroid/renderscript/Float4;"
		);
	}
	jshort FieldPacker::subI16() const
	{
		return callMethod<jshort>(
			"subI16",
			"()S"
		);
	}
	jint FieldPacker::subI32() const
	{
		return callMethod<jint>(
			"subI32",
			"()I"
		);
	}
	jlong FieldPacker::subI64() const
	{
		return callMethod<jlong>(
			"subI64",
			"()J"
		);
	}
	jbyte FieldPacker::subI8() const
	{
		return callMethod<jbyte>(
			"subI8",
			"()B"
		);
	}
	android::renderscript::Int2 FieldPacker::subInt2() const
	{
		return callObjectMethod(
			"subInt2",
			"()Landroid/renderscript/Int2;"
		);
	}
	android::renderscript::Int3 FieldPacker::subInt3() const
	{
		return callObjectMethod(
			"subInt3",
			"()Landroid/renderscript/Int3;"
		);
	}
	android::renderscript::Int4 FieldPacker::subInt4() const
	{
		return callObjectMethod(
			"subInt4",
			"()Landroid/renderscript/Int4;"
		);
	}
	android::renderscript::Long2 FieldPacker::subLong2() const
	{
		return callObjectMethod(
			"subLong2",
			"()Landroid/renderscript/Long2;"
		);
	}
	android::renderscript::Long3 FieldPacker::subLong3() const
	{
		return callObjectMethod(
			"subLong3",
			"()Landroid/renderscript/Long3;"
		);
	}
	android::renderscript::Long4 FieldPacker::subLong4() const
	{
		return callObjectMethod(
			"subLong4",
			"()Landroid/renderscript/Long4;"
		);
	}
	android::renderscript::Matrix2f FieldPacker::subMatrix2f() const
	{
		return callObjectMethod(
			"subMatrix2f",
			"()Landroid/renderscript/Matrix2f;"
		);
	}
	android::renderscript::Matrix3f FieldPacker::subMatrix3f() const
	{
		return callObjectMethod(
			"subMatrix3f",
			"()Landroid/renderscript/Matrix3f;"
		);
	}
	android::renderscript::Matrix4f FieldPacker::subMatrix4f() const
	{
		return callObjectMethod(
			"subMatrix4f",
			"()Landroid/renderscript/Matrix4f;"
		);
	}
	android::renderscript::Short2 FieldPacker::subShort2() const
	{
		return callObjectMethod(
			"subShort2",
			"()Landroid/renderscript/Short2;"
		);
	}
	android::renderscript::Short3 FieldPacker::subShort3() const
	{
		return callObjectMethod(
			"subShort3",
			"()Landroid/renderscript/Short3;"
		);
	}
	android::renderscript::Short4 FieldPacker::subShort4() const
	{
		return callObjectMethod(
			"subShort4",
			"()Landroid/renderscript/Short4;"
		);
	}
	void FieldPacker::subalign(jint arg0) const
	{
		callMethod<void>(
			"subalign",
			"(I)V",
			arg0
		);
	}
} // namespace android::renderscript

