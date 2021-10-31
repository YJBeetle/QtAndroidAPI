#include "./Buffer.hpp"
#include "./ByteOrder.hpp"
#include "./CharBuffer.hpp"

namespace java::nio
{
	// Fields
	
	CharBuffer::CharBuffer(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject CharBuffer::allocate(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.CharBuffer",
			"allocate",
			"(I)Ljava/nio/CharBuffer;",
			arg0
		);
	}
	QAndroidJniObject CharBuffer::wrap(jcharArray arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.CharBuffer",
			"wrap",
			"([C)Ljava/nio/CharBuffer;",
			arg0
		);
	}
	QAndroidJniObject CharBuffer::wrap(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.CharBuffer",
			"wrap",
			"(Ljava/lang/CharSequence;)Ljava/nio/CharBuffer;",
			arg0
		);
	}
	QAndroidJniObject CharBuffer::wrap(jcharArray arg0, jint arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.CharBuffer",
			"wrap",
			"([CII)Ljava/nio/CharBuffer;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject CharBuffer::wrap(jstring arg0, jint arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.CharBuffer",
			"wrap",
			"(Ljava/lang/CharSequence;II)Ljava/nio/CharBuffer;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject CharBuffer::append(jchar arg0)
	{
		return __thiz.callObjectMethod(
			"append",
			"(C)Ljava/nio/CharBuffer;",
			arg0
		);
	}
	QAndroidJniObject CharBuffer::append(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"append",
			"(Ljava/lang/CharSequence;)Ljava/nio/CharBuffer;",
			arg0
		);
	}
	QAndroidJniObject CharBuffer::append(jstring arg0, jint arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"append",
			"(Ljava/lang/CharSequence;II)Ljava/nio/CharBuffer;",
			arg0,
			arg1,
			arg2
		);
	}
	jcharArray CharBuffer::array()
	{
		return __thiz.callObjectMethod(
			"array",
			"()[C"
		).object<jcharArray>();
	}
	jint CharBuffer::arrayOffset()
	{
		return __thiz.callMethod<jint>(
			"arrayOffset",
			"()I"
		);
	}
	QAndroidJniObject CharBuffer::asReadOnlyBuffer()
	{
		return __thiz.callObjectMethod(
			"asReadOnlyBuffer",
			"()Ljava/nio/CharBuffer;"
		);
	}
	jchar CharBuffer::charAt(jint arg0)
	{
		return __thiz.callMethod<jchar>(
			"charAt",
			"(I)C",
			arg0
		);
	}
	QAndroidJniObject CharBuffer::chars()
	{
		return __thiz.callObjectMethod(
			"chars",
			"()Ljava/util/stream/IntStream;"
		);
	}
	QAndroidJniObject CharBuffer::clear()
	{
		return __thiz.callObjectMethod(
			"clear",
			"()Ljava/nio/CharBuffer;"
		);
	}
	QAndroidJniObject CharBuffer::compact()
	{
		return __thiz.callObjectMethod(
			"compact",
			"()Ljava/nio/CharBuffer;"
		);
	}
	jint CharBuffer::compareTo(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jint CharBuffer::compareTo(java::nio::CharBuffer arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/nio/CharBuffer;)I",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject CharBuffer::duplicate()
	{
		return __thiz.callObjectMethod(
			"duplicate",
			"()Ljava/nio/CharBuffer;"
		);
	}
	jboolean CharBuffer::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject CharBuffer::flip()
	{
		return __thiz.callObjectMethod(
			"flip",
			"()Ljava/nio/CharBuffer;"
		);
	}
	jchar CharBuffer::get()
	{
		return __thiz.callMethod<jchar>(
			"get",
			"()C"
		);
	}
	jchar CharBuffer::get(jint arg0)
	{
		return __thiz.callMethod<jchar>(
			"get",
			"(I)C",
			arg0
		);
	}
	QAndroidJniObject CharBuffer::get(jcharArray arg0)
	{
		return __thiz.callObjectMethod(
			"get",
			"([C)Ljava/nio/CharBuffer;",
			arg0
		);
	}
	QAndroidJniObject CharBuffer::get(jint arg0, jcharArray arg1)
	{
		return __thiz.callObjectMethod(
			"get",
			"(I[C)Ljava/nio/CharBuffer;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject CharBuffer::get(jcharArray arg0, jint arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"get",
			"([CII)Ljava/nio/CharBuffer;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject CharBuffer::get(jint arg0, jcharArray arg1, jint arg2, jint arg3)
	{
		return __thiz.callObjectMethod(
			"get",
			"(I[CII)Ljava/nio/CharBuffer;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jboolean CharBuffer::hasArray()
	{
		return __thiz.callMethod<jboolean>(
			"hasArray",
			"()Z"
		);
	}
	jint CharBuffer::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean CharBuffer::isDirect()
	{
		return __thiz.callMethod<jboolean>(
			"isDirect",
			"()Z"
		);
	}
	jboolean CharBuffer::isEmpty()
	{
		return __thiz.callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	jint CharBuffer::length()
	{
		return __thiz.callMethod<jint>(
			"length",
			"()I"
		);
	}
	QAndroidJniObject CharBuffer::limit(jint arg0)
	{
		return __thiz.callObjectMethod(
			"limit",
			"(I)Ljava/nio/CharBuffer;",
			arg0
		);
	}
	QAndroidJniObject CharBuffer::mark()
	{
		return __thiz.callObjectMethod(
			"mark",
			"()Ljava/nio/CharBuffer;"
		);
	}
	jint CharBuffer::mismatch(java::nio::CharBuffer arg0)
	{
		return __thiz.callMethod<jint>(
			"mismatch",
			"(Ljava/nio/CharBuffer;)I",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject CharBuffer::order()
	{
		return __thiz.callObjectMethod(
			"order",
			"()Ljava/nio/ByteOrder;"
		);
	}
	QAndroidJniObject CharBuffer::position(jint arg0)
	{
		return __thiz.callObjectMethod(
			"position",
			"(I)Ljava/nio/CharBuffer;",
			arg0
		);
	}
	QAndroidJniObject CharBuffer::put(jcharArray arg0)
	{
		return __thiz.callObjectMethod(
			"put",
			"([C)Ljava/nio/CharBuffer;",
			arg0
		);
	}
	QAndroidJniObject CharBuffer::put(jchar arg0)
	{
		return __thiz.callObjectMethod(
			"put",
			"(C)Ljava/nio/CharBuffer;",
			arg0
		);
	}
	QAndroidJniObject CharBuffer::put(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"put",
			"(Ljava/lang/String;)Ljava/nio/CharBuffer;",
			arg0
		);
	}
	QAndroidJniObject CharBuffer::put(java::nio::CharBuffer arg0)
	{
		return __thiz.callObjectMethod(
			"put",
			"(Ljava/nio/CharBuffer;)Ljava/nio/CharBuffer;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject CharBuffer::put(jint arg0, jcharArray arg1)
	{
		return __thiz.callObjectMethod(
			"put",
			"(I[C)Ljava/nio/CharBuffer;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject CharBuffer::put(jint arg0, jchar arg1)
	{
		return __thiz.callObjectMethod(
			"put",
			"(IC)Ljava/nio/CharBuffer;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject CharBuffer::put(jcharArray arg0, jint arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"put",
			"([CII)Ljava/nio/CharBuffer;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject CharBuffer::put(jstring arg0, jint arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"put",
			"(Ljava/lang/String;II)Ljava/nio/CharBuffer;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject CharBuffer::put(jint arg0, jcharArray arg1, jint arg2, jint arg3)
	{
		return __thiz.callObjectMethod(
			"put",
			"(I[CII)Ljava/nio/CharBuffer;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	QAndroidJniObject CharBuffer::put(jint arg0, java::nio::CharBuffer arg1, jint arg2, jint arg3)
	{
		return __thiz.callObjectMethod(
			"put",
			"(ILjava/nio/CharBuffer;II)Ljava/nio/CharBuffer;",
			arg0,
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	jint CharBuffer::read(java::nio::CharBuffer arg0)
	{
		return __thiz.callMethod<jint>(
			"read",
			"(Ljava/nio/CharBuffer;)I",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject CharBuffer::reset()
	{
		return __thiz.callObjectMethod(
			"reset",
			"()Ljava/nio/CharBuffer;"
		);
	}
	QAndroidJniObject CharBuffer::rewind()
	{
		return __thiz.callObjectMethod(
			"rewind",
			"()Ljava/nio/CharBuffer;"
		);
	}
	QAndroidJniObject CharBuffer::slice()
	{
		return __thiz.callObjectMethod(
			"slice",
			"()Ljava/nio/CharBuffer;"
		);
	}
	QAndroidJniObject CharBuffer::slice(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"slice",
			"(II)Ljava/nio/CharBuffer;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject CharBuffer::subSequence(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"subSequence",
			"(II)Ljava/nio/CharBuffer;",
			arg0,
			arg1
		);
	}
	jstring CharBuffer::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::nio

