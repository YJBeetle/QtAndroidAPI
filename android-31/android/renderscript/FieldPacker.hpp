#pragma once

#include "../../JObject.hpp"

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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit FieldPacker(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FieldPacker(QAndroidJniObject obj);
		
		// Constructors
		FieldPacker(jbyteArray arg0);
		FieldPacker(jint arg0);
		
		// Methods
		void addBoolean(jboolean arg0);
		void addF32(android::renderscript::Float2 arg0);
		void addF32(android::renderscript::Float3 arg0);
		void addF32(android::renderscript::Float4 arg0);
		void addF32(jfloat arg0);
		void addF64(android::renderscript::Double2 arg0);
		void addF64(android::renderscript::Double3 arg0);
		void addF64(android::renderscript::Double4 arg0);
		void addF64(jdouble arg0);
		void addI16(android::renderscript::Short2 arg0);
		void addI16(android::renderscript::Short3 arg0);
		void addI16(android::renderscript::Short4 arg0);
		void addI16(jshort arg0);
		void addI32(android::renderscript::Int2 arg0);
		void addI32(android::renderscript::Int3 arg0);
		void addI32(android::renderscript::Int4 arg0);
		void addI32(jint arg0);
		void addI64(android::renderscript::Long2 arg0);
		void addI64(android::renderscript::Long3 arg0);
		void addI64(android::renderscript::Long4 arg0);
		void addI64(jlong arg0);
		void addI8(android::renderscript::Byte2 arg0);
		void addI8(android::renderscript::Byte3 arg0);
		void addI8(android::renderscript::Byte4 arg0);
		void addI8(jbyte arg0);
		void addMatrix(android::renderscript::Matrix2f arg0);
		void addMatrix(android::renderscript::Matrix3f arg0);
		void addMatrix(android::renderscript::Matrix4f arg0);
		void addObj(android::renderscript::BaseObj arg0);
		void addU16(android::renderscript::Int2 arg0);
		void addU16(android::renderscript::Int3 arg0);
		void addU16(android::renderscript::Int4 arg0);
		void addU16(jint arg0);
		void addU32(android::renderscript::Long2 arg0);
		void addU32(android::renderscript::Long3 arg0);
		void addU32(android::renderscript::Long4 arg0);
		void addU32(jlong arg0);
		void addU64(android::renderscript::Long2 arg0);
		void addU64(android::renderscript::Long3 arg0);
		void addU64(android::renderscript::Long4 arg0);
		void addU64(jlong arg0);
		void addU8(android::renderscript::Short2 arg0);
		void addU8(android::renderscript::Short3 arg0);
		void addU8(android::renderscript::Short4 arg0);
		void addU8(jshort arg0);
		void align(jint arg0);
		jbyteArray getData();
		void reset();
		void reset(jint arg0);
		void skip(jint arg0);
		jboolean subBoolean();
		android::renderscript::Byte2 subByte2();
		android::renderscript::Byte3 subByte3();
		android::renderscript::Byte4 subByte4();
		android::renderscript::Double2 subDouble2();
		android::renderscript::Double3 subDouble3();
		android::renderscript::Double4 subDouble4();
		jfloat subF32();
		jdouble subF64();
		android::renderscript::Float2 subFloat2();
		android::renderscript::Float3 subFloat3();
		android::renderscript::Float4 subFloat4();
		jshort subI16();
		jint subI32();
		jlong subI64();
		jbyte subI8();
		android::renderscript::Int2 subInt2();
		android::renderscript::Int3 subInt3();
		android::renderscript::Int4 subInt4();
		android::renderscript::Long2 subLong2();
		android::renderscript::Long3 subLong3();
		android::renderscript::Long4 subLong4();
		android::renderscript::Matrix2f subMatrix2f();
		android::renderscript::Matrix3f subMatrix3f();
		android::renderscript::Matrix4f subMatrix4f();
		android::renderscript::Short2 subShort2();
		android::renderscript::Short3 subShort3();
		android::renderscript::Short4 subShort4();
		void subalign(jint arg0);
	};
} // namespace android::renderscript

