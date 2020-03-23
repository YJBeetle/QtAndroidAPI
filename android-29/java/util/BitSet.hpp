#pragma once

#ifndef JAVA_UTIL_BITSET
#define JAVA_UTIL_BITSET

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::nio
{
	class LongBuffer;
}
namespace __jni_impl::java::nio
{
	class ByteBuffer;
}
namespace __jni_impl::java::io
{
	class ObjectInputStream;
}
namespace __jni_impl::java::io
{
	class ObjectOutputStream;
}

namespace __jni_impl::java::util
{
	class BitSet : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jint arg0);
		void __constructor();
		
		// Methods
		QAndroidJniObject get(jint arg0, jint arg1);
		jboolean get(jint arg0);
		jboolean equals(jobject arg0);
		jint length();
		QAndroidJniObject toString();
		jint hashCode();
		QAndroidJniObject clone();
		static QAndroidJniObject valueOf(jlongArray arg0);
		static QAndroidJniObject valueOf(__jni_impl::java::nio::LongBuffer arg0);
		static QAndroidJniObject valueOf(jbyteArray arg0);
		static QAndroidJniObject valueOf(__jni_impl::java::nio::ByteBuffer arg0);
		void clear();
		void clear(jint arg0);
		void clear(jint arg0, jint arg1);
		jboolean isEmpty();
		jint size();
		QAndroidJniObject stream();
		void set(jint arg0, jint arg1);
		void set(jint arg0);
		void set(jint arg0, jboolean arg1);
		void set(jint arg0, jint arg1, jboolean arg2);
		QAndroidJniObject toByteArray();
		void flip(jint arg0, jint arg1);
		void flip(jint arg0);
		void _or(__jni_impl::java::util::BitSet arg0);
		void _and(__jni_impl::java::util::BitSet arg0);
		void _xor(__jni_impl::java::util::BitSet arg0);
		void andNot(__jni_impl::java::util::BitSet arg0);
		jint nextClearBit(jint arg0);
		jboolean intersects(__jni_impl::java::util::BitSet arg0);
		QAndroidJniObject toLongArray();
		jint cardinality();
		jint nextSetBit(jint arg0);
		jint previousSetBit(jint arg0);
		jint previousClearBit(jint arg0);
	};
} // namespace __jni_impl::java::util

#include "../nio/LongBuffer.hpp"
#include "../nio/ByteBuffer.hpp"
#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"

namespace __jni_impl::java::util
{
	// Fields
	
