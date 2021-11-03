#include "../../JShortArray.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Buffer.hpp"
#include "./ByteOrder.hpp"
#include "./ShortBuffer.hpp"

namespace java::nio
{
	// Fields
	
	// QAndroidJniObject forward
	ShortBuffer::ShortBuffer(QAndroidJniObject obj) : java::nio::Buffer(obj) {}
	
	// Constructors
	
	// Methods
	java::nio::ShortBuffer ShortBuffer::allocate(jint arg0)
	{
		return callStaticObjectMethod(
			"java.nio.ShortBuffer",
			"allocate",
			"(I)Ljava/nio/ShortBuffer;",
			arg0
		);
	}
	java::nio::ShortBuffer ShortBuffer::wrap(JShortArray arg0)
	{
		return callStaticObjectMethod(
			"java.nio.ShortBuffer",
			"wrap",
			"([S)Ljava/nio/ShortBuffer;",
			arg0.object<jshortArray>()
		);
	}
	java::nio::ShortBuffer ShortBuffer::wrap(JShortArray arg0, jint arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"java.nio.ShortBuffer",
			"wrap",
			"([SII)Ljava/nio/ShortBuffer;",
			arg0.object<jshortArray>(),
			arg1,
			arg2
		);
	}
	JShortArray ShortBuffer::array()
	{
		return callObjectMethod(
			"array",
			"()[S"
		);
	}
	jint ShortBuffer::arrayOffset()
	{
		return callMethod<jint>(
			"arrayOffset",
			"()I"
		);
	}
	java::nio::ShortBuffer ShortBuffer::asReadOnlyBuffer()
	{
		return callObjectMethod(
			"asReadOnlyBuffer",
			"()Ljava/nio/ShortBuffer;"
		);
	}
	java::nio::ShortBuffer ShortBuffer::clear()
	{
		return callObjectMethod(
			"clear",
			"()Ljava/nio/ShortBuffer;"
		);
	}
	java::nio::ShortBuffer ShortBuffer::compact()
	{
		return callObjectMethod(
			"compact",
			"()Ljava/nio/ShortBuffer;"
		);
	}
	jint ShortBuffer::compareTo(JObject arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	jint ShortBuffer::compareTo(java::nio::ShortBuffer arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/nio/ShortBuffer;)I",
			arg0.object()
		);
	}
	java::nio::ShortBuffer ShortBuffer::duplicate()
	{
		return callObjectMethod(
			"duplicate",
			"()Ljava/nio/ShortBuffer;"
		);
	}
	jboolean ShortBuffer::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	java::nio::ShortBuffer ShortBuffer::flip()
	{
		return callObjectMethod(
			"flip",
			"()Ljava/nio/ShortBuffer;"
		);
	}
	java::nio::ShortBuffer ShortBuffer::get(JShortArray arg0)
	{
		return callObjectMethod(
			"get",
			"([S)Ljava/nio/ShortBuffer;",
			arg0.object<jshortArray>()
		);
	}
	java::nio::ShortBuffer ShortBuffer::get(jint arg0, JShortArray arg1)
	{
		return callObjectMethod(
			"get",
			"(I[S)Ljava/nio/ShortBuffer;",
			arg0,
			arg1.object<jshortArray>()
		);
	}
	java::nio::ShortBuffer ShortBuffer::get(JShortArray arg0, jint arg1, jint arg2)
	{
		return callObjectMethod(
			"get",
			"([SII)Ljava/nio/ShortBuffer;",
			arg0.object<jshortArray>(),
			arg1,
			arg2
		);
	}
	java::nio::ShortBuffer ShortBuffer::get(jint arg0, JShortArray arg1, jint arg2, jint arg3)
	{
		return callObjectMethod(
			"get",
			"(I[SII)Ljava/nio/ShortBuffer;",
			arg0,
			arg1.object<jshortArray>(),
			arg2,
			arg3
		);
	}
	jshort ShortBuffer::get()
	{
		return callMethod<jshort>(
			"get",
			"()S"
		);
	}
	jshort ShortBuffer::get(jint arg0)
	{
		return callMethod<jshort>(
			"get",
			"(I)S",
			arg0
		);
	}
	jboolean ShortBuffer::hasArray()
	{
		return callMethod<jboolean>(
			"hasArray",
			"()Z"
		);
	}
	jint ShortBuffer::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean ShortBuffer::isDirect()
	{
		return callMethod<jboolean>(
			"isDirect",
			"()Z"
		);
	}
	java::nio::ShortBuffer ShortBuffer::limit(jint arg0)
	{
		return callObjectMethod(
			"limit",
			"(I)Ljava/nio/ShortBuffer;",
			arg0
		);
	}
	java::nio::ShortBuffer ShortBuffer::mark()
	{
		return callObjectMethod(
			"mark",
			"()Ljava/nio/ShortBuffer;"
		);
	}
	jint ShortBuffer::mismatch(java::nio::ShortBuffer arg0)
	{
		return callMethod<jint>(
			"mismatch",
			"(Ljava/nio/ShortBuffer;)I",
			arg0.object()
		);
	}
	java::nio::ByteOrder ShortBuffer::order()
	{
		return callObjectMethod(
			"order",
			"()Ljava/nio/ByteOrder;"
		);
	}
	java::nio::ShortBuffer ShortBuffer::position(jint arg0)
	{
		return callObjectMethod(
			"position",
			"(I)Ljava/nio/ShortBuffer;",
			arg0
		);
	}
	java::nio::ShortBuffer ShortBuffer::put(JShortArray arg0)
	{
		return callObjectMethod(
			"put",
			"([S)Ljava/nio/ShortBuffer;",
			arg0.object<jshortArray>()
		);
	}
	java::nio::ShortBuffer ShortBuffer::put(java::nio::ShortBuffer arg0)
	{
		return callObjectMethod(
			"put",
			"(Ljava/nio/ShortBuffer;)Ljava/nio/ShortBuffer;",
			arg0.object()
		);
	}
	java::nio::ShortBuffer ShortBuffer::put(jshort arg0)
	{
		return callObjectMethod(
			"put",
			"(S)Ljava/nio/ShortBuffer;",
			arg0
		);
	}
	java::nio::ShortBuffer ShortBuffer::put(jint arg0, JShortArray arg1)
	{
		return callObjectMethod(
			"put",
			"(I[S)Ljava/nio/ShortBuffer;",
			arg0,
			arg1.object<jshortArray>()
		);
	}
	java::nio::ShortBuffer ShortBuffer::put(jint arg0, jshort arg1)
	{
		return callObjectMethod(
			"put",
			"(IS)Ljava/nio/ShortBuffer;",
			arg0,
			arg1
		);
	}
	java::nio::ShortBuffer ShortBuffer::put(JShortArray arg0, jint arg1, jint arg2)
	{
		return callObjectMethod(
			"put",
			"([SII)Ljava/nio/ShortBuffer;",
			arg0.object<jshortArray>(),
			arg1,
			arg2
		);
	}
	java::nio::ShortBuffer ShortBuffer::put(jint arg0, JShortArray arg1, jint arg2, jint arg3)
	{
		return callObjectMethod(
			"put",
			"(I[SII)Ljava/nio/ShortBuffer;",
			arg0,
			arg1.object<jshortArray>(),
			arg2,
			arg3
		);
	}
	java::nio::ShortBuffer ShortBuffer::put(jint arg0, java::nio::ShortBuffer arg1, jint arg2, jint arg3)
	{
		return callObjectMethod(
			"put",
			"(ILjava/nio/ShortBuffer;II)Ljava/nio/ShortBuffer;",
			arg0,
			arg1.object(),
			arg2,
			arg3
		);
	}
	java::nio::ShortBuffer ShortBuffer::reset()
	{
		return callObjectMethod(
			"reset",
			"()Ljava/nio/ShortBuffer;"
		);
	}
	java::nio::ShortBuffer ShortBuffer::rewind()
	{
		return callObjectMethod(
			"rewind",
			"()Ljava/nio/ShortBuffer;"
		);
	}
	java::nio::ShortBuffer ShortBuffer::slice()
	{
		return callObjectMethod(
			"slice",
			"()Ljava/nio/ShortBuffer;"
		);
	}
	java::nio::ShortBuffer ShortBuffer::slice(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"slice",
			"(II)Ljava/nio/ShortBuffer;",
			arg0,
			arg1
		);
	}
	JString ShortBuffer::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::nio

