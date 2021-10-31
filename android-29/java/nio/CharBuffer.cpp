#include "./Buffer.hpp"
#include "./ByteOrder.hpp"
#include "./CharBuffer.hpp"

namespace java::nio
{
	// Fields
	
	// QAndroidJniObject forward
	CharBuffer::CharBuffer(QAndroidJniObject obj) : java::nio::Buffer(obj) {}
	
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
		return callObjectMethod(
			"append",
			"(C)Ljava/nio/CharBuffer;",
			arg0
		);
	}
	QAndroidJniObject CharBuffer::append(jstring arg0)
	{
		return callObjectMethod(
			"append",
			"(Ljava/lang/CharSequence;)Ljava/nio/CharBuffer;",
			arg0
		);
	}
	QAndroidJniObject CharBuffer::append(jstring arg0, jint arg1, jint arg2)
	{
		return callObjectMethod(
			"append",
			"(Ljava/lang/CharSequence;II)Ljava/nio/CharBuffer;",
			arg0,
			arg1,
			arg2
		);
	}
	jcharArray CharBuffer::array()
	{
		return callObjectMethod(
			"array",
			"()[C"
		).object<jcharArray>();
	}
	jint CharBuffer::arrayOffset()
	{
		return callMethod<jint>(
			"arrayOffset",
			"()I"
		);
	}
	QAndroidJniObject CharBuffer::asReadOnlyBuffer()
	{
		return callObjectMethod(
			"asReadOnlyBuffer",
			"()Ljava/nio/CharBuffer;"
		);
	}
	jchar CharBuffer::charAt(jint arg0)
	{
		return callMethod<jchar>(
			"charAt",
			"(I)C",
			arg0
		);
	}
	QAndroidJniObject CharBuffer::chars()
	{
		return callObjectMethod(
			"chars",
			"()Ljava/util/stream/IntStream;"
		);
	}
	QAndroidJniObject CharBuffer::clear()
	{
		return callObjectMethod(
			"clear",
			"()Ljava/nio/CharBuffer;"
		);
	}
	QAndroidJniObject CharBuffer::compact()
	{
		return callObjectMethod(
			"compact",
			"()Ljava/nio/CharBuffer;"
		);
	}
	jint CharBuffer::compareTo(jobject arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jint CharBuffer::compareTo(java::nio::CharBuffer arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/nio/CharBuffer;)I",
			arg0.object()
		);
	}
	QAndroidJniObject CharBuffer::duplicate()
	{
		return callObjectMethod(
			"duplicate",
			"()Ljava/nio/CharBuffer;"
		);
	}
	jboolean CharBuffer::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject CharBuffer::flip()
	{
		return callObjectMethod(
			"flip",
			"()Ljava/nio/CharBuffer;"
		);
	}
	jchar CharBuffer::get()
	{
		return callMethod<jchar>(
			"get",
			"()C"
		);
	}
	jchar CharBuffer::get(jint arg0)
	{
		return callMethod<jchar>(
			"get",
			"(I)C",
			arg0
		);
	}
	QAndroidJniObject CharBuffer::get(jcharArray arg0)
	{
		return callObjectMethod(
			"get",
			"([C)Ljava/nio/CharBuffer;",
			arg0
		);
	}
	QAndroidJniObject CharBuffer::get(jint arg0, jcharArray arg1)
	{
		return callObjectMethod(
			"get",
			"(I[C)Ljava/nio/CharBuffer;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject CharBuffer::get(jcharArray arg0, jint arg1, jint arg2)
	{
		return callObjectMethod(
			"get",
			"([CII)Ljava/nio/CharBuffer;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject CharBuffer::get(jint arg0, jcharArray arg1, jint arg2, jint arg3)
	{
		return callObjectMethod(
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
		return callMethod<jboolean>(
			"hasArray",
			"()Z"
		);
	}
	jint CharBuffer::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean CharBuffer::isDirect()
	{
		return callMethod<jboolean>(
			"isDirect",
			"()Z"
		);
	}
	jboolean CharBuffer::isEmpty()
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	jint CharBuffer::length()
	{
		return callMethod<jint>(
			"length",
			"()I"
		);
	}
	QAndroidJniObject CharBuffer::limit(jint arg0)
	{
		return callObjectMethod(
			"limit",
			"(I)Ljava/nio/CharBuffer;",
			arg0
		);
	}
	QAndroidJniObject CharBuffer::mark()
	{
		return callObjectMethod(
			"mark",
			"()Ljava/nio/CharBuffer;"
		);
	}
	jint CharBuffer::mismatch(java::nio::CharBuffer arg0)
	{
		return callMethod<jint>(
			"mismatch",
			"(Ljava/nio/CharBuffer;)I",
			arg0.object()
		);
	}
	QAndroidJniObject CharBuffer::order()
	{
		return callObjectMethod(
			"order",
			"()Ljava/nio/ByteOrder;"
		);
	}
	QAndroidJniObject CharBuffer::position(jint arg0)
	{
		return callObjectMethod(
			"position",
			"(I)Ljava/nio/CharBuffer;",
			arg0
		);
	}
	QAndroidJniObject CharBuffer::put(jcharArray arg0)
	{
		return callObjectMethod(
			"put",
			"([C)Ljava/nio/CharBuffer;",
			arg0
		);
	}
	QAndroidJniObject CharBuffer::put(jchar arg0)
	{
		return callObjectMethod(
			"put",
			"(C)Ljava/nio/CharBuffer;",
			arg0
		);
	}
	QAndroidJniObject CharBuffer::put(jstring arg0)
	{
		return callObjectMethod(
			"put",
			"(Ljava/lang/String;)Ljava/nio/CharBuffer;",
			arg0
		);
	}
	QAndroidJniObject CharBuffer::put(java::nio::CharBuffer arg0)
	{
		return callObjectMethod(
			"put",
			"(Ljava/nio/CharBuffer;)Ljava/nio/CharBuffer;",
			arg0.object()
		);
	}
	QAndroidJniObject CharBuffer::put(jint arg0, jcharArray arg1)
	{
		return callObjectMethod(
			"put",
			"(I[C)Ljava/nio/CharBuffer;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject CharBuffer::put(jint arg0, jchar arg1)
	{
		return callObjectMethod(
			"put",
			"(IC)Ljava/nio/CharBuffer;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject CharBuffer::put(jcharArray arg0, jint arg1, jint arg2)
	{
		return callObjectMethod(
			"put",
			"([CII)Ljava/nio/CharBuffer;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject CharBuffer::put(jstring arg0, jint arg1, jint arg2)
	{
		return callObjectMethod(
			"put",
			"(Ljava/lang/String;II)Ljava/nio/CharBuffer;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject CharBuffer::put(jint arg0, jcharArray arg1, jint arg2, jint arg3)
	{
		return callObjectMethod(
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
		return callObjectMethod(
			"put",
			"(ILjava/nio/CharBuffer;II)Ljava/nio/CharBuffer;",
			arg0,
			arg1.object(),
			arg2,
			arg3
		);
	}
	jint CharBuffer::read(java::nio::CharBuffer arg0)
	{
		return callMethod<jint>(
			"read",
			"(Ljava/nio/CharBuffer;)I",
			arg0.object()
		);
	}
	QAndroidJniObject CharBuffer::reset()
	{
		return callObjectMethod(
			"reset",
			"()Ljava/nio/CharBuffer;"
		);
	}
	QAndroidJniObject CharBuffer::rewind()
	{
		return callObjectMethod(
			"rewind",
			"()Ljava/nio/CharBuffer;"
		);
	}
	QAndroidJniObject CharBuffer::slice()
	{
		return callObjectMethod(
			"slice",
			"()Ljava/nio/CharBuffer;"
		);
	}
	QAndroidJniObject CharBuffer::slice(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"slice",
			"(II)Ljava/nio/CharBuffer;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject CharBuffer::subSequence(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"subSequence",
			"(II)Ljava/nio/CharBuffer;",
			arg0,
			arg1
		);
	}
	jstring CharBuffer::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::nio

