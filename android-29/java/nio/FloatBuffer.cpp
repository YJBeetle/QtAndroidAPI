#include "./Buffer.hpp"
#include "./ByteOrder.hpp"
#include "./FloatBuffer.hpp"

namespace java::nio
{
	// Fields
	
	// QAndroidJniObject forward
	FloatBuffer::FloatBuffer(QAndroidJniObject obj) : java::nio::Buffer(obj) {}
	
	// Constructors
	
	// Methods
	java::nio::FloatBuffer FloatBuffer::allocate(jint arg0)
	{
		return callStaticObjectMethod(
			"java.nio.FloatBuffer",
			"allocate",
			"(I)Ljava/nio/FloatBuffer;",
			arg0
		);
	}
	java::nio::FloatBuffer FloatBuffer::wrap(jfloatArray arg0)
	{
		return callStaticObjectMethod(
			"java.nio.FloatBuffer",
			"wrap",
			"([F)Ljava/nio/FloatBuffer;",
			arg0
		);
	}
	java::nio::FloatBuffer FloatBuffer::wrap(jfloatArray arg0, jint arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"java.nio.FloatBuffer",
			"wrap",
			"([FII)Ljava/nio/FloatBuffer;",
			arg0,
			arg1,
			arg2
		);
	}
	jfloatArray FloatBuffer::array()
	{
		return callObjectMethod(
			"array",
			"()[F"
		).object<jfloatArray>();
	}
	jint FloatBuffer::arrayOffset()
	{
		return callMethod<jint>(
			"arrayOffset",
			"()I"
		);
	}
	java::nio::FloatBuffer FloatBuffer::asReadOnlyBuffer()
	{
		return callObjectMethod(
			"asReadOnlyBuffer",
			"()Ljava/nio/FloatBuffer;"
		);
	}
	java::nio::FloatBuffer FloatBuffer::clear()
	{
		return callObjectMethod(
			"clear",
			"()Ljava/nio/FloatBuffer;"
		);
	}
	java::nio::FloatBuffer FloatBuffer::compact()
	{
		return callObjectMethod(
			"compact",
			"()Ljava/nio/FloatBuffer;"
		);
	}
	jint FloatBuffer::compareTo(jobject arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jint FloatBuffer::compareTo(java::nio::FloatBuffer arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/nio/FloatBuffer;)I",
			arg0.object()
		);
	}
	java::nio::FloatBuffer FloatBuffer::duplicate()
	{
		return callObjectMethod(
			"duplicate",
			"()Ljava/nio/FloatBuffer;"
		);
	}
	jboolean FloatBuffer::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	java::nio::FloatBuffer FloatBuffer::flip()
	{
		return callObjectMethod(
			"flip",
			"()Ljava/nio/FloatBuffer;"
		);
	}
	jfloat FloatBuffer::get()
	{
		return callMethod<jfloat>(
			"get",
			"()F"
		);
	}
	jfloat FloatBuffer::get(jint arg0)
	{
		return callMethod<jfloat>(
			"get",
			"(I)F",
			arg0
		);
	}
	java::nio::FloatBuffer FloatBuffer::get(jfloatArray arg0)
	{
		return callObjectMethod(
			"get",
			"([F)Ljava/nio/FloatBuffer;",
			arg0
		);
	}
	java::nio::FloatBuffer FloatBuffer::get(jint arg0, jfloatArray arg1)
	{
		return callObjectMethod(
			"get",
			"(I[F)Ljava/nio/FloatBuffer;",
			arg0,
			arg1
		);
	}
	java::nio::FloatBuffer FloatBuffer::get(jfloatArray arg0, jint arg1, jint arg2)
	{
		return callObjectMethod(
			"get",
			"([FII)Ljava/nio/FloatBuffer;",
			arg0,
			arg1,
			arg2
		);
	}
	java::nio::FloatBuffer FloatBuffer::get(jint arg0, jfloatArray arg1, jint arg2, jint arg3)
	{
		return callObjectMethod(
			"get",
			"(I[FII)Ljava/nio/FloatBuffer;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jboolean FloatBuffer::hasArray()
	{
		return callMethod<jboolean>(
			"hasArray",
			"()Z"
		);
	}
	jint FloatBuffer::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean FloatBuffer::isDirect()
	{
		return callMethod<jboolean>(
			"isDirect",
			"()Z"
		);
	}
	java::nio::FloatBuffer FloatBuffer::limit(jint arg0)
	{
		return callObjectMethod(
			"limit",
			"(I)Ljava/nio/FloatBuffer;",
			arg0
		);
	}
	java::nio::FloatBuffer FloatBuffer::mark()
	{
		return callObjectMethod(
			"mark",
			"()Ljava/nio/FloatBuffer;"
		);
	}
	jint FloatBuffer::mismatch(java::nio::FloatBuffer arg0)
	{
		return callMethod<jint>(
			"mismatch",
			"(Ljava/nio/FloatBuffer;)I",
			arg0.object()
		);
	}
	java::nio::ByteOrder FloatBuffer::order()
	{
		return callObjectMethod(
			"order",
			"()Ljava/nio/ByteOrder;"
		);
	}
	java::nio::FloatBuffer FloatBuffer::position(jint arg0)
	{
		return callObjectMethod(
			"position",
			"(I)Ljava/nio/FloatBuffer;",
			arg0
		);
	}
	java::nio::FloatBuffer FloatBuffer::put(jfloatArray arg0)
	{
		return callObjectMethod(
			"put",
			"([F)Ljava/nio/FloatBuffer;",
			arg0
		);
	}
	java::nio::FloatBuffer FloatBuffer::put(jfloat arg0)
	{
		return callObjectMethod(
			"put",
			"(F)Ljava/nio/FloatBuffer;",
			arg0
		);
	}
	java::nio::FloatBuffer FloatBuffer::put(java::nio::FloatBuffer arg0)
	{
		return callObjectMethod(
			"put",
			"(Ljava/nio/FloatBuffer;)Ljava/nio/FloatBuffer;",
			arg0.object()
		);
	}
	java::nio::FloatBuffer FloatBuffer::put(jint arg0, jfloatArray arg1)
	{
		return callObjectMethod(
			"put",
			"(I[F)Ljava/nio/FloatBuffer;",
			arg0,
			arg1
		);
	}
	java::nio::FloatBuffer FloatBuffer::put(jint arg0, jfloat arg1)
	{
		return callObjectMethod(
			"put",
			"(IF)Ljava/nio/FloatBuffer;",
			arg0,
			arg1
		);
	}
	java::nio::FloatBuffer FloatBuffer::put(jfloatArray arg0, jint arg1, jint arg2)
	{
		return callObjectMethod(
			"put",
			"([FII)Ljava/nio/FloatBuffer;",
			arg0,
			arg1,
			arg2
		);
	}
	java::nio::FloatBuffer FloatBuffer::put(jint arg0, jfloatArray arg1, jint arg2, jint arg3)
	{
		return callObjectMethod(
			"put",
			"(I[FII)Ljava/nio/FloatBuffer;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	java::nio::FloatBuffer FloatBuffer::put(jint arg0, java::nio::FloatBuffer arg1, jint arg2, jint arg3)
	{
		return callObjectMethod(
			"put",
			"(ILjava/nio/FloatBuffer;II)Ljava/nio/FloatBuffer;",
			arg0,
			arg1.object(),
			arg2,
			arg3
		);
	}
	java::nio::FloatBuffer FloatBuffer::reset()
	{
		return callObjectMethod(
			"reset",
			"()Ljava/nio/FloatBuffer;"
		);
	}
	java::nio::FloatBuffer FloatBuffer::rewind()
	{
		return callObjectMethod(
			"rewind",
			"()Ljava/nio/FloatBuffer;"
		);
	}
	java::nio::FloatBuffer FloatBuffer::slice()
	{
		return callObjectMethod(
			"slice",
			"()Ljava/nio/FloatBuffer;"
		);
	}
	java::nio::FloatBuffer FloatBuffer::slice(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"slice",
			"(II)Ljava/nio/FloatBuffer;",
			arg0,
			arg1
		);
	}
	jstring FloatBuffer::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::nio

