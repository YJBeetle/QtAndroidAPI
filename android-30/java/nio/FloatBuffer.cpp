#include "../../JFloatArray.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
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
	java::nio::FloatBuffer FloatBuffer::wrap(JFloatArray arg0)
	{
		return callStaticObjectMethod(
			"java.nio.FloatBuffer",
			"wrap",
			"([F)Ljava/nio/FloatBuffer;",
			arg0.object<jfloatArray>()
		);
	}
	java::nio::FloatBuffer FloatBuffer::wrap(JFloatArray arg0, jint arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"java.nio.FloatBuffer",
			"wrap",
			"([FII)Ljava/nio/FloatBuffer;",
			arg0.object<jfloatArray>(),
			arg1,
			arg2
		);
	}
	JFloatArray FloatBuffer::array() const
	{
		return callObjectMethod(
			"array",
			"()[F"
		);
	}
	jint FloatBuffer::arrayOffset() const
	{
		return callMethod<jint>(
			"arrayOffset",
			"()I"
		);
	}
	java::nio::FloatBuffer FloatBuffer::asReadOnlyBuffer() const
	{
		return callObjectMethod(
			"asReadOnlyBuffer",
			"()Ljava/nio/FloatBuffer;"
		);
	}
	java::nio::FloatBuffer FloatBuffer::clear() const
	{
		return callObjectMethod(
			"clear",
			"()Ljava/nio/FloatBuffer;"
		);
	}
	java::nio::FloatBuffer FloatBuffer::compact() const
	{
		return callObjectMethod(
			"compact",
			"()Ljava/nio/FloatBuffer;"
		);
	}
	jint FloatBuffer::compareTo(JObject arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	jint FloatBuffer::compareTo(java::nio::FloatBuffer arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/nio/FloatBuffer;)I",
			arg0.object()
		);
	}
	java::nio::FloatBuffer FloatBuffer::duplicate() const
	{
		return callObjectMethod(
			"duplicate",
			"()Ljava/nio/FloatBuffer;"
		);
	}
	jboolean FloatBuffer::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	java::nio::FloatBuffer FloatBuffer::flip() const
	{
		return callObjectMethod(
			"flip",
			"()Ljava/nio/FloatBuffer;"
		);
	}
	jfloat FloatBuffer::get() const
	{
		return callMethod<jfloat>(
			"get",
			"()F"
		);
	}
	jfloat FloatBuffer::get(jint arg0) const
	{
		return callMethod<jfloat>(
			"get",
			"(I)F",
			arg0
		);
	}
	java::nio::FloatBuffer FloatBuffer::get(JFloatArray arg0) const
	{
		return callObjectMethod(
			"get",
			"([F)Ljava/nio/FloatBuffer;",
			arg0.object<jfloatArray>()
		);
	}
	java::nio::FloatBuffer FloatBuffer::get(jint arg0, JFloatArray arg1) const
	{
		return callObjectMethod(
			"get",
			"(I[F)Ljava/nio/FloatBuffer;",
			arg0,
			arg1.object<jfloatArray>()
		);
	}
	java::nio::FloatBuffer FloatBuffer::get(JFloatArray arg0, jint arg1, jint arg2) const
	{
		return callObjectMethod(
			"get",
			"([FII)Ljava/nio/FloatBuffer;",
			arg0.object<jfloatArray>(),
			arg1,
			arg2
		);
	}
	java::nio::FloatBuffer FloatBuffer::get(jint arg0, JFloatArray arg1, jint arg2, jint arg3) const
	{
		return callObjectMethod(
			"get",
			"(I[FII)Ljava/nio/FloatBuffer;",
			arg0,
			arg1.object<jfloatArray>(),
			arg2,
			arg3
		);
	}
	jboolean FloatBuffer::hasArray() const
	{
		return callMethod<jboolean>(
			"hasArray",
			"()Z"
		);
	}
	jint FloatBuffer::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean FloatBuffer::isDirect() const
	{
		return callMethod<jboolean>(
			"isDirect",
			"()Z"
		);
	}
	java::nio::FloatBuffer FloatBuffer::limit(jint arg0) const
	{
		return callObjectMethod(
			"limit",
			"(I)Ljava/nio/FloatBuffer;",
			arg0
		);
	}
	java::nio::FloatBuffer FloatBuffer::mark() const
	{
		return callObjectMethod(
			"mark",
			"()Ljava/nio/FloatBuffer;"
		);
	}
	jint FloatBuffer::mismatch(java::nio::FloatBuffer arg0) const
	{
		return callMethod<jint>(
			"mismatch",
			"(Ljava/nio/FloatBuffer;)I",
			arg0.object()
		);
	}
	java::nio::ByteOrder FloatBuffer::order() const
	{
		return callObjectMethod(
			"order",
			"()Ljava/nio/ByteOrder;"
		);
	}
	java::nio::FloatBuffer FloatBuffer::position(jint arg0) const
	{
		return callObjectMethod(
			"position",
			"(I)Ljava/nio/FloatBuffer;",
			arg0
		);
	}
	java::nio::FloatBuffer FloatBuffer::put(JFloatArray arg0) const
	{
		return callObjectMethod(
			"put",
			"([F)Ljava/nio/FloatBuffer;",
			arg0.object<jfloatArray>()
		);
	}
	java::nio::FloatBuffer FloatBuffer::put(jfloat arg0) const
	{
		return callObjectMethod(
			"put",
			"(F)Ljava/nio/FloatBuffer;",
			arg0
		);
	}
	java::nio::FloatBuffer FloatBuffer::put(java::nio::FloatBuffer arg0) const
	{
		return callObjectMethod(
			"put",
			"(Ljava/nio/FloatBuffer;)Ljava/nio/FloatBuffer;",
			arg0.object()
		);
	}
	java::nio::FloatBuffer FloatBuffer::put(jint arg0, JFloatArray arg1) const
	{
		return callObjectMethod(
			"put",
			"(I[F)Ljava/nio/FloatBuffer;",
			arg0,
			arg1.object<jfloatArray>()
		);
	}
	java::nio::FloatBuffer FloatBuffer::put(jint arg0, jfloat arg1) const
	{
		return callObjectMethod(
			"put",
			"(IF)Ljava/nio/FloatBuffer;",
			arg0,
			arg1
		);
	}
	java::nio::FloatBuffer FloatBuffer::put(JFloatArray arg0, jint arg1, jint arg2) const
	{
		return callObjectMethod(
			"put",
			"([FII)Ljava/nio/FloatBuffer;",
			arg0.object<jfloatArray>(),
			arg1,
			arg2
		);
	}
	java::nio::FloatBuffer FloatBuffer::put(jint arg0, JFloatArray arg1, jint arg2, jint arg3) const
	{
		return callObjectMethod(
			"put",
			"(I[FII)Ljava/nio/FloatBuffer;",
			arg0,
			arg1.object<jfloatArray>(),
			arg2,
			arg3
		);
	}
	java::nio::FloatBuffer FloatBuffer::put(jint arg0, java::nio::FloatBuffer arg1, jint arg2, jint arg3) const
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
	java::nio::FloatBuffer FloatBuffer::reset() const
	{
		return callObjectMethod(
			"reset",
			"()Ljava/nio/FloatBuffer;"
		);
	}
	java::nio::FloatBuffer FloatBuffer::rewind() const
	{
		return callObjectMethod(
			"rewind",
			"()Ljava/nio/FloatBuffer;"
		);
	}
	java::nio::FloatBuffer FloatBuffer::slice() const
	{
		return callObjectMethod(
			"slice",
			"()Ljava/nio/FloatBuffer;"
		);
	}
	java::nio::FloatBuffer FloatBuffer::slice(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"slice",
			"(II)Ljava/nio/FloatBuffer;",
			arg0,
			arg1
		);
	}
	JString FloatBuffer::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::nio

