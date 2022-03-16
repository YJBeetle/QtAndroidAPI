#pragma once

#include "../../JByteArray.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Buffer.def.hpp"
#include "./ByteOrder.def.hpp"
#include "./CharBuffer.def.hpp"
#include "./DoubleBuffer.def.hpp"
#include "./FloatBuffer.def.hpp"
#include "./IntBuffer.def.hpp"
#include "./LongBuffer.def.hpp"
#include "./ShortBuffer.def.hpp"
#include "./ByteBuffer.def.hpp"

namespace java::nio
{
	// Fields
	
	// Constructors
	
	// Methods
	inline java::nio::ByteBuffer ByteBuffer::allocate(jint arg0)
	{
		return callStaticObjectMethod(
			"java.nio.ByteBuffer",
			"allocate",
			"(I)Ljava/nio/ByteBuffer;",
			arg0
		);
	}
	inline java::nio::ByteBuffer ByteBuffer::allocateDirect(jint arg0)
	{
		return callStaticObjectMethod(
			"java.nio.ByteBuffer",
			"allocateDirect",
			"(I)Ljava/nio/ByteBuffer;",
			arg0
		);
	}
	inline java::nio::ByteBuffer ByteBuffer::wrap(JByteArray arg0)
	{
		return callStaticObjectMethod(
			"java.nio.ByteBuffer",
			"wrap",
			"([B)Ljava/nio/ByteBuffer;",
			arg0.object<jbyteArray>()
		);
	}
	inline java::nio::ByteBuffer ByteBuffer::wrap(JByteArray arg0, jint arg1, jint arg2)
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
	inline java::nio::ByteBuffer ByteBuffer::alignedSlice(jint arg0) const
	{
		return callObjectMethod(
			"alignedSlice",
			"(I)Ljava/nio/ByteBuffer;",
			arg0
		);
	}
	inline jint ByteBuffer::alignmentOffset(jint arg0, jint arg1) const
	{
		return callMethod<jint>(
			"alignmentOffset",
			"(II)I",
			arg0,
			arg1
		);
	}
	inline JByteArray ByteBuffer::array() const
	{
		return callObjectMethod(
			"array",
			"()[B"
		);
	}
	inline jint ByteBuffer::arrayOffset() const
	{
		return callMethod<jint>(
			"arrayOffset",
			"()I"
		);
	}
	inline java::nio::CharBuffer ByteBuffer::asCharBuffer() const
	{
		return callObjectMethod(
			"asCharBuffer",
			"()Ljava/nio/CharBuffer;"
		);
	}
	inline java::nio::DoubleBuffer ByteBuffer::asDoubleBuffer() const
	{
		return callObjectMethod(
			"asDoubleBuffer",
			"()Ljava/nio/DoubleBuffer;"
		);
	}
	inline java::nio::FloatBuffer ByteBuffer::asFloatBuffer() const
	{
		return callObjectMethod(
			"asFloatBuffer",
			"()Ljava/nio/FloatBuffer;"
		);
	}
	inline java::nio::IntBuffer ByteBuffer::asIntBuffer() const
	{
		return callObjectMethod(
			"asIntBuffer",
			"()Ljava/nio/IntBuffer;"
		);
	}
	inline java::nio::LongBuffer ByteBuffer::asLongBuffer() const
	{
		return callObjectMethod(
			"asLongBuffer",
			"()Ljava/nio/LongBuffer;"
		);
	}
	inline java::nio::ByteBuffer ByteBuffer::asReadOnlyBuffer() const
	{
		return callObjectMethod(
			"asReadOnlyBuffer",
			"()Ljava/nio/ByteBuffer;"
		);
	}
	inline java::nio::ShortBuffer ByteBuffer::asShortBuffer() const
	{
		return callObjectMethod(
			"asShortBuffer",
			"()Ljava/nio/ShortBuffer;"
		);
	}
	inline java::nio::ByteBuffer ByteBuffer::clear() const
	{
		return callObjectMethod(
			"clear",
			"()Ljava/nio/ByteBuffer;"
		);
	}
	inline java::nio::ByteBuffer ByteBuffer::compact() const
	{
		return callObjectMethod(
			"compact",
			"()Ljava/nio/ByteBuffer;"
		);
	}
	inline jint ByteBuffer::compareTo(JObject arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	inline jint ByteBuffer::compareTo(java::nio::ByteBuffer arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/nio/ByteBuffer;)I",
			arg0.object()
		);
	}
	inline java::nio::ByteBuffer ByteBuffer::duplicate() const
	{
		return callObjectMethod(
			"duplicate",
			"()Ljava/nio/ByteBuffer;"
		);
	}
	inline jboolean ByteBuffer::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline java::nio::ByteBuffer ByteBuffer::flip() const
	{
		return callObjectMethod(
			"flip",
			"()Ljava/nio/ByteBuffer;"
		);
	}
	inline jbyte ByteBuffer::get() const
	{
		return callMethod<jbyte>(
			"get",
			"()B"
		);
	}
	inline jbyte ByteBuffer::get(jint arg0) const
	{
		return callMethod<jbyte>(
			"get",
			"(I)B",
			arg0
		);
	}
	inline java::nio::ByteBuffer ByteBuffer::get(JByteArray arg0) const
	{
		return callObjectMethod(
			"get",
			"([B)Ljava/nio/ByteBuffer;",
			arg0.object<jbyteArray>()
		);
	}
	inline java::nio::ByteBuffer ByteBuffer::get(jint arg0, JByteArray arg1) const
	{
		return callObjectMethod(
			"get",
			"(I[B)Ljava/nio/ByteBuffer;",
			arg0,
			arg1.object<jbyteArray>()
		);
	}
	inline java::nio::ByteBuffer ByteBuffer::get(JByteArray arg0, jint arg1, jint arg2) const
	{
		return callObjectMethod(
			"get",
			"([BII)Ljava/nio/ByteBuffer;",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	inline java::nio::ByteBuffer ByteBuffer::get(jint arg0, JByteArray arg1, jint arg2, jint arg3) const
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
	inline jchar ByteBuffer::getChar() const
	{
		return callMethod<jchar>(
			"getChar",
			"()C"
		);
	}
	inline jchar ByteBuffer::getChar(jint arg0) const
	{
		return callMethod<jchar>(
			"getChar",
			"(I)C",
			arg0
		);
	}
	inline jdouble ByteBuffer::getDouble() const
	{
		return callMethod<jdouble>(
			"getDouble",
			"()D"
		);
	}
	inline jdouble ByteBuffer::getDouble(jint arg0) const
	{
		return callMethod<jdouble>(
			"getDouble",
			"(I)D",
			arg0
		);
	}
	inline jfloat ByteBuffer::getFloat() const
	{
		return callMethod<jfloat>(
			"getFloat",
			"()F"
		);
	}
	inline jfloat ByteBuffer::getFloat(jint arg0) const
	{
		return callMethod<jfloat>(
			"getFloat",
			"(I)F",
			arg0
		);
	}
	inline jint ByteBuffer::getInt() const
	{
		return callMethod<jint>(
			"getInt",
			"()I"
		);
	}
	inline jint ByteBuffer::getInt(jint arg0) const
	{
		return callMethod<jint>(
			"getInt",
			"(I)I",
			arg0
		);
	}
	inline jlong ByteBuffer::getLong() const
	{
		return callMethod<jlong>(
			"getLong",
			"()J"
		);
	}
	inline jlong ByteBuffer::getLong(jint arg0) const
	{
		return callMethod<jlong>(
			"getLong",
			"(I)J",
			arg0
		);
	}
	inline jshort ByteBuffer::getShort() const
	{
		return callMethod<jshort>(
			"getShort",
			"()S"
		);
	}
	inline jshort ByteBuffer::getShort(jint arg0) const
	{
		return callMethod<jshort>(
			"getShort",
			"(I)S",
			arg0
		);
	}
	inline jboolean ByteBuffer::hasArray() const
	{
		return callMethod<jboolean>(
			"hasArray",
			"()Z"
		);
	}
	inline jint ByteBuffer::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean ByteBuffer::isDirect() const
	{
		return callMethod<jboolean>(
			"isDirect",
			"()Z"
		);
	}
	inline java::nio::ByteBuffer ByteBuffer::limit(jint arg0) const
	{
		return callObjectMethod(
			"limit",
			"(I)Ljava/nio/ByteBuffer;",
			arg0
		);
	}
	inline java::nio::ByteBuffer ByteBuffer::mark() const
	{
		return callObjectMethod(
			"mark",
			"()Ljava/nio/ByteBuffer;"
		);
	}
	inline jint ByteBuffer::mismatch(java::nio::ByteBuffer arg0) const
	{
		return callMethod<jint>(
			"mismatch",
			"(Ljava/nio/ByteBuffer;)I",
			arg0.object()
		);
	}
	inline java::nio::ByteBuffer ByteBuffer::order(java::nio::ByteOrder arg0) const
	{
		return callObjectMethod(
			"order",
			"(Ljava/nio/ByteOrder;)Ljava/nio/ByteBuffer;",
			arg0.object()
		);
	}
	inline java::nio::ByteOrder ByteBuffer::order() const
	{
		return callObjectMethod(
			"order",
			"()Ljava/nio/ByteOrder;"
		);
	}
	inline java::nio::ByteBuffer ByteBuffer::position(jint arg0) const
	{
		return callObjectMethod(
			"position",
			"(I)Ljava/nio/ByteBuffer;",
			arg0
		);
	}
	inline java::nio::ByteBuffer ByteBuffer::put(JByteArray arg0) const
	{
		return callObjectMethod(
			"put",
			"([B)Ljava/nio/ByteBuffer;",
			arg0.object<jbyteArray>()
		);
	}
	inline java::nio::ByteBuffer ByteBuffer::put(jbyte arg0) const
	{
		return callObjectMethod(
			"put",
			"(B)Ljava/nio/ByteBuffer;",
			arg0
		);
	}
	inline java::nio::ByteBuffer ByteBuffer::put(java::nio::ByteBuffer arg0) const
	{
		return callObjectMethod(
			"put",
			"(Ljava/nio/ByteBuffer;)Ljava/nio/ByteBuffer;",
			arg0.object()
		);
	}
	inline java::nio::ByteBuffer ByteBuffer::put(jint arg0, JByteArray arg1) const
	{
		return callObjectMethod(
			"put",
			"(I[B)Ljava/nio/ByteBuffer;",
			arg0,
			arg1.object<jbyteArray>()
		);
	}
	inline java::nio::ByteBuffer ByteBuffer::put(jint arg0, jbyte arg1) const
	{
		return callObjectMethod(
			"put",
			"(IB)Ljava/nio/ByteBuffer;",
			arg0,
			arg1
		);
	}
	inline java::nio::ByteBuffer ByteBuffer::put(JByteArray arg0, jint arg1, jint arg2) const
	{
		return callObjectMethod(
			"put",
			"([BII)Ljava/nio/ByteBuffer;",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	inline java::nio::ByteBuffer ByteBuffer::put(jint arg0, JByteArray arg1, jint arg2, jint arg3) const
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
	inline java::nio::ByteBuffer ByteBuffer::put(jint arg0, java::nio::ByteBuffer arg1, jint arg2, jint arg3) const
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
	inline java::nio::ByteBuffer ByteBuffer::putChar(jchar arg0) const
	{
		return callObjectMethod(
			"putChar",
			"(C)Ljava/nio/ByteBuffer;",
			arg0
		);
	}
	inline java::nio::ByteBuffer ByteBuffer::putChar(jint arg0, jchar arg1) const
	{
		return callObjectMethod(
			"putChar",
			"(IC)Ljava/nio/ByteBuffer;",
			arg0,
			arg1
		);
	}
	inline java::nio::ByteBuffer ByteBuffer::putDouble(jdouble arg0) const
	{
		return callObjectMethod(
			"putDouble",
			"(D)Ljava/nio/ByteBuffer;",
			arg0
		);
	}
	inline java::nio::ByteBuffer ByteBuffer::putDouble(jint arg0, jdouble arg1) const
	{
		return callObjectMethod(
			"putDouble",
			"(ID)Ljava/nio/ByteBuffer;",
			arg0,
			arg1
		);
	}
	inline java::nio::ByteBuffer ByteBuffer::putFloat(jfloat arg0) const
	{
		return callObjectMethod(
			"putFloat",
			"(F)Ljava/nio/ByteBuffer;",
			arg0
		);
	}
	inline java::nio::ByteBuffer ByteBuffer::putFloat(jint arg0, jfloat arg1) const
	{
		return callObjectMethod(
			"putFloat",
			"(IF)Ljava/nio/ByteBuffer;",
			arg0,
			arg1
		);
	}
	inline java::nio::ByteBuffer ByteBuffer::putInt(jint arg0) const
	{
		return callObjectMethod(
			"putInt",
			"(I)Ljava/nio/ByteBuffer;",
			arg0
		);
	}
	inline java::nio::ByteBuffer ByteBuffer::putInt(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"putInt",
			"(II)Ljava/nio/ByteBuffer;",
			arg0,
			arg1
		);
	}
	inline java::nio::ByteBuffer ByteBuffer::putLong(jlong arg0) const
	{
		return callObjectMethod(
			"putLong",
			"(J)Ljava/nio/ByteBuffer;",
			arg0
		);
	}
	inline java::nio::ByteBuffer ByteBuffer::putLong(jint arg0, jlong arg1) const
	{
		return callObjectMethod(
			"putLong",
			"(IJ)Ljava/nio/ByteBuffer;",
			arg0,
			arg1
		);
	}
	inline java::nio::ByteBuffer ByteBuffer::putShort(jshort arg0) const
	{
		return callObjectMethod(
			"putShort",
			"(S)Ljava/nio/ByteBuffer;",
			arg0
		);
	}
	inline java::nio::ByteBuffer ByteBuffer::putShort(jint arg0, jshort arg1) const
	{
		return callObjectMethod(
			"putShort",
			"(IS)Ljava/nio/ByteBuffer;",
			arg0,
			arg1
		);
	}
	inline java::nio::ByteBuffer ByteBuffer::reset() const
	{
		return callObjectMethod(
			"reset",
			"()Ljava/nio/ByteBuffer;"
		);
	}
	inline java::nio::ByteBuffer ByteBuffer::rewind() const
	{
		return callObjectMethod(
			"rewind",
			"()Ljava/nio/ByteBuffer;"
		);
	}
	inline java::nio::ByteBuffer ByteBuffer::slice() const
	{
		return callObjectMethod(
			"slice",
			"()Ljava/nio/ByteBuffer;"
		);
	}
	inline java::nio::ByteBuffer ByteBuffer::slice(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"slice",
			"(II)Ljava/nio/ByteBuffer;",
			arg0,
			arg1
		);
	}
	inline JString ByteBuffer::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::nio

// Base class headers
#include "./Buffer.hpp"

