#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"
#include "../nio/ByteBuffer.hpp"
#include "../nio/LongBuffer.hpp"
#include "./BitSet.hpp"

namespace java::util
{
	// Fields
	
	// QAndroidJniObject forward
	BitSet::BitSet(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	BitSet::BitSet()
		: __JniBaseClass(
			"java.util.BitSet",
			"()V"
		) {}
	BitSet::BitSet(jint arg0)
		: __JniBaseClass(
			"java.util.BitSet",
			"(I)V",
			arg0
		) {}
	
	// Methods
	java::util::BitSet BitSet::valueOf(jbyteArray arg0)
	{
		return callStaticObjectMethod(
			"java.util.BitSet",
			"valueOf",
			"([B)Ljava/util/BitSet;",
			arg0
		);
	}
	java::util::BitSet BitSet::valueOf(jlongArray arg0)
	{
		return callStaticObjectMethod(
			"java.util.BitSet",
			"valueOf",
			"([J)Ljava/util/BitSet;",
			arg0
		);
	}
	java::util::BitSet BitSet::valueOf(java::nio::ByteBuffer arg0)
	{
		return callStaticObjectMethod(
			"java.util.BitSet",
			"valueOf",
			"(Ljava/nio/ByteBuffer;)Ljava/util/BitSet;",
			arg0.object()
		);
	}
	java::util::BitSet BitSet::valueOf(java::nio::LongBuffer arg0)
	{
		return callStaticObjectMethod(
			"java.util.BitSet",
			"valueOf",
			"(Ljava/nio/LongBuffer;)Ljava/util/BitSet;",
			arg0.object()
		);
	}
	void BitSet::_and(java::util::BitSet arg0)
	{
		callMethod<void>(
			"and",
			"(Ljava/util/BitSet;)V",
			arg0.object()
		);
	}
	void BitSet::andNot(java::util::BitSet arg0)
	{
		callMethod<void>(
			"andNot",
			"(Ljava/util/BitSet;)V",
			arg0.object()
		);
	}
	jint BitSet::cardinality()
	{
		return callMethod<jint>(
			"cardinality",
			"()I"
		);
	}
	void BitSet::clear()
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	void BitSet::clear(jint arg0)
	{
		callMethod<void>(
			"clear",
			"(I)V",
			arg0
		);
	}
	void BitSet::clear(jint arg0, jint arg1)
	{
		callMethod<void>(
			"clear",
			"(II)V",
			arg0,
			arg1
		);
	}
	jobject BitSet::clone()
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jboolean BitSet::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	void BitSet::flip(jint arg0)
	{
		callMethod<void>(
			"flip",
			"(I)V",
			arg0
		);
	}
	void BitSet::flip(jint arg0, jint arg1)
	{
		callMethod<void>(
			"flip",
			"(II)V",
			arg0,
			arg1
		);
	}
	jboolean BitSet::get(jint arg0)
	{
		return callMethod<jboolean>(
			"get",
			"(I)Z",
			arg0
		);
	}
	java::util::BitSet BitSet::get(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"get",
			"(II)Ljava/util/BitSet;",
			arg0,
			arg1
		);
	}
	jint BitSet::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean BitSet::intersects(java::util::BitSet arg0)
	{
		return callMethod<jboolean>(
			"intersects",
			"(Ljava/util/BitSet;)Z",
			arg0.object()
		);
	}
	jboolean BitSet::isEmpty()
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	jint BitSet::length()
	{
		return callMethod<jint>(
			"length",
			"()I"
		);
	}
	jint BitSet::nextClearBit(jint arg0)
	{
		return callMethod<jint>(
			"nextClearBit",
			"(I)I",
			arg0
		);
	}
	jint BitSet::nextSetBit(jint arg0)
	{
		return callMethod<jint>(
			"nextSetBit",
			"(I)I",
			arg0
		);
	}
	void BitSet::_or(java::util::BitSet arg0)
	{
		callMethod<void>(
			"or",
			"(Ljava/util/BitSet;)V",
			arg0.object()
		);
	}
	jint BitSet::previousClearBit(jint arg0)
	{
		return callMethod<jint>(
			"previousClearBit",
			"(I)I",
			arg0
		);
	}
	jint BitSet::previousSetBit(jint arg0)
	{
		return callMethod<jint>(
			"previousSetBit",
			"(I)I",
			arg0
		);
	}
	void BitSet::set(jint arg0)
	{
		callMethod<void>(
			"set",
			"(I)V",
			arg0
		);
	}
	void BitSet::set(jint arg0, jboolean arg1)
	{
		callMethod<void>(
			"set",
			"(IZ)V",
			arg0,
			arg1
		);
	}
	void BitSet::set(jint arg0, jint arg1)
	{
		callMethod<void>(
			"set",
			"(II)V",
			arg0,
			arg1
		);
	}
	void BitSet::set(jint arg0, jint arg1, jboolean arg2)
	{
		callMethod<void>(
			"set",
			"(IIZ)V",
			arg0,
			arg1,
			arg2
		);
	}
	jint BitSet::size()
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	__JniBaseClass BitSet::stream()
	{
		return callObjectMethod(
			"stream",
			"()Ljava/util/stream/IntStream;"
		);
	}
	jbyteArray BitSet::toByteArray()
	{
		return callObjectMethod(
			"toByteArray",
			"()[B"
		).object<jbyteArray>();
	}
	jlongArray BitSet::toLongArray()
	{
		return callObjectMethod(
			"toLongArray",
			"()[J"
		).object<jlongArray>();
	}
	jstring BitSet::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void BitSet::_xor(java::util::BitSet arg0)
	{
		callMethod<void>(
			"xor",
			"(Ljava/util/BitSet;)V",
			arg0.object()
		);
	}
} // namespace java::util

