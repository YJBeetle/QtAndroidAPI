#pragma once

#ifndef JAVA_NIO_INTBUFFER
#define JAVA_NIO_INTBUFFER

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
	class IntBuffer : public __jni_impl::java::nio::Buffer
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject allocate(jint arg0);
		static QAndroidJniObject wrap(jintArray arg0);
		static QAndroidJniObject wrap(jintArray arg0, jint arg1, jint arg2);
		jintArray array();
		jint arrayOffset();
		QAndroidJniObject asReadOnlyBuffer();
		QAndroidJniObject clear();
		QAndroidJniObject compact();
		jint compareTo(jobject arg0);
		jint compareTo(__jni_impl::java::nio::IntBuffer arg0);
		QAndroidJniObject duplicate();
		jboolean equals(jobject arg0);
		QAndroidJniObject flip();
		jint get();
		jint get(jint arg0);
		QAndroidJniObject get(jintArray arg0);
		QAndroidJniObject get(jint arg0, jintArray arg1);
		QAndroidJniObject get(jintArray arg0, jint arg1, jint arg2);
		QAndroidJniObject get(jint arg0, jintArray arg1, jint arg2, jint arg3);
		jboolean hasArray();
		jint hashCode();
		jboolean isDirect();
		QAndroidJniObject limit(jint arg0);
		QAndroidJniObject mark();
		jint mismatch(__jni_impl::java::nio::IntBuffer arg0);
		QAndroidJniObject order();
		QAndroidJniObject position(jint arg0);
		QAndroidJniObject put(jintArray arg0);
		QAndroidJniObject put(jint arg0);
		QAndroidJniObject put(__jni_impl::java::nio::IntBuffer arg0);
		QAndroidJniObject put(jint arg0, jintArray arg1);
		QAndroidJniObject put(jint arg0, jint arg1);
		QAndroidJniObject put(jintArray arg0, jint arg1, jint arg2);
		QAndroidJniObject put(jint arg0, jintArray arg1, jint arg2, jint arg3);
		QAndroidJniObject put(jint arg0, __jni_impl::java::nio::IntBuffer arg1, jint arg2, jint arg3);
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
	void IntBuffer::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.nio.IntBuffer",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject IntBuffer::allocate(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.IntBuffer",
			"allocate",
			"(I)Ljava/nio/IntBuffer;",
			arg0
		);
	}
	QAndroidJniObject IntBuffer::wrap(jintArray arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.IntBuffer",
			"wrap",
			"([I)Ljava/nio/IntBuffer;",
			arg0
		);
	}
	QAndroidJniObject IntBuffer::wrap(jintArray arg0, jint arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.IntBuffer",
			"wrap",
			"([III)Ljava/nio/IntBuffer;",
			arg0,
			arg1,
			arg2
		);
	}
	jintArray IntBuffer::array()
	{
		return __thiz.callObjectMethod(
			"array",
			"()[I"
		).object<jintArray>();
	}
	jint IntBuffer::arrayOffset()
	{
		return __thiz.callMethod<jint>(
			"arrayOffset",
			"()I"
		);
	}
	QAndroidJniObject IntBuffer::asReadOnlyBuffer()
	{
		return __thiz.callObjectMethod(
			"asReadOnlyBuffer",
			"()Ljava/nio/IntBuffer;"
		);
	}
	QAndroidJniObject IntBuffer::clear()
	{
		return __thiz.callObjectMethod(
			"clear",
			"()Ljava/nio/IntBuffer;"
		);
	}
	QAndroidJniObject IntBuffer::compact()
	{
		return __thiz.callObjectMethod(
			"compact",
			"()Ljava/nio/IntBuffer;"
		);
	}
	jint IntBuffer::compareTo(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jint IntBuffer::compareTo(__jni_impl::java::nio::IntBuffer arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/nio/IntBuffer;)I",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject IntBuffer::duplicate()
	{
		return __thiz.callObjectMethod(
			"duplicate",
			"()Ljava/nio/IntBuffer;"
		);
	}
	jboolean IntBuffer::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject IntBuffer::flip()
	{
		return __thiz.callObjectMethod(
			"flip",
			"()Ljava/nio/IntBuffer;"
		);
	}
	jint IntBuffer::get()
	{
		return __thiz.callMethod<jint>(
			"get",
			"()I"
		);
	}
	jint IntBuffer::get(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"get",
			"(I)I",
			arg0
		);
	}
	QAndroidJniObject IntBuffer::get(jintArray arg0)
	{
		return __thiz.callObjectMethod(
			"get",
			"([I)Ljava/nio/IntBuffer;",
			arg0
		);
	}
	QAndroidJniObject IntBuffer::get(jint arg0, jintArray arg1)
	{
		return __thiz.callObjectMethod(
			"get",
			"(I[I)Ljava/nio/IntBuffer;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject IntBuffer::get(jintArray arg0, jint arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"get",
			"([III)Ljava/nio/IntBuffer;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject IntBuffer::get(jint arg0, jintArray arg1, jint arg2, jint arg3)
	{
		return __thiz.callObjectMethod(
			"get",
			"(I[III)Ljava/nio/IntBuffer;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jboolean IntBuffer::hasArray()
	{
		return __thiz.callMethod<jboolean>(
			"hasArray",
			"()Z"
		);
	}
	jint IntBuffer::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean IntBuffer::isDirect()
	{
		return __thiz.callMethod<jboolean>(
			"isDirect",
			"()Z"
		);
	}
	QAndroidJniObject IntBuffer::limit(jint arg0)
	{
		return __thiz.callObjectMethod(
			"limit",
			"(I)Ljava/nio/IntBuffer;",
			arg0
		);
	}
	QAndroidJniObject IntBuffer::mark()
	{
		return __thiz.callObjectMethod(
			"mark",
			"()Ljava/nio/IntBuffer;"
		);
	}
	jint IntBuffer::mismatch(__jni_impl::java::nio::IntBuffer arg0)
	{
		return __thiz.callMethod<jint>(
			"mismatch",
			"(Ljava/nio/IntBuffer;)I",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject IntBuffer::order()
	{
		return __thiz.callObjectMethod(
			"order",
			"()Ljava/nio/ByteOrder;"
		);
	}
	QAndroidJniObject IntBuffer::position(jint arg0)
	{
		return __thiz.callObjectMethod(
			"position",
			"(I)Ljava/nio/IntBuffer;",
			arg0
		);
	}
	QAndroidJniObject IntBuffer::put(jintArray arg0)
	{
		return __thiz.callObjectMethod(
			"put",
			"([I)Ljava/nio/IntBuffer;",
			arg0
		);
	}
	QAndroidJniObject IntBuffer::put(jint arg0)
	{
		return __thiz.callObjectMethod(
			"put",
			"(I)Ljava/nio/IntBuffer;",
			arg0
		);
	}
	QAndroidJniObject IntBuffer::put(__jni_impl::java::nio::IntBuffer arg0)
	{
		return __thiz.callObjectMethod(
			"put",
			"(Ljava/nio/IntBuffer;)Ljava/nio/IntBuffer;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject IntBuffer::put(jint arg0, jintArray arg1)
	{
		return __thiz.callObjectMethod(
			"put",
			"(I[I)Ljava/nio/IntBuffer;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject IntBuffer::put(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"put",
			"(II)Ljava/nio/IntBuffer;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject IntBuffer::put(jintArray arg0, jint arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"put",
			"([III)Ljava/nio/IntBuffer;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject IntBuffer::put(jint arg0, jintArray arg1, jint arg2, jint arg3)
	{
		return __thiz.callObjectMethod(
			"put",
			"(I[III)Ljava/nio/IntBuffer;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	QAndroidJniObject IntBuffer::put(jint arg0, __jni_impl::java::nio::IntBuffer arg1, jint arg2, jint arg3)
	{
		return __thiz.callObjectMethod(
			"put",
			"(ILjava/nio/IntBuffer;II)Ljava/nio/IntBuffer;",
			arg0,
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	QAndroidJniObject IntBuffer::reset()
	{
		return __thiz.callObjectMethod(
			"reset",
			"()Ljava/nio/IntBuffer;"
		);
	}
	QAndroidJniObject IntBuffer::rewind()
	{
		return __thiz.callObjectMethod(
			"rewind",
			"()Ljava/nio/IntBuffer;"
		);
	}
	QAndroidJniObject IntBuffer::slice()
	{
		return __thiz.callObjectMethod(
			"slice",
			"()Ljava/nio/IntBuffer;"
		);
	}
	QAndroidJniObject IntBuffer::slice(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"slice",
			"(II)Ljava/nio/IntBuffer;",
			arg0,
			arg1
		);
	}
	jstring IntBuffer::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::java::nio

namespace java::nio
{
	class IntBuffer : public __jni_impl::java::nio::IntBuffer
	{
	public:
		IntBuffer(QAndroidJniObject obj) { __thiz = obj; }
		IntBuffer()
		{
			__constructor();
		}
	};
} // namespace java::nio

#endif // JAVA_NIO_INTBUFFER

