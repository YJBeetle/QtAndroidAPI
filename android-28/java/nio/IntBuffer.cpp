#include "./Buffer.hpp"
#include "./ByteOrder.hpp"
#include "./IntBuffer.hpp"

namespace java::nio
{
	// Fields
	
	// QJniObject forward
	IntBuffer::IntBuffer(QJniObject obj) : java::nio::Buffer(obj) {}
	
	// Constructors
	
	// Methods
	java::nio::IntBuffer IntBuffer::allocate(jint arg0)
	{
		return callStaticObjectMethod(
			"java.nio.IntBuffer",
			"allocate",
			"(I)Ljava/nio/IntBuffer;",
			arg0
		);
	}
	java::nio::IntBuffer IntBuffer::wrap(jintArray arg0)
	{
		return callStaticObjectMethod(
			"java.nio.IntBuffer",
			"wrap",
			"([I)Ljava/nio/IntBuffer;",
			arg0
		);
	}
	java::nio::IntBuffer IntBuffer::wrap(jintArray arg0, jint arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"java.nio.IntBuffer",
			"wrap",
			"([III)Ljava/nio/IntBuffer;",
			arg0,
			arg1,
			arg2
		);
	}
	jintArray IntBuffer::array()
	{
		return callObjectMethod(
			"array",
			"()[I"
		).object<jintArray>();
	}
	jint IntBuffer::arrayOffset()
	{
		return callMethod<jint>(
			"arrayOffset",
			"()I"
		);
	}
	java::nio::IntBuffer IntBuffer::asReadOnlyBuffer()
	{
		return callObjectMethod(
			"asReadOnlyBuffer",
			"()Ljava/nio/IntBuffer;"
		);
	}
	java::nio::IntBuffer IntBuffer::clear()
	{
		return callObjectMethod(
			"clear",
			"()Ljava/nio/IntBuffer;"
		);
	}
	java::nio::IntBuffer IntBuffer::compact()
	{
		return callObjectMethod(
			"compact",
			"()Ljava/nio/IntBuffer;"
		);
	}
	jint IntBuffer::compareTo(jobject arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jint IntBuffer::compareTo(java::nio::IntBuffer arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/nio/IntBuffer;)I",
			arg0.object()
		);
	}
	java::nio::IntBuffer IntBuffer::duplicate()
	{
		return callObjectMethod(
			"duplicate",
			"()Ljava/nio/IntBuffer;"
		);
	}
	jboolean IntBuffer::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	java::nio::IntBuffer IntBuffer::flip()
	{
		return callObjectMethod(
			"flip",
			"()Ljava/nio/IntBuffer;"
		);
	}
	jint IntBuffer::get()
	{
		return callMethod<jint>(
			"get",
			"()I"
		);
	}
	jint IntBuffer::get(jint arg0)
	{
		return callMethod<jint>(
			"get",
			"(I)I",
			arg0
		);
	}
	java::nio::IntBuffer IntBuffer::get(jintArray arg0)
	{
		return callObjectMethod(
			"get",
			"([I)Ljava/nio/IntBuffer;",
			arg0
		);
	}
	java::nio::IntBuffer IntBuffer::get(jint arg0, jintArray arg1)
	{
		return callObjectMethod(
			"get",
			"(I[I)Ljava/nio/IntBuffer;",
			arg0,
			arg1
		);
	}
	java::nio::IntBuffer IntBuffer::get(jintArray arg0, jint arg1, jint arg2)
	{
		return callObjectMethod(
			"get",
			"([III)Ljava/nio/IntBuffer;",
			arg0,
			arg1,
			arg2
		);
	}
	java::nio::IntBuffer IntBuffer::get(jint arg0, jintArray arg1, jint arg2, jint arg3)
	{
		return callObjectMethod(
			"get",
			"(I[III)Ljava/nio/IntBuffer;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jboolean IntBuffer::hasArray()
	{
		return callMethod<jboolean>(
			"hasArray",
			"()Z"
		);
	}
	jint IntBuffer::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean IntBuffer::isDirect()
	{
		return callMethod<jboolean>(
			"isDirect",
			"()Z"
		);
	}
	java::nio::IntBuffer IntBuffer::limit(jint arg0)
	{
		return callObjectMethod(
			"limit",
			"(I)Ljava/nio/IntBuffer;",
			arg0
		);
	}
	java::nio::IntBuffer IntBuffer::mark()
	{
		return callObjectMethod(
			"mark",
			"()Ljava/nio/IntBuffer;"
		);
	}
	jint IntBuffer::mismatch(java::nio::IntBuffer arg0)
	{
		return callMethod<jint>(
			"mismatch",
			"(Ljava/nio/IntBuffer;)I",
			arg0.object()
		);
	}
	java::nio::ByteOrder IntBuffer::order()
	{
		return callObjectMethod(
			"order",
			"()Ljava/nio/ByteOrder;"
		);
	}
	java::nio::IntBuffer IntBuffer::position(jint arg0)
	{
		return callObjectMethod(
			"position",
			"(I)Ljava/nio/IntBuffer;",
			arg0
		);
	}
	java::nio::IntBuffer IntBuffer::put(jintArray arg0)
	{
		return callObjectMethod(
			"put",
			"([I)Ljava/nio/IntBuffer;",
			arg0
		);
	}
	java::nio::IntBuffer IntBuffer::put(jint arg0)
	{
		return callObjectMethod(
			"put",
			"(I)Ljava/nio/IntBuffer;",
			arg0
		);
	}
	java::nio::IntBuffer IntBuffer::put(java::nio::IntBuffer arg0)
	{
		return callObjectMethod(
			"put",
			"(Ljava/nio/IntBuffer;)Ljava/nio/IntBuffer;",
			arg0.object()
		);
	}
	java::nio::IntBuffer IntBuffer::put(jint arg0, jintArray arg1)
	{
		return callObjectMethod(
			"put",
			"(I[I)Ljava/nio/IntBuffer;",
			arg0,
			arg1
		);
	}
	java::nio::IntBuffer IntBuffer::put(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"put",
			"(II)Ljava/nio/IntBuffer;",
			arg0,
			arg1
		);
	}
	java::nio::IntBuffer IntBuffer::put(jintArray arg0, jint arg1, jint arg2)
	{
		return callObjectMethod(
			"put",
			"([III)Ljava/nio/IntBuffer;",
			arg0,
			arg1,
			arg2
		);
	}
	java::nio::IntBuffer IntBuffer::put(jint arg0, jintArray arg1, jint arg2, jint arg3)
	{
		return callObjectMethod(
			"put",
			"(I[III)Ljava/nio/IntBuffer;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	java::nio::IntBuffer IntBuffer::put(jint arg0, java::nio::IntBuffer arg1, jint arg2, jint arg3)
	{
		return callObjectMethod(
			"put",
			"(ILjava/nio/IntBuffer;II)Ljava/nio/IntBuffer;",
			arg0,
			arg1.object(),
			arg2,
			arg3
		);
	}
	java::nio::IntBuffer IntBuffer::reset()
	{
		return callObjectMethod(
			"reset",
			"()Ljava/nio/IntBuffer;"
		);
	}
	java::nio::IntBuffer IntBuffer::rewind()
	{
		return callObjectMethod(
			"rewind",
			"()Ljava/nio/IntBuffer;"
		);
	}
	java::nio::IntBuffer IntBuffer::slice()
	{
		return callObjectMethod(
			"slice",
			"()Ljava/nio/IntBuffer;"
		);
	}
	java::nio::IntBuffer IntBuffer::slice(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"slice",
			"(II)Ljava/nio/IntBuffer;",
			arg0,
			arg1
		);
	}
	jstring IntBuffer::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::nio

