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
	QAndroidJniObject FloatBuffer::allocate(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.FloatBuffer",
			"allocate",
			"(I)Ljava/nio/FloatBuffer;",
			arg0
		);
	}
	QAndroidJniObject FloatBuffer::wrap(jfloatArray arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.FloatBuffer",
			"wrap",
			"([F)Ljava/nio/FloatBuffer;",
			arg0
		);
	}
	QAndroidJniObject FloatBuffer::wrap(jfloatArray arg0, jint arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
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
	QAndroidJniObject FloatBuffer::asReadOnlyBuffer()
	{
		return callObjectMethod(
			"asReadOnlyBuffer",
			"()Ljava/nio/FloatBuffer;"
		);
	}
	QAndroidJniObject FloatBuffer::clear()
	{
		return callObjectMethod(
			"clear",
			"()Ljava/nio/FloatBuffer;"
		);
	}
	QAndroidJniObject FloatBuffer::compact()
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
	QAndroidJniObject FloatBuffer::duplicate()
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
	QAndroidJniObject FloatBuffer::flip()
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
	QAndroidJniObject FloatBuffer::get(jfloatArray arg0)
	{
		return callObjectMethod(
			"get",
			"([F)Ljava/nio/FloatBuffer;",
			arg0
		);
	}
	QAndroidJniObject FloatBuffer::get(jint arg0, jfloatArray arg1)
	{
		return callObjectMethod(
			"get",
			"(I[F)Ljava/nio/FloatBuffer;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject FloatBuffer::get(jfloatArray arg0, jint arg1, jint arg2)
	{
		return callObjectMethod(
			"get",
			"([FII)Ljava/nio/FloatBuffer;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject FloatBuffer::get(jint arg0, jfloatArray arg1, jint arg2, jint arg3)
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
	QAndroidJniObject FloatBuffer::limit(jint arg0)
	{
		return callObjectMethod(
			"limit",
			"(I)Ljava/nio/FloatBuffer;",
			arg0
		);
	}
	QAndroidJniObject FloatBuffer::mark()
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
	QAndroidJniObject FloatBuffer::order()
	{
		return callObjectMethod(
			"order",
			"()Ljava/nio/ByteOrder;"
		);
	}
	QAndroidJniObject FloatBuffer::position(jint arg0)
	{
		return callObjectMethod(
			"position",
			"(I)Ljava/nio/FloatBuffer;",
			arg0
		);
	}
	QAndroidJniObject FloatBuffer::put(jfloatArray arg0)
	{
		return callObjectMethod(
			"put",
			"([F)Ljava/nio/FloatBuffer;",
			arg0
		);
	}
	QAndroidJniObject FloatBuffer::put(jfloat arg0)
	{
		return callObjectMethod(
			"put",
			"(F)Ljava/nio/FloatBuffer;",
			arg0
		);
	}
	QAndroidJniObject FloatBuffer::put(java::nio::FloatBuffer arg0)
	{
		return callObjectMethod(
			"put",
			"(Ljava/nio/FloatBuffer;)Ljava/nio/FloatBuffer;",
			arg0.object()
		);
	}
	QAndroidJniObject FloatBuffer::put(jint arg0, jfloatArray arg1)
	{
		return callObjectMethod(
			"put",
			"(I[F)Ljava/nio/FloatBuffer;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject FloatBuffer::put(jint arg0, jfloat arg1)
	{
		return callObjectMethod(
			"put",
			"(IF)Ljava/nio/FloatBuffer;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject FloatBuffer::put(jfloatArray arg0, jint arg1, jint arg2)
	{
		return callObjectMethod(
			"put",
			"([FII)Ljava/nio/FloatBuffer;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject FloatBuffer::put(jint arg0, jfloatArray arg1, jint arg2, jint arg3)
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
	QAndroidJniObject FloatBuffer::put(jint arg0, java::nio::FloatBuffer arg1, jint arg2, jint arg3)
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
	QAndroidJniObject FloatBuffer::reset()
	{
		return callObjectMethod(
			"reset",
			"()Ljava/nio/FloatBuffer;"
		);
	}
	QAndroidJniObject FloatBuffer::rewind()
	{
		return callObjectMethod(
			"rewind",
			"()Ljava/nio/FloatBuffer;"
		);
	}
	QAndroidJniObject FloatBuffer::slice()
	{
		return callObjectMethod(
			"slice",
			"()Ljava/nio/FloatBuffer;"
		);
	}
	QAndroidJniObject FloatBuffer::slice(jint arg0, jint arg1)
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

