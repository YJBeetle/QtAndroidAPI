#pragma once

#ifndef JAVA_NIO_CHARBUFFER
#define JAVA_NIO_CHARBUFFER

#include "../../__JniBaseClass.hpp"
#include "Buffer.hpp"

namespace __jni_impl::java::nio
{
	class Buffer;
}
namespace __jni_impl::java::nio
{
	class ByteOrder;
}

namespace __jni_impl::java::nio
{
	class CharBuffer : public __jni_impl::java::nio::Buffer
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject get(jcharArray arg0, jint arg1, jint arg2);
		jchar get(jint arg0);
		jchar get();
		QAndroidJniObject get(jcharArray arg0);
		QAndroidJniObject get(jint arg0, jcharArray arg1, jint arg2, jint arg3);
		QAndroidJniObject get(jint arg0, jcharArray arg1);
		QAndroidJniObject put(jcharArray arg0, jint arg1, jint arg2);
		QAndroidJniObject put(__jni_impl::java::nio::CharBuffer arg0);
		QAndroidJniObject put(jstring arg0, jint arg1, jint arg2);
		QAndroidJniObject put(jint arg0, jchar arg1);
		QAndroidJniObject put(jstring arg0);
		QAndroidJniObject put(jint arg0, jcharArray arg1, jint arg2, jint arg3);
		QAndroidJniObject put(jint arg0, jcharArray arg1);
		QAndroidJniObject put(jchar arg0);
		QAndroidJniObject put(jcharArray arg0);
		jboolean equals(jobject arg0);
		jint length();
		jstring toString();
		QAndroidJniObject append(jchar arg0);
		QAndroidJniObject append(jstring arg0);
		QAndroidJniObject append(jstring arg0, jint arg1, jint arg2);
		jint hashCode();
		jint compareTo(jobject arg0);
		jint compareTo(__jni_impl::java::nio::CharBuffer arg0);
		QAndroidJniObject clear();
		jchar charAt(jint arg0);
		QAndroidJniObject subSequence(jint arg0, jint arg1);
		QAndroidJniObject limit(jint arg0);
		QAndroidJniObject chars();
		jboolean isDirect();
		jboolean hasArray();
		jcharArray array();
		QAndroidJniObject position(jint arg0);
		jint arrayOffset();
		jint read(__jni_impl::java::nio::CharBuffer arg0);
		static QAndroidJniObject wrap(jstring arg0);
		static QAndroidJniObject wrap(jcharArray arg0, jint arg1, jint arg2);
		static QAndroidJniObject wrap(jstring arg0, jint arg1, jint arg2);
		static QAndroidJniObject wrap(jcharArray arg0);
		QAndroidJniObject mark();
		QAndroidJniObject reset();
		QAndroidJniObject flip();
		QAndroidJniObject rewind();
		QAndroidJniObject slice();
		QAndroidJniObject slice(jint arg0, jint arg1);
		QAndroidJniObject duplicate();
		static QAndroidJniObject allocate(jint arg0);
		jint mismatch(__jni_impl::java::nio::CharBuffer arg0);
		QAndroidJniObject asReadOnlyBuffer();
		QAndroidJniObject compact();
		QAndroidJniObject order();
	};
} // namespace __jni_impl::java::nio

#include "Buffer.hpp"
#include "ByteOrder.hpp"

namespace __jni_impl::java::nio
{
	// Fields
	
