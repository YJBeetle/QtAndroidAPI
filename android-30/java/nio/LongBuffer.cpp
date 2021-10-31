#include "./Buffer.hpp"
#include "./ByteOrder.hpp"
#include "./LongBuffer.hpp"

namespace java::nio
{
	// Fields
	
	// QAndroidJniObject forward
	LongBuffer::LongBuffer(QAndroidJniObject obj) : java::nio::Buffer(obj) {}
	
	// Constructors
	
	// Methods
	java::nio::LongBuffer LongBuffer::allocate(jint arg0)
	{
		return callStaticObjectMethod(
			"java.nio.LongBuffer",
			"allocate",
			"(I)Ljava/nio/LongBuffer;",
			arg0
		);
	}
	java::nio::LongBuffer LongBuffer::wrap(jlongArray arg0)
	{
		return callStaticObjectMethod(
			"java.nio.LongBuffer",
			"wrap",
			"([J)Ljava/nio/LongBuffer;",
			arg0
		);
	}
	java::nio::LongBuffer LongBuffer::wrap(jlongArray arg0, jint arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"java.nio.LongBuffer",
			"wrap",
			"([JII)Ljava/nio/LongBuffer;",
			arg0,
			arg1,
			arg2
		);
	}
	jlongArray LongBuffer::array()
	{
		return callObjectMethod(
			"array",
			"()[J"
		).object<jlongArray>();
	}
	jint LongBuffer::arrayOffset()
	{
		return callMethod<jint>(
			"arrayOffset",
			"()I"
		);
	}
	java::nio::LongBuffer LongBuffer::asReadOnlyBuffer()
	{
		return callObjectMethod(
			"asReadOnlyBuffer",
			"()Ljava/nio/LongBuffer;"
		);
	}
	java::nio::LongBuffer LongBuffer::clear()
	{
		return callObjectMethod(
			"clear",
			"()Ljava/nio/LongBuffer;"
		);
	}
	java::nio::LongBuffer LongBuffer::compact()
	{
		return callObjectMethod(
			"compact",
			"()Ljava/nio/LongBuffer;"
		);
	}
	jint LongBuffer::compareTo(jobject arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jint LongBuffer::compareTo(java::nio::LongBuffer arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/nio/LongBuffer;)I",
			arg0.object()
		);
	}
	java::nio::LongBuffer LongBuffer::duplicate()
	{
		return callObjectMethod(
			"duplicate",
			"()Ljava/nio/LongBuffer;"
		);
	}
	jboolean LongBuffer::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	java::nio::LongBuffer LongBuffer::flip()
	{
		return callObjectMethod(
			"flip",
			"()Ljava/nio/LongBuffer;"
		);
	}
	java::nio::LongBuffer LongBuffer::get(jlongArray arg0)
	{
		return callObjectMethod(
			"get",
			"([J)Ljava/nio/LongBuffer;",
			arg0
		);
	}
	java::nio::LongBuffer LongBuffer::get(jint arg0, jlongArray arg1)
	{
		return callObjectMethod(
			"get",
			"(I[J)Ljava/nio/LongBuffer;",
			arg0,
			arg1
		);
	}
	java::nio::LongBuffer LongBuffer::get(jlongArray arg0, jint arg1, jint arg2)
	{
		return callObjectMethod(
			"get",
			"([JII)Ljava/nio/LongBuffer;",
			arg0,
			arg1,
			arg2
		);
	}
	java::nio::LongBuffer LongBuffer::get(jint arg0, jlongArray arg1, jint arg2, jint arg3)
	{
		return callObjectMethod(
			"get",
			"(I[JII)Ljava/nio/LongBuffer;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jlong LongBuffer::get()
	{
		return callMethod<jlong>(
			"get",
			"()J"
		);
	}
	jlong LongBuffer::get(jint arg0)
	{
		return callMethod<jlong>(
			"get",
			"(I)J",
			arg0
		);
	}
	jboolean LongBuffer::hasArray()
	{
		return callMethod<jboolean>(
			"hasArray",
			"()Z"
		);
	}
	jint LongBuffer::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean LongBuffer::isDirect()
	{
		return callMethod<jboolean>(
			"isDirect",
			"()Z"
		);
	}
	java::nio::LongBuffer LongBuffer::limit(jint arg0)
	{
		return callObjectMethod(
			"limit",
			"(I)Ljava/nio/LongBuffer;",
			arg0
		);
	}
	java::nio::LongBuffer LongBuffer::mark()
	{
		return callObjectMethod(
			"mark",
			"()Ljava/nio/LongBuffer;"
		);
	}
	jint LongBuffer::mismatch(java::nio::LongBuffer arg0)
	{
		return callMethod<jint>(
			"mismatch",
			"(Ljava/nio/LongBuffer;)I",
			arg0.object()
		);
	}
	java::nio::ByteOrder LongBuffer::order()
	{
		return callObjectMethod(
			"order",
			"()Ljava/nio/ByteOrder;"
		);
	}
	java::nio::LongBuffer LongBuffer::position(jint arg0)
	{
		return callObjectMethod(
			"position",
			"(I)Ljava/nio/LongBuffer;",
			arg0
		);
	}
	java::nio::LongBuffer LongBuffer::put(jlongArray arg0)
	{
		return callObjectMethod(
			"put",
			"([J)Ljava/nio/LongBuffer;",
			arg0
		);
	}
	java::nio::LongBuffer LongBuffer::put(java::nio::LongBuffer arg0)
	{
		return callObjectMethod(
			"put",
			"(Ljava/nio/LongBuffer;)Ljava/nio/LongBuffer;",
			arg0.object()
		);
	}
	java::nio::LongBuffer LongBuffer::put(jlong arg0)
	{
		return callObjectMethod(
			"put",
			"(J)Ljava/nio/LongBuffer;",
			arg0
		);
	}
	java::nio::LongBuffer LongBuffer::put(jint arg0, jlongArray arg1)
	{
		return callObjectMethod(
			"put",
			"(I[J)Ljava/nio/LongBuffer;",
			arg0,
			arg1
		);
	}
	java::nio::LongBuffer LongBuffer::put(jint arg0, jlong arg1)
	{
		return callObjectMethod(
			"put",
			"(IJ)Ljava/nio/LongBuffer;",
			arg0,
			arg1
		);
	}
	java::nio::LongBuffer LongBuffer::put(jlongArray arg0, jint arg1, jint arg2)
	{
		return callObjectMethod(
			"put",
			"([JII)Ljava/nio/LongBuffer;",
			arg0,
			arg1,
			arg2
		);
	}
	java::nio::LongBuffer LongBuffer::put(jint arg0, jlongArray arg1, jint arg2, jint arg3)
	{
		return callObjectMethod(
			"put",
			"(I[JII)Ljava/nio/LongBuffer;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	java::nio::LongBuffer LongBuffer::put(jint arg0, java::nio::LongBuffer arg1, jint arg2, jint arg3)
	{
		return callObjectMethod(
			"put",
			"(ILjava/nio/LongBuffer;II)Ljava/nio/LongBuffer;",
			arg0,
			arg1.object(),
			arg2,
			arg3
		);
	}
	java::nio::LongBuffer LongBuffer::reset()
	{
		return callObjectMethod(
			"reset",
			"()Ljava/nio/LongBuffer;"
		);
	}
	java::nio::LongBuffer LongBuffer::rewind()
	{
		return callObjectMethod(
			"rewind",
			"()Ljava/nio/LongBuffer;"
		);
	}
	java::nio::LongBuffer LongBuffer::slice()
	{
		return callObjectMethod(
			"slice",
			"()Ljava/nio/LongBuffer;"
		);
	}
	java::nio::LongBuffer LongBuffer::slice(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"slice",
			"(II)Ljava/nio/LongBuffer;",
			arg0,
			arg1
		);
	}
	jstring LongBuffer::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::nio

