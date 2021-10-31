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
	QAndroidJniObject DoubleBuffer::allocate(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.DoubleBuffer",
			"allocate",
			"(I)Ljava/nio/DoubleBuffer;",
			arg0
		);
	}
	QAndroidJniObject DoubleBuffer::wrap(jdoubleArray arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.DoubleBuffer",
			"wrap",
			"([D)Ljava/nio/DoubleBuffer;",
			arg0
		);
	}
	QAndroidJniObject DoubleBuffer::wrap(jdoubleArray arg0, jint arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.DoubleBuffer",
			"wrap",
			"([DII)Ljava/nio/DoubleBuffer;",
			arg0,
			arg1,
			arg2
		);
	}
	jdoubleArray DoubleBuffer::array()
	{
		return callObjectMethod(
			"array",
			"()[D"
		).object<jdoubleArray>();
	}
	jint DoubleBuffer::arrayOffset()
	{
		return callMethod<jint>(
			"arrayOffset",
			"()I"
		);
	}
	QAndroidJniObject DoubleBuffer::asReadOnlyBuffer()
	{
		return callObjectMethod(
			"asReadOnlyBuffer",
			"()Ljava/nio/DoubleBuffer;"
		);
	}
	QAndroidJniObject DoubleBuffer::clear()
	{
		return callObjectMethod(
			"clear",
			"()Ljava/nio/DoubleBuffer;"
		);
	}
	QAndroidJniObject DoubleBuffer::compact()
	{
		return callObjectMethod(
			"compact",
			"()Ljava/nio/DoubleBuffer;"
		);
	}
	jint DoubleBuffer::compareTo(jobject arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
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
	QAndroidJniObject DoubleBuffer::duplicate()
	{
		return callObjectMethod(
			"duplicate",
			"()Ljava/nio/DoubleBuffer;"
		);
	}
	jboolean DoubleBuffer::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject DoubleBuffer::flip()
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
	QAndroidJniObject DoubleBuffer::get(jdoubleArray arg0)
	{
		return callObjectMethod(
			"get",
			"([D)Ljava/nio/DoubleBuffer;",
			arg0
		);
	}
	QAndroidJniObject DoubleBuffer::get(jint arg0, jdoubleArray arg1)
	{
		return callObjectMethod(
			"get",
			"(I[D)Ljava/nio/DoubleBuffer;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject DoubleBuffer::get(jdoubleArray arg0, jint arg1, jint arg2)
	{
		return callObjectMethod(
			"get",
			"([DII)Ljava/nio/DoubleBuffer;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject DoubleBuffer::get(jint arg0, jdoubleArray arg1, jint arg2, jint arg3)
	{
		return callObjectMethod(
			"get",
			"(I[DII)Ljava/nio/DoubleBuffer;",
			arg0,
			arg1,
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
	QAndroidJniObject DoubleBuffer::limit(jint arg0)
	{
		return callObjectMethod(
			"limit",
			"(I)Ljava/nio/DoubleBuffer;",
			arg0
		);
	}
	QAndroidJniObject DoubleBuffer::mark()
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
	QAndroidJniObject DoubleBuffer::order()
	{
		return callObjectMethod(
			"order",
			"()Ljava/nio/ByteOrder;"
		);
	}
	QAndroidJniObject DoubleBuffer::position(jint arg0)
	{
		return callObjectMethod(
			"position",
			"(I)Ljava/nio/DoubleBuffer;",
			arg0
		);
	}
	QAndroidJniObject DoubleBuffer::put(jdoubleArray arg0)
	{
		return callObjectMethod(
			"put",
			"([D)Ljava/nio/DoubleBuffer;",
			arg0
		);
	}
	QAndroidJniObject DoubleBuffer::put(jdouble arg0)
	{
		return callObjectMethod(
			"put",
			"(D)Ljava/nio/DoubleBuffer;",
			arg0
		);
	}
	QAndroidJniObject DoubleBuffer::put(java::nio::DoubleBuffer arg0)
	{
		return callObjectMethod(
			"put",
			"(Ljava/nio/DoubleBuffer;)Ljava/nio/DoubleBuffer;",
			arg0.object()
		);
	}
	QAndroidJniObject DoubleBuffer::put(jint arg0, jdoubleArray arg1)
	{
		return callObjectMethod(
			"put",
			"(I[D)Ljava/nio/DoubleBuffer;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject DoubleBuffer::put(jint arg0, jdouble arg1)
	{
		return callObjectMethod(
			"put",
			"(ID)Ljava/nio/DoubleBuffer;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject DoubleBuffer::put(jdoubleArray arg0, jint arg1, jint arg2)
	{
		return callObjectMethod(
			"put",
			"([DII)Ljava/nio/DoubleBuffer;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject DoubleBuffer::put(jint arg0, jdoubleArray arg1, jint arg2, jint arg3)
	{
		return callObjectMethod(
			"put",
			"(I[DII)Ljava/nio/DoubleBuffer;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	QAndroidJniObject DoubleBuffer::put(jint arg0, java::nio::DoubleBuffer arg1, jint arg2, jint arg3)
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
	QAndroidJniObject DoubleBuffer::reset()
	{
		return callObjectMethod(
			"reset",
			"()Ljava/nio/DoubleBuffer;"
		);
	}
	QAndroidJniObject DoubleBuffer::rewind()
	{
		return callObjectMethod(
			"rewind",
			"()Ljava/nio/DoubleBuffer;"
		);
	}
	QAndroidJniObject DoubleBuffer::slice()
	{
		return callObjectMethod(
			"slice",
			"()Ljava/nio/DoubleBuffer;"
		);
	}
	QAndroidJniObject DoubleBuffer::slice(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"slice",
			"(II)Ljava/nio/DoubleBuffer;",
			arg0,
			arg1
		);
	}
	jstring DoubleBuffer::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::nio

