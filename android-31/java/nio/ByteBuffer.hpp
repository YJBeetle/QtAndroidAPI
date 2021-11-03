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
		java::nio::ByteBuffer alignedSlice(jint arg0) const;
		jint alignmentOffset(jint arg0, jint arg1) const;
		JByteArray array() const;
		jint arrayOffset() const;
		java::nio::CharBuffer asCharBuffer() const;
		java::nio::DoubleBuffer asDoubleBuffer() const;
		java::nio::FloatBuffer asFloatBuffer() const;
		java::nio::IntBuffer asIntBuffer() const;
		java::nio::LongBuffer asLongBuffer() const;
		java::nio::ByteBuffer asReadOnlyBuffer() const;
		java::nio::ShortBuffer asShortBuffer() const;
		java::nio::ByteBuffer clear() const;
		java::nio::ByteBuffer compact() const;
		jint compareTo(JObject arg0) const;
		jint compareTo(java::nio::ByteBuffer arg0) const;
		java::nio::ByteBuffer duplicate() const;
		jboolean equals(JObject arg0) const;
		java::nio::ByteBuffer flip() const;
		jbyte get() const;
		jbyte get(jint arg0) const;
		java::nio::ByteBuffer get(JByteArray arg0) const;
		java::nio::ByteBuffer get(jint arg0, JByteArray arg1) const;
		java::nio::ByteBuffer get(JByteArray arg0, jint arg1, jint arg2) const;
		java::nio::ByteBuffer get(jint arg0, JByteArray arg1, jint arg2, jint arg3) const;
		jchar getChar() const;
		jchar getChar(jint arg0) const;
		jdouble getDouble() const;
		jdouble getDouble(jint arg0) const;
		jfloat getFloat() const;
		jfloat getFloat(jint arg0) const;
		jint getInt() const;
		jint getInt(jint arg0) const;
		jlong getLong() const;
		jlong getLong(jint arg0) const;
		jshort getShort() const;
		jshort getShort(jint arg0) const;
		jboolean hasArray() const;
		jint hashCode() const;
		jboolean isDirect() const;
		java::nio::ByteBuffer limit(jint arg0) const;
		java::nio::ByteBuffer mark() const;
		jint mismatch(java::nio::ByteBuffer arg0) const;
		java::nio::ByteBuffer order(java::nio::ByteOrder arg0) const;
		java::nio::ByteOrder order() const;
		java::nio::ByteBuffer position(jint arg0) const;
		java::nio::ByteBuffer put(JByteArray arg0) const;
		java::nio::ByteBuffer put(jbyte arg0) const;
		java::nio::ByteBuffer put(java::nio::ByteBuffer arg0) const;
		java::nio::ByteBuffer put(jint arg0, JByteArray arg1) const;
		java::nio::ByteBuffer put(jint arg0, jbyte arg1) const;
		java::nio::ByteBuffer put(JByteArray arg0, jint arg1, jint arg2) const;
		java::nio::ByteBuffer put(jint arg0, JByteArray arg1, jint arg2, jint arg3) const;
		java::nio::ByteBuffer put(jint arg0, java::nio::ByteBuffer arg1, jint arg2, jint arg3) const;
		java::nio::ByteBuffer putChar(jchar arg0) const;
		java::nio::ByteBuffer putChar(jint arg0, jchar arg1) const;
		java::nio::ByteBuffer putDouble(jdouble arg0) const;
		java::nio::ByteBuffer putDouble(jint arg0, jdouble arg1) const;
		java::nio::ByteBuffer putFloat(jfloat arg0) const;
		java::nio::ByteBuffer putFloat(jint arg0, jfloat arg1) const;
		java::nio::ByteBuffer putInt(jint arg0) const;
		java::nio::ByteBuffer putInt(jint arg0, jint arg1) const;
		java::nio::ByteBuffer putLong(jlong arg0) const;
		java::nio::ByteBuffer putLong(jint arg0, jlong arg1) const;
		java::nio::ByteBuffer putShort(jshort arg0) const;
		java::nio::ByteBuffer putShort(jint arg0, jshort arg1) const;
		java::nio::ByteBuffer reset() const;
		java::nio::ByteBuffer rewind() const;
		java::nio::ByteBuffer slice() const;
		java::nio::ByteBuffer slice(jint arg0, jint arg1) const;
		JString toString() const;
	};
} // namespace java::nio

