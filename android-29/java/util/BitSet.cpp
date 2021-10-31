#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"
#include "../nio/ByteBuffer.hpp"
#include "../nio/LongBuffer.hpp"
#include "./BitSet.hpp"

namespace java::util
{
	// Fields
	
	BitSet::BitSet(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	BitSet::BitSet()
	{
		__thiz = QAndroidJniObject(
			"java.util.BitSet",
			"()V"
		);
	}
	BitSet::BitSet(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.BitSet",
			"(I)V",
			arg0
		);
	}
	
	// Methods
	QAndroidJniObject BitSet::valueOf(jbyteArray arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.BitSet",
			"valueOf",
			"([B)Ljava/util/BitSet;",
			arg0
		);
	}
	QAndroidJniObject BitSet::valueOf(jlongArray arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.BitSet",
			"valueOf",
			"([J)Ljava/util/BitSet;",
			arg0
		);
	}
	QAndroidJniObject BitSet::valueOf(java::nio::ByteBuffer arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.BitSet",
			"valueOf",
			"(Ljava/nio/ByteBuffer;)Ljava/util/BitSet;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject BitSet::valueOf(java::nio::LongBuffer arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.BitSet",
			"valueOf",
			"(Ljava/nio/LongBuffer;)Ljava/util/BitSet;",
			arg0.__jniObject().object()
		);
	}
	void BitSet::_and(java::util::BitSet arg0)
	{
		__thiz.callMethod<void>(
			"and",
			"(Ljava/util/BitSet;)V",
			arg0.__jniObject().object()
		);
	}
	void BitSet::andNot(java::util::BitSet arg0)
	{
		__thiz.callMethod<void>(
			"andNot",
			"(Ljava/util/BitSet;)V",
			arg0.__jniObject().object()
		);
	}
	jint BitSet::cardinality()
	{
		return __thiz.callMethod<jint>(
			"cardinality",
			"()I"
		);
	}
	void BitSet::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V"
		);
	}
	void BitSet::clear(jint arg0)
	{
		__thiz.callMethod<void>(
			"clear",
			"(I)V",
			arg0
		);
	}
	void BitSet::clear(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"clear",
			"(II)V",
			arg0,
			arg1
		);
	}
	jobject BitSet::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jboolean BitSet::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	void BitSet::flip(jint arg0)
	{
		__thiz.callMethod<void>(
			"flip",
			"(I)V",
			arg0
		);
	}
	void BitSet::flip(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"flip",
			"(II)V",
			arg0,
			arg1
		);
	}
	jboolean BitSet::get(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"get",
			"(I)Z",
			arg0
		);
	}
	QAndroidJniObject BitSet::get(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"get",
			"(II)Ljava/util/BitSet;",
			arg0,
			arg1
		);
	}
	jint BitSet::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean BitSet::intersects(java::util::BitSet arg0)
	{
		return __thiz.callMethod<jboolean>(
			"intersects",
			"(Ljava/util/BitSet;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean BitSet::isEmpty()
	{
		return __thiz.callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	jint BitSet::length()
	{
		return __thiz.callMethod<jint>(
			"length",
			"()I"
		);
	}
	jint BitSet::nextClearBit(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"nextClearBit",
			"(I)I",
			arg0
		);
	}
	jint BitSet::nextSetBit(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"nextSetBit",
			"(I)I",
			arg0
		);
	}
	void BitSet::_or(java::util::BitSet arg0)
	{
		__thiz.callMethod<void>(
			"or",
			"(Ljava/util/BitSet;)V",
			arg0.__jniObject().object()
		);
	}
	jint BitSet::previousClearBit(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"previousClearBit",
			"(I)I",
			arg0
		);
	}
	jint BitSet::previousSetBit(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"previousSetBit",
			"(I)I",
			arg0
		);
	}
	void BitSet::set(jint arg0)
	{
		__thiz.callMethod<void>(
			"set",
			"(I)V",
			arg0
		);
	}
	void BitSet::set(jint arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"set",
			"(IZ)V",
			arg0,
			arg1
		);
	}
	void BitSet::set(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"set",
			"(II)V",
			arg0,
			arg1
		);
	}
	void BitSet::set(jint arg0, jint arg1, jboolean arg2)
	{
		__thiz.callMethod<void>(
			"set",
			"(IIZ)V",
			arg0,
			arg1,
			arg2
		);
	}
	jint BitSet::size()
	{
		return __thiz.callMethod<jint>(
			"size",
			"()I"
		);
	}
	QAndroidJniObject BitSet::stream()
	{
		return __thiz.callObjectMethod(
			"stream",
			"()Ljava/util/stream/IntStream;"
		);
	}
	jbyteArray BitSet::toByteArray()
	{
		return __thiz.callObjectMethod(
			"toByteArray",
			"()[B"
		).object<jbyteArray>();
	}
	jlongArray BitSet::toLongArray()
	{
		return __thiz.callObjectMethod(
			"toLongArray",
			"()[J"
		).object<jlongArray>();
	}
	jstring BitSet::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void BitSet::_xor(java::util::BitSet arg0)
	{
		__thiz.callMethod<void>(
			"xor",
			"(Ljava/util/BitSet;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace java::util

