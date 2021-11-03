#include "../../JCharArray.hpp"
#include "../../JString.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
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
	java::nio::CharBuffer CharBuffer::allocate(jint arg0)
	{
		return callStaticObjectMethod(
			"java.nio.CharBuffer",
			"allocate",
			"(I)Ljava/nio/CharBuffer;",
			arg0
		);
	}
	java::nio::CharBuffer CharBuffer::wrap(JCharArray arg0)
	{
		return callStaticObjectMethod(
			"java.nio.CharBuffer",
			"wrap",
			"([C)Ljava/nio/CharBuffer;",
			arg0.object<jcharArray>()
		);
	}
	java::nio::CharBuffer CharBuffer::wrap(JString arg0)
	{
		return callStaticObjectMethod(
			"java.nio.CharBuffer",
			"wrap",
			"(Ljava/lang/CharSequence;)Ljava/nio/CharBuffer;",
			arg0.object<jstring>()
		);
	}
	java::nio::CharBuffer CharBuffer::wrap(JCharArray arg0, jint arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"java.nio.CharBuffer",
			"wrap",
			"([CII)Ljava/nio/CharBuffer;",
			arg0.object<jcharArray>(),
			arg1,
			arg2
		);
	}
	java::nio::CharBuffer CharBuffer::wrap(JString arg0, jint arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"java.nio.CharBuffer",
			"wrap",
			"(Ljava/lang/CharSequence;II)Ljava/nio/CharBuffer;",
			arg0.object<jstring>(),
			arg1,
			arg2
		);
	}
	java::nio::CharBuffer CharBuffer::append(jchar arg0) const
	{
		return callObjectMethod(
			"append",
			"(C)Ljava/nio/CharBuffer;",
			arg0
		);
	}
	java::nio::CharBuffer CharBuffer::append(JString arg0) const
	{
		return callObjectMethod(
			"append",
			"(Ljava/lang/CharSequence;)Ljava/nio/CharBuffer;",
			arg0.object<jstring>()
		);
	}
	java::nio::CharBuffer CharBuffer::append(JString arg0, jint arg1, jint arg2) const
	{
		return callObjectMethod(
			"append",
			"(Ljava/lang/CharSequence;II)Ljava/nio/CharBuffer;",
			arg0.object<jstring>(),
			arg1,
			arg2
		);
	}
	JCharArray CharBuffer::array() const
	{
		return callObjectMethod(
			"array",
			"()[C"
		);
	}
	jint CharBuffer::arrayOffset() const
	{
		return callMethod<jint>(
			"arrayOffset",
			"()I"
		);
	}
	java::nio::CharBuffer CharBuffer::asReadOnlyBuffer() const
	{
		return callObjectMethod(
			"asReadOnlyBuffer",
			"()Ljava/nio/CharBuffer;"
		);
	}
	jchar CharBuffer::charAt(jint arg0) const
	{
		return callMethod<jchar>(
			"charAt",
			"(I)C",
			arg0
		);
	}
	JObject CharBuffer::chars() const
	{
		return callObjectMethod(
			"chars",
			"()Ljava/util/stream/IntStream;"
		);
	}
	java::nio::CharBuffer CharBuffer::clear() const
	{
		return callObjectMethod(
			"clear",
			"()Ljava/nio/CharBuffer;"
		);
	}
	java::nio::CharBuffer CharBuffer::compact() const
	{
		return callObjectMethod(
			"compact",
			"()Ljava/nio/CharBuffer;"
		);
	}
	jint CharBuffer::compareTo(JObject arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	jint CharBuffer::compareTo(java::nio::CharBuffer arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/nio/CharBuffer;)I",
			arg0.object()
		);
	}
	java::nio::CharBuffer CharBuffer::duplicate() const
	{
		return callObjectMethod(
			"duplicate",
			"()Ljava/nio/CharBuffer;"
		);
	}
	jboolean CharBuffer::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	java::nio::CharBuffer CharBuffer::flip() const
	{
		return callObjectMethod(
			"flip",
			"()Ljava/nio/CharBuffer;"
		);
	}
	jchar CharBuffer::get() const
	{
		return callMethod<jchar>(
			"get",
			"()C"
		);
	}
	jchar CharBuffer::get(jint arg0) const
	{
		return callMethod<jchar>(
			"get",
			"(I)C",
			arg0
		);
	}
	java::nio::CharBuffer CharBuffer::get(JCharArray arg0) const
	{
		return callObjectMethod(
			"get",
			"([C)Ljava/nio/CharBuffer;",
			arg0.object<jcharArray>()
		);
	}
	java::nio::CharBuffer CharBuffer::get(jint arg0, JCharArray arg1) const
	{
		return callObjectMethod(
			"get",
			"(I[C)Ljava/nio/CharBuffer;",
			arg0,
			arg1.object<jcharArray>()
		);
	}
	java::nio::CharBuffer CharBuffer::get(JCharArray arg0, jint arg1, jint arg2) const
	{
		return callObjectMethod(
			"get",
			"([CII)Ljava/nio/CharBuffer;",
			arg0.object<jcharArray>(),
			arg1,
			arg2
		);
	}
	java::nio::CharBuffer CharBuffer::get(jint arg0, JCharArray arg1, jint arg2, jint arg3) const
	{
		return callObjectMethod(
			"get",
			"(I[CII)Ljava/nio/CharBuffer;",
			arg0,
			arg1.object<jcharArray>(),
			arg2,
			arg3
		);
	}
	jboolean CharBuffer::hasArray() const
	{
		return callMethod<jboolean>(
			"hasArray",
			"()Z"
		);
	}
	jint CharBuffer::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean CharBuffer::isDirect() const
	{
		return callMethod<jboolean>(
			"isDirect",
			"()Z"
		);
	}
	jboolean CharBuffer::isEmpty() const
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	jint CharBuffer::length() const
	{
		return callMethod<jint>(
			"length",
			"()I"
		);
	}
	java::nio::CharBuffer CharBuffer::limit(jint arg0) const
	{
		return callObjectMethod(
			"limit",
			"(I)Ljava/nio/CharBuffer;",
			arg0
		);
	}
	java::nio::CharBuffer CharBuffer::mark() const
	{
		return callObjectMethod(
			"mark",
			"()Ljava/nio/CharBuffer;"
		);
	}
	jint CharBuffer::mismatch(java::nio::CharBuffer arg0) const
	{
		return callMethod<jint>(
			"mismatch",
			"(Ljava/nio/CharBuffer;)I",
			arg0.object()
		);
	}
	java::nio::ByteOrder CharBuffer::order() const
	{
		return callObjectMethod(
			"order",
			"()Ljava/nio/ByteOrder;"
		);
	}
	java::nio::CharBuffer CharBuffer::position(jint arg0) const
	{
		return callObjectMethod(
			"position",
			"(I)Ljava/nio/CharBuffer;",
			arg0
		);
	}
	java::nio::CharBuffer CharBuffer::put(JCharArray arg0) const
	{
		return callObjectMethod(
			"put",
			"([C)Ljava/nio/CharBuffer;",
			arg0.object<jcharArray>()
		);
	}
	java::nio::CharBuffer CharBuffer::put(jchar arg0) const
	{
		return callObjectMethod(
			"put",
			"(C)Ljava/nio/CharBuffer;",
			arg0
		);
	}
	java::nio::CharBuffer CharBuffer::put(JString arg0) const
	{
		return callObjectMethod(
			"put",
			"(Ljava/lang/String;)Ljava/nio/CharBuffer;",
			arg0.object<jstring>()
		);
	}
	java::nio::CharBuffer CharBuffer::put(java::nio::CharBuffer arg0) const
	{
		return callObjectMethod(
			"put",
			"(Ljava/nio/CharBuffer;)Ljava/nio/CharBuffer;",
			arg0.object()
		);
	}
	java::nio::CharBuffer CharBuffer::put(jint arg0, JCharArray arg1) const
	{
		return callObjectMethod(
			"put",
			"(I[C)Ljava/nio/CharBuffer;",
			arg0,
			arg1.object<jcharArray>()
		);
	}
	java::nio::CharBuffer CharBuffer::put(jint arg0, jchar arg1) const
	{
		return callObjectMethod(
			"put",
			"(IC)Ljava/nio/CharBuffer;",
			arg0,
			arg1
		);
	}
	java::nio::CharBuffer CharBuffer::put(JCharArray arg0, jint arg1, jint arg2) const
	{
		return callObjectMethod(
			"put",
			"([CII)Ljava/nio/CharBuffer;",
			arg0.object<jcharArray>(),
			arg1,
			arg2
		);
	}
	java::nio::CharBuffer CharBuffer::put(JString arg0, jint arg1, jint arg2) const
	{
		return callObjectMethod(
			"put",
			"(Ljava/lang/String;II)Ljava/nio/CharBuffer;",
			arg0.object<jstring>(),
			arg1,
			arg2
		);
	}
	java::nio::CharBuffer CharBuffer::put(jint arg0, JCharArray arg1, jint arg2, jint arg3) const
	{
		return callObjectMethod(
			"put",
			"(I[CII)Ljava/nio/CharBuffer;",
			arg0,
			arg1.object<jcharArray>(),
			arg2,
			arg3
		);
	}
	java::nio::CharBuffer CharBuffer::put(jint arg0, java::nio::CharBuffer arg1, jint arg2, jint arg3) const
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
	jint CharBuffer::read(java::nio::CharBuffer arg0) const
	{
		return callMethod<jint>(
			"read",
			"(Ljava/nio/CharBuffer;)I",
			arg0.object()
		);
	}
	java::nio::CharBuffer CharBuffer::reset() const
	{
		return callObjectMethod(
			"reset",
			"()Ljava/nio/CharBuffer;"
		);
	}
	java::nio::CharBuffer CharBuffer::rewind() const
	{
		return callObjectMethod(
			"rewind",
			"()Ljava/nio/CharBuffer;"
		);
	}
	java::nio::CharBuffer CharBuffer::slice() const
	{
		return callObjectMethod(
			"slice",
			"()Ljava/nio/CharBuffer;"
		);
	}
	java::nio::CharBuffer CharBuffer::slice(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"slice",
			"(II)Ljava/nio/CharBuffer;",
			arg0,
			arg1
		);
	}
	java::nio::CharBuffer CharBuffer::subSequence(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"subSequence",
			"(II)Ljava/nio/CharBuffer;",
			arg0,
			arg1
		);
	}
	JString CharBuffer::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::nio

