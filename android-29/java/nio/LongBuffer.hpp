#pragma once

#ifndef JAVA_NIO_LONGBUFFER
#define JAVA_NIO_LONGBUFFER

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
	class LongBuffer : public __jni_impl::java::nio::Buffer
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject allocate(jint arg0);
		static QAndroidJniObject wrap(jlongArray arg0);
		static QAndroidJniObject wrap(jlongArray arg0, jint arg1, jint arg2);
		jlongArray array();
		jint arrayOffset();
		QAndroidJniObject asReadOnlyBuffer();
		QAndroidJniObject clear();
		QAndroidJniObject compact();
		jint compareTo(jobject arg0);
		jint compareTo(__jni_impl::java::nio::LongBuffer arg0);
		QAndroidJniObject duplicate();
		jboolean equals(jobject arg0);
		QAndroidJniObject flip();
		QAndroidJniObject get(jlongArray arg0);
		QAndroidJniObject get(jint arg0, jlongArray arg1);
		QAndroidJniObject get(jlongArray arg0, jint arg1, jint arg2);
		QAndroidJniObject get(jint arg0, jlongArray arg1, jint arg2, jint arg3);
		jlong get();
		jlong get(jint arg0);
		jboolean hasArray();
		jint hashCode();
		jboolean isDirect();
		QAndroidJniObject limit(jint arg0);
		QAndroidJniObject mark();
		jint mismatch(__jni_impl::java::nio::LongBuffer arg0);
		QAndroidJniObject order();
		QAndroidJniObject position(jint arg0);
		QAndroidJniObject put(jlongArray arg0);
		QAndroidJniObject put(__jni_impl::java::nio::LongBuffer arg0);
		QAndroidJniObject put(jlong arg0);
		QAndroidJniObject put(jint arg0, jlongArray arg1);
		QAndroidJniObject put(jint arg0, jlong arg1);
		QAndroidJniObject put(jlongArray arg0, jint arg1, jint arg2);
		QAndroidJniObject put(jint arg0, jlongArray arg1, jint arg2, jint arg3);
		QAndroidJniObject put(jint arg0, __jni_impl::java::nio::LongBuffer arg1, jint arg2, jint arg3);
		QAndroidJniObject reset();
		QAndroidJniObject rewind();
		QAndroidJniObject slice();
		QAndroidJniObject slice(jint arg0, jint arg1);
		jstring toString();
	};
} // namespace __jni_impl::java::nio

#include "Buffer.hpp"
#include "ByteOrder.hpp"

namespace __jni_impl::java::nio
{
	// Fields
	
