#pragma once

#include "./Buffer.hpp"

class JByteArray;
class JObject;
class JString;
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
		static java::nio::ByteBuffer allocate(jint arg0);
		static java::nio::ByteBuffer allocateDirect(jint arg0);
		static java::nio::ByteBuffer wrap(JByteArray arg0);
		static java::nio::ByteBuffer wrap(JByteArray arg0, jint arg1, jint arg2);
		java::nio::ByteBuffer alignedSlice(jint arg0);
		jint alignmentOffset(jint arg0, jint arg1);
		JByteArray array();
		jint arrayOffset();
		java::nio::CharBuffer asCharBuffer();
		java::nio::DoubleBuffer asDoubleBuffer();
		java::nio::FloatBuffer asFloatBuffer();
		java::nio::IntBuffer asIntBuffer();
		java::nio::LongBuffer asLongBuffer();
		java::nio::ByteBuffer asReadOnlyBuffer();
		java::nio::ShortBuffer asShortBuffer();
		java::nio::ByteBuffer clear();
		java::nio::ByteBuffer compact();
		jint compareTo(JObject arg0);
		jint compareTo(java::nio::ByteBuffer arg0);
		java::nio::ByteBuffer duplicate();
		jboolean equals(JObject arg0);
		java::nio::ByteBuffer flip();
		jbyte get();
		jbyte get(jint arg0);
		java::nio::ByteBuffer get(JByteArray arg0);
		java::nio::ByteBuffer get(jint arg0, JByteArray arg1);
		java::nio::ByteBuffer get(JByteArray arg0, jint arg1, jint arg2);
		java::nio::ByteBuffer get(jint arg0, JByteArray arg1, jint arg2, jint arg3);
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
		java::nio::ByteBuffer limit(jint arg0);
		java::nio::ByteBuffer mark();
		jint mismatch(java::nio::ByteBuffer arg0);
		java::nio::ByteBuffer order(java::nio::ByteOrder arg0);
		java::nio::ByteOrder order();
		java::nio::ByteBuffer position(jint arg0);
		java::nio::ByteBuffer put(JByteArray arg0);
		java::nio::ByteBuffer put(jbyte arg0);
		java::nio::ByteBuffer put(java::nio::ByteBuffer arg0);
		java::nio::ByteBuffer put(jint arg0, JByteArray arg1);
		java::nio::ByteBuffer put(jint arg0, jbyte arg1);
		java::nio::ByteBuffer put(JByteArray arg0, jint arg1, jint arg2);
		java::nio::ByteBuffer put(jint arg0, JByteArray arg1, jint arg2, jint arg3);
		java::nio::ByteBuffer put(jint arg0, java::nio::ByteBuffer arg1, jint arg2, jint arg3);
		java::nio::ByteBuffer putChar(jchar arg0);
		java::nio::ByteBuffer putChar(jint arg0, jchar arg1);
		java::nio::ByteBuffer putDouble(jdouble arg0);
		java::nio::ByteBuffer putDouble(jint arg0, jdouble arg1);
		java::nio::ByteBuffer putFloat(jfloat arg0);
		java::nio::ByteBuffer putFloat(jint arg0, jfloat arg1);
		java::nio::ByteBuffer putInt(jint arg0);
		java::nio::ByteBuffer putInt(jint arg0, jint arg1);
		java::nio::ByteBuffer putLong(jlong arg0);
		java::nio::ByteBuffer putLong(jint arg0, jlong arg1);
		java::nio::ByteBuffer putShort(jshort arg0);
		java::nio::ByteBuffer putShort(jint arg0, jshort arg1);
		java::nio::ByteBuffer reset();
		java::nio::ByteBuffer rewind();
		java::nio::ByteBuffer slice();
		java::nio::ByteBuffer slice(jint arg0, jint arg1);
		JString toString();
	};
} // namespace java::nio

