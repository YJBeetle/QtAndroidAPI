#include "../../JByteArray.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Buffer.hpp"
#include "./ByteOrder.hpp"
#include "./CharBuffer.hpp"
#include "./DoubleBuffer.hpp"
#include "./FloatBuffer.hpp"
#include "./IntBuffer.hpp"
#include "./LongBuffer.hpp"
#include "./ShortBuffer.hpp"
#include "./ByteBuffer.hpp"

namespace java::nio
{
	// Fields
	
	// QAndroidJniObject forward
	ByteBuffer::ByteBuffer(QAndroidJniObject obj) : java::nio::Buffer(obj) {}
	
	// Constructors
	
	// Methods
	java::nio::ByteBuffer ByteBuffer::allocate(jint arg0)
	{
		return callStaticObjectMethod(
			"java.nio.ByteBuffer",
			"allocate",
			"(I)Ljava/nio/ByteBuffer;",
			arg0
		);
	}
	java::nio::ByteBuffer ByteBuffer::allocateDirect(jint arg0)
	{
		return callStaticObjectMethod(
			"java.nio.ByteBuffer",
			"allocateDirect",
			"(I)Ljava/nio/ByteBuffer;",
			arg0
		);
	}
	java::nio::ByteBuffer ByteBuffer::wrap(JByteArray arg0)
	{
		return callStaticObjectMethod(
			"java.nio.ByteBuffer",
			"wrap",
			"([B)Ljava/nio/ByteBuffer;",
			arg0.object<jbyteArray>()
		);
	}
	java::nio::ByteBuffer ByteBuffer::wrap(JByteArray arg0, jint arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"java.nio.ByteBuffer",
			"wrap",
			"([BII)Ljava/nio/ByteBuffer;",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	java::nio::ByteBuffer ByteBuffer::alignedSlice(jint arg0) const
	{
		return callObjectMethod(
			"alignedSlice",
			"(I)Ljava/nio/ByteBuffer;",
			arg0
		);
	}
	jint ByteBuffer::alignmentOffset(jint arg0, jint arg1) const
	{
		return callMethod<jint>(
			"alignmentOffset",
			"(II)I",
			arg0,
			arg1
		);
	}
	JByteArray ByteBuffer::array() const
	{
		return callObjectMethod(
			"array",
			"()[B"
		);
	}
	jint ByteBuffer::arrayOffset() const
	{
		return callMethod<jint>(
			"arrayOffset",
			"()I"
		);
	}
	java::nio::CharBuffer ByteBuffer::asCharBuffer() const
	{
		return callObjectMethod(
			"asCharBuffer",
			"()Ljava/nio/CharBuffer;"
		);
	}
	java::nio::DoubleBuffer ByteBuffer::asDoubleBuffer() const
	{
		return callObjectMethod(
			"asDoubleBuffer",
			"()Ljava/nio/DoubleBuffer;"
		);
	}
	java::nio::FloatBuffer ByteBuffer::asFloatBuffer() const
	{
		return callObjectMethod(
			"asFloatBuffer",
			"()Ljava/nio/FloatBuffer;"
		);
	}
	java::nio::IntBuffer ByteBuffer::asIntBuffer() const
	{
		return callObjectMethod(
			"asIntBuffer",
			"()Ljava/nio/IntBuffer;"
		);
	}
	java::nio::LongBuffer ByteBuffer::asLongBuffer() const
	{
		return callObjectMethod(
			"asLongBuffer",
			"()Ljava/nio/LongBuffer;"
		);
	}
	java::nio::ByteBuffer ByteBuffer::asReadOnlyBuffer() const
	{
		return callObjectMethod(
			"asReadOnlyBuffer",
			"()Ljava/nio/ByteBuffer;"
		);
	}
	java::nio::ShortBuffer ByteBuffer::asShortBuffer() const
	{
		return callObjectMethod(
			"asShortBuffer",
			"()Ljava/nio/ShortBuffer;"
		);
	}
	java::nio::ByteBuffer ByteBuffer::clear() const
	{
		return callObjectMethod(
			"clear",
			"()Ljava/nio/ByteBuffer;"
		);
	}
	java::nio::ByteBuffer ByteBuffer::compact() const
	{
		return callObjectMethod(
			"compact",
			"()Ljava/nio/ByteBuffer;"
		);
	}
	jint ByteBuffer::compareTo(JObject arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	jint ByteBuffer::compareTo(java::nio::ByteBuffer arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/nio/ByteBuffer;)I",
			arg0.object()
		);
	}
	java::nio::ByteBuffer ByteBuffer::duplicate() const
	{
		return callObjectMethod(
			"duplicate",
			"()Ljava/nio/ByteBuffer;"
		);
	}
	jboolean ByteBuffer::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	java::nio::ByteBuffer ByteBuffer::flip() const
	{
		return callObjectMethod(
			"flip",
			"()Ljava/nio/ByteBuffer;"
		);
	}
	jbyte ByteBuffer::get() const
	{
		return callMethod<jbyte>(
			"get",
			"()B"
		);
	}
	jbyte ByteBuffer::get(jint arg0) const
	{
		return callMethod<jbyte>(
			"get",
			"(I)B",
			arg0
		);
	}
	java::nio::ByteBuffer ByteBuffer::get(JByteArray arg0) const
	{
		return callObjectMethod(
			"get",
			"([B)Ljava/nio/ByteBuffer;",
			arg0.object<jbyteArray>()
		);
	}
	java::nio::ByteBuffer ByteBuffer::get(jint arg0, JByteArray arg1) const
	{
		return callObjectMethod(
			"get",
			"(I[B)Ljava/nio/ByteBuffer;",
			arg0,
			arg1.object<jbyteArray>()
		);
	}
	java::nio::ByteBuffer ByteBuffer::get(JByteArray arg0, jint arg1, jint arg2) const
	{
		return callObjectMethod(
			"get",
			"([BII)Ljava/nio/ByteBuffer;",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	java::nio::ByteBuffer ByteBuffer::get(jint arg0, JByteArray arg1, jint arg2, jint arg3) const
	{
		return callObjectMethod(
			"get",
			"(I[BII)Ljava/nio/ByteBuffer;",
			arg0,
			arg1.object<jbyteArray>(),
			arg2,
			arg3
		);
	}
	jchar ByteBuffer::getChar() const
	{
		return callMethod<jchar>(
			"getChar",
			"()C"
		);
	}
	jchar ByteBuffer::getChar(jint arg0) const
	{
		return callMethod<jchar>(
			"getChar",
			"(I)C",
			arg0
		);
	}
	jdouble ByteBuffer::getDouble() const
	{
		return callMethod<jdouble>(
			"getDouble",
			"()D"
		);
	}
	jdouble ByteBuffer::getDouble(jint arg0) const
	{
		return callMethod<jdouble>(
			"getDouble",
			"(I)D",
			arg0
		);
	}
	jfloat ByteBuffer::getFloat() const
	{
		return callMethod<jfloat>(
			"getFloat",
			"()F"
		);
	}
	jfloat ByteBuffer::getFloat(jint arg0) const
	{
		return callMethod<jfloat>(
			"getFloat",
			"(I)F",
			arg0
		);
	}
	jint ByteBuffer::getInt() const
	{
		return callMethod<jint>(
			"getInt",
			"()I"
		);
	}
	jint ByteBuffer::getInt(jint arg0) const
	{
		return callMethod<jint>(
			"getInt",
			"(I)I",
			arg0
		);
	}
	jlong ByteBuffer::getLong() const
	{
		return callMethod<jlong>(
			"getLong",
			"()J"
		);
	}
	jlong ByteBuffer::getLong(jint arg0) const
	{
		return callMethod<jlong>(
			"getLong",
			"(I)J",
			arg0
		);
	}
	jshort ByteBuffer::getShort() const
	{
		return callMethod<jshort>(
			"getShort",
			"()S"
		);
	}
	jshort ByteBuffer::getShort(jint arg0) const
	{
		return callMethod<jshort>(
			"getShort",
			"(I)S",
			arg0
		);
	}
	jboolean ByteBuffer::hasArray() const
	{
		return callMethod<jboolean>(
			"hasArray",
			"()Z"
		);
	}
	jint ByteBuffer::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean ByteBuffer::isDirect() const
	{
		return callMethod<jboolean>(
			"isDirect",
			"()Z"
		);
	}
	java::nio::ByteBuffer ByteBuffer::limit(jint arg0) const
	{
		return callObjectMethod(
			"limit",
			"(I)Ljava/nio/ByteBuffer;",
			arg0
		);
	}
	java::nio::ByteBuffer ByteBuffer::mark() const
	{
		return callObjectMethod(
			"mark",
			"()Ljava/nio/ByteBuffer;"
		);
	}
	jint ByteBuffer::mismatch(java::nio::ByteBuffer arg0) const
	{
		return callMethod<jint>(
			"mismatch",
			"(Ljava/nio/ByteBuffer;)I",
			arg0.object()
		);
	}
	java::nio::ByteBuffer ByteBuffer::order(java::nio::ByteOrder arg0) const
	{
		return callObjectMethod(
			"order",
			"(Ljava/nio/ByteOrder;)Ljava/nio/ByteBuffer;",
			arg0.object()
		);
	}
	java::nio::ByteOrder ByteBuffer::order() const
	{
		return callObjectMethod(
			"order",
			"()Ljava/nio/ByteOrder;"
		);
	}
	java::nio::ByteBuffer ByteBuffer::position(jint arg0) const
	{
		return callObjectMethod(
			"position",
			"(I)Ljava/nio/ByteBuffer;",
			arg0
		);
	}
	java::nio::ByteBuffer ByteBuffer::put(JByteArray arg0) const
	{
		return callObjectMethod(
			"put",
			"([B)Ljava/nio/ByteBuffer;",
			arg0.object<jbyteArray>()
		);
	}
	java::nio::ByteBuffer ByteBuffer::put(jbyte arg0) const
	{
		return callObjectMethod(
			"put",
			"(B)Ljava/nio/ByteBuffer;",
			arg0
		);
	}
	java::nio::ByteBuffer ByteBuffer::put(java::nio::ByteBuffer arg0) const
	{
		return callObjectMethod(
			"put",
			"(Ljava/nio/ByteBuffer;)Ljava/nio/ByteBuffer;",
			arg0.object()
		);
	}
	java::nio::ByteBuffer ByteBuffer::put(jint arg0, JByteArray arg1) const
	{
		return callObjectMethod(
			"put",
			"(I[B)Ljava/nio/ByteBuffer;",
			arg0,
			arg1.object<jbyteArray>()
		);
	}
	java::nio::ByteBuffer ByteBuffer::put(jint arg0, jbyte arg1) const
	{
		return callObjectMethod(
			"put",
			"(IB)Ljava/nio/ByteBuffer;",
			arg0,
			arg1
		);
	}
	java::nio::ByteBuffer ByteBuffer::put(JByteArray arg0, jint arg1, jint arg2) const
	{
		return callObjectMethod(
			"put",
			"([BII)Ljava/nio/ByteBuffer;",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	java::nio::ByteBuffer ByteBuffer::put(jint arg0, JByteArray arg1, jint arg2, jint arg3) const
	{
		return callObjectMethod(
			"put",
			"(I[BII)Ljava/nio/ByteBuffer;",
			arg0,
			arg1.object<jbyteArray>(),
			arg2,
			arg3
		);
	}
	java::nio::ByteBuffer ByteBuffer::put(jint arg0, java::nio::ByteBuffer arg1, jint arg2, jint arg3) const
	{
		return callObjectMethod(
			"put",
			"(ILjava/nio/ByteBuffer;II)Ljava/nio/ByteBuffer;",
			arg0,
			arg1.object(),
			arg2,
			arg3
		);
	}
	java::nio::ByteBuffer ByteBuffer::putChar(jchar arg0) const
	{
		return callObjectMethod(
			"putChar",
			"(C)Ljava/nio/ByteBuffer;",
			arg0
		);
	}
	java::nio::ByteBuffer ByteBuffer::putChar(jint arg0, jchar arg1) const
	{
		return callObjectMethod(
			"putChar",
			"(IC)Ljava/nio/ByteBuffer;",
			arg0,
			arg1
		);
	}
	java::nio::ByteBuffer ByteBuffer::putDouble(jdouble arg0) const
	{
		return callObjectMethod(
			"putDouble",
			"(D)Ljava/nio/ByteBuffer;",
			arg0
		);
	}
	java::nio::ByteBuffer ByteBuffer::putDouble(jint arg0, jdouble arg1) const
	{
		return callObjectMethod(
			"putDouble",
			"(ID)Ljava/nio/ByteBuffer;",
			arg0,
			arg1
		);
	}
	java::nio::ByteBuffer ByteBuffer::putFloat(jfloat arg0) const
	{
		return callObjectMethod(
			"putFloat",
			"(F)Ljava/nio/ByteBuffer;",
			arg0
		);
	}
	java::nio::ByteBuffer ByteBuffer::putFloat(jint arg0, jfloat arg1) const
	{
		return callObjectMethod(
			"putFloat",
			"(IF)Ljava/nio/ByteBuffer;",
			arg0,
			arg1
		);
	}
	java::nio::ByteBuffer ByteBuffer::putInt(jint arg0) const
	{
		return callObjectMethod(
			"putInt",
			"(I)Ljava/nio/ByteBuffer;",
			arg0
		);
	}
	java::nio::ByteBuffer ByteBuffer::putInt(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"putInt",
			"(II)Ljava/nio/ByteBuffer;",
			arg0,
			arg1
		);
	}
	java::nio::ByteBuffer ByteBuffer::putLong(jlong arg0) const
	{
		return callObjectMethod(
			"putLong",
			"(J)Ljava/nio/ByteBuffer;",
			arg0
		);
	}
	java::nio::ByteBuffer ByteBuffer::putLong(jint arg0, jlong arg1) const
	{
		return callObjectMethod(
			"putLong",
			"(IJ)Ljava/nio/ByteBuffer;",
			arg0,
			arg1
		);
	}
	java::nio::ByteBuffer ByteBuffer::putShort(jshort arg0) const
	{
		return callObjectMethod(
			"putShort",
			"(S)Ljava/nio/ByteBuffer;",
			arg0
		);
	}
	java::nio::ByteBuffer ByteBuffer::putShort(jint arg0, jshort arg1) const
	{
		return callObjectMethod(
			"putShort",
			"(IS)Ljava/nio/ByteBuffer;",
			arg0,
			arg1
		);
	}
	java::nio::ByteBuffer ByteBuffer::reset() const
	{
		return callObjectMethod(
			"reset",
			"()Ljava/nio/ByteBuffer;"
		);
	}
	java::nio::ByteBuffer ByteBuffer::rewind() const
	{
		return callObjectMethod(
			"rewind",
			"()Ljava/nio/ByteBuffer;"
		);
	}
	java::nio::ByteBuffer ByteBuffer::slice() const
	{
		return callObjectMethod(
			"slice",
			"()Ljava/nio/ByteBuffer;"
		);
	}
	java::nio::ByteBuffer ByteBuffer::slice(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"slice",
			"(II)Ljava/nio/ByteBuffer;",
			arg0,
			arg1
		);
	}
	JString ByteBuffer::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::nio

