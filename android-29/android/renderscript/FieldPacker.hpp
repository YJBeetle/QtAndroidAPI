#pragma once

#include "../../JObject.hpp"

class JByteArray;
namespace android::renderscript
{
	class BaseObj;
}
namespace android::renderscript
{
	class Byte2;
}
namespace android::renderscript
{
	class Byte3;
}
namespace android::renderscript
{
	class Byte4;
}
namespace android::renderscript
{
	class Double2;
}
namespace android::renderscript
{
	class Double3;
}
namespace android::renderscript
{
	class Double4;
}
namespace android::renderscript
{
	class Float2;
}
namespace android::renderscript
{
	class Float3;
}
namespace android::renderscript
{
	class Float4;
}
namespace android::renderscript
{
	class Int2;
}
namespace android::renderscript
{
	class Int3;
}
namespace android::renderscript
{
	class Int4;
}
namespace android::renderscript
{
	class Long2;
}
namespace android::renderscript
{
	class Long3;
}
namespace android::renderscript
{
	class Long4;
}
namespace android::renderscript
{
	class Matrix2f;
}
namespace android::renderscript
{
	class Matrix3f;
}
namespace android::renderscript
{
	class Matrix4f;
}
namespace android::renderscript
{
	class Short2;
}
namespace android::renderscript
{
	class Short3;
}
namespace android::renderscript
{
	class Short4;
}

namespace android::renderscript
{
	class FieldPacker : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit FieldPacker(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FieldPacker(QJniObject obj);
		
		// Constructors
		FieldPacker(JByteArray arg0);
		FieldPacker(jint arg0);
		
		// Methods
		void addBoolean(jboolean arg0) const;
		void addF32(android::renderscript::Float2 arg0) const;
		void addF32(android::renderscript::Float3 arg0) const;
		void addF32(android::renderscript::Float4 arg0) const;
		void addF32(jfloat arg0) const;
		void addF64(android::renderscript::Double2 arg0) const;
		void addF64(android::renderscript::Double3 arg0) const;
		void addF64(android::renderscript::Double4 arg0) const;
		void addF64(jdouble arg0) const;
		void addI16(android::renderscript::Short2 arg0) const;
		void addI16(android::renderscript::Short3 arg0) const;
		void addI16(android::renderscript::Short4 arg0) const;
		void addI16(jshort arg0) const;
		void addI32(android::renderscript::Int2 arg0) const;
		void addI32(android::renderscript::Int3 arg0) const;
		void addI32(android::renderscript::Int4 arg0) const;
		void addI32(jint arg0) const;
		void addI64(android::renderscript::Long2 arg0) const;
		void addI64(android::renderscript::Long3 arg0) const;
		void addI64(android::renderscript::Long4 arg0) const;
		void addI64(jlong arg0) const;
		void addI8(android::renderscript::Byte2 arg0) const;
		void addI8(android::renderscript::Byte3 arg0) const;
		void addI8(android::renderscript::Byte4 arg0) const;
		void addI8(jbyte arg0) const;
		void addMatrix(android::renderscript::Matrix2f arg0) const;
		void addMatrix(android::renderscript::Matrix3f arg0) const;
		void addMatrix(android::renderscript::Matrix4f arg0) const;
		void addObj(android::renderscript::BaseObj arg0) const;
		void addU16(android::renderscript::Int2 arg0) const;
		void addU16(android::renderscript::Int3 arg0) const;
		void addU16(android::renderscript::Int4 arg0) const;
		void addU16(jint arg0) const;
		void addU32(android::renderscript::Long2 arg0) const;
		void addU32(android::renderscript::Long3 arg0) const;
		void addU32(android::renderscript::Long4 arg0) const;
		void addU32(jlong arg0) const;
		void addU64(android::renderscript::Long2 arg0) const;
		void addU64(android::renderscript::Long3 arg0) const;
		void addU64(android::renderscript::Long4 arg0) const;
		void addU64(jlong arg0) const;
		void addU8(android::renderscript::Short2 arg0) const;
		void addU8(android::renderscript::Short3 arg0) const;
		void addU8(android::renderscript::Short4 arg0) const;
		void addU8(jshort arg0) const;
		void align(jint arg0) const;
		JByteArray getData() const;
		void reset() const;
		void reset(jint arg0) const;
		void skip(jint arg0) const;
		jboolean subBoolean() const;
		android::renderscript::Byte2 subByte2() const;
		android::renderscript::Byte3 subByte3() const;
		android::renderscript::Byte4 subByte4() const;
		android::renderscript::Double2 subDouble2() const;
		android::renderscript::Double3 subDouble3() const;
		android::renderscript::Double4 subDouble4() const;
		jfloat subF32() const;
		jdouble subF64() const;
		android::renderscript::Float2 subFloat2() const;
		android::renderscript::Float3 subFloat3() const;
		android::renderscript::Float4 subFloat4() const;
		jshort subI16() const;
		jint subI32() const;
		jlong subI64() const;
		jbyte subI8() const;
		android::renderscript::Int2 subInt2() const;
		android::renderscript::Int3 subInt3() const;
		android::renderscript::Int4 subInt4() const;
		android::renderscript::Long2 subLong2() const;
		android::renderscript::Long3 subLong3() const;
		android::renderscript::Long4 subLong4() const;
		android::renderscript::Matrix2f subMatrix2f() const;
		android::renderscript::Matrix3f subMatrix3f() const;
		android::renderscript::Matrix4f subMatrix4f() const;
		android::renderscript::Short2 subShort2() const;
		android::renderscript::Short3 subShort3() const;
		android::renderscript::Short4 subShort4() const;
		void subalign(jint arg0) const;
	};
} // namespace android::renderscript