	// Constructors
	void BitSet::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.BitSet",
			"(I)V",
			arg0);
	}
	void BitSet::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.BitSet",
			"()V");
	}
	
	// Methods
	QAndroidJniObject BitSet::get(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"get",
			"(II)Ljava/util/BitSet;",
			arg0,
			arg1);
	}
	jboolean BitSet::get(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"get",
			"(I)Z",
			arg0);
	}
	jboolean BitSet::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	jint BitSet::length()
	{
		return __thiz.callMethod<jint>(
			"length",
			"()I");
	}
	QAndroidJniObject BitSet::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint BitSet::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	QAndroidJniObject BitSet::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;");
	}
	QAndroidJniObject BitSet::valueOf(jlongArray arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.BitSet",
			"valueOf",
			"([J)Ljava/util/BitSet;",
			arg0);
	}
	QAndroidJniObject BitSet::valueOf(__jni_impl::java::nio::LongBuffer arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.BitSet",
			"valueOf",
			"(Ljava/nio/LongBuffer;)Ljava/util/BitSet;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject BitSet::valueOf(jbyteArray arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.BitSet",
			"valueOf",
			"([B)Ljava/util/BitSet;",
			arg0);
	}
	QAndroidJniObject BitSet::valueOf(__jni_impl::java::nio::ByteBuffer arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.BitSet",
			"valueOf",
			"(Ljava/nio/ByteBuffer;)Ljava/util/BitSet;",
			arg0.__jniObject().object());
	}
	void BitSet::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V");
	}
	void BitSet::clear(jint arg0)
	{
		__thiz.callMethod<void>(
			"clear",
			"(I)V",
			arg0);
	}
	void BitSet::clear(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"clear",
			"(II)V",
			arg0,
			arg1);
	}
	jboolean BitSet::isEmpty()
	{
		return __thiz.callMethod<jboolean>(
			"isEmpty",
			"()Z");
	}
	jint BitSet::size()
	{
		return __thiz.callMethod<jint>(
			"size",
			"()I");
	}
	QAndroidJniObject BitSet::stream()
	{
		return __thiz.callObjectMethod(
			"stream",
			"()Ljava/util/stream/IntStream;");
	}
	void BitSet::set(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"set",
			"(II)V",
			arg0,
			arg1);
	}
	void BitSet::set(jint arg0)
	{
		__thiz.callMethod<void>(
			"set",
			"(I)V",
			arg0);
	}
	void BitSet::set(jint arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"set",
			"(IZ)V",
			arg0,
			arg1);
	}
	void BitSet::set(jint arg0, jint arg1, jboolean arg2)
	{
		__thiz.callMethod<void>(
			"set",
			"(IIZ)V",
			arg0,
			arg1,
			arg2);
	}
	QAndroidJniObject BitSet::toByteArray()
	{
		return __thiz.callObjectMethod(
			"toByteArray",
			"()[B");
	}
	void BitSet::flip(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"flip",
			"(II)V",
			arg0,
			arg1);
	}
	void BitSet::flip(jint arg0)
	{
		__thiz.callMethod<void>(
			"flip",
			"(I)V",
			arg0);
	}
	void BitSet::_or(__jni_impl::java::util::BitSet arg0)
	{
		__thiz.callMethod<void>(
			"or",
			"(Ljava/util/BitSet;)V",
			arg0.__jniObject().object());
	}
	void BitSet::_and(__jni_impl::java::util::BitSet arg0)
	{
		__thiz.callMethod<void>(
			"and",
			"(Ljava/util/BitSet;)V",
			arg0.__jniObject().object());
	}
	void BitSet::_xor(__jni_impl::java::util::BitSet arg0)
	{
		__thiz.callMethod<void>(
			"xor",
			"(Ljava/util/BitSet;)V",
			arg0.__jniObject().object());
	}
	void BitSet::andNot(__jni_impl::java::util::BitSet arg0)
	{
		__thiz.callMethod<void>(
			"andNot",
			"(Ljava/util/BitSet;)V",
			arg0.__jniObject().object());
	}
	jint BitSet::nextClearBit(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"nextClearBit",
			"(I)I",
			arg0);
	}
	jboolean BitSet::intersects(__jni_impl::java::util::BitSet arg0)
	{
		return __thiz.callMethod<jboolean>(
			"intersects",
			"(Ljava/util/BitSet;)Z",
			arg0.__jniObject().object());
	}
	QAndroidJniObject BitSet::toLongArray()
	{
		return __thiz.callObjectMethod(
			"toLongArray",
			"()[J");
	}
	jint BitSet::cardinality()
	{
		return __thiz.callMethod<jint>(
			"cardinality",
			"()I");
	}
	jint BitSet::nextSetBit(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"nextSetBit",
			"(I)I",
			arg0);
	}
	jint BitSet::previousSetBit(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"previousSetBit",
			"(I)I",
			arg0);
	}
	jint BitSet::previousClearBit(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"previousClearBit",
			"(I)I",
			arg0);
	}
} // namespace __jni_impl::java::util

namespace java::util
{
	class BitSet : public __jni_impl::java::util::BitSet
	{
	public:
		BitSet(QAndroidJniObject obj) { __thiz = obj; }
		BitSet(jint arg0)
		{
			__constructor(
				arg0);
		}
		BitSet()
		{
			__constructor();
		}
	};
} // namespace java::util

#endif // JAVA_UTIL_BITSET

