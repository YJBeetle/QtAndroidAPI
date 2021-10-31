#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Buffer.hpp"

namespace java::nio
{
	class Buffer;
}
namespace java::nio
{
	class ByteOrder;
}
namespace java::nio
{
	class CharBuffer;
}
namespace java::nio
{
	class DoubleBuffer;
}
namespace java::nio
{
	class FloatBuffer;
}
namespace java::nio
{
	class IntBuffer;
}
namespace java::nio
{
	class LongBuffer;
}
namespace java::nio
{
	class ShortBuffer;
}

namespace java::nio
{
	class ByteBuffer : public java::nio::Buffer
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ByteBuffer(const char *className, const char *sig, Ts...agv) : java::nio::Buffer(className, sig, std::forward<Ts>(agv)...) {}
		ByteBuffer(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject allocate(jint arg0);
		static QAndroidJniObject allocateDirect(jint arg0);
		static QAndroidJniObject wrap(jbyteArray arg0);
		static QAndroidJniObject wrap(jbyteArray arg0, jint arg1, jint arg2);
		QAndroidJniObject alignedSlice(jint arg0);
		jint alignmentOffset(jint arg0, jint arg1);
		jbyteArray array();
		jint arrayOffset();
		QAndroidJniObject asCharBuffer();
		QAndroidJniObject asDoubleBuffer();
		QAndroidJniObject asFloatBuffer();
		QAndroidJniObject asIntBuffer();
		QAndroidJniObject asLongBuffer();
		QAndroidJniObject asReadOnlyBuffer();
		QAndroidJniObject asShortBuffer();
		QAndroidJniObject clear();
		QAndroidJniObject compact();
		jint compareTo(jobject arg0);
		jint compareTo(java::nio::ByteBuffer arg0);
		QAndroidJniObject duplicate();
		jboolean equals(jobject arg0);
		QAndroidJniObject flip();
		jbyte get();
		jbyte get(jint arg0);
		QAndroidJniObject get(jbyteArray arg0);
		QAndroidJniObject get(jint arg0, jbyteArray arg1);
		QAndroidJniObject get(jbyteArray arg0, jint arg1, jint arg2);
		QAndroidJniObject get(jint arg0, jbyteArray arg1, jint arg2, jint arg3);
		jchar getChar();
		jchar getChar(jint arg0);
		jdouble getDouble();
		jdouble getDouble(jint arg0);
		jfloat getFloat();
		jfloat getFloat(jint arg0);
		jint getInt();
		jint getInt(jint arg0);
		jlong getLong();
		jlong getLong(jint arg0);
		jshort getShort();
		jshort getShort(jint arg0);
		jboolean hasArray();
		jint hashCode();
		jboolean isDirect();
		QAndroidJniObject limit(jint arg0);
		QAndroidJniObject mark();
		jint mismatch(java::nio::ByteBuffer arg0);
		QAndroidJniObject order(java::nio::ByteOrder arg0);
		QAndroidJniObject order();
		QAndroidJniObject position(jint arg0);
		QAndroidJniObject put(jbyteArray arg0);
		QAndroidJniObject put(jbyte arg0);
		QAndroidJniObject put(java::nio::ByteBuffer arg0);
		QAndroidJniObject put(jint arg0, jbyteArray arg1);
		QAndroidJniObject put(jint arg0, jbyte arg1);
		QAndroidJniObject put(jbyteArray arg0, jint arg1, jint arg2);
		QAndroidJniObject put(jint arg0, jbyteArray arg1, jint arg2, jint arg3);
		QAndroidJniObject put(jint arg0, java::nio::ByteBuffer arg1, jint arg2, jint arg3);
		QAndroidJniObject putChar(jchar arg0);
		QAndroidJniObject putChar(jint arg0, jchar arg1);
		QAndroidJniObject putDouble(jdouble arg0);
		QAndroidJniObject putDouble(jint arg0, jdouble arg1);
		QAndroidJniObject putFloat(jfloat arg0);
		QAndroidJniObject putFloat(jint arg0, jfloat arg1);
		QAndroidJniObject putInt(jint arg0);
		QAndroidJniObject putInt(jint arg0, jint arg1);
		QAndroidJniObject putLong(jlong arg0);
		QAndroidJniObject putLong(jint arg0, jlong arg1);
		QAndroidJniObject putShort(jshort arg0);
		QAndroidJniObject putShort(jint arg0, jshort arg1);
		QAndroidJniObject reset();
		QAndroidJniObject rewind();
		QAndroidJniObject slice();
		QAndroidJniObject slice(jint arg0, jint arg1);
		jstring toString();
	};
} // namespace java::nio