	// Constructors
	void LongBuffer::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.nio.LongBuffer",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject LongBuffer::allocate(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.LongBuffer",
			"allocate",
			"(I)Ljava/nio/LongBuffer;",
			arg0
		);
	}
	QAndroidJniObject LongBuffer::wrap(jlongArray arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.LongBuffer",
			"wrap",
			"([J)Ljava/nio/LongBuffer;",
			arg0
		);
	}
	QAndroidJniObject LongBuffer::wrap(jlongArray arg0, jint arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.LongBuffer",
			"wrap",
			"([JII)Ljava/nio/LongBuffer;",
			arg0,
			arg1,
			arg2
		);
	}
	jlongArray LongBuffer::array()
	{
		return __thiz.callObjectMethod(
			"array",
			"()[J"
		).object<jlongArray>();
	}
	jint LongBuffer::arrayOffset()
	{
		return __thiz.callMethod<jint>(
			"arrayOffset",
			"()I"
		);
	}
	QAndroidJniObject LongBuffer::asReadOnlyBuffer()
	{
		return __thiz.callObjectMethod(
			"asReadOnlyBuffer",
			"()Ljava/nio/LongBuffer;"
		);
	}
	QAndroidJniObject LongBuffer::clear()
	{
		return __thiz.callObjectMethod(
			"clear",
			"()Ljava/nio/LongBuffer;"
		);
	}
	QAndroidJniObject LongBuffer::compact()
	{
		return __thiz.callObjectMethod(
			"compact",
			"()Ljava/nio/LongBuffer;"
		);
	}
	jint LongBuffer::compareTo(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jint LongBuffer::compareTo(__jni_impl::java::nio::LongBuffer arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/nio/LongBuffer;)I",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject LongBuffer::duplicate()
	{
		return __thiz.callObjectMethod(
			"duplicate",
			"()Ljava/nio/LongBuffer;"
		);
	}
	jboolean LongBuffer::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject LongBuffer::flip()
	{
		return __thiz.callObjectMethod(
			"flip",
			"()Ljava/nio/LongBuffer;"
		);
	}
	QAndroidJniObject LongBuffer::get(jlongArray arg0)
	{
		return __thiz.callObjectMethod(
			"get",
			"([J)Ljava/nio/LongBuffer;",
			arg0
		);
	}
	QAndroidJniObject LongBuffer::get(jint arg0, jlongArray arg1)
	{
		return __thiz.callObjectMethod(
			"get",
			"(I[J)Ljava/nio/LongBuffer;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject LongBuffer::get(jlongArray arg0, jint arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"get",
			"([JII)Ljava/nio/LongBuffer;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject LongBuffer::get(jint arg0, jlongArray arg1, jint arg2, jint arg3)
	{
		return __thiz.callObjectMethod(
			"get",
			"(I[JII)Ljava/nio/LongBuffer;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jlong LongBuffer::get()
	{
		return __thiz.callMethod<jlong>(
			"get",
			"()J"
		);
	}
	jlong LongBuffer::get(jint arg0)
	{
		return __thiz.callMethod<jlong>(
			"get",
			"(I)J",
			arg0
		);
	}
	jboolean LongBuffer::hasArray()
	{
		return __thiz.callMethod<jboolean>(
			"hasArray",
			"()Z"
		);
	}
	jint LongBuffer::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean LongBuffer::isDirect()
	{
		return __thiz.callMethod<jboolean>(
			"isDirect",
			"()Z"
		);
	}
	QAndroidJniObject LongBuffer::limit(jint arg0)
	{
		return __thiz.callObjectMethod(
			"limit",
			"(I)Ljava/nio/LongBuffer;",
			arg0
		);
	}
	QAndroidJniObject LongBuffer::mark()
	{
		return __thiz.callObjectMethod(
			"mark",
			"()Ljava/nio/LongBuffer;"
		);
	}
	jint LongBuffer::mismatch(__jni_impl::java::nio::LongBuffer arg0)
	{
		return __thiz.callMethod<jint>(
			"mismatch",
			"(Ljava/nio/LongBuffer;)I",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject LongBuffer::order()
	{
		return __thiz.callObjectMethod(
			"order",
			"()Ljava/nio/ByteOrder;"
		);
	}
	QAndroidJniObject LongBuffer::position(jint arg0)
	{
		return __thiz.callObjectMethod(
			"position",
			"(I)Ljava/nio/LongBuffer;",
			arg0
		);
	}
	QAndroidJniObject LongBuffer::put(jlongArray arg0)
	{
		return __thiz.callObjectMethod(
			"put",
			"([J)Ljava/nio/LongBuffer;",
			arg0
		);
	}
	QAndroidJniObject LongBuffer::put(__jni_impl::java::nio::LongBuffer arg0)
	{
		return __thiz.callObjectMethod(
			"put",
			"(Ljava/nio/LongBuffer;)Ljava/nio/LongBuffer;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject LongBuffer::put(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"put",
			"(J)Ljava/nio/LongBuffer;",
			arg0
		);
	}
	QAndroidJniObject LongBuffer::put(jint arg0, jlongArray arg1)
	{
		return __thiz.callObjectMethod(
			"put",
			"(I[J)Ljava/nio/LongBuffer;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject LongBuffer::put(jint arg0, jlong arg1)
	{
		return __thiz.callObjectMethod(
			"put",
			"(IJ)Ljava/nio/LongBuffer;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject LongBuffer::put(jlongArray arg0, jint arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"put",
			"([JII)Ljava/nio/LongBuffer;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject LongBuffer::put(jint arg0, jlongArray arg1, jint arg2, jint arg3)
	{
		return __thiz.callObjectMethod(
			"put",
			"(I[JII)Ljava/nio/LongBuffer;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	QAndroidJniObject LongBuffer::put(jint arg0, __jni_impl::java::nio::LongBuffer arg1, jint arg2, jint arg3)
	{
		return __thiz.callObjectMethod(
			"put",
			"(ILjava/nio/LongBuffer;II)Ljava/nio/LongBuffer;",
			arg0,
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	QAndroidJniObject LongBuffer::reset()
	{
		return __thiz.callObjectMethod(
			"reset",
			"()Ljava/nio/LongBuffer;"
		);
	}
	QAndroidJniObject LongBuffer::rewind()
	{
		return __thiz.callObjectMethod(
			"rewind",
			"()Ljava/nio/LongBuffer;"
		);
	}
	QAndroidJniObject LongBuffer::slice()
	{
		return __thiz.callObjectMethod(
			"slice",
			"()Ljava/nio/LongBuffer;"
		);
	}
	QAndroidJniObject LongBuffer::slice(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"slice",
			"(II)Ljava/nio/LongBuffer;",
			arg0,
			arg1
		);
	}
	jstring LongBuffer::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::java::nio

namespace java::nio
{
	class LongBuffer : public __jni_impl::java::nio::LongBuffer
	{
	public:
		LongBuffer(QAndroidJniObject obj) { __thiz = obj; }
		LongBuffer()
		{
			__constructor();
		}
	};
} // namespace java::nio

#endif // JAVA_NIO_LONGBUFFER

