#pragma once

#include "../../JByteArray.hpp"
#include "./BaseObj.def.hpp"
#include "./Byte2.def.hpp"
#include "./Byte3.def.hpp"
#include "./Byte4.def.hpp"
#include "./Double2.def.hpp"
#include "./Double3.def.hpp"
#include "./Double4.def.hpp"
#include "./Float2.def.hpp"
#include "./Float3.def.hpp"
#include "./Float4.def.hpp"
#include "./Int2.def.hpp"
#include "./Int3.def.hpp"
#include "./Int4.def.hpp"
#include "./Long2.def.hpp"
#include "./Long3.def.hpp"
#include "./Long4.def.hpp"
#include "./Matrix2f.def.hpp"
#include "./Matrix3f.def.hpp"
#include "./Matrix4f.def.hpp"
#include "./Short2.def.hpp"
#include "./Short3.def.hpp"
#include "./Short4.def.hpp"
#include "./FieldPacker.def.hpp"

namespace android::renderscript
{
	// Fields
	
	// Constructors
	inline FieldPacker::FieldPacker(JByteArray arg0)
		: JObject(
			"android.renderscript.FieldPacker",
			"([B)V",
			arg0.object<jbyteArray>()
		) {}
	inline FieldPacker::FieldPacker(jint arg0)
		: JObject(
			"android.renderscript.FieldPacker",
			"(I)V",
			arg0
		) {}
	
