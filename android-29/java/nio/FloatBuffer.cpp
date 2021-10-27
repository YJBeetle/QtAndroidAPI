#include "./Buffer.hpp"
#include "./ByteOrder.hpp"
#include "./FloatBuffer.hpp"

namespace java::nio
{
	// Fields
	
	FloatBuffer::FloatBuffer(QAndroidJniObject obj) { __thiz = obj; }
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
		return __thiz.callObjectMethod(
			"array",
			"()[F"
		).object<jfloatArray>();
	}
	jint FloatBuffer::arrayOffset()
	{
		return __thiz.callMethod<jint>(
			"arrayOffset",
			"()I"
		);
	}
	QAndroidJniObject FloatBuffer::asReadOnlyBuffer()
	{
		return __thiz.callObjectMethod(
			"asReadOnlyBuffer",
			"()Ljava/nio/FloatBuffer;"
		);
	}
	QAndroidJniObject FloatBuffer::clear()
	{
		return __thiz.callObjectMethod(
			"clear",
			"()Ljava/nio/FloatBuffer;"
		);
	}
	QAndroidJniObject FloatBuffer::compact()
	{
		return __thiz.callObjectMethod(
			"compact",
			"()Ljava/nio/FloatBuffer;"
		);
	}
	jint FloatBuffer::compareTo(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jint FloatBuffer::compareTo(java::nio::FloatBuffer arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/nio/FloatBuffer;)I",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject FloatBuffer::duplicate()
	{
		return __thiz.callObjectMethod(
			"duplicate",
			"()Ljava/nio/FloatBuffer;"
		);
	}
	jboolean FloatBuffer::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject FloatBuffer::flip()
	{
		return __thiz.callObjectMethod(
			"flip",
			"()Ljava/nio/FloatBuffer;"
		);
	}
	jfloat FloatBuffer::get()
	{
		return __thiz.callMethod<jfloat>(
			"get",
			"()F"
		);
	}
	jfloat FloatBuffer::get(jint arg0)
	{
		return __thiz.callMethod<jfloat>(
			"get",
			"(I)F",
			arg0
		);
	}
	QAndroidJniObject FloatBuffer::get(jfloatArray arg0)
	{
		return __thiz.callObjectMethod(
			"get",
			"([F)Ljava/nio/FloatBuffer;",
			arg0
		);
	}
	QAndroidJniObject FloatBuffer::get(jint arg0, jfloatArray arg1)
	{
		return __thiz.callObjectMethod(
			"get",
			"(I[F)Ljava/nio/FloatBuffer;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject FloatBuffer::get(jfloatArray arg0, jint arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"get",
			"([FII)Ljava/nio/FloatBuffer;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject FloatBuffer::get(jint arg0, jfloatArray arg1, jint arg2, jint arg3)
	{
		return __thiz.callObjectMethod(
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
		return __thiz.callMethod<jboolean>(
			"hasArray",
			"()Z"
		);
	}
	jint FloatBuffer::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean FloatBuffer::isDirect()
	{
		return __thiz.callMethod<jboolean>(
			"isDirect",
			"()Z"
		);
	}
	QAndroidJniObject FloatBuffer::limit(jint arg0)
	{
		return __thiz.callObjectMethod(
			"limit",
			"(I)Ljava/nio/FloatBuffer;",
			arg0
		);
	}
	QAndroidJniObject FloatBuffer::mark()
	{
		return __thiz.callObjectMethod(
			"mark",
			"()Ljava/nio/FloatBuffer;"
		);
	}
	jint FloatBuffer::mismatch(java::nio::FloatBuffer arg0)
	{
		return __thiz.callMethod<jint>(
			"mismatch",
			"(Ljava/nio/FloatBuffer;)I",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject FloatBuffer::order()
	{
		return __thiz.callObjectMethod(
			"order",
			"()Ljava/nio/ByteOrder;"
		);
	}
	QAndroidJniObject FloatBuffer::position(jint arg0)
	{
		return __thiz.callObjectMethod(
			"position",
			"(I)Ljava/nio/FloatBuffer;",
			arg0
		);
	}
	QAndroidJniObject FloatBuffer::put(jfloatArray arg0)
	{
		return __thiz.callObjectMethod(
			"put",
			"([F)Ljava/nio/FloatBuffer;",
			arg0
		);
	}
	QAndroidJniObject FloatBuffer::put(jfloat arg0)
	{
		return __thiz.callObjectMethod(
			"put",
			"(F)Ljava/nio/FloatBuffer;",
			arg0
		);
	}
	QAndroidJniObject FloatBuffer::put(java::nio::FloatBuffer arg0)
	{
		return __thiz.callObjectMethod(
			"put",
			"(Ljava/nio/FloatBuffer;)Ljava/nio/FloatBuffer;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject FloatBuffer::put(jint arg0, jfloatArray arg1)
	{
		return __thiz.callObjectMethod(
			"put",
			"(I[F)Ljava/nio/FloatBuffer;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject FloatBuffer::put(jint arg0, jfloat arg1)
	{
		return __thiz.callObjectMethod(
			"put",
			"(IF)Ljava/nio/FloatBuffer;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject FloatBuffer::put(jfloatArray arg0, jint arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"put",
			"([FII)Ljava/nio/FloatBuffer;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject FloatBuffer::put(jint arg0, jfloatArray arg1, jint arg2, jint arg3)
	{
		return __thiz.callObjectMethod(
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
		return __thiz.callObjectMethod(
			"put",
			"(ILjava/nio/FloatBuffer;II)Ljava/nio/FloatBuffer;",
			arg0,
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	QAndroidJniObject FloatBuffer::reset()
	{
		return __thiz.callObjectMethod(
			"reset",
			"()Ljava/nio/FloatBuffer;"
		);
	}
	QAndroidJniObject FloatBuffer::rewind()
	{
		return __thiz.callObjectMethod(
			"rewind",
			"()Ljava/nio/FloatBuffer;"
		);
	}
	QAndroidJniObject FloatBuffer::slice()
	{
		return __thiz.callObjectMethod(
			"slice",
			"()Ljava/nio/FloatBuffer;"
		);
	}
	QAndroidJniObject FloatBuffer::slice(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"slice",
			"(II)Ljava/nio/FloatBuffer;",
			arg0,
			arg1
		);
	}
	jstring FloatBuffer::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::nio

