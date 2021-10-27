#pragma once

#ifndef JAVA_NIO_DOUBLEBUFFER
#define JAVA_NIO_DOUBLEBUFFER

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
	class DoubleBuffer : public __jni_impl::java::nio::Buffer
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject allocate(jint arg0);
		static QAndroidJniObject wrap(jdoubleArray arg0);
		static QAndroidJniObject wrap(jdoubleArray arg0, jint arg1, jint arg2);
		jdoubleArray array();
		jint arrayOffset();
		QAndroidJniObject asReadOnlyBuffer();
		QAndroidJniObject clear();
		QAndroidJniObject compact();
		jint compareTo(jobject arg0);
		jint compareTo(__jni_impl::java::nio::DoubleBuffer arg0);
		QAndroidJniObject duplicate();
		jboolean equals(jobject arg0);
		QAndroidJniObject flip();
		jdouble get();
		jdouble get(jint arg0);
		QAndroidJniObject get(jdoubleArray arg0);
		QAndroidJniObject get(jint arg0, jdoubleArray arg1);
		QAndroidJniObject get(jdoubleArray arg0, jint arg1, jint arg2);
		QAndroidJniObject get(jint arg0, jdoubleArray arg1, jint arg2, jint arg3);
		jboolean hasArray();
		jint hashCode();
		jboolean isDirect();
		QAndroidJniObject limit(jint arg0);
		QAndroidJniObject mark();
		jint mismatch(__jni_impl::java::nio::DoubleBuffer arg0);
		QAndroidJniObject order();
		QAndroidJniObject position(jint arg0);
		QAndroidJniObject put(jdoubleArray arg0);
		QAndroidJniObject put(jdouble arg0);
		QAndroidJniObject put(__jni_impl::java::nio::DoubleBuffer arg0);
		QAndroidJniObject put(jint arg0, jdoubleArray arg1);
		QAndroidJniObject put(jint arg0, jdouble arg1);
		QAndroidJniObject put(jdoubleArray arg0, jint arg1, jint arg2);
		QAndroidJniObject put(jint arg0, jdoubleArray arg1, jint arg2, jint arg3);
		QAndroidJniObject put(jint arg0, __jni_impl::java::nio::DoubleBuffer arg1, jint arg2, jint arg3);
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
	void DoubleBuffer::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.nio.DoubleBuffer",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject DoubleBuffer::allocate(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.DoubleBuffer",
			"allocate",
			"(I)Ljava/nio/DoubleBuffer;",
			arg0
		);
	}
	QAndroidJniObject DoubleBuffer::wrap(jdoubleArray arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.DoubleBuffer",
			"wrap",
			"([D)Ljava/nio/DoubleBuffer;",
			arg0
		);
	}
	QAndroidJniObject DoubleBuffer::wrap(jdoubleArray arg0, jint arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.DoubleBuffer",
			"wrap",
			"([DII)Ljava/nio/DoubleBuffer;",
			arg0,
			arg1,
			arg2
		);
	}
	jdoubleArray DoubleBuffer::array()
	{
		return __thiz.callObjectMethod(
			"array",
			"()[D"
		).object<jdoubleArray>();
	}
	jint DoubleBuffer::arrayOffset()
	{
		return __thiz.callMethod<jint>(
			"arrayOffset",
			"()I"
		);
	}
	QAndroidJniObject DoubleBuffer::asReadOnlyBuffer()
	{
		return __thiz.callObjectMethod(
			"asReadOnlyBuffer",
			"()Ljava/nio/DoubleBuffer;"
		);
	}
	QAndroidJniObject DoubleBuffer::clear()
	{
		return __thiz.callObjectMethod(
			"clear",
			"()Ljava/nio/DoubleBuffer;"
		);
	}
	QAndroidJniObject DoubleBuffer::compact()
	{
		return __thiz.callObjectMethod(
			"compact",
			"()Ljava/nio/DoubleBuffer;"
		);
	}
	jint DoubleBuffer::compareTo(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jint DoubleBuffer::compareTo(__jni_impl::java::nio::DoubleBuffer arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/nio/DoubleBuffer;)I",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject DoubleBuffer::duplicate()
	{
		return __thiz.callObjectMethod(
			"duplicate",
			"()Ljava/nio/DoubleBuffer;"
		);
	}
	jboolean DoubleBuffer::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject DoubleBuffer::flip()
	{
		return __thiz.callObjectMethod(
			"flip",
			"()Ljava/nio/DoubleBuffer;"
		);
	}
	jdouble DoubleBuffer::get()
	{
		return __thiz.callMethod<jdouble>(
			"get",
			"()D"
		);
	}
	jdouble DoubleBuffer::get(jint arg0)
	{
		return __thiz.callMethod<jdouble>(
			"get",
			"(I)D",
			arg0
		);
	}
	QAndroidJniObject DoubleBuffer::get(jdoubleArray arg0)
	{
		return __thiz.callObjectMethod(
			"get",
			"([D)Ljava/nio/DoubleBuffer;",
			arg0
		);
	}
	QAndroidJniObject DoubleBuffer::get(jint arg0, jdoubleArray arg1)
	{
		return __thiz.callObjectMethod(
			"get",
			"(I[D)Ljava/nio/DoubleBuffer;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject DoubleBuffer::get(jdoubleArray arg0, jint arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"get",
			"([DII)Ljava/nio/DoubleBuffer;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject DoubleBuffer::get(jint arg0, jdoubleArray arg1, jint arg2, jint arg3)
	{
		return __thiz.callObjectMethod(
			"get",
			"(I[DII)Ljava/nio/DoubleBuffer;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jboolean DoubleBuffer::hasArray()
	{
		return __thiz.callMethod<jboolean>(
			"hasArray",
			"()Z"
		);
	}
	jint DoubleBuffer::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean DoubleBuffer::isDirect()
	{
		return __thiz.callMethod<jboolean>(
			"isDirect",
			"()Z"
		);
	}
	QAndroidJniObject DoubleBuffer::limit(jint arg0)
	{
		return __thiz.callObjectMethod(
			"limit",
			"(I)Ljava/nio/DoubleBuffer;",
			arg0
		);
	}
	QAndroidJniObject DoubleBuffer::mark()
	{
		return __thiz.callObjectMethod(
			"mark",
			"()Ljava/nio/DoubleBuffer;"
		);
	}
	jint DoubleBuffer::mismatch(__jni_impl::java::nio::DoubleBuffer arg0)
	{
		return __thiz.callMethod<jint>(
			"mismatch",
			"(Ljava/nio/DoubleBuffer;)I",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject DoubleBuffer::order()
	{
		return __thiz.callObjectMethod(
			"order",
			"()Ljava/nio/ByteOrder;"
		);
	}
	QAndroidJniObject DoubleBuffer::position(jint arg0)
	{
		return __thiz.callObjectMethod(
			"position",
			"(I)Ljava/nio/DoubleBuffer;",
			arg0
		);
	}
	QAndroidJniObject DoubleBuffer::put(jdoubleArray arg0)
	{
		return __thiz.callObjectMethod(
			"put",
			"([D)Ljava/nio/DoubleBuffer;",
			arg0
		);
	}
	QAndroidJniObject DoubleBuffer::put(jdouble arg0)
	{
		return __thiz.callObjectMethod(
			"put",
			"(D)Ljava/nio/DoubleBuffer;",
			arg0
		);
	}
	QAndroidJniObject DoubleBuffer::put(__jni_impl::java::nio::DoubleBuffer arg0)
	{
		return __thiz.callObjectMethod(
			"put",
			"(Ljava/nio/DoubleBuffer;)Ljava/nio/DoubleBuffer;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject DoubleBuffer::put(jint arg0, jdoubleArray arg1)
	{
		return __thiz.callObjectMethod(
			"put",
			"(I[D)Ljava/nio/DoubleBuffer;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject DoubleBuffer::put(jint arg0, jdouble arg1)
	{
		return __thiz.callObjectMethod(
			"put",
			"(ID)Ljava/nio/DoubleBuffer;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject DoubleBuffer::put(jdoubleArray arg0, jint arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"put",
			"([DII)Ljava/nio/DoubleBuffer;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject DoubleBuffer::put(jint arg0, jdoubleArray arg1, jint arg2, jint arg3)
	{
		return __thiz.callObjectMethod(
			"put",
			"(I[DII)Ljava/nio/DoubleBuffer;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	QAndroidJniObject DoubleBuffer::put(jint arg0, __jni_impl::java::nio::DoubleBuffer arg1, jint arg2, jint arg3)
	{
		return __thiz.callObjectMethod(
			"put",
			"(ILjava/nio/DoubleBuffer;II)Ljava/nio/DoubleBuffer;",
			arg0,
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	QAndroidJniObject DoubleBuffer::reset()
	{
		return __thiz.callObjectMethod(
			"reset",
			"()Ljava/nio/DoubleBuffer;"
		);
	}
	QAndroidJniObject DoubleBuffer::rewind()
	{
		return __thiz.callObjectMethod(
			"rewind",
			"()Ljava/nio/DoubleBuffer;"
		);
	}
	QAndroidJniObject DoubleBuffer::slice()
	{
		return __thiz.callObjectMethod(
			"slice",
			"()Ljava/nio/DoubleBuffer;"
		);
	}
	QAndroidJniObject DoubleBuffer::slice(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"slice",
			"(II)Ljava/nio/DoubleBuffer;",
			arg0,
			arg1
		);
	}
	jstring DoubleBuffer::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::java::nio

namespace java::nio
{
	class DoubleBuffer : public __jni_impl::java::nio::DoubleBuffer
	{
	public:
		DoubleBuffer(QAndroidJniObject obj) { __thiz = obj; }
		DoubleBuffer()
		{
			__constructor();
		}
	};
} // namespace java::nio

#endif // JAVA_NIO_DOUBLEBUFFER

