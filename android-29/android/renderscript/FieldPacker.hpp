#pragma once

#include "../../__JniBaseClass.hpp"

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
	class FieldPacker : public __JniBaseClass
	{
	public:
		// Fields
		
		FieldPacker(QAndroidJniObject obj);
		// Constructors
		FieldPacker(jbyteArray &arg0);
		FieldPacker(jint &arg0);
		FieldPacker() = default;
		
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
		QAndroidJniObject subByte2();
		QAndroidJniObject subByte3();
		QAndroidJniObject subByte4();
		QAndroidJniObject subDouble2();
		QAndroidJniObject subDouble3();
		QAndroidJniObject subDouble4();
		jfloat subF32();
		jdouble subF64();
		QAndroidJniObject subFloat2();
		QAndroidJniObject subFloat3();
		QAndroidJniObject subFloat4();
		jshort subI16();
		jint subI32();
		jlong subI64();
		jbyte subI8();
		QAndroidJniObject subInt2();
		QAndroidJniObject subInt3();
		QAndroidJniObject subInt4();
		QAndroidJniObject subLong2();
		QAndroidJniObject subLong3();
		QAndroidJniObject subLong4();
		QAndroidJniObject subMatrix2f();
		QAndroidJniObject subMatrix3f();
		QAndroidJniObject subMatrix4f();
		QAndroidJniObject subShort2();
		QAndroidJniObject subShort3();
		QAndroidJniObject subShort4();
		void subalign(jint arg0);
	};
} // namespace android::renderscript