	// Constructors
	void CharBuffer::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.nio.CharBuffer",
			"(V)V");
	}
	
	// Methods
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
	jchar CharBuffer::get(jint arg0)
	{
		return __thiz.callMethod<jchar>(
			"get",
			"(I)C",
			arg0
		);
	}
	jchar CharBuffer::get()
	{
		return __thiz.callMethod<jchar>(
			"get",
			"()C"
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
	QAndroidJniObject CharBuffer::get(jint arg0, jcharArray arg1)
	{
		return __thiz.callObjectMethod(
			"get",
			"(I[C)Ljava/nio/CharBuffer;",
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
	QAndroidJniObject CharBuffer::put(__jni_impl::java::nio::CharBuffer arg0)
	{
		return __thiz.callObjectMethod(
			"put",
			"(Ljava/nio/CharBuffer;)Ljava/nio/CharBuffer;",
			arg0.__jniObject().object()
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
	QAndroidJniObject CharBuffer::put(jint arg0, jchar arg1)
	{
		return __thiz.callObjectMethod(
			"put",
			"(IC)Ljava/nio/CharBuffer;",
			arg0,
			arg1
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
	QAndroidJniObject CharBuffer::put(jint arg0, jcharArray arg1)
	{
		return __thiz.callObjectMethod(
			"put",
			"(I[C)Ljava/nio/CharBuffer;",
			arg0,
			arg1
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
	QAndroidJniObject CharBuffer::put(jcharArray arg0)
	{
		return __thiz.callObjectMethod(
			"put",
			"([C)Ljava/nio/CharBuffer;",
			arg0
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
	jint CharBuffer::length()
	{
		return __thiz.callMethod<jint>(
			"length",
			"()I"
		);
	}
	jstring CharBuffer::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
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
	jint CharBuffer::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
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
	jint CharBuffer::compareTo(__jni_impl::java::nio::CharBuffer arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/nio/CharBuffer;)I",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject CharBuffer::clear()
	{
		return __thiz.callObjectMethod(
			"clear",
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
	QAndroidJniObject CharBuffer::subSequence(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"subSequence",
			"(II)Ljava/nio/CharBuffer;",
			arg0,
			arg1
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
	QAndroidJniObject CharBuffer::chars()
	{
		return __thiz.callObjectMethod(
			"chars",
			"()Ljava/util/stream/IntStream;"
		);
	}
	jboolean CharBuffer::isDirect()
	{
		return __thiz.callMethod<jboolean>(
			"isDirect",
			"()Z"
		);
	}
	jboolean CharBuffer::hasArray()
	{
		return __thiz.callMethod<jboolean>(
			"hasArray",
			"()Z"
		);
	}
	jcharArray CharBuffer::array()
	{
		return __thiz.callObjectMethod(
			"array",
			"()[C"
		).object<jcharArray>();
	}
	QAndroidJniObject CharBuffer::position(jint arg0)
	{
		return __thiz.callObjectMethod(
			"position",
			"(I)Ljava/nio/CharBuffer;",
			arg0
		);
	}
	jint CharBuffer::arrayOffset()
	{
		return __thiz.callMethod<jint>(
			"arrayOffset",
			"()I"
		);
	}
	jint CharBuffer::read(__jni_impl::java::nio::CharBuffer arg0)
	{
		return __thiz.callMethod<jint>(
			"read",
			"(Ljava/nio/CharBuffer;)I",
			arg0.__jniObject().object()
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
	QAndroidJniObject CharBuffer::wrap(jcharArray arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.CharBuffer",
			"wrap",
			"([C)Ljava/nio/CharBuffer;",
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
	QAndroidJniObject CharBuffer::reset()
	{
		return __thiz.callObjectMethod(
			"reset",
			"()Ljava/nio/CharBuffer;"
		);
	}
	QAndroidJniObject CharBuffer::flip()
	{
		return __thiz.callObjectMethod(
			"flip",
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
	QAndroidJniObject CharBuffer::duplicate()
	{
		return __thiz.callObjectMethod(
			"duplicate",
			"()Ljava/nio/CharBuffer;"
		);
	}
	QAndroidJniObject CharBuffer::allocate(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.CharBuffer",
			"allocate",
			"(I)Ljava/nio/CharBuffer;",
			arg0
		);
	}
	jint CharBuffer::mismatch(__jni_impl::java::nio::CharBuffer arg0)
	{
		return __thiz.callMethod<jint>(
			"mismatch",
			"(Ljava/nio/CharBuffer;)I",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject CharBuffer::asReadOnlyBuffer()
	{
		return __thiz.callObjectMethod(
			"asReadOnlyBuffer",
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
	QAndroidJniObject CharBuffer::order()
	{
		return __thiz.callObjectMethod(
			"order",
			"()Ljava/nio/ByteOrder;"
		);
	}
} // namespace __jni_impl::java::nio

namespace java::nio
{
	class CharBuffer : public __jni_impl::java::nio::CharBuffer
	{
	public:
		CharBuffer(QAndroidJniObject obj) { __thiz = obj; }
		CharBuffer()
		{
			__constructor();
		}
	};
} // namespace java::nio

#endif // JAVA_NIO_CHARBUFFER

