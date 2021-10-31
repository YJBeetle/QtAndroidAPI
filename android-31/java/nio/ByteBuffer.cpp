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
	
	// QJniObject forward
	ByteBuffer::ByteBuffer(QJniObject obj) : java::nio::Buffer(obj) {}
	
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
	java::nio::ByteBuffer ByteBuffer::wrap(jbyteArray arg0)
	{
		return callStaticObjectMethod(
			"java.nio.ByteBuffer",
			"wrap",
			"([B)Ljava/nio/ByteBuffer;",
			arg0
		);
	}
	java::nio::ByteBuffer ByteBuffer::wrap(jbyteArray arg0, jint arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"java.nio.ByteBuffer",
			"wrap",
			"([BII)Ljava/nio/ByteBuffer;",
			arg0,
			arg1,
			arg2
		);
	}
	java::nio::ByteBuffer ByteBuffer::alignedSlice(jint arg0)
	{
		return callObjectMethod(
			"alignedSlice",
			"(I)Ljava/nio/ByteBuffer;",
			arg0
		);
	}
	jint ByteBuffer::alignmentOffset(jint arg0, jint arg1)
	{
		return callMethod<jint>(
			"alignmentOffset",
			"(II)I",
			arg0,
			arg1
		);
	}
	jbyteArray ByteBuffer::array()
	{
		return callObjectMethod(
			"array",
			"()[B"
		).object<jbyteArray>();
	}
	jint ByteBuffer::arrayOffset()
	{
		return callMethod<jint>(
			"arrayOffset",
			"()I"
		);
	}
	java::nio::CharBuffer ByteBuffer::asCharBuffer()
	{
		return callObjectMethod(
			"asCharBuffer",
			"()Ljava/nio/CharBuffer;"
		);
	}
	java::nio::DoubleBuffer ByteBuffer::asDoubleBuffer()
	{
		return callObjectMethod(
			"asDoubleBuffer",
			"()Ljava/nio/DoubleBuffer;"
		);
	}
	java::nio::FloatBuffer ByteBuffer::asFloatBuffer()
	{
		return callObjectMethod(
			"asFloatBuffer",
			"()Ljava/nio/FloatBuffer;"
		);
	}
	java::nio::IntBuffer ByteBuffer::asIntBuffer()
	{
		return callObjectMethod(
			"asIntBuffer",
			"()Ljava/nio/IntBuffer;"
		);
	}
	java::nio::LongBuffer ByteBuffer::asLongBuffer()
	{
		return callObjectMethod(
			"asLongBuffer",
			"()Ljava/nio/LongBuffer;"
		);
	}
	java::nio::ByteBuffer ByteBuffer::asReadOnlyBuffer()
	{
		return callObjectMethod(
			"asReadOnlyBuffer",
			"()Ljava/nio/ByteBuffer;"
		);
	}
	java::nio::ShortBuffer ByteBuffer::asShortBuffer()
	{
		return callObjectMethod(
			"asShortBuffer",
			"()Ljava/nio/ShortBuffer;"
		);
	}
	java::nio::ByteBuffer ByteBuffer::clear()
	{
		return callObjectMethod(
			"clear",
			"()Ljava/nio/ByteBuffer;"
		);
	}
	java::nio::ByteBuffer ByteBuffer::compact()
	{
		return callObjectMethod(
			"compact",
			"()Ljava/nio/ByteBuffer;"
		);
	}
	jint ByteBuffer::compareTo(jobject arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jint ByteBuffer::compareTo(java::nio::ByteBuffer arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/nio/ByteBuffer;)I",
			arg0.object()
		);
	}
	java::nio::ByteBuffer ByteBuffer::duplicate()
	{
		return callObjectMethod(
			"duplicate",
			"()Ljava/nio/ByteBuffer;"
		);
	}
	jboolean ByteBuffer::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	java::nio::ByteBuffer ByteBuffer::flip()
	{
		return callObjectMethod(
			"flip",
			"()Ljava/nio/ByteBuffer;"
		);
	}
	jbyte ByteBuffer::get()
	{
		return callMethod<jbyte>(
			"get",
			"()B"
		);
	}
	jbyte ByteBuffer::get(jint arg0)
	{
		return callMethod<jbyte>(
			"get",
			"(I)B",
			arg0
		);
	}
	java::nio::ByteBuffer ByteBuffer::get(jbyteArray arg0)
	{
		return callObjectMethod(
			"get",
			"([B)Ljava/nio/ByteBuffer;",
			arg0
		);
	}
	java::nio::ByteBuffer ByteBuffer::get(jint arg0, jbyteArray arg1)
	{
		return callObjectMethod(
			"get",
			"(I[B)Ljava/nio/ByteBuffer;",
			arg0,
			arg1
		);
	}
	java::nio::ByteBuffer ByteBuffer::get(jbyteArray arg0, jint arg1, jint arg2)
	{
		return callObjectMethod(
			"get",
			"([BII)Ljava/nio/ByteBuffer;",
			arg0,
			arg1,
			arg2
		);
	}
	java::nio::ByteBuffer ByteBuffer::get(jint arg0, jbyteArray arg1, jint arg2, jint arg3)
	{
		return callObjectMethod(
			"get",
			"(I[BII)Ljava/nio/ByteBuffer;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jchar ByteBuffer::getChar()
	{
		return callMethod<jchar>(
			"getChar",
			"()C"
		);
	}
	jchar ByteBuffer::getChar(jint arg0)
	{
		return callMethod<jchar>(
			"getChar",
			"(I)C",
			arg0
		);
	}
	jdouble ByteBuffer::getDouble()
	{
		return callMethod<jdouble>(
			"getDouble",
			"()D"
		);
	}
	jdouble ByteBuffer::getDouble(jint arg0)
	{
		return callMethod<jdouble>(
			"getDouble",
			"(I)D",
			arg0
		);
	}
	jfloat ByteBuffer::getFloat()
	{
		return callMethod<jfloat>(
			"getFloat",
			"()F"
		);
	}
	jfloat ByteBuffer::getFloat(jint arg0)
	{
		return callMethod<jfloat>(
			"getFloat",
			"(I)F",
			arg0
		);
	}
	jint ByteBuffer::getInt()
	{
		return callMethod<jint>(
			"getInt",
			"()I"
		);
	}
	jint ByteBuffer::getInt(jint arg0)
	{
		return callMethod<jint>(
			"getInt",
			"(I)I",
			arg0
		);
	}
	jlong ByteBuffer::getLong()
	{
		return callMethod<jlong>(
			"getLong",
			"()J"
		);
	}
	jlong ByteBuffer::getLong(jint arg0)
	{
		return callMethod<jlong>(
			"getLong",
			"(I)J",
			arg0
		);
	}
	jshort ByteBuffer::getShort()
	{
		return callMethod<jshort>(
			"getShort",
			"()S"
		);
	}
	jshort ByteBuffer::getShort(jint arg0)
	{
		return callMethod<jshort>(
			"getShort",
			"(I)S",
			arg0
		);
	}
	jboolean ByteBuffer::hasArray()
	{
		return callMethod<jboolean>(
			"hasArray",
			"()Z"
		);
	}
	jint ByteBuffer::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean ByteBuffer::isDirect()
	{
		return callMethod<jboolean>(
			"isDirect",
			"()Z"
		);
	}
	java::nio::ByteBuffer ByteBuffer::limit(jint arg0)
	{
		return callObjectMethod(
			"limit",
			"(I)Ljava/nio/ByteBuffer;",
			arg0
		);
	}
	java::nio::ByteBuffer ByteBuffer::mark()
	{
		return callObjectMethod(
			"mark",
			"()Ljava/nio/ByteBuffer;"
		);
	}
	jint ByteBuffer::mismatch(java::nio::ByteBuffer arg0)
	{
		return callMethod<jint>(
			"mismatch",
			"(Ljava/nio/ByteBuffer;)I",
			arg0.object()
		);
	}
	java::nio::ByteBuffer ByteBuffer::order(java::nio::ByteOrder arg0)
	{
		return callObjectMethod(
			"order",
			"(Ljava/nio/ByteOrder;)Ljava/nio/ByteBuffer;",
			arg0.object()
		);
	}
	java::nio::ByteOrder ByteBuffer::order()
	{
		return callObjectMethod(
			"order",
			"()Ljava/nio/ByteOrder;"
		);
	}
	java::nio::ByteBuffer ByteBuffer::position(jint arg0)
	{
		return callObjectMethod(
			"position",
			"(I)Ljava/nio/ByteBuffer;",
			arg0
		);
	}
	java::nio::ByteBuffer ByteBuffer::put(jbyteArray arg0)
	{
		return callObjectMethod(
			"put",
			"([B)Ljava/nio/ByteBuffer;",
			arg0
		);
	}
	java::nio::ByteBuffer ByteBuffer::put(jbyte arg0)
	{
		return callObjectMethod(
			"put",
			"(B)Ljava/nio/ByteBuffer;",
			arg0
		);
	}
	java::nio::ByteBuffer ByteBuffer::put(java::nio::ByteBuffer arg0)
	{
		return callObjectMethod(
			"put",
			"(Ljava/nio/ByteBuffer;)Ljava/nio/ByteBuffer;",
			arg0.object()
		);
	}
	java::nio::ByteBuffer ByteBuffer::put(jint arg0, jbyteArray arg1)
	{
		return callObjectMethod(
			"put",
			"(I[B)Ljava/nio/ByteBuffer;",
			arg0,
			arg1
		);
	}
	java::nio::ByteBuffer ByteBuffer::put(jint arg0, jbyte arg1)
	{
		return callObjectMethod(
			"put",
			"(IB)Ljava/nio/ByteBuffer;",
			arg0,
			arg1
		);
	}
	java::nio::ByteBuffer ByteBuffer::put(jbyteArray arg0, jint arg1, jint arg2)
	{
		return callObjectMethod(
			"put",
			"([BII)Ljava/nio/ByteBuffer;",
			arg0,
			arg1,
			arg2
		);
	}
	java::nio::ByteBuffer ByteBuffer::put(jint arg0, jbyteArray arg1, jint arg2, jint arg3)
	{
		return callObjectMethod(
			"put",
			"(I[BII)Ljava/nio/ByteBuffer;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	java::nio::ByteBuffer ByteBuffer::put(jint arg0, java::nio::ByteBuffer arg1, jint arg2, jint arg3)
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
	java::nio::ByteBuffer ByteBuffer::putChar(jchar arg0)
	{
		return callObjectMethod(
			"putChar",
			"(C)Ljava/nio/ByteBuffer;",
			arg0
		);
	}
	java::nio::ByteBuffer ByteBuffer::putChar(jint arg0, jchar arg1)
	{
		return callObjectMethod(
			"putChar",
			"(IC)Ljava/nio/ByteBuffer;",
			arg0,
			arg1
		);
	}
	java::nio::ByteBuffer ByteBuffer::putDouble(jdouble arg0)
	{
		return callObjectMethod(
			"putDouble",
			"(D)Ljava/nio/ByteBuffer;",
			arg0
		);
	}
	java::nio::ByteBuffer ByteBuffer::putDouble(jint arg0, jdouble arg1)
	{
		return callObjectMethod(
			"putDouble",
			"(ID)Ljava/nio/ByteBuffer;",
			arg0,
			arg1
		);
	}
	java::nio::ByteBuffer ByteBuffer::putFloat(jfloat arg0)
	{
		return callObjectMethod(
			"putFloat",
			"(F)Ljava/nio/ByteBuffer;",
			arg0
		);
	}
	java::nio::ByteBuffer ByteBuffer::putFloat(jint arg0, jfloat arg1)
	{
		return callObjectMethod(
			"putFloat",
			"(IF)Ljava/nio/ByteBuffer;",
			arg0,
			arg1
		);
	}
	java::nio::ByteBuffer ByteBuffer::putInt(jint arg0)
	{
		return callObjectMethod(
			"putInt",
			"(I)Ljava/nio/ByteBuffer;",
			arg0
		);
	}
	java::nio::ByteBuffer ByteBuffer::putInt(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"putInt",
			"(II)Ljava/nio/ByteBuffer;",
			arg0,
			arg1
		);
	}
	java::nio::ByteBuffer ByteBuffer::putLong(jlong arg0)
	{
		return callObjectMethod(
			"putLong",
			"(J)Ljava/nio/ByteBuffer;",
			arg0
		);
	}
	java::nio::ByteBuffer ByteBuffer::putLong(jint arg0, jlong arg1)
	{
		return callObjectMethod(
			"putLong",
			"(IJ)Ljava/nio/ByteBuffer;",
			arg0,
			arg1
		);
	}
	java::nio::ByteBuffer ByteBuffer::putShort(jshort arg0)
	{
		return callObjectMethod(
			"putShort",
			"(S)Ljava/nio/ByteBuffer;",
			arg0
		);
	}
	java::nio::ByteBuffer ByteBuffer::putShort(jint arg0, jshort arg1)
	{
		return callObjectMethod(
			"putShort",
			"(IS)Ljava/nio/ByteBuffer;",
			arg0,
			arg1
		);
	}
	java::nio::ByteBuffer ByteBuffer::reset()
	{
		return callObjectMethod(
			"reset",
			"()Ljava/nio/ByteBuffer;"
		);
	}
	java::nio::ByteBuffer ByteBuffer::rewind()
	{
		return callObjectMethod(
			"rewind",
			"()Ljava/nio/ByteBuffer;"
		);
	}
	java::nio::ByteBuffer ByteBuffer::slice()
	{
		return callObjectMethod(
			"slice",
			"()Ljava/nio/ByteBuffer;"
		);
	}
	java::nio::ByteBuffer ByteBuffer::slice(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"slice",
			"(II)Ljava/nio/ByteBuffer;",
			arg0,
			arg1
		);
	}
	jstring ByteBuffer::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::nio

