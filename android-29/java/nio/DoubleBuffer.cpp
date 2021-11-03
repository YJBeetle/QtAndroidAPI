#include "../../JDoubleArray.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Buffer.hpp"
#include "./ByteOrder.hpp"
#include "./DoubleBuffer.hpp"

namespace java::nio
{
	// Fields
	
	// QAndroidJniObject forward
	DoubleBuffer::DoubleBuffer(QAndroidJniObject obj) : java::nio::Buffer(obj) {}
	
	// Constructors
	
	// Methods
	java::nio::DoubleBuffer DoubleBuffer::allocate(jint arg0)
	{
		return callStaticObjectMethod(
			"java.nio.DoubleBuffer",
			"allocate",
			"(I)Ljava/nio/DoubleBuffer;",
			arg0
		);
	}
	java::nio::DoubleBuffer DoubleBuffer::wrap(JDoubleArray arg0)
	{
		return callStaticObjectMethod(
			"java.nio.DoubleBuffer",
			"wrap",
			"([D)Ljava/nio/DoubleBuffer;",
			arg0.object<jdoubleArray>()
		);
	}
	java::nio::DoubleBuffer DoubleBuffer::wrap(JDoubleArray arg0, jint arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"java.nio.DoubleBuffer",
			"wrap",
			"([DII)Ljava/nio/DoubleBuffer;",
			arg0.object<jdoubleArray>(),
			arg1,
			arg2
		);
	}
	JDoubleArray DoubleBuffer::array()
	{
		return callObjectMethod(
			"array",
			"()[D"
		);
	}
	jint DoubleBuffer::arrayOffset()
	{
		return callMethod<jint>(
			"arrayOffset",
			"()I"
		);
	}
	java::nio::DoubleBuffer DoubleBuffer::asReadOnlyBuffer()
	{
		return callObjectMethod(
			"asReadOnlyBuffer",
			"()Ljava/nio/DoubleBuffer;"
		);
	}
	java::nio::DoubleBuffer DoubleBuffer::clear()
	{
		return callObjectMethod(
			"clear",
			"()Ljava/nio/DoubleBuffer;"
		);
	}
	java::nio::DoubleBuffer DoubleBuffer::compact()
	{
		return callObjectMethod(
			"compact",
			"()Ljava/nio/DoubleBuffer;"
		);
	}
	jint DoubleBuffer::compareTo(JObject arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	jint DoubleBuffer::compareTo(java::nio::DoubleBuffer arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/nio/DoubleBuffer;)I",
			arg0.object()
		);
	}
	java::nio::DoubleBuffer DoubleBuffer::duplicate()
	{
		return callObjectMethod(
			"duplicate",
			"()Ljava/nio/DoubleBuffer;"
		);
	}
	jboolean DoubleBuffer::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	java::nio::DoubleBuffer DoubleBuffer::flip()
	{
		return callObjectMethod(
			"flip",
			"()Ljava/nio/DoubleBuffer;"
		);
	}
	jdouble DoubleBuffer::get()
	{
		return callMethod<jdouble>(
			"get",
			"()D"
		);
	}
	jdouble DoubleBuffer::get(jint arg0)
	{
		return callMethod<jdouble>(
			"get",
			"(I)D",
			arg0
		);
	}
	java::nio::DoubleBuffer DoubleBuffer::get(JDoubleArray arg0)
	{
		return callObjectMethod(
			"get",
			"([D)Ljava/nio/DoubleBuffer;",
			arg0.object<jdoubleArray>()
		);
	}
	java::nio::DoubleBuffer DoubleBuffer::get(jint arg0, JDoubleArray arg1)
	{
		return callObjectMethod(
			"get",
			"(I[D)Ljava/nio/DoubleBuffer;",
			arg0,
			arg1.object<jdoubleArray>()
		);
	}
	java::nio::DoubleBuffer DoubleBuffer::get(JDoubleArray arg0, jint arg1, jint arg2)
	{
		return callObjectMethod(
			"get",
			"([DII)Ljava/nio/DoubleBuffer;",
			arg0.object<jdoubleArray>(),
			arg1,
			arg2
		);
	}
	java::nio::DoubleBuffer DoubleBuffer::get(jint arg0, JDoubleArray arg1, jint arg2, jint arg3)
	{
		return callObjectMethod(
			"get",
			"(I[DII)Ljava/nio/DoubleBuffer;",
			arg0,
			arg1.object<jdoubleArray>(),
			arg2,
			arg3
		);
	}
	jboolean DoubleBuffer::hasArray()
	{
		return callMethod<jboolean>(
			"hasArray",
			"()Z"
		);
	}
	jint DoubleBuffer::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean DoubleBuffer::isDirect()
	{
		return callMethod<jboolean>(
			"isDirect",
			"()Z"
		);
	}
	java::nio::DoubleBuffer DoubleBuffer::limit(jint arg0)
	{
		return callObjectMethod(
			"limit",
			"(I)Ljava/nio/DoubleBuffer;",
			arg0
		);
	}
	java::nio::DoubleBuffer DoubleBuffer::mark()
	{
		return callObjectMethod(
			"mark",
			"()Ljava/nio/DoubleBuffer;"
		);
	}
	jint DoubleBuffer::mismatch(java::nio::DoubleBuffer arg0)
	{
		return callMethod<jint>(
			"mismatch",
			"(Ljava/nio/DoubleBuffer;)I",
			arg0.object()
		);
	}
	java::nio::ByteOrder DoubleBuffer::order()
	{
		return callObjectMethod(
			"order",
			"()Ljava/nio/ByteOrder;"
		);
	}
	java::nio::DoubleBuffer DoubleBuffer::position(jint arg0)
	{
		return callObjectMethod(
			"position",
			"(I)Ljava/nio/DoubleBuffer;",
			arg0
		);
	}
	java::nio::DoubleBuffer DoubleBuffer::put(JDoubleArray arg0)
	{
		return callObjectMethod(
			"put",
			"([D)Ljava/nio/DoubleBuffer;",
			arg0.object<jdoubleArray>()
		);
	}
	java::nio::DoubleBuffer DoubleBuffer::put(jdouble arg0)
	{
		return callObjectMethod(
			"put",
			"(D)Ljava/nio/DoubleBuffer;",
			arg0
		);
	}
	java::nio::DoubleBuffer DoubleBuffer::put(java::nio::DoubleBuffer arg0)
	{
		return callObjectMethod(
			"put",
			"(Ljava/nio/DoubleBuffer;)Ljava/nio/DoubleBuffer;",
			arg0.object()
		);
	}
	java::nio::DoubleBuffer DoubleBuffer::put(jint arg0, JDoubleArray arg1)
	{
		return callObjectMethod(
			"put",
			"(I[D)Ljava/nio/DoubleBuffer;",
			arg0,
			arg1.object<jdoubleArray>()
		);
	}
	java::nio::DoubleBuffer DoubleBuffer::put(jint arg0, jdouble arg1)
	{
		return callObjectMethod(
			"put",
			"(ID)Ljava/nio/DoubleBuffer;",
			arg0,
			arg1
		);
	}
	java::nio::DoubleBuffer DoubleBuffer::put(JDoubleArray arg0, jint arg1, jint arg2)
	{
		return callObjectMethod(
			"put",
			"([DII)Ljava/nio/DoubleBuffer;",
			arg0.object<jdoubleArray>(),
			arg1,
			arg2
		);
	}
	java::nio::DoubleBuffer DoubleBuffer::put(jint arg0, JDoubleArray arg1, jint arg2, jint arg3)
	{
		return callObjectMethod(
			"put",
			"(I[DII)Ljava/nio/DoubleBuffer;",
			arg0,
			arg1.object<jdoubleArray>(),
			arg2,
			arg3
		);
	}
	java::nio::DoubleBuffer DoubleBuffer::put(jint arg0, java::nio::DoubleBuffer arg1, jint arg2, jint arg3)
	{
		return callObjectMethod(
			"put",
			"(ILjava/nio/DoubleBuffer;II)Ljava/nio/DoubleBuffer;",
			arg0,
			arg1.object(),
			arg2,
			arg3
		);
	}
	java::nio::DoubleBuffer DoubleBuffer::reset()
	{
		return callObjectMethod(
			"reset",
			"()Ljava/nio/DoubleBuffer;"
		);
	}
	java::nio::DoubleBuffer DoubleBuffer::rewind()
	{
		return callObjectMethod(
			"rewind",
			"()Ljava/nio/DoubleBuffer;"
		);
	}
	java::nio::DoubleBuffer DoubleBuffer::slice()
	{
		return callObjectMethod(
			"slice",
			"()Ljava/nio/DoubleBuffer;"
		);
	}
	java::nio::DoubleBuffer DoubleBuffer::slice(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"slice",
			"(II)Ljava/nio/DoubleBuffer;",
			arg0,
			arg1
		);
	}
	JString DoubleBuffer::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::nio

