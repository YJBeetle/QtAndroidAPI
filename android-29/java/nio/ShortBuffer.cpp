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
	QAndroidJniObject ShortBuffer::allocate(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.ShortBuffer",
			"allocate",
			"(I)Ljava/nio/ShortBuffer;",
			arg0
		);
	}
	QAndroidJniObject ShortBuffer::wrap(jshortArray arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.ShortBuffer",
			"wrap",
			"([S)Ljava/nio/ShortBuffer;",
			arg0
		);
	}
	QAndroidJniObject ShortBuffer::wrap(jshortArray arg0, jint arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.ShortBuffer",
			"wrap",
			"([SII)Ljava/nio/ShortBuffer;",
			arg0,
			arg1,
			arg2
		);
	}
	jshortArray ShortBuffer::array()
	{
		return callObjectMethod(
			"array",
			"()[S"
		).object<jshortArray>();
	}
	jint ShortBuffer::arrayOffset()
	{
		return callMethod<jint>(
			"arrayOffset",
			"()I"
		);
	}
	QAndroidJniObject ShortBuffer::asReadOnlyBuffer()
	{
		return callObjectMethod(
			"asReadOnlyBuffer",
			"()Ljava/nio/ShortBuffer;"
		);
	}
	QAndroidJniObject ShortBuffer::clear()
	{
		return callObjectMethod(
			"clear",
			"()Ljava/nio/ShortBuffer;"
		);
	}
	QAndroidJniObject ShortBuffer::compact()
	{
		return callObjectMethod(
			"compact",
			"()Ljava/nio/ShortBuffer;"
		);
	}
	jint ShortBuffer::compareTo(jobject arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
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
	QAndroidJniObject ShortBuffer::duplicate()
	{
		return callObjectMethod(
			"duplicate",
			"()Ljava/nio/ShortBuffer;"
		);
	}
	jboolean ShortBuffer::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject ShortBuffer::flip()
	{
		return callObjectMethod(
			"flip",
			"()Ljava/nio/ShortBuffer;"
		);
	}
	QAndroidJniObject ShortBuffer::get(jshortArray arg0)
	{
		return callObjectMethod(
			"get",
			"([S)Ljava/nio/ShortBuffer;",
			arg0
		);
	}
	QAndroidJniObject ShortBuffer::get(jint arg0, jshortArray arg1)
	{
		return callObjectMethod(
			"get",
			"(I[S)Ljava/nio/ShortBuffer;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject ShortBuffer::get(jshortArray arg0, jint arg1, jint arg2)
	{
		return callObjectMethod(
			"get",
			"([SII)Ljava/nio/ShortBuffer;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject ShortBuffer::get(jint arg0, jshortArray arg1, jint arg2, jint arg3)
	{
		return callObjectMethod(
			"get",
			"(I[SII)Ljava/nio/ShortBuffer;",
			arg0,
			arg1,
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
	QAndroidJniObject ShortBuffer::limit(jint arg0)
	{
		return callObjectMethod(
			"limit",
			"(I)Ljava/nio/ShortBuffer;",
			arg0
		);
	}
	QAndroidJniObject ShortBuffer::mark()
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
	QAndroidJniObject ShortBuffer::order()
	{
		return callObjectMethod(
			"order",
			"()Ljava/nio/ByteOrder;"
		);
	}
	QAndroidJniObject ShortBuffer::position(jint arg0)
	{
		return callObjectMethod(
			"position",
			"(I)Ljava/nio/ShortBuffer;",
			arg0
		);
	}
	QAndroidJniObject ShortBuffer::put(jshortArray arg0)
	{
		return callObjectMethod(
			"put",
			"([S)Ljava/nio/ShortBuffer;",
			arg0
		);
	}
	QAndroidJniObject ShortBuffer::put(java::nio::ShortBuffer arg0)
	{
		return callObjectMethod(
			"put",
			"(Ljava/nio/ShortBuffer;)Ljava/nio/ShortBuffer;",
			arg0.object()
		);
	}
	QAndroidJniObject ShortBuffer::put(jshort arg0)
	{
		return callObjectMethod(
			"put",
			"(S)Ljava/nio/ShortBuffer;",
			arg0
		);
	}
	QAndroidJniObject ShortBuffer::put(jint arg0, jshortArray arg1)
	{
		return callObjectMethod(
			"put",
			"(I[S)Ljava/nio/ShortBuffer;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject ShortBuffer::put(jint arg0, jshort arg1)
	{
		return callObjectMethod(
			"put",
			"(IS)Ljava/nio/ShortBuffer;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject ShortBuffer::put(jshortArray arg0, jint arg1, jint arg2)
	{
		return callObjectMethod(
			"put",
			"([SII)Ljava/nio/ShortBuffer;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject ShortBuffer::put(jint arg0, jshortArray arg1, jint arg2, jint arg3)
	{
		return callObjectMethod(
			"put",
			"(I[SII)Ljava/nio/ShortBuffer;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	QAndroidJniObject ShortBuffer::put(jint arg0, java::nio::ShortBuffer arg1, jint arg2, jint arg3)
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
	QAndroidJniObject ShortBuffer::reset()
	{
		return callObjectMethod(
			"reset",
			"()Ljava/nio/ShortBuffer;"
		);
	}
	QAndroidJniObject ShortBuffer::rewind()
	{
		return callObjectMethod(
			"rewind",
			"()Ljava/nio/ShortBuffer;"
		);
	}
	QAndroidJniObject ShortBuffer::slice()
	{
		return callObjectMethod(
			"slice",
			"()Ljava/nio/ShortBuffer;"
		);
	}
	QAndroidJniObject ShortBuffer::slice(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"slice",
			"(II)Ljava/nio/ShortBuffer;",
			arg0,
			arg1
		);
	}
	jstring ShortBuffer::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::nio

