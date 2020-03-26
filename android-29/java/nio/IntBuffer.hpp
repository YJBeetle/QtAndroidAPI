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
		QAndroidJniObject get(jintArray arg0, jint arg1, jint arg2);
		jint get(jint arg0);
		jint get();
		QAndroidJniObject get(jintArray arg0);
		QAndroidJniObject get(jint arg0, jintArray arg1, jint arg2, jint arg3);
		QAndroidJniObject get(jint arg0, jintArray arg1);
		QAndroidJniObject put(jint arg0, jint arg1);
		QAndroidJniObject put(jintArray arg0);
		QAndroidJniObject put(__jni_impl::java::nio::IntBuffer arg0);
		QAndroidJniObject put(jintArray arg0, jint arg1, jint arg2);
		QAndroidJniObject put(jint arg0);
		QAndroidJniObject put(jint arg0, jintArray arg1);
		QAndroidJniObject put(jint arg0, jintArray arg1, jint arg2, jint arg3);
		jboolean equals(jobject arg0);
		jstring toString();
		jint hashCode();
		jint compareTo(jobject arg0);
		jint compareTo(__jni_impl::java::nio::IntBuffer arg0);
		QAndroidJniObject clear();
		QAndroidJniObject limit(jint arg0);
		jboolean isDirect();
		jboolean hasArray();
		jintArray array();
		QAndroidJniObject position(jint arg0);
		jint arrayOffset();
		static QAndroidJniObject wrap(jintArray arg0);
		static QAndroidJniObject wrap(jintArray arg0, jint arg1, jint arg2);
		QAndroidJniObject mark();
		QAndroidJniObject reset();
		QAndroidJniObject flip();
		QAndroidJniObject rewind();
		QAndroidJniObject slice(jint arg0, jint arg1);
		QAndroidJniObject slice();
		QAndroidJniObject duplicate();
		static QAndroidJniObject allocate(jint arg0);
		jint mismatch(__jni_impl::java::nio::IntBuffer arg0);
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
	void IntBuffer::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.nio.IntBuffer",
			"(V)V");
	}
	
	// Methods
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
	jint IntBuffer::get(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"get",
			"(I)I",
			arg0
		);
	}
	jint IntBuffer::get()
	{
		return __thiz.callMethod<jint>(
			"get",
			"()I"
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
	QAndroidJniObject IntBuffer::get(jint arg0, jintArray arg1)
	{
		return __thiz.callObjectMethod(
			"get",
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
	QAndroidJniObject IntBuffer::put(jintArray arg0)
	{
		return __thiz.callObjectMethod(
			"put",
			"([I)Ljava/nio/IntBuffer;",
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
	QAndroidJniObject IntBuffer::put(jint arg0)
	{
		return __thiz.callObjectMethod(
			"put",
			"(I)Ljava/nio/IntBuffer;",
			arg0
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
	jboolean IntBuffer::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring IntBuffer::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint IntBuffer::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
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
	QAndroidJniObject IntBuffer::clear()
	{
		return __thiz.callObjectMethod(
			"clear",
			"()Ljava/nio/IntBuffer;"
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
	jboolean IntBuffer::isDirect()
	{
		return __thiz.callMethod<jboolean>(
			"isDirect",
			"()Z"
		);
	}
	jboolean IntBuffer::hasArray()
	{
		return __thiz.callMethod<jboolean>(
			"hasArray",
			"()Z"
		);
	}
	jintArray IntBuffer::array()
	{
		return __thiz.callObjectMethod(
			"array",
			"()[I"
		).object<jintArray>();
	}
	QAndroidJniObject IntBuffer::position(jint arg0)
	{
		return __thiz.callObjectMethod(
			"position",
			"(I)Ljava/nio/IntBuffer;",
			arg0
		);
	}
	jint IntBuffer::arrayOffset()
	{
		return __thiz.callMethod<jint>(
			"arrayOffset",
			"()I"
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
	QAndroidJniObject IntBuffer::mark()
	{
		return __thiz.callObjectMethod(
			"mark",
			"()Ljava/nio/IntBuffer;"
		);
	}
	QAndroidJniObject IntBuffer::reset()
	{
		return __thiz.callObjectMethod(
			"reset",
			"()Ljava/nio/IntBuffer;"
		);
	}
	QAndroidJniObject IntBuffer::flip()
	{
		return __thiz.callObjectMethod(
			"flip",
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
	QAndroidJniObject IntBuffer::slice(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"slice",
			"(II)Ljava/nio/IntBuffer;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject IntBuffer::slice()
	{
		return __thiz.callObjectMethod(
			"slice",
			"()Ljava/nio/IntBuffer;"
		);
	}
	QAndroidJniObject IntBuffer::duplicate()
	{
		return __thiz.callObjectMethod(
			"duplicate",
			"()Ljava/nio/IntBuffer;"
		);
	}
	QAndroidJniObject IntBuffer::allocate(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.IntBuffer",
			"allocate",
			"(I)Ljava/nio/IntBuffer;",
			arg0
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
	QAndroidJniObject IntBuffer::asReadOnlyBuffer()
	{
		return __thiz.callObjectMethod(
			"asReadOnlyBuffer",
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
	QAndroidJniObject IntBuffer::order()
	{
		return __thiz.callObjectMethod(
			"order",
			"()Ljava/nio/ByteOrder;"
		);
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