	// Methods
	inline void FieldPacker::addBoolean(jboolean arg0) const
	{
		callMethod<void>(
			"addBoolean",
			"(Z)V",
			arg0
		);
	}
	inline void FieldPacker::addF32(android::renderscript::Float2 arg0) const
	{
		callMethod<void>(
			"addF32",
			"(Landroid/renderscript/Float2;)V",
			arg0.object()
		);
	}
	inline void FieldPacker::addF32(android::renderscript::Float3 arg0) const
	{
		callMethod<void>(
			"addF32",
			"(Landroid/renderscript/Float3;)V",
			arg0.object()
		);
	}
	inline void FieldPacker::addF32(android::renderscript::Float4 arg0) const
	{
		callMethod<void>(
			"addF32",
			"(Landroid/renderscript/Float4;)V",
			arg0.object()
		);
	}
	inline void FieldPacker::addF32(jfloat arg0) const
	{
		callMethod<void>(
			"addF32",
			"(F)V",
			arg0
		);
	}
	inline void FieldPacker::addF64(android::renderscript::Double2 arg0) const
	{
		callMethod<void>(
			"addF64",
			"(Landroid/renderscript/Double2;)V",
			arg0.object()
		);
	}
	inline void FieldPacker::addF64(android::renderscript::Double3 arg0) const
	{
		callMethod<void>(
			"addF64",
			"(Landroid/renderscript/Double3;)V",
			arg0.object()
		);
	}
	inline void FieldPacker::addF64(android::renderscript::Double4 arg0) const
	{
		callMethod<void>(
			"addF64",
			"(Landroid/renderscript/Double4;)V",
			arg0.object()
		);
	}
	inline void FieldPacker::addF64(jdouble arg0) const
	{
		callMethod<void>(
			"addF64",
			"(D)V",
			arg0
		);
	}
	inline void FieldPacker::addI16(android::renderscript::Short2 arg0) const
	{
		callMethod<void>(
			"addI16",
			"(Landroid/renderscript/Short2;)V",
			arg0.object()
		);
	}
	inline void FieldPacker::addI16(android::renderscript::Short3 arg0) const
	{
		callMethod<void>(
			"addI16",
			"(Landroid/renderscript/Short3;)V",
			arg0.object()
		);
	}
	inline void FieldPacker::addI16(android::renderscript::Short4 arg0) const
	{
		callMethod<void>(
			"addI16",
			"(Landroid/renderscript/Short4;)V",
			arg0.object()
		);
	}
	inline void FieldPacker::addI16(jshort arg0) const
	{
		callMethod<void>(
			"addI16",
			"(S)V",
			arg0
		);
	}
	inline void FieldPacker::addI32(android::renderscript::Int2 arg0) const
	{
		callMethod<void>(
			"addI32",
			"(Landroid/renderscript/Int2;)V",
			arg0.object()
		);
	}
	inline void FieldPacker::addI32(android::renderscript::Int3 arg0) const
	{
		callMethod<void>(
			"addI32",
			"(Landroid/renderscript/Int3;)V",
			arg0.object()
		);
	}
	inline void FieldPacker::addI32(android::renderscript::Int4 arg0) const
	{
		callMethod<void>(
			"addI32",
			"(Landroid/renderscript/Int4;)V",
			arg0.object()
		);
	}
	inline void FieldPacker::addI32(jint arg0) const
	{
		callMethod<void>(
			"addI32",
			"(I)V",
			arg0
		);
	}
	inline void FieldPacker::addI64(android::renderscript::Long2 arg0) const
	{
		callMethod<void>(
			"addI64",
			"(Landroid/renderscript/Long2;)V",
			arg0.object()
		);
	}
	inline void FieldPacker::addI64(android::renderscript::Long3 arg0) const
	{
		callMethod<void>(
			"addI64",
			"(Landroid/renderscript/Long3;)V",
			arg0.object()
		);
	}
	inline void FieldPacker::addI64(android::renderscript::Long4 arg0) const
	{
		callMethod<void>(
			"addI64",
			"(Landroid/renderscript/Long4;)V",
			arg0.object()
		);
	}
	inline void FieldPacker::addI64(jlong arg0) const
	{
		callMethod<void>(
			"addI64",
			"(J)V",
			arg0
		);
	}
	inline void FieldPacker::addI8(android::renderscript::Byte2 arg0) const
	{
		callMethod<void>(
			"addI8",
			"(Landroid/renderscript/Byte2;)V",
			arg0.object()
		);
	}
	inline void FieldPacker::addI8(android::renderscript::Byte3 arg0) const
	{
		callMethod<void>(
			"addI8",
			"(Landroid/renderscript/Byte3;)V",
			arg0.object()
		);
	}
	inline void FieldPacker::addI8(android::renderscript::Byte4 arg0) const
	{
		callMethod<void>(
			"addI8",
			"(Landroid/renderscript/Byte4;)V",
			arg0.object()
		);
	}
	inline void FieldPacker::addI8(jbyte arg0) const
	{
		callMethod<void>(
			"addI8",
			"(B)V",
			arg0
		);
	}
	inline void FieldPacker::addMatrix(android::renderscript::Matrix2f arg0) const
	{
		callMethod<void>(
			"addMatrix",
			"(Landroid/renderscript/Matrix2f;)V",
			arg0.object()
		);
	}
	inline void FieldPacker::addMatrix(android::renderscript::Matrix3f arg0) const
	{
		callMethod<void>(
			"addMatrix",
			"(Landroid/renderscript/Matrix3f;)V",
			arg0.object()
		);
	}
	inline void FieldPacker::addMatrix(android::renderscript::Matrix4f arg0) const
	{
		callMethod<void>(
			"addMatrix",
			"(Landroid/renderscript/Matrix4f;)V",
			arg0.object()
		);
	}
	inline void FieldPacker::addObj(android::renderscript::BaseObj arg0) const
	{
		callMethod<void>(
			"addObj",
			"(Landroid/renderscript/BaseObj;)V",
			arg0.object()
		);
	}
	inline void FieldPacker::addU16(android::renderscript::Int2 arg0) const
	{
		callMethod<void>(
			"addU16",
			"(Landroid/renderscript/Int2;)V",
			arg0.object()
		);
	}
	inline void FieldPacker::addU16(android::renderscript::Int3 arg0) const
	{
		callMethod<void>(
			"addU16",
			"(Landroid/renderscript/Int3;)V",
			arg0.object()
		);
	}
	inline void FieldPacker::addU16(android::renderscript::Int4 arg0) const
	{
		callMethod<void>(
			"addU16",
			"(Landroid/renderscript/Int4;)V",
			arg0.object()
		);
	}
	inline void FieldPacker::addU16(jint arg0) const
	{
		callMethod<void>(
			"addU16",
			"(I)V",
			arg0
		);
	}
	inline void FieldPacker::addU32(android::renderscript::Long2 arg0) const
	{
		callMethod<void>(
			"addU32",
			"(Landroid/renderscript/Long2;)V",
			arg0.object()
		);
	}
	inline void FieldPacker::addU32(android::renderscript::Long3 arg0) const
	{
		callMethod<void>(
			"addU32",
			"(Landroid/renderscript/Long3;)V",
			arg0.object()
		);
	}
	inline void FieldPacker::addU32(android::renderscript::Long4 arg0) const
	{
		callMethod<void>(
			"addU32",
			"(Landroid/renderscript/Long4;)V",
			arg0.object()
		);
	}
	inline void FieldPacker::addU32(jlong arg0) const
	{
		callMethod<void>(
			"addU32",
			"(J)V",
			arg0
		);
	}
	inline void FieldPacker::addU64(android::renderscript::Long2 arg0) const
	{
		callMethod<void>(
			"addU64",
			"(Landroid/renderscript/Long2;)V",
			arg0.object()
		);
	}
	inline void FieldPacker::addU64(android::renderscript::Long3 arg0) const
	{
		callMethod<void>(
			"addU64",
			"(Landroid/renderscript/Long3;)V",
			arg0.object()
		);
	}
	inline void FieldPacker::addU64(android::renderscript::Long4 arg0) const
	{
		callMethod<void>(
			"addU64",
			"(Landroid/renderscript/Long4;)V",
			arg0.object()
		);
	}
	inline void FieldPacker::addU64(jlong arg0) const
	{
		callMethod<void>(
			"addU64",
			"(J)V",
			arg0
		);
	}
	inline void FieldPacker::addU8(android::renderscript::Short2 arg0) const
	{
		callMethod<void>(
			"addU8",
			"(Landroid/renderscript/Short2;)V",
			arg0.object()
		);
	}
	inline void FieldPacker::addU8(android::renderscript::Short3 arg0) const
	{
		callMethod<void>(
			"addU8",
			"(Landroid/renderscript/Short3;)V",
			arg0.object()
		);
	}
	inline void FieldPacker::addU8(android::renderscript::Short4 arg0) const
	{
		callMethod<void>(
			"addU8",
			"(Landroid/renderscript/Short4;)V",
			arg0.object()
		);
	}
	inline void FieldPacker::addU8(jshort arg0) const
	{
		callMethod<void>(
			"addU8",
			"(S)V",
			arg0
		);
	}
	inline void FieldPacker::align(jint arg0) const
	{
		callMethod<void>(
			"align",
			"(I)V",
			arg0
		);
	}
	inline JByteArray FieldPacker::getData() const
	{
		return callObjectMethod(
			"getData",
			"()[B"
		);
	}
	inline void FieldPacker::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	inline void FieldPacker::reset(jint arg0) const
	{
		callMethod<void>(
			"reset",
			"(I)V",
			arg0
		);
	}
	inline void FieldPacker::skip(jint arg0) const
	{
		callMethod<void>(
			"skip",
			"(I)V",
			arg0
		);
	}
	inline jboolean FieldPacker::subBoolean() const
	{
		return callMethod<jboolean>(
			"subBoolean",
			"()Z"
		);
	}
	inline android::renderscript::Byte2 FieldPacker::subByte2() const
	{
		return callObjectMethod(
			"subByte2",
			"()Landroid/renderscript/Byte2;"
		);
	}
	inline android::renderscript::Byte3 FieldPacker::subByte3() const
	{
		return callObjectMethod(
			"subByte3",
			"()Landroid/renderscript/Byte3;"
		);
	}
	inline android::renderscript::Byte4 FieldPacker::subByte4() const
	{
		return callObjectMethod(
			"subByte4",
			"()Landroid/renderscript/Byte4;"
		);
	}
	inline android::renderscript::Double2 FieldPacker::subDouble2() const
	{
		return callObjectMethod(
			"subDouble2",
			"()Landroid/renderscript/Double2;"
		);
	}
	inline android::renderscript::Double3 FieldPacker::subDouble3() const
	{
		return callObjectMethod(
			"subDouble3",
			"()Landroid/renderscript/Double3;"
		);
	}
	inline android::renderscript::Double4 FieldPacker::subDouble4() const
	{
		return callObjectMethod(
			"subDouble4",
			"()Landroid/renderscript/Double4;"
		);
	}
	inline jfloat FieldPacker::subF32() const
	{
		return callMethod<jfloat>(
			"subF32",
			"()F"
		);
	}
	inline jdouble FieldPacker::subF64() const
	{
		return callMethod<jdouble>(
			"subF64",
			"()D"
		);
	}
	inline android::renderscript::Float2 FieldPacker::subFloat2() const
	{
		return callObjectMethod(
			"subFloat2",
			"()Landroid/renderscript/Float2;"
		);
	}
	inline android::renderscript::Float3 FieldPacker::subFloat3() const
	{
		return callObjectMethod(
			"subFloat3",
			"()Landroid/renderscript/Float3;"
		);
	}
	inline android::renderscript::Float4 FieldPacker::subFloat4() const
	{
		return callObjectMethod(
			"subFloat4",
			"()Landroid/renderscript/Float4;"
		);
	}
	inline jshort FieldPacker::subI16() const
	{
		return callMethod<jshort>(
			"subI16",
			"()S"
		);
	}
	inline jint FieldPacker::subI32() const
	{
		return callMethod<jint>(
			"subI32",
			"()I"
		);
	}
	inline jlong FieldPacker::subI64() const
	{
		return callMethod<jlong>(
			"subI64",
			"()J"
		);
	}
	inline jbyte FieldPacker::subI8() const
	{
		return callMethod<jbyte>(
			"subI8",
			"()B"
		);
	}
	inline android::renderscript::Int2 FieldPacker::subInt2() const
	{
		return callObjectMethod(
			"subInt2",
			"()Landroid/renderscript/Int2;"
		);
	}
	inline android::renderscript::Int3 FieldPacker::subInt3() const
	{
		return callObjectMethod(
			"subInt3",
			"()Landroid/renderscript/Int3;"
		);
	}
	inline android::renderscript::Int4 FieldPacker::subInt4() const
	{
		return callObjectMethod(
			"subInt4",
			"()Landroid/renderscript/Int4;"
		);
	}
	inline android::renderscript::Long2 FieldPacker::subLong2() const
	{
		return callObjectMethod(
			"subLong2",
			"()Landroid/renderscript/Long2;"
		);
	}
	inline android::renderscript::Long3 FieldPacker::subLong3() const
	{
		return callObjectMethod(
			"subLong3",
			"()Landroid/renderscript/Long3;"
		);
	}
	inline android::renderscript::Long4 FieldPacker::subLong4() const
	{
		return callObjectMethod(
			"subLong4",
			"()Landroid/renderscript/Long4;"
		);
	}
	inline android::renderscript::Matrix2f FieldPacker::subMatrix2f() const
	{
		return callObjectMethod(
			"subMatrix2f",
			"()Landroid/renderscript/Matrix2f;"
		);
	}
	inline android::renderscript::Matrix3f FieldPacker::subMatrix3f() const
	{
		return callObjectMethod(
			"subMatrix3f",
			"()Landroid/renderscript/Matrix3f;"
		);
	}
	inline android::renderscript::Matrix4f FieldPacker::subMatrix4f() const
	{
		return callObjectMethod(
			"subMatrix4f",
			"()Landroid/renderscript/Matrix4f;"
		);
	}
	inline android::renderscript::Short2 FieldPacker::subShort2() const
	{
		return callObjectMethod(
			"subShort2",
			"()Landroid/renderscript/Short2;"
		);
	}
	inline android::renderscript::Short3 FieldPacker::subShort3() const
	{
		return callObjectMethod(
			"subShort3",
			"()Landroid/renderscript/Short3;"
		);
	}
	inline android::renderscript::Short4 FieldPacker::subShort4() const
	{
		return callObjectMethod(
			"subShort4",
			"()Landroid/renderscript/Short4;"
		);
	}
	inline void FieldPacker::subalign(jint arg0) const
	{
		callMethod<void>(
			"subalign",
			"(I)V",
			arg0
		);
	}
} // namespace android::renderscript

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::renderscript;
#endif
